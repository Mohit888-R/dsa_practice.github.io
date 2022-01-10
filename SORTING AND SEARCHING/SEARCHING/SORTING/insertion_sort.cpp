#include<bits/stdc++.h>
using namespace std;

class Insertion{
    public:
    void insertion_sort(int arr[],int n)
    {
        for(int i=0;i<n;i++)
        {
            int key = arr[i];
            int j = i-1;
            while(key<arr[j] && j>=0)
            {
                arr[j+1] = arr[j];
                --j;
            }
            arr[j+1]= key;
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

    Insertion obj;
    obj.insertion_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}