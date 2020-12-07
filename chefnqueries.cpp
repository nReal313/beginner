#include <iostream>
using namespace std;

int main() 
{
long int T;
cin>>T;
while(T--)
{
long int n;
long long k;
cin>>n>>k;
long long int queries[n];
int sum;
for(int i=0; i <n; i++)
{   
    cin>>queries[i];
}



long long int m = 0;
for(long long int k = 0; k <n; k++)
{
m = m + queries[k];
}
long long int j;
for(long long int f =0 ; m - (f*k) >= k; f++)
{ 
j = f;
}
if((m-(j*k))%k==0)
{
    cout<<j+1;
}
else
{
    cout<<j+2;
}
}
	return 0;
}
