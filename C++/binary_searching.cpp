#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr,int x)
{
    int l=0,e=arr.size()-1;
    while(l<e)
    {
        int mid = l + (e-l)/2;
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]<x)
            l=mid+1;
        else
        e=mid-1;
    }

    return -1;
}


int main(){
    // ios_base::sync_with_stdio(false);
    //     cin.tie(NULL);

    int n;
    cout<<"Enter size of array\n";
    cin>>n;

    cout<<"Enter the elements of array in sorted order\n";

    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int x;
    cout<<"Enter the elements you want to search in sorted array\n";
    cin>>x;
    
    // function to search the number in log(n) time

    int index = binary_search(arr,x);


    if(index!=-1)
        cout<<"Number Found at index "<<index+1<<endl;
    else
        cout<<"Number not Found\n";

return 0;
}