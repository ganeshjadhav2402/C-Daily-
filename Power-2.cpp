#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;

    if(n<1)
    return 0;

    while(n!=1)
    {
        if(n%2==1)
        return 0;

        n = n/2;
    }

    return 1;
}