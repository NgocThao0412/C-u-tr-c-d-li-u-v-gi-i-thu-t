#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    int temp =a;
    a=b;
    b=temp;
}
void selectionSort(int m[], int n)
{
    for(int i=0; i<n-1;i++)
    {
        int MinIndex= i;
        for(int j= i+1; j<n; j++)
        {
            if(m[j] < m[MinIndex])
            {
                MinIndex = j;
                
            }
        }
        if( m[MinIndex] != m[i])
        {
            swap(m[MinIndex], m[i]);
        }
    }
}
int main()
{
    int m[6] ={ 69,3,1,10,60,12};
    int n= sizeof(m) / sizeof(m[0]);
    selectionSort(m,n);
    cout<<" Mang da sap xep: \n";
    for( int x : m)
    {
        cout<< x <<" ";
        
    }
    cout<<endl;
    return 0;
}