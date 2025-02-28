#include <iostream>
using namespace std;

int binarySearch(const int array[], int length,

const int& item){

int first = 0;
int last = length - 1;
int mid;
bool found = false;
while (first <= last && !found){
mid = (first + last) / 2;
if (array[mid] == item)
found = true;
else if (array[mid] > item)
last = mid - 1;
else
first = mid + 1;

}
if (found)
return mid;
else
return -1;
}

int main() {
    int a[6]={9,5,3,7,1,6};
    int length= sizeof(a)/sizeof(a[0]);
    int item= 3;
    int result= binarySearch(a,length,item);
    
    if(result==-1){
        cout<<"Phan tu khong ton tai trong mang"<<endl;
    } else {
        cout<<"Phan tu duoc tim thay tai vi tri: "<<result<<endl;
    }
    return 0;
}