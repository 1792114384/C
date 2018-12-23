#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	for (int i = 0; i < 20; i++)
	{
		Sleep(100);
		printf("#");
	}
	system("cls");
	system("pause");
	return 0;
}