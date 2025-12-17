#include <iostream>
#include <vector>
using namespace std;    

int main(int argc, char const *argv[])
{
    vector<int> nums={1,2,3,4,5,6,8,9,12,14};
    int t =12;

    int l=0;
    int r= nums.size()-1;

    while(l<=r)
    {
        int mid=(l+r)/2;
        if(nums[mid]==t)
        {
            cout<<mid<<endl;
            break;
        }
        if(nums[mid]<t)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return 0;
}
