/*
 * server.C
 *
 *  Created on: 11.09.2019
 *      Author: aml
 */
#include <cstdio> // standard input and output library
#include <cstdlib> // this includes functions regarding memory allocation
#include <cstring> // contains string functions
#include <cerrno> //It defines macros for reporting and retrieving error conditions through error codes
#include <ctime> //contains various functions for manipulating date and time

#include <unistd.h> //contains various constants
#include <sys/types.h> //contains a number of basic derived types that should be used whenever appropriate
#include <arpa/inet.h> // defines in_addr structure
#include <sys/socket.h> // for socket creation
#include <netinet/in.h> //contains constants and structures needed for internet domain addresses

#include "TASK3.H"
#include "SIMPLESOCKET.H"

using namespace TASK3;

class MyServer : public TCPserver {
public:
	MyServer(int portNmb, int maxDataRecv) : TCPserver(portNmb, maxDataRecv){;};
protected:
	string myResponce (string input);

	World w;

};


int main(){


/*	srand(time(nullptr));
	MyServer srv(2025,25);
	svr.run();


	w.printBoard();

	c = w.shoot(a,b);

	cout << "result: " << c << endl;
	responceStr = string("OK");
	return responceStr;
*/
}
/*
string MyServer::myResponse (string input){
	int x,y,res;

	if( input.compare(0,5,"start")==0){
		return string ("ready");

	}else if( input.compare(0,5,"shoot") == 0){

		//shoot(<int>,<int>) z.B shoot(3,5);
		res = sscanf(input.c_str(),"shoot(%i,%i)", &x,&y);

		if(res != 2) return string("ERROR");

		//x und y verarbeiten -> shoot-Methode aufrufen

		return string("Water");
	}
	else{
		return string ("Error");
*/
