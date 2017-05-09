#include <winsock2.h>
#include<WS2tcpip.h>
#include<iostream>
#include<stdio.h>
#include<string>
//ƒWƒƒƒ“ƒPƒ“ƒQ[ƒ€
int
main()
{
	enum Zyanken{None,G,C,P};
	WSADATA wsadata;
	WORD mVersion = MAKEWORD(2, 0);
	SOCKET clientsock, sock;
	struct sockaddr_in addr, client;
	char buf[1000];
	WSAStartup(mVersion,&wsadata);
	sock = socket(AF_INET,SOCK_DGRAM,0);
	addr.sin_family = AF_INET;
	addr.sin_port = htons(12345);
	addr.sin_addr.S_un.S_addr = INADDR_ANY;
	
	client = addr;
	bind(sock,(struct sockaddr *)&addr,sizeof(addr));
	
	WSACleanup();
}
