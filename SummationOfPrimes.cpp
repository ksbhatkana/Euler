#include<iostream>
#include<math.h>
using namespace std;
int isPrime(long m)
{
    int count=0;
    for(long int i=1;i<=sqrt(m);i++)
    {
        if(m%i==0)
            count++;
    }
    if(count>=2)
        return 0;
    return 1;
}
int main()
{
    long a=2000000;
    long long sum=0;
    for(long i=2;i<a;i++)
    {
        if(isPrime(i))
            sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}