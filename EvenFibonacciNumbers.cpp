#include<iostream>
using namespace std;
int main()
{
    long int i=1,j=1,k=0;
    long long int sum=0;
    while(k<4000000)
    {
        k=i+j;
        i=j;
        j=k;
        if(k%2==0)
        {
            sum+=k;
        }
    }
    cout<<sum;
}