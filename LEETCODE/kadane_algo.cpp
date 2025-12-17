#include <iostream>
#include <vector>
using namespace std;    

int main(int argc, char const *argv[])
{
    vector<int> arr={-2,1,-3,-7,-1,2,1,-5,4};
    int max1=0;
    int cur=0;

    for(int i=0;i<arr.size();i++)
    {
        cur=cur+arr[i];
        if(cur<0)
        {
            cur=0;
        }
        if(cur>max1)
        {
            max1=cur;
        }
        
    }   
    cout<<max1<<endl;
    return 0;
}
