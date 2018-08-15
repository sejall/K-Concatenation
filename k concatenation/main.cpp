#include <iostream>

using namespace std;

int maxsubarray(int a[],int size)
{
    int far=0,ending=0;
    for (int i=0;i<size;i++)
    {
        ending+=a[i];
        if(far<ending)
            far=ending;
        if(ending<0)
            ending=0;
    }
    return far;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n],b[x*n],c=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<n;j++)
              {
               b[c]=a[j];
               c++;
              }
        }
         int sum=maxsubarray(b,(x*n));
         cout<<sum<<endl;

    }
    return 0;
}
