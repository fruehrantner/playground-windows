#include <stdio.h>
#include <windows.h>

int main(void)
{
	char name[32];
	DWORD len;

	GetComputerName(name, &len);
	printf("computer name: %s\n", name);

	return 0;
}
