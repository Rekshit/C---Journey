//QUE-4 WAP TO REVERSE AN ARRAY

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements: ";
    cin >> a;

    vector<int> arr(a);
    vector<int> temp(a);

    cout << "Enter the elements: ";
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < a; i++) {
        temp[i] = arr[a - i - 1];
    }

    cout << "The reverse of the given array is:" << endl;
    for (int i = 0; i < a; i++) {
        cout << temp[i] << " ";
    }

    return 0;
}
*/

//Time: O(n)
//Extra Space: O(n) (because of temp array

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

    cout << "The reverse of the given array is:" << endl;
    for (int i = a-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/

//Time Complexity: O(n)
//Space Complexity: O(1)
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

    int left = 0;
    int right = a - 1;

    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

//Time Complexity: O(n)
//Space Complexity: O(1)