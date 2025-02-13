#include <iostream>

using namespace std;
void swap(int &a, int &b)
{
    int temp =a;
    a=b;
    b=temp;
}
void insertionSort(int m[], int n)
{
    for(int i= 1; i<n ;i++)
    {
        int value= m[i];
        int j= i-1;
        while ( j>= 0 && m[j] > value)
        {
            m[ j+1]= m[j];
            j=j -1;
        }
        m[j +1]= value;
    }
}
int main()
{
    int m[6] ={ 69,3,1,10,60,12};
    int n= sizeof(m) / sizeof(m[0]);
    insertionSort(m,n);
    cout<<" Mang da sap xep: \n";
    for( int x : m)
    {
        cout<< x <<" ";
        
    }
    cout<<endl;
    return 0;
}