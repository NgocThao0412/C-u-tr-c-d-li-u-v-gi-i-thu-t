#include <iostream>
using namespace std;

//Hàm Merge để gộp hai mảng con đã sắp xếp thành một mảng đã sắp xếp

void Merge(int a[], int l, int m, int r)
{
    int n1= m-l +1;
    int n2= r-m;
    
    //Tạo mảng tạm thời
    int L[n1], R[n2];
    
    //Sao chép dữ liệu vào mảng tạm thời L[] và R[]
    for(int i=0; i<n1; i++)
       L[i]= a[l + i];
    for(int j=0; j<n2; j++)
       R[j]= a[m + 1+j];
       
    //Gộp mảng tạm thời
     int i=0;//Chỉ số ban đầu của mảng con đầu tiên
     int j=0;//Chỉ số ban đầu của mảng con thứ hai
     int k= l;//Chỉ số ban đầu của mảng con đã hợp nhất
     
    while( i< n1 && j<n2){
        if(L[i] >= R[j]){
            a[k]=L[i];
            i++;
        } else {
            a[k]= R[j];
            j++;
        }
        k++;
    }
    
    //Sao chép các phần tử của mảng còn lại, nếu có:
    while(i<n1){
        a[k]= L[i];
        i++;
        k++;
    }
    
    while(j<n2){
        a[k]= R[j];
        j++;
        k++;
    }
}

//Hàm sắp xếp hợp nhất để sắp xếp một mảng đệ quy
void MergeSort(int a[], int n) { 
    //Vòng lặp ngoài
    for (int curr_size = 1; curr_size <= n - 1; curr_size = 2 * curr_size) {
        //Vòng lặp trong
        for (int l = 0; l < n - 1; l += 2 * curr_size) {
            int m = min(l + curr_size - 1, n - 1);
            int r = min(l + 2 * curr_size - 1, n - 1);
            Merge(a, l, m, r);
        }
    }
}
int main(){
    int a[]={10,9,8,7,6,5,23,1};
    int a_size= sizeof(a)/ sizeof(a[0]);
    cout << "Mang da cho la \n";
    for (int i = 0; i < a_size; i++)
        cout << a[i] << " ";
    cout << endl;

    // Sort the array using merge sort
    MergeSort(a, a_size);

    // Display the sorted array
    cout << "Mang da sap xep \n";
    for (int i = 0; i < a_size; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}