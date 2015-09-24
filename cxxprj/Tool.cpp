#include "stdafx.h"
#include "Tool.h"


Tool::Tool() :mDir(NULL), mDirSize(1024)
{
	mDir = new TCHAR[mDirSize + 1];
	ZeroMemory(mDir, mDirSize + 1);
	::GetCurrentDirectory(mDirSize, mDir);
	mTargetDir = new TCHAR[_MAX_PATH];
}


const LPTSTR  Tool::ToAbsolutePath(LPCTSTR  reletivePath){
	 
	TCHAR     cg[_MAX_PATH] = { 0 };

	int i = 0;

	while (reletivePath[i])
	{

		if (reletivePath[i] == '/'){
			_tprintf(_T("Pos :%d\r\n"), i);
			cg[i] = '\\';
		}
		else {
			cg[i] = reletivePath[i];
		}

		i++;
	}

 
	ZeroMemory(mTargetDir, _MAX_PATH);
	PathCombine(mTargetDir, GetCurrentDir(), cg );
	return   mTargetDir;
}

Tool::~Tool()
{

	delete[]  mDir;

	delete[] mTargetDir;
}
const LPTSTR  Tool::GetCurrentDir() const {


	return  mDir;
}