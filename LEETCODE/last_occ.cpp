#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr;
    arr={1,1,2,2,3,3,3,4,4,4,5};
    int t=4;

    int l=0;
    int r=arr.size()-1;
    int first=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==t)
        {
            first=mid;
            l=mid+1;
        }
        else if(arr[mid]>t)
        {
            r=mid-1;
        }
        else if(arr[mid]<t)
        {
            l=mid+1;
        }
    }
    l=0;
    r=arr.size()-1;
    int last=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==t)
        {
            last=mid;
            r=mid-1;
        }
        else if(arr[mid]>t)
        {
            r=mid-1;
        }
        else if(arr[mid]<t)
        {
            l=mid+1;
        }
    }
    cout << first-last+1<< endl;

    return 0;
}
