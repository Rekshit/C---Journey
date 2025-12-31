//QUE-1 FIND LARGEST NUMBER IN AN ARRAY

/*
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the no of elements: ";
    cin >> a;

    int arr[a];

    cout << "Enter the elements: ";
    for (int i=0; i<a; i++){
        cin >> arr[i] ;
    }

    int temp = arr[0];
    for (int i=0; i<a; i++){
        if (temp < arr[i]) {
            temp = arr[i];
        }
    }
    cout << "Largest number in an array is: " << temp << endl;
    return 0;
}
*/

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

    int temp = arr[0];
    for (int i = 1; i < a; i++) {
        if (temp < arr[i]) {
            temp = arr[i];
        }
    }

    cout << "Largest number in the array is: " << temp << endl;
    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(1)