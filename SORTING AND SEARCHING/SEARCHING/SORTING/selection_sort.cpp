#include<bits/stdc++.h>
using namespace std;

class Selection{
    public:
    void swap(int *x,int *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

    void selection_sort(int arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int min_idx = i;
            for(int j=i+1;j<n;j++)
            {
                
                if(arr[j]<arr[min_idx]){
                    min_idx = j;
                }
            }
            swap(&arr[min_idx],&arr[i]);
        }
    }
};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    Selection obj;
    obj.selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}