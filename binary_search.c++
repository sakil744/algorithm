
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter array elments: ";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"sorted array  is: ";
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
        int x;
        cout<<endl<<"Enter searching value: ";
        cin>>x;
        bool flag=false;
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(a[mid]==x)
           {
                flag=true;
                break;
           }
          if(x>a[mid])
          {
             l=mid+1;
          }
          else
          {
            r=mid-1;
          }
        }
         if(flag==true)
         cout<<x<<" Is found"<<endl;
        else cout<<x<<"IS not found"<<endl;


    return 0;
}
