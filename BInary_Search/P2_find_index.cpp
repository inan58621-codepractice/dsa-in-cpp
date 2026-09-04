#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &v, int target)
{
    int left = 0 ;

    int right = v.size()-1;

    while(left<=right)
    {
        int mid = (left+right)/2;

        if(v[mid]==target)
            return mid;

        else if(v[mid]<target)
            left = mid+1;

        else
            right = mid-1;
    }

    return -1;
}





int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i = 0 ; i<n ; i++)
    {
        int x ;
        cin>>x;

        v.push_back(x);
    }


    int tar ;
    cin>>tar;

    int result = binarySearch(v,tar);

    cout<<result;




    return 0;
}
