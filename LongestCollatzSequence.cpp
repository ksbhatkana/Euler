#include<iostream>  
using namespace std;
int main()
{
    int count=0,maxx=0;
    for(long i=1000000;i>900000;i--)
    {
        int m=i;
        while(m!=1)
        {
            if(m%2==0)
                m/=2;
            else
                m=3*m+1;
            count++;
        }
        if(count>maxx)
            count=maxx;
    }
    cout<<count<<endl;
    return 0;
}