//QUE-3 FIND THIRD LARGEST NUMBER IN AN ARRAY

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

    int largest = -1;  // ❌ This fails for negative numbers  ✅Use INT_MIN (smallest possible integer)
    for (int i = 0; i < a; i++) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
    }
    cout << "Largest number in the array is: " << largest << endl;

    int secondlargest = -1;  // ❌ This fails for negative numbers  ✅Use INT_MIN (smallest possible integer)
    for (int i = 0; i < a; i++) {
        if (arr[i] > secondlargest && arr[i] != largest ){
            secondlargest = arr[i];
        }
    }
    cout << "Second Largest number in the array is: " << secondlargest << endl;

    int thirdlargest = -1;   // ❌ This fails for negative numbers  ✅Use INT_MIN (smallest possible integer)
    for (int i = 0; i < a; i++) {
        if (arr[i] > thirdlargest && arr[i] != largest && arr[i] != secondlargest){
            thirdlargest = arr[i];
        }
    }
    cout << "Third Largest number in the array is: " << thirdlargest << endl;
    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(1)