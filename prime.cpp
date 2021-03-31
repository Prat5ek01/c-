#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a;
	cout<<"enter any number"<<endl;
	cin>>a;
	if(a%2 ==0)
	{
		cout<<"number isnt prime"<<endl;
	}
	else
	{cout<< " it is prime number ";
	}

	if(a==1)
	{
	cout<<"neither prime nor composite";
	}
	getch();
}

