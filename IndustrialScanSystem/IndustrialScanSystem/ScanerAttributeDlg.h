#pragma once


// CScanerAttribute �Ի���

class CScanerAttributeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CScanerAttributeDlg)

public:
	CScanerAttributeDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CScanerAttributeDlg();

// �Ի�������
	enum { IDD = IDD_SCANERATTR };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
