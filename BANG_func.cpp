

#include"BangAPI.h"

void QQ_state(HWND QQ_Hwnd) {
	do
	{
		QQ_Hwnd = FindWindow(L"TXGuiFoundation", L"QQ");
		if (QQ_Hwnd == NULL)
			MessageBox(NULL, L"���QQ�����ùرոó���", L"��ʾ", MB_ICONASTERISK);
	} while (QQ_Hwnd == NULL);
}
void Bang(HWND h, char* name)
{
	ShellExecuteA(NULL, "open", name, NULL, NULL, SW_NORMAL);
	Sleep(500);
	h = GetForegroundWindow();
	Sleep(500);
	while (MessageBox(h, L"�Ƿ�ʼ����", L"��ܰ��ʾ", MB_YESNO) == IDYES)
	{
		int a = 10;
		while (a--)
		{
			SendMessage(h, WM_PASTE, 0, 0);
			SendMessage(h, WM_KEYDOWN, VK_RETURN, 0);
		}
	}
}