#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    int temp =a;
    a=b;
    b=temp;
}
void BulleSort(int m[], int n)
{
    for(int i=0; i< n-1; i++)
    {
        for(int j=0; j< n- i -1; j++)
        {
            if( m[j] > m[j+1])
            {
                swap(m[j], m[j+1]);
            }
        }
    }
}
int main()
{
    int m[6] ={ 69,3,1,10,60,12};
    int n= sizeof(m) / sizeof(m[0]);
    BulleSort(m,n);
    cout<<" Mang da sap xep: \n";
    for( int x : m)
    {
        cout<< x <<" ";
        
    }
    cout<<endl;
    return 0;
}