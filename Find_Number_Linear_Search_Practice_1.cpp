#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin>>n;

    vector<int> v;

    for(int i = 0 ; i<n; i++)
    {
        int x;
        cin>> x;

        v.push_back(x);
    }

    int target ;
    cin>>target ;


    bool found = false;


    for(int i = 0; i<v.size();i++)
    {
        if(v[i] == target)
        {
            found = true;
        }
    }


    if(found)
    {
        cout<<"Found";
    }

    else{
        cout<<"Not found";
    }

    return 0;
}
