#include <iostream>
using namespace std;

int birthdayCakeCandles(int ar[])
{
    int i,l=0,c=0,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(l<ar[i])
        l=ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(l==ar[i])
        c++;
    }
    return c;
}
int main() {
	int arr[100],n;
	n=birthdayCakeCandles(arr);
	cout<<n;
	return 0;
}
