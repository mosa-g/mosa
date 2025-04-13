#include <stdio.h>
#include <Windows.h>

int main() {

	/*LPCWSTR filePath = L"C:\\Users\\mosao\\Desktop\\hackmosa.txt";
	HANDLE hFile = NULL;

	 hFile=  CreateFileW(filePath
		,GENERIC_ALL
		 ,0,NULL,
		CREATE_ALWAYS,
		FILE_ATTRIBUTE_NORMAL,
		NULL);
	 if (hFile == INVALID_HANDLE_VALUE) {
		 printf("[-] Create FileW with Error: %d" , GetLastError());
		 return -1;
	 }
	 printf("File Created");*/
	PVOID pAddress = LocalAlloc(LPTR , 100);
	CHAR* cString = "Am a malwaer developer";

	memcpy(pAddress, cString, strlen(cString));
	printf("0x%p", pAddress);

	LocalFree(pAddress);
	return 0;
}