#include "stdafx.h"
#include "FileExt.h"


void  DeleteLog(LPCTSTR path){
	DeleteFile(path);
}

void  WriteLog(LPCTSTR path, LPCTSTR szData) {
	HANDLE   	hFile = CreateFile(path, GENERIC_WRITE,
		FILE_SHARE_READ, NULL, OPEN_EXISTING | CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
	if (INVALID_HANDLE_VALUE == hFile){
		hFile = CreateFile(path, GENERIC_WRITE, FILE_SHARE_READ, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL);
		if (hFile == INVALID_HANDLE_VALUE){
			return;
		}
	} 
	SetFilePointer(hFile, 0, NULL, FILE_END);
	DWORD dwWritten; 
	WriteFile(hFile, (LPCVOID)szData, _tcslen(szData)*sizeof(TCHAR), &dwWritten, NULL); 
	CloseHandle(hFile);
}


