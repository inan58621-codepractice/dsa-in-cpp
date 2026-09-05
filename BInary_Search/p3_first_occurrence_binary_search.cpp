#include<bits/stdc++.h>
using namespace std;
int firstOccurrence(vector<int> &v, int target)
{
    int low = 0 ; 
    int high = v.size()-1;

    int answer = -1;

    while(low<=high)
        {
            int mid = (low+high)/2;
            if(v[mid]==target){
                answer = mid;

                high = mid-1;
            }
            else if(v[mid]<target)
                low = mid+1;
            else
                high = mid-1;
        }
    return answer;
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


    int target;
    cin>>target;

    int result = firstOccurrence(v,target);

    cout<<result;
    
    return 0;
}
