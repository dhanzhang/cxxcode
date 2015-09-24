#include "stdafx.h"
#include "FileExt.h"


void  DeleteLog(LPCTSTR path){
	DeleteFile(path);
}

void  WriteLog(LPCTSTR path, LPCTSTR szData) {
	HANDLE   	hFile = CreateFile(path,
		GENERIC_WRITE,
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
void  JPCreatFullDirectory(LPCTSTR path_buffer){


	TCHAR myPath[_MAX_PATH];
	TCHAR drive[_MAX_DRIVE];
	TCHAR dir[_MAX_DIR];
	TCHAR fname[_MAX_FNAME];
	TCHAR ext[_MAX_EXT];
	_tsplitpath_s(path_buffer, drive, _MAX_DRIVE, dir, _MAX_DIR, fname, _MAX_FNAME, ext, _MAX_EXT);
	_tmakepath_s(myPath, _MAX_PATH, drive, dir, NULL, NULL);
 

	TCHAR  tmpPath[_MAX_PATH];
	ZeroMemory(tmpPath, _MAX_PATH);
	int i = 0;
	int j = 0;
	TCHAR  sep = '/';
	while (myPath[i] != '\0'){
		if (((myPath[i] == '/') && (myPath[i - 1] == '/'))
			|| ((myPath[i] == '\\') && (myPath[i - 1] == '\\'))
			){
			i++;
			_tprintf(tmpPath);
			_tprintf(_T("\r\n"));
			CreateDirectory(tmpPath, NULL);
			continue;
		}
		tmpPath[j++] = myPath[i++];
	}

	CreateDirectory(path_buffer, NULL);


}

