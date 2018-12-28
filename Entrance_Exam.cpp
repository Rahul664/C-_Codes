#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main()
{
	long int t,n,i,j,k,e,m;

	cin>>t;
	while(t--)
	{
		cin>>n>>k>>e>>m;
		long int a[n], mark;
		for(i=0; i<n-1; i++)
		{
			a[i]=0;
			for(j=0; j<e; j++)
			{
				cin>>mark;
				a[i]+=mark;
			}
			//cout<<a[i];
		}
		long int ser=0;
		for(i=0; i<e-1; i++)
		{
			cin>>mark;
			ser+=mark;
		}
		sort(a,a+n-1);
		mark=a[n-k-1]-ser+1;
		if(mark<0)
		 mark=0;

		if(mark<=m)
		cout<<mark<<endl;
		else
		cout<<"Impossible"<<endl;
	}
}

