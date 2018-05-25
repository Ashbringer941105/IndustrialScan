#pragma once


// CScanerAttribute 对话框

class CScanerAttributeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CScanerAttributeDlg)

public:
	CScanerAttributeDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CScanerAttributeDlg();

// 对话框数据
	enum { IDD = IDD_SCANERATTR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
