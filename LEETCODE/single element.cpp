#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> arr={1};
    int l=0;
    int r=arr.size()-1;
    int a=l + ((r-1)/2);
    if(a==0 and arr[a+1]==arr[a])
    {
        cout << arr[a];
        return 0;
    }
    if(a==arr.size()-1 and arr[a]==arr[a-1])
    {
        cout << arr[a];
        return 0;
    }

    if(a!=0 or a!=arr.size()-1)
    {
    while(l<=r)
    {
        int mid=l + ((r-l)/2);
        
        if(arr[mid]!=arr[mid-1] and arr[mid]!=arr[mid+1])
        {
            cout << arr[mid];
            return 0;
        }
        else
        {
            if(mid%2==0)
            {
                if(arr[mid+1]==arr[mid])
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
            else
            {
                if(arr[mid]==arr[mid-1])
                {
                    l=mid+1;
                }
                else
                {
                    r=mid-1;
                }
            }
        }
    }
}
    return 0;
}
