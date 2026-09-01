#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> & v)
{
    int n = v.size();
    for(int i = 0; i <n-1; i++)
    {
        for(int j = 0; j<n-1-i; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j],v[j+1]);
            }
        }
    }
}





int main()
{
    int n ;

    cin>>n;

    vector<int> v;

    for(int i = 0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }


    bubbleSort(v);

    for(int z:v)
    {
        cout<<z<<" ";
    }





    return 0;
}
