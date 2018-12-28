#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int t,n,k,i,j;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[n],msum=0,tsum=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<k;i++){
                int minimum=10001,maximum=0,max_index=0,min_index=1;
        for(j=0;j<n;j++){
            if(j%2==0&&a[j]>maximum){
                maximum=a[j];
                max_index=j;
            }
            else if(j%2!=0&&a[j]<minimum){
                minimum=a[j];
                min_index=j;
            }
        }
        if(maximum>minimum){
            swap(a[min_index],a[max_index]);
        }

        }
        for(i=0;i<n;i++){
            if(i%2==0){
                msum+=a[i];
            }
            else
                {
                tsum+=a[i];
            }
        }
        if(tsum>msum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}

