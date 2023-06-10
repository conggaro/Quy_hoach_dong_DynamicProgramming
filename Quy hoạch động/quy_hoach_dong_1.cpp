// Yêu cầu:

// 1. cho một cái mảng kiểu
// int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// 2. hãy tính tổng của 2 số bất kỳ
// lưu tổng của 2 số bất kỳ đó sang cái mảng 2 chiều

#include <iostream>
#define SIZE 50
using namespace std;

int main(){
    // tạo mảng
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // fake nhập n
    int n = 10;

    // mảng 2 chiều chứa kết quả
    int arr_kq[SIZE][SIZE];

    // gán cho tất cả phần tử trong mảng arr_kq = 0
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr_kq[i][j] = 0;
        }
    }

    int tong = 0;

    // tính tổng và đưa dữ liệu vào trong mảng 2 chiều
    // mảng 2 chiều thì nó như 1 cái bảng vậy
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            tong = arr[i] + arr[j];
            arr_kq[i][j] = tong;
        }        
    }
    
    // in ra cái bảng chứa kết quả
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr_kq[i][j] << "\t";
        }
        cout << "\n\n";
    }
    
    // dùng quy hoạch động thì chỉ cần 1 + 2 = 3 thôi
    // đỡ phải tính 2 + 1 = 3
    // vì nó lưu lại kết quả của các bài toán con rồi

    return 0;
}