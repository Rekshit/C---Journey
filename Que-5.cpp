//QUE-4 WAP TO REVERSE AN ARRAY IN GROUPS

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

    int k = 3;

    for (int i = 0; i < a; i += k) {
        int left = i;
        int right = min(i + k - 1, a - 1);

        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    cout << "Reversed array in groups: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

/*
What is min?

min(a, b) returns the smaller value between a and b.

Example
min(5, 10)   // returns 5
min(8, 3)    // returns 3
Problem without min

Suppose:

a = 8
k = 3

Loop values:

i = 0 → group: 0 to 2  ✅
i = 3 → group: 3 to 5  ✅
i = 6 → group: 6 to 8  ❌ (index 8 does not exist)
*/

/*
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

    int k = 3;

    for (int i = 0; i < a; i += k) {
        int left = i;
        int right = (i + k - 1 < a) ? (i + k - 1) : (a - 1);

        while (left < right) {
            swap(arr[left], arr[right]); // no temp variable
            left++;
            right--;
        }
    }

    cout << "Reversed array in groups: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/
