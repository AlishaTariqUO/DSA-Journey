#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    cout << "Array elements are:" << endl;

    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
