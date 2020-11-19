#include <iostream>
using namespace std;

int main() {

    int N;
    cout << "請輸入愈輸入數字個數: ";
    cin >> N;

    int num[N];
    cout << "  請輸入愈排序之數字: ";
    for (int i = 0; i < N; i++)
        cin >> num[i];

    for (int i = N - 1; i >= 0; i--) {

        for (int j = 0; j < i; j++) {

            if (num[j] > num[j + 1])
                swap(num[j], num[j + 1]);
        }
    }

	cout << "          排序完數字: ";
    for (int i = 0; i < N; i++)
        cout << num[i] << ' ';

    return 0;
}
