#include <iostream>

using namespace std;

// Hàm tìm kiếm tuyến tính đệ quy
int linearSearchRecursive(const int arr[], int size, int key, int index) {
    // Trường hợp cơ sở: Nếu đã duyệt hết mảng
    if (index >= size) {
        return -1; // Không tìm thấy
    }

    // Nếu tìm thấy phần tử
    if (arr[index] == key) {
        return index; // Trả về vị trí
    }

    // Gọi đệ quy cho phần còn lại của mảng
    return linearSearchRecursive(arr, size, key, index + 1);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = linearSearchRecursive(arr, size, key, 0); // Bắt đầu từ index 0

    if (result == -1) {
        cout << "Phần tử không tồn tại trong mảng" << endl;
    } else {
        cout << "Phần tử được tìm thấy tại vị trí: " << result << endl;
    }

    return 0;
}