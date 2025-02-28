#include <iostream>
using namespace std;

int seqSearch( const int a[], int length, const int& item) {
    int loc;
    bool found = false;
    loc=0;
    while(loc < length && !found)
     if(a[loc]== item)
     found = true;
     else
      loc++;
      if(found)
      return loc;
      else
      return -1;
}

int main() {
    int a[6]={9,5,3,7,1,6};
    int length= sizeof(a)/sizeof(a[0]);
    int item= 3;
    int result= seqSearch(a,length,item);
    
    if(result==-1){
        cout<<"Phan tu khong ton tai trong mang"<<endl;
    } else {
        cout<<"Phan tu duoc tim thay tai vi tri: "<<result<<endl;
    }
    return 0;
}