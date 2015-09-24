// cxxprj.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "Tool.h"
#include "FileExt.h"
int _tmain(int argc, _TCHAR* argv[])
{

//	JPCreatFullDirectory(_T("../CGXGG2"));
	Tool t;

	LPTSTR  ct = _T("../g2x./c2"); 

	
	_tprintf(_T("%s\r\n"), t.ToAbsolutePath(ct));

	/*LPWSTR  path_buffer = _T("D://ccc//cccxg//ccggx//cx.txg");
	TCHAR myPath[_MAX_PATH];
	TCHAR drive[_MAX_DRIVE];
	TCHAR dir[_MAX_DIR];
	TCHAR fname[_MAX_FNAME];
	TCHAR ext[_MAX_EXT];
	_tsplitpath_s(path_buffer, drive, _MAX_DRIVE, dir, _MAX_DIR, fname, _MAX_FNAME, ext, _MAX_EXT);
	_tmakepath_s(myPath, _MAX_PATH, drive, dir, NULL, NULL);
	WIN32_FIND_DATA fd;

	TCHAR  dirPath[_MAX_PATH];
	ZeroMemory(dirPath, _MAX_PATH);
	int i = 0;
	int j = 0;
	while (myPath[i] != '\0'){
		if ((myPath[i] == '/'  && myPath[i - 1] == '/')
			|| (myPath[i] == '\\' && myPath[i - 1] == '\\')
			){
			i++;
			CreateDirectory(dirPath, NULL);

			continue;
		}
		dirPath[j++] = myPath[i++];
	}

	_tprintf(_T("Dir is :%s\r\n"), dirPath);*/
	// LPWSTR  path_buffer = _T("D://cc2c//ccc2xg//ccggx2");
	//TCHAR myPath[_MAX_PATH];
	//TCHAR drive[_MAX_DRIVE];
	//TCHAR dir[_MAX_DIR];
	//TCHAR fname[_MAX_FNAME];
	//TCHAR ext[_MAX_EXT];
	//_tsplitpath_s(path_buffer, drive, _MAX_DRIVE, dir, _MAX_DIR, fname, _MAX_FNAME, ext, _MAX_EXT);
	//_tmakepath_s(myPath, _MAX_PATH, drive, dir, NULL, NULL);
 //

	//TCHAR  tmpPath[_MAX_PATH];
	//ZeroMemory(tmpPath, _MAX_PATH);
	//int i = 0;
	//int j = 0;
	//TCHAR  sep = '/';
	//while (myPath[i] != '\0'){
	//	if (    ( (myPath[i] == '/')  && (myPath[i - 1] == '/') )
	//		|| ((myPath[i] == '\\') && (myPath[i - 1] == '\\') )
	//		){
	//		i++; 
	//		_tprintf(tmpPath);
	//		_tprintf(_T("\r\n"));
	//		CreateDirectory(tmpPath, NULL); 
	//		continue;
	//	} 
	//	tmpPath[j++] = myPath[i++]; 
	//}

	//CreateDirectory(path_buffer, NULL);


	return 0;
}

