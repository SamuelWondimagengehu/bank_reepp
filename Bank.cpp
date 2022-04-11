// Bank.cpp is a code that allows users
// to sign up for a Bank account and login using 
// their user name to manage there accounts 

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <cstdlib>
using namespace std;
struct address
{
	string region;
	string city;
};
struct users
{
	string userName;
	string phoneNum;
	string pWrd;
	address usrAdd;
}user1;
// Function prototypes
users signUp(users);
void login();
void getFile();
void saveFile(users);
void DisplayWelcomeMenu();
void getPreference();
int main()
{
	signUp(user1);
return 0;
}
/*void getFile()
{	const char* line;
	fstream file;
	file.open( userName.dat , ios::in );
	if(file.fail( ))
	{
		cout << "Failed to retrieve input file! " << endl;
		exit(1);
	}
	if (file.open())
	{
		getline(file,line);
	}
	file.close( );
}*/
void saveFile(users user1)
{	
	ofstream name,phone,address,pwrd;
	name.open( "name.dat" , ios::app );
	for ( int i = 0; i <= user1.userName.length(); i++ )
	{
		name << user1.userName[i];
	}
		name << "\n";
	name.close();
	phone.open( "phone.dat" , ios::app );
	for ( int j = 0; j <= user1.phoneNum.length(); j++ )
	{
		phone << user1.phoneNum[j] ;
	}	
		phone << "\n" ;
	phone.close();
	address.open( "address.dat" , ios::app );
	for ( int k = 0 ; k <= user1.usrAdd.region.length(); k++ )
	{
		address << user1.usrAdd.region[k] ;
	}	
	address << "\n" ;
	for ( int l = 0; l <= user1.usrAdd.city.length(); l++ )
	{
		address << user1.usrAdd.city[l] ; 
	}
	address << "\n" ;
	address.close();
	pwrd.open( "pwrd.dat" , ios::app );
	for ( int h = 0; h <= user1.pWrd.length(); h++ )
	{
		pwrd << user1.pWrd[h] ;
	}
		pwrd << "\n" ;
	pwrd.close();
}
users signUp(users user)
{
	cout << setw(38) << "ENTER FULL NAME" << endl;
	cout << setw(21) <<  "-> ";
	getline(cin,user.userName);
	cout << setw(41) << "ENTER PHONE NUMBER" << endl;
	cout << setw(21) << "-> ";
	getline(cin,user.phoneNum);
	cout << setw(36) << "ENTER ADDRESS"  << endl;
	cout << setw(27) << "Region-> ";
	getline(cin,user.usrAdd.region);
	cout << setw(25) << "City-> " ;
	getline(cin,user.usrAdd.city);
	cout << setw(38) << "ENTER PASSWORD " << endl;
	cout << setw(21) << "-> ";
	getline(cin,user.pWrd);
	
	cout << setw(53) << "===================================" << endl;	
	cout << setw(49) << "YOU HAVE SUCCESFULLY SIGNED UP!" << endl;
	cout << setw(53) << "THANK YOU FOR MAKING US YOUR CHOICE" << endl;

saveFile(user);
return user;
}
void DisplayWelcomeMenu()
{	
	cout << "Welcome To Our Bank! " << endl;
	cout << "To signup for our services press '1' " << endl;
	cout << "To login to a previously owned account press '2' " << endl;
	cout << "To navigate backwards at any time press the '#' key " << endl;
}
/*void getPreference()	
{	
	char choice;
	DisplayWelcomeMenu();
	cin >> choice;
	switch(choice)
	{
		case '1' :
	//		signUp();
			break;
		case '2' :
			login();
		default :
			cout << "Incorrect choice, please make sure to read and input the correct choices " << endl;
	}
	
}*/
