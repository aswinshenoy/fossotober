#include <iostream>
using namespace std;

void timeConversion(char str[])
{
    int h1,h2,h;
    h1=(int)str[0]-'0';
    h2=(int)str[1]-'0';
    h=10*h1+h2;
    if(str[8]=='A')
    {
        if(h==12)
        {
            cout<<"00:";
        }
        else
        {
            if(h>9)
            {
                cout<<h<<":";
            }
            else
            {
                cout<<"0"<<h<<":";
            }
        }
    }
    else if(str[8]=='P')
    {
        if(h==12)
        {
            cout<<"12:";
        }
        else
        {
            cout<<h+12<<":";
        }
    }
    for(int i=3;i<8;i++)
    {
        cout<<str[i];
    }
}
int main() {
	char time12[10],time24[8];
	cin>>time12;
	timeConversion(time12);
	return 0;
}
