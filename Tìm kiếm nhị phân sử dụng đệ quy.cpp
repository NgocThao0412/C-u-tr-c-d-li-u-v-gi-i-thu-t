#include <iostream>

using namespace std;

// Hàm tìm kiếm nhị phân đệ quy
int binarySearchRecursive(const int arr[], int left, int right, int key) {
    if (left <= right) {
        int mid = left + (right - left) / 2; // Tính chỉ số giữa

        // Nếu tìm thấy phần tử ở giữa
        if (arr[mid] == key) {
            return mid;
        }

        // Nếu phần tử cần tìm nhỏ hơn phần tử ở giữa, tìm kiếm trong nửa trái
        if (arr[mid] > key) {
            return binarySearchRecursive(arr, left, mid - 1, key);
        }

        // Nếu phần tử cần tìm lớn hơn phần tử ở giữa, tìm kiếm trong nửa phải
        return binarySearchRecursive(arr, mid + 1, right, key);
    }

    // Nếu không tìm thấy
    return -1;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = binarySearchRecursive(arr, 0, n - 1, key);

    if (result == -1) {
        cout << "Phần tử không tồn tại trong mảng" << endl;
    } else {
        cout << "Phần tử được tìm thấy tại vị trí: " << result << endl;
    }

    return 0;
}