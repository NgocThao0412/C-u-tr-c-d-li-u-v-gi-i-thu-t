#include <iostream>
using namespace std;

void Counting_Sort(int a[], int n){
    int max = a[0];
    for(int i= 1; i<n;i++) {
        if(a[i] > max) {
            max= a[i];
        }
    }
    int count[max +1]={0};
    
    for(int i= 0;i<n;i++) {
        count[a[i]]++;
    }
    
    for(int i=1; i<= max; i++){
        count[i] += count[i-1];
    }
    
    int sorted_a[n];   
    for(int i= n -1; i >=0 ;i--){
        sorted_a[count[a[i]]-1]= a[i];
        count [a[i]]--;
    }
    
    for(int i=0; i<n;i++){
        a[i]= sorted_a[i];
    }
}

int main(){
    int a[7]={ 4,2,2,8,3,3,1};
    int n= sizeof (a)/ sizeof(a[0]);
    Counting_Sort(a,n);
    cout<<" Mang da sap xep: "<<" ";
    for( int x : a)
    {
        cout<< x <<" ";
    }
    cout<<endl;
    return 0;

}

