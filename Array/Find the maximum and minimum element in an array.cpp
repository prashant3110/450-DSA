#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int mx=INT_MIN;
    int mn=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
    }
    
    cout<<"Maximum element : "<<mx<<endl;
    cout<<"Minimum element : "<<mn<<endl;
    
    return 0;
    
}
