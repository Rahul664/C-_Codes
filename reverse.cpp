#include<iostream>
using namespace std;
main()
{
    int t,n;
    cin>>t;
    while(t--)
    {int rev=0,rem=0;
     cin>>n;
     while(n!=0)
     {
         rem=n%10;
         rev=rev*10+rem;
         n=n/10;
     }
     cout<<rev<<endl;
    }
}
