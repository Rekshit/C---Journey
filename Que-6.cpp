//QUE-4 WAP TO ROTATE AN ARRAY IN GROUPS

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Enter the elements: ";
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter the number of rotations: ";
    cin >> d;

    d = d % a;   // handles large rotation values

    for (int i = 0; i < d; i++) {
        int first = arr[0];

        for (int j = 1; j < a; j++) {
            arr[j - 1] = arr[j];
        }

        arr[a - 1] = first;
    }

    cout << "Rotated array is: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
