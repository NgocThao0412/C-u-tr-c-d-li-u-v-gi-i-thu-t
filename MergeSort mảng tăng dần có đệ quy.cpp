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
void MergeSort(int a[], int l, int r){
    if(l<r){
        // m la điểm mà mảng được chia thành 2 mảng con
        int m= l+(r-l )/2;
        //Gọi đệ quy để chia mảng thành các mảng con
        MergeSort(a,l,m);
        MergeSort(a, m+1, r);
        // Gộp các mảng con đã sắp xếp
        Merge(a,l,m,r);
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
    MergeSort(a, 0, a_size - 1);

    // Display the sorted array
    cout << "Mang da sap xep \n";
    for (int i = 0; i < a_size; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}