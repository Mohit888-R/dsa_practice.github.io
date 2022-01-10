#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int s,int e,int key)
{
    while(s<e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
            return mid;
        
       if(arr[mid]<key)
            s = mid+1;
        
        if(arr[mid]>key)
            e = mid-1;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    sort(arr,arr+n);
   cout<<binary_search(arr,0,n-1,key)+1;
   return 0;
}