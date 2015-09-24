#pragma once
class Tool
{
public:
	Tool();
	virtual ~Tool();
public:
	const LPTSTR  GetCurrentDir() const;

	const  LPTSTR  ToAbsolutePath(LPCTSTR  reletivePath);

private:
	LPTSTR      mDir;
	DWORD    mDirSize;
	LPTSTR    mTargetDir;
private:
	Tool(const Tool&);
	Tool& operator=(const Tool&);
};

