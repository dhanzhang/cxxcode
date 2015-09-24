#include "stdafx.h"
#include "Tool.h"


Tool::Tool() :mDir(NULL), mDirSize(1024)
{
	mDir = new WCHAR[mDirSize + 1];
	ZeroMemory(mDir, mDirSize + 1);
	::GetCurrentDirectory(mDirSize, mDir);
}


Tool::~Tool()
{

	delete[]  mDir;


}
const LPWSTR  Tool::GetCurrentDir(){


	return  mDir;
}