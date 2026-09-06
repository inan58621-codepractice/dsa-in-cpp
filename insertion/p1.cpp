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
            cin>>x;

            v.push_back(x);
        }

    int pos;
    cin>>pos;

    int value;
    cin>>value;

    v.push_back(0);


    for(int i=n; i>pos; i--)
        {
            v[i] = v[i-1];
        }
    v[pos] = value;
    n++;

    for(int i = 0 ; i<n; i++)
        {
            cout<<v[i]<<" ";
        }





    return 0;
}
