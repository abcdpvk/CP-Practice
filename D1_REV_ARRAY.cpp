#include<iostream>
using namespace std;

void rev_arr(int a[], int size)
{
    for(int i=0;i<size/2; i++)
    {
        swap(a[i],a[size-i-1]);
    }
}

int main()
{
    int T;
    cin>>T;
    
    for(int i=0;i<T;i++)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        cin>>A[i];
        
        rev_arr(A,N);
        
         for(int i=0;i<N;i++)
         cout<<A[i]<<" ";
         cout<<endl;
    }
    return 0;
    
}
