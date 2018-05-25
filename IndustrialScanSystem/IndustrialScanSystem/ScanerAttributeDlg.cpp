// ScanerAttribute.cpp : 实现文件
//

#include "stdafx.h"
#include "IndustrialScanSystem.h"
#include "ScanerAttributeDlg.h"
#include "afxdialogex.h"


// CScanerAttribute 对话框

IMPLEMENT_DYNAMIC(CScanerAttributeDlg, CDialogEx)

CScanerAttributeDlg::CScanerAttributeDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CScanerAttributeDlg::IDD, pParent)
{

}

CScanerAttributeDlg::~CScanerAttributeDlg()
{
}

void CScanerAttributeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CScanerAttributeDlg, CDialogEx)
END_MESSAGE_MAP()


// CScanerAttribute 消息处理程序
