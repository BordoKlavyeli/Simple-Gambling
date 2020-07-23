#include <iostream>
#include <stdio.h>    
#include <stdlib.h>   
#include <time.h>    
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL,"turkish");
	string green,red,black; int balance = 1000;
	int choose,bet,random; 
	again:
	cout<<"\t\t\t\t\t\t\tBalance: "<<balance;
	srand (time(NULL));
   	random= rand() % 4;
	cout<<"\n\n\n----Oran bilgisi----"<<endl;
	cout<<"Yeþil = 14X\nKýrmýzý = 2X\nSiyah = 2X\n--------------------------------------------------------\n"<<endl;
	cout<<"Bahis: "; cin>>bet;
	
	if(bet>balance)
	{
		cout<<"Bakiyedeki paradan fazla bahis giremezsiniz !!!"<<endl;
		goto again;	
	}
	
	cout<<"Renk seç: \n1-)Red\n2-)Black\n3-)Green\n\n"; cin>>choose;
	switch(choose)
	{
	case 1: {
		if(choose==random)
		{
			cout<<"Tebrikler !\n";
			balance += bet*2;
		}
		else
		{
			cout<<"Kaybettin :(\n";
			balance -= bet;
		}
			break;
		}
			
	case 2: {
		if(choose==random)
		{
			cout<<"Tebrikler !\n";
			balance += bet*2;
		}
		else
		{
			cout<<"Kaybettin :(\n";
			balance -= bet;
		}
		break;
		}
		case 3:{
		if(choose==random)
		{
			cout<<"Tebrikler !\n";
			balance += bet*14;
		}
		else
			{
				cout<<"Kaybettin :(\n";
				balance -= bet;
			}
			break;
			}
			default: cout<<"Belirsiz Seçim !"<<endl;
	}
	if(balance==0)
	{
		cout<<"Bakiye kalmadý !";
		return 0x10;
	}
	system("pause");
	system("cls");
	goto again;
}

