#include <iostream>
#include <vector>
using namespace std;    

int main(int argc, char const *argv[])
{
    vector<int> arr={-1,2,4,5,6,7,19,25};
    int target=19;
    for(int i=0;i<arr.size();i++)
    {
        int x=(i+arr.size())/2;
        if(arr[x]==target)
        {
            cout<<"Element found at index "<<x<<endl;
            break;
        }
        else if(arr[x]>target)
        {
            arr.resize(x);
        }
        else
        {
            arr.erase(arr.begin(),arr.begin()+x);
        }
    }

       
    return 0;
}
