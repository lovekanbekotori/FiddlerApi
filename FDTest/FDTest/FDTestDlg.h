
// FDTestDlg.h: 头文件
//

#pragma once


#include <iostream>
using namespace std;
#pragma comment(lib,"C:\\Users\\admin\\source\\repos\\FiddlerApi\\Release\\FiddlerApi.lib")
#include "FiddlerApi.h"
#include "resource.h"


// CFDTestDlg 对话框
class CFDTestDlg : public CDialog
{
// 构造
public:
	CFDTestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_FDTEST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CString m_szSrc;
	CString m_szDest;
	afx_msg void OnBnClickedButtonSatar();
	afx_msg void OnBnClickedButtonClose();
	virtual void PostNcDestroy();
	bool m_bStartFd;
	static HWND m_HWND;
	  //bool CallBack(FiddlerData & data);
	afx_msg void OnClose();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnBnClickedButtonCloseWindow();
};
