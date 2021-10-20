#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleTitleA("asm kernel");

	const char* kernemessage = "asm kernel";
	const char* k_msg = "this is a simple asm kernel";
	const char* k_msg_cap = "ace4ence";

	_asm
	{
		mov eax, kernemessage // system calling
		push eax
		call printf
		pop eax
		mov eax, 0
		mov ebx, k_msg_cap
		mov edx, k_msg
		mov edx, 0 // return 값 edx
		push eax
		push ebx
		push edx
		call MessageBoxA
		pop edx
		pop ecx
		pop ebx
		pop eax // eax 0
	}
}