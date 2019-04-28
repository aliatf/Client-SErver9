#pragma once

#include <stdio.h>
#include <winsock2.h> // Wincosk2.h должен быть раньше windows!
#include <windows.h>
class Base
{
public:
	virtual int handle()=0;
	//DWORD WINAPI ToClient(LPVOID client_socket);



};