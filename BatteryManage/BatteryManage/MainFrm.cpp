
// MainFrm.cpp : CMainFrame 类的实现
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
	ID_SEPARATOR,           // 状态行指示器
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame 构造/析构

CMainFrame::CMainFrame()
{
	// TODO:  在此添加成员初始化代码
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
		TRACE0("未能创建工具栏\n");
		return -1;      // 未能创建
	}

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("未能创建状态栏\n");
		return -1;      // 未能创建
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));

	// TODO:  如果不需要可停靠工具栏，则删除这三行
	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);


	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO:  在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return TRUE;
}

// CMainFrame 诊断

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


// CMainFrame 消息处理程序



BOOL CMainFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext)
{
	// TODO:  在此添加专用代码和/或调用基类
	CRect rc;

	// 获取框架窗口客户区的CRect对象   
	GetClientRect(&rc);

	// 创建静态分割窗口，两行一列   
	if (!splitter.CreateStatic(this, 1, 2))
		return FALSE;

	// 创建做窗格中的视图   
	if (!splitter.CreateView(0, 0, RUNTIME_CLASS(CLeftPane), CSize(rc.Width() / 8, rc.Height()), pContext))
		return FALSE;

	// 创建下面窗格中的视图   
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
