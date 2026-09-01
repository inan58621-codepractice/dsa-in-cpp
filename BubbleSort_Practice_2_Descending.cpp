#include<bits/stdc++.h>
using namespace std;

void bubbleSortDescending(vector<int>& v)
{
    int n = v.size();

    for(int i = 0 ; i<n; i++)
    {
        for(int j = 0 ; j<n-1-i; j++)
        {
            if(v[j]<v[j+1])
            {
                swap(v[j], v[j+1]);
            }
        }
    }
}



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

    bubbleSortDescending(v);

    for(int z:v)
    {
        cout<<z<<" ";
    }








    return 0;
}
