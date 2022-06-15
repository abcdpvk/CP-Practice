#include<iostream>
#include<limits.h>

using namespace std;

int min_element(int arr[],int size)
{
    int mini= INT_MAX;
    for(int i=0; i<size;i++)
    {
        mini=min(mini,arr[i]);
    }
    return mini;
}

int max_element(int arr[],int size)
{
    int maxi= INT_MIN;
    for(int i=0; i<size; i++)
    {
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}

int main()
{
    int T;
    cin>>T;
   
    for(int i=0; i<T; i++)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0; i<N; i++)
        {
            cin>>A[i];
        }
     cout<<max_element(A,N)<<" "<<min_element(A,N)<< endl;   
    }
    return 0;
}
