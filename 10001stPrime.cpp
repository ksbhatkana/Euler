#include<iostream>
#include<math.h>
using namespace std;
int isPrime(long i)
{
    for(long j=2;j<i;j++)
    {
        if(i%j==0)
            return 0;
    }
    return 1;
}
int main()
{
    int count=2;
    for(long i=5;;i++)
    {
        if(isPrime(i))
        {
            count++;
        }
        if(count==10001)
        {
            cout<<i<<endl;
            break;
        }
    }
}
