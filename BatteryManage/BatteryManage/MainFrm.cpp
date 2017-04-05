
// MainFrm.cpp : CMainFrame ���ʵ��
//

#include "stdafx.h"
#include "BatteryManage.h"

#include "MainFrm.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_COMMAND(ID_INIT_DIALOG, &CMainFrame::OnInitDialog)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // ״̬��ָʾ��
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame ����/����

CMainFrame::CMainFrame()
{
	// TODO:  �ڴ���ӳ�Ա��ʼ������
	initDlg = NULL;
}

CMainFrame::~CMainFrame()
{
	if (initDlg != NULL)
		delete initDlg;
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP | CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("δ�ܴ���������\n");
		return -1;      // δ�ܴ���
	}

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("δ�ܴ���״̬��\n");
		return -1;      // δ�ܴ���
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// TODO:  �������Ҫ��ͣ������������ɾ��������
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);


	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO:  �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return TRUE;
}

// CMainFrame ���

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame ��Ϣ�������



BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	// TODO:  �ڴ����ר�ô����/����û���
	CRect rc;

	// ��ȡ��ܴ��ڿͻ�����CRect����   
	GetClientRect(&rc);

	// ������̬�ָ�ڣ�����һ��   
	if (!splitter.CreateStatic(this, 1, 2))
		return FALSE;

	// �����������е���ͼ   
	if (!splitter.CreateView(0, 0, RUNTIME_CLASS(CLeftPane), CSize(rc.Width() / 8, rc.Height()), pContext))
		return FALSE;

	// �������洰���е���ͼ   
	if (!splitter.CreateView(0, 1, RUNTIME_CLASS(CMainPane), CSize(rc.Width() * 7 / 8, rc.Height()), pContext))
		return FALSE;

	return TRUE;

	//return CFrameWnd::OnCreateClient(lpcs, pContext);
}


void CMainFrame::OnInitDialog()
{
//	if (CView::OnCreate(lpCreateStruct) == -1)
//		return -1;
	CView *view = NULL;
	CDocument *doc = ((CFrameWnd*)(AfxGetApp()->m_pMainWnd))->GetActiveDocument();

	POSITION pos = doc->GetFirstViewPosition();

	while (pos != NULL) 
	{
		view = doc->GetNextView(pos);
		if (view->IsKindOf(RUNTIME_CLASS(CMainPane)))
			break;
	}
	
	INT_PTR initResult = IDOK;
	//if (view != NULL)
	//{
	//	if (initDialog == NULL)
	//	{
	//		initDialog = new CInitDialog();
	//		//initDialog->Create(IDD_INITDIALOG, view);
	//	}
	//	initDialog->ShowWindow(SW_SHOWNORMAL);
	//	if (IDCANCEL == initResult)
	//		return;

	//}
	if (initDlg == NULL)
	{
		initDlg = new CInitDlg();
	}
	initDlg->DoModal();
	
	if (IDCANCEL == initResult)
		return;
	return ;
}
