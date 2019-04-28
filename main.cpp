#include <stdio.h>
#include <winsock2.h> // Wincosk2.h должен быть раньше windows!
#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "Server.h"


int main()
{
	Server server;
	server.handle();
	
}