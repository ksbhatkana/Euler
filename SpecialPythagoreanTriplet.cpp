#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int r=0;
    for(int i=100;i<1000;i++)
    {
        for(int j=100;j<1000;j++)
        {
            for(int k=100;k<1000;k++)
            {
                if(i+j+k==1000)
                {
                    if((i*i+j*j)==(k*k))
                    {
                        //cout<<i<<endl<<j<<endl<<k<<endl;
                        cout<<i*j*k<<endl;
                        r=1;
                        break;
                    }
                }
            }
            if(r==1)
                break;
        }
        if(r==1)
            break;
    }
}