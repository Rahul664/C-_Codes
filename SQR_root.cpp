#include<iostream>
#include<cmath>
using namespace std;
 main()
 { int t,half;
 float i,n;
 cin>>t;
 while(t--){
    cin>>n;
    half=n/2;
    for(i=1;i<=half;i=i+.1)
    {
        if((i*i==n)||((i*i)>n))
        {break;
        }
    }
    cout<<floor(i)<<endl;
}
}
