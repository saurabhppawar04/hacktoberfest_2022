#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int x;
    cin>>x;
    bool flag =false;
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            flag =true;
            break;
        }
    }   
    if(flag)
        cout<<"Number Found\n";
    else
        cout<<"Number not Found\n";

return 0;
}