#pragma once
#include <stdio.h>
#include <winsock2.h> // Wincosk2.h должен быть раньше windows!
#include <windows.h>
#include "Header.h"
class Server: Base
{
public:
	int handle();
	//DWORD WINAPI ToClient(LPVOID client_socket);

	
	
};