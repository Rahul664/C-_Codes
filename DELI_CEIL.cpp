#include<iostream>
#include<cmath>
using namespace std;
main()
{
    int i,j,n,q,x,l,r;
    cin>>n>>q;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<q;i++){
        cin>>x>>l>>r;
       int sum=0;
        for(j=l-1;j<r;j++)
        {
            double value = double(x) / a[j];
			int val = ceil(value);
			sum += val;
        }
    cout<<sum<<endl;
    }
}

