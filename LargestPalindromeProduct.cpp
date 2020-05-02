#include<iostream>
using namespace std;
int isPalindrome(long long k)
{
    long long temp=0,m=0,kk=k;
    while(k!=0)
    {
        temp=k%10;
        m=m*10+temp;
        k/=10;
    }
    if(kk==m)
        return 1;
    else
    {
        return 0;
    }
}
int main()
{
    long long maxxx,maxx=0,sum=0; 
    for(int i=100;i<1000;i++)
    {
        for(int j=100;j<1000;j++)
        {
            sum=i*j;
            if(isPalindrome(sum))
            {
                maxxx=sum;
                if(maxxx>maxx)
                    maxx=maxxx;
            }          
        }
    }
    cout<<maxx;
}
