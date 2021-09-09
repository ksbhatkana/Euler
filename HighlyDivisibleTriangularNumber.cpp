/*#include<iostream>  
using namespace std;
int solve(long long n)
{
    long long count=2;
    for(long long i=2;i<n;i++)
    {
        if(n%i==0)
            count++;
        if(count>=500)
        {
            cout<<n<<endl;
            return 1;
        }
    }
    return 0;
}
int main()
{
    long long sum=0;
    for(int i=1;;i++)
    {
        sum+=i;
        if(sum>2500000)
        {
            if(solve(sum))
                break;
        }
    }
    return 0;
}*/
#include <iostream>

int numfac(int n)
{
	int nf = 1;
	for (int pf = 2; pf <= n; pf++) {
		int comb = 1;
		for (; n % pf == 0; n /= pf, comb++);
		nf *= comb;
	}
	return nf;
}

int main()
{
	for (int n = 1, tri = 1;; n++, tri += n)
		if (numfac(tri) > 500) {
			std::cout << tri << "\n";
			break;
		}
}

