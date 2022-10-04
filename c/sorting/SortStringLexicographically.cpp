#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
bool my_comparator(string a, string b)
{
    
    if(a.length() == b.length())
    {
        // lexicographically a return krro --- chota
        return a < b;
    }
    
    
    // badi length return krro
    return a.length() > b.length();
    
}
*/

bool my_comparator(string a, string b)
{
    if(a.compare(0,b.length(),b) == 0 || b.compare(0,a.length(),a) == 0)
    {
        return a.length() > b.length();
    }
    return a < b;
}



int main()
{
    int n;
    cin >> n;
    
    vector<string> v;

    cin.get();
    
    string s1;
    getline(cin,s1);
    
    v.push_back(s1);
    
    
    
    for(int i = 1; i < n; i++)
    {
        string s2;
        getline(cin,s2);
        
        v.push_back(s2);
    }
    
    
    sort(v.begin(), v.end(), my_comparator);
    
    for(int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
