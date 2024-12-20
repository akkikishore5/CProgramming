#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Utils {
public:
    static void printArray(const vector<T> &arr) {
        for (const auto &elem : arr) {
            cout << elem << " ";
        }
        cout << "\n";
    }

    static void selectionSort(vector<T> &arr) {
        int len = arr.size();
        for (int i = 0; i < len; ++i) {
            int min = i;
            for (int j = i + 1; j < len; ++j) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }
            swap(arr[i], arr[min]);
        }
    }
};

int main() {
    vector<int> v{20, 10, 40, 30, 50, 0, 60};
    
    Utils<int>::printArray(v);
    Utils<int>::selectionSort(v);
    Utils<int>::printArray(v);

    return 0;
}
