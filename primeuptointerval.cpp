#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,result,j;
    cout<<"enter number upto which prime number is displayed"<<endl;
    cin>>n;
    cout<<"prime numbers are"<<endl;
    for(i=2; i<=n; i++)
    {
        result=1;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
        result =0;
        break;
        }
    }
        if(result==1)
        cout<<i<<" ";
    }
    getch();
    return 0;
}
