#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void sort(int a[],int n)
{int i ,j,temp=0,sum=0;
sort(a,a+n);
for(i=0;i<n;i++){
    sum+=a[i];
}
for(i=0;i<n;i++){
            cout<<a[i]<<" ";
}
    cout<<sum<<" ";
}
main()
{
    int t,i,j=0,k=0,es=0,os=0;
    cin>>t;
    int b[t],e[t],o[t];
    for(i=0;i<t;i++){
        cin>>b[i];

    }
    for(i=0;i<t;i++){
        if(b[i]%2==0){
            e[j]=b[i];
            j++;
        }
        else{
            o[k]=b[i];
            k++;
        }
    }
    sort(e,j);
    sort(o,k);

}
