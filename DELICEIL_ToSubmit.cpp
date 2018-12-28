#include <iostream>
#include<cmath>
using namespace std;

main()
{
    int n,q,j;
    cin>>n>>q;
     int a[n],i;
         for(i=0;i<n;i++){
            cin>>a[i];
         }
         for(i=0;i<q;i++){
                int x,l,r,sum=0;
         cin>>x>>l>>r;
         for(j=l-1;j<r;j++){
            sum+=(int)ceil((double)x/a[j]);
         }
         cout<<sum<<endl;

    }
}




