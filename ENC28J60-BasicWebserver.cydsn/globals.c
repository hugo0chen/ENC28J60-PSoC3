/*
 Network Stack for PSoC3-ENC28J60 hardware
 -----------------------------------------
 Title  : Global Variables declaration file
 Author : Kartik Mankad
 Date : 30-06-12
 This code is licensed as CC-BY-SA 3.0
 Description : This file contains declarations of
               the global variables used.

 You may edit Router IP,DNS Server IP and Webserver,Webclient Port here.
*/

#include "globals.h"

/**Edit values as per your configuration**/

/*IP Address of the Router*/
unsigned char routerIP[4]={192,168,1,1};

/*IP Address of a Server*/
/*For DNS and Webclient*/
 unsigned char serverIP[4];
 
/*IP Address of the DNS Server*/
unsigned char dnsIP[4]={192,168,1,1};
 
/*Webserver Port*/
unsigned int WWWPort=80;

/*WebClient Port*/
unsigned int WClientPort=1000;

/*Source UDP Packet for sending UDP Packets*/
unsigned int UDPPort=1200;
/***********************************************/
/***Do not assign values to variables below.***/

/*IP Address of the ENC28J60*/
unsigned char deviceIP[4];

/*MAC Address of the ENC28J60*/
unsigned char deviceMAC[6];

/*MAC Address of the Router*/
unsigned char routerMAC[6];

/*Bit to signify SYN-SYNACK-ACK handshake is over,
and we(the client) can send our request*/
bit WebClientQueryRTS=0;

/*flag to signify that Reply to our(client) request
is recd,so we can now process it
0 - Initial State,no Replies.
1 - Reply Recd.
2 - Reply Processed,Connection closed.
*/
unsigned char WebClientDataRecd=0;

/*Bit flag to signify that Get Query recd.*/
bit WebServerGETRecd=0;

/*Global Query Holder*/
unsigned char* WebClientQuery[100];


/* [] END OF FILE */