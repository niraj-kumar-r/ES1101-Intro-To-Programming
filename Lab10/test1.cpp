#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int j=0;
    for(int i=0; i<n; i++)
    {
        if(j<n)
        {
            int check = A[j];
            if(A[j]==A[i])
            {
                cout<<"It is a duplicate list"<<endl;
                break;
            }
            j++;
        }   
    }
}