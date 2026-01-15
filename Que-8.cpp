//QUE-4 WAP TO  find Maximum consecutive one’s (or zeros) in a binary array
// Given a binary array arr[] consisting of only 0s and 1s, find the length of the longest contiguous sequence of either 1s or 0s in the array.

/*Examples : 

Input: arr[] = [0, 1, 0, 1, 1, 1, 1]
Output: 4
Explanation: The maximum number of consecutive 1’s in the array is 4 from index 3-6.

Input: arr[] = [0, 0, 1, 0, 1, 0]
Output: 2
Explanation: The maximum number of consecutive 0’s in the array is 2 from index 0-1.

Input: arr[] = [0, 0, 0, 0]
Output: 4
Explanation: The maximum number of consecutive 0’s in the array is 4.*/

// Method-1 (Using Simple Traversal - O(n) Time and O(1) Space)

/*
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int a;
    cout << "Enter the number of elements: ";
    cin >> a;

    vector<int> arr(a);

    cout << "Enter the elements (0 or 1): ";
    for (int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    int maxCount = 0;
    int count = 1;

    for (int i = 1; i < a; i++){                         // index used from 1 not 0 to avoid index out of bond error, thus arr[i+1]== arr[i] fails
        if (arr[i] == arr[i - 1]){
            count++;
        } 
        else{
            count = 1;
        }
        maxCount = max(maxCount, count);
    }

    cout << "Maximum consecutive 0s or 1s: " << maxCount;

    return 0;
}
*/

// Method-2 (Using Bit Manipulation - O(n) Time and O(1) Space)
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;

    vector<int> arr(num);
    cout << "Enter the elements (0 or 1): ";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    int count = 1;
    int maxCount = 1;
    int prev = arr[0];

    for (int i = 1; i < num; i++){
        if ((prev ^ arr[i]) == 0){ 
            count++;
        } 
        else{
            count = 1;
        }
        maxCount = max(maxCount, count);
        prev = arr[i];
    }

    cout << "Maximum consecutive 0s or 1s: " << maxCount;

    return 0;
}

