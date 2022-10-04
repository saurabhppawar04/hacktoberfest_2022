#include <iostream>
#include <vector>
using namespace std;


void dutchFlagAlgorithm(vector<int> &arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        
        else if(arr[mid] == 1)
        {
            mid++;
        }
        
        else if(arr[mid] == 2)
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}


int main()
{
    int n;
    cin >> n;
    
    vector <int> v;
    
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        v.push_back(x);
    }
    
    dutchFlagAlgorithm(v,n);
    
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
    
    
    return 0;
}
