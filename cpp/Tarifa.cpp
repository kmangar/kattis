#include <cstring>
#include <iostream> 

using namespace std;

int main()
{
    //x represents the megabytes limit for the month 
    //N represents the month 
    int X,N,y,sum; 
	cin>>X;//inputs the limit 
    cin>>N;//input how many month he has used 
    sum = X;
    for (int i = 0; i < N; i++)
    {

        cin>>y;
        sum = sum-y;
        sum= sum+X;

    }
    cout<<sum;
    
    return 0; 
}