#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int n,i;
	char word[100][100];
	cin>>n;
	for(i=0;i<n;i++)
	    cin>>word[i];
	for(i=0;i<n;i++)
	{
	    if(strlen(word[i])>10)
	    {
	        cout<<word[i][0]<<strlen(word[i])-2<<word[i][strlen(word[i])-1];
	    }
	    else
	    {
	        cout<<word[i];
	    }
	    cout<<endl;
	}
	
	return 0;
}
