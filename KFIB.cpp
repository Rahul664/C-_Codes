#include <iostream>
using namespace std;

main() {
    int n,k,i,j;
    cin>>n>>k;
    long long int a[1000000],s;
    for(i=0;i<n;i++)
    {
     if((i+1)<=k)
     {
         a[i]=1;

     }
     else
     {   s=0;
         for(j=i-k;j<i;j++)
         {
             s=s+a[j];
         }
         a[i]=s%1000000007;

     }

    }
    cout<<a[n-1];

}
