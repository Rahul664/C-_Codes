#include<iostream>
using namespace std;
main()
{   long long int t,n,cnt=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            //cout<<a[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long int res=a[i]^a[j];
                if(res%2==0 && res!=0 && res!=2){
                    cnt+=1;
                }
            }
        }
        cout<<cnt;
    }
}
