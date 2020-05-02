#include<iostream>
#include<math.h>
using namespace std;
int isPrime(long long int i)
{
    int count=0;
    for(long long int k=1;k<=sqrt(i);k++)
    {
        if(i%k==0)
        {
            count++;
        }
    
    }
    if(count>=2)
            return 0;
    return 1;
}
int main()
{
    //cout<<isPrime(5);
    long long int maxx=0; 
    long long m=600851475143;
    long long int k=sqrt(m);
    //cout<<k;
    for(long long i=k;i>=0;i--)
    {
        if(isPrime(i))
        {
            if(m%i==0)
            {
                maxx=i;
                break;
            }
        }
    }
    cout<<maxx<<endl;
    return 0;
}