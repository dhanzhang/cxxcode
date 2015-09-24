#pragma once
class Tool
{
public:
	Tool();
	virtual ~Tool();
public:
	const LPWSTR  GetCurrentDir();
private :
	LPWSTR   mDir;
	DWORD    mDirSize;
private:
	Tool(const Tool&);
	Tool& operator=(const Tool&);
};

