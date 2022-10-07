#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <iostream>
int main(int argc, char* argv[])
{
	LPCSTR str1 = "C:\\";
	LPCSTR str2 = "test.txt";


	DeleteFileA(std::string(str1).append(str2).c_str());
	return 0;
}
