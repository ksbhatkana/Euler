#include<iostream>
#include<math.h>
using namespace std;
long square(int m)
{
    return m*m;
}
int main()
{
    long sum1=0,sum2=0;
    for(int i=0;i<101;i++)
    {
        sum1+=square(i);
        sum2+=i;
    }
    int d=abs(sum1-square(sum2));
    cout<<d<<endl;
    return 0;
}