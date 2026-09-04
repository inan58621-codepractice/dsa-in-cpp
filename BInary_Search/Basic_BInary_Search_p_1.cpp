#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<int> &v, int target)
{

    int left = 0;

    int right = v.size()-1;

    

    while(left<=right)
    {
        int mid = (left+right)/2;

        if(v[mid]==target)
        {
            return true;
        }

        else if(v[mid]<target) 
            left = mid+1;

        else 
            right = mid-1;
    }

    return false;


}




int main()
{
    int n;
    cin>>n;

    vector<int> v;
    
    int target;
    cin>>target;

    for(int i = 0 ; i<n ; i++)
    {
        int x;
        cin>>x;

        v.push_back(x);
    }

    

    if(binarySearch(v,target))
        cout<<"Found";
    else
        cout<<"Not Found";




    return 0;
}
