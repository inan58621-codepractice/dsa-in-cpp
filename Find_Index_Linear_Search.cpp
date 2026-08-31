#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin>>n;


    vector<int> v;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;

        v.push_back(x);
    }

    int index = -1;


    int target;
    cin>>target;


    for(int i = 0 ; i<v.size(); i++)
    {
        if(v[i]==target)
        {
            index = i;
            break;
        }
    }

    cout<<index;


    return 0;
}
