#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

void ShellSort(int m[], int n)
{
    int i,j,hCnt,h;
    int Sxtang[20],k;
    
    for(h=1, i=0; h<n; i++)
    {
        Sxtang[i]= h;
        h= 3*h +1;
    }
    
    for(i--; i >=0; i--)
    {
        h= Sxtang[i];
        
        
        for(hCnt=h; hCnt<n; hCnt++)
        {
            for(j=hCnt; j<n; )
            {
                int tmp=m[j];
                k=j;
                while(k-h >=0 && tmp < m[k-h])
                {
                    m[k]= m[k-h];
                    k-=h;
                }
                m[k]= tmp;
                j +=h;
            }
        }
    }
}

int main()
{
    int m[6]={4,6,12,3,33,44};
    int n= sizeof(m)/ sizeof(m[0]);
    ShellSort(m,n);
    cout<<"Mang da sap xep tang la: \n";
    for(int x : m)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}