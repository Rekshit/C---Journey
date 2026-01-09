//QUE-7 FIND MAXIMUM PRODUCT OF A TRIPLET(SUBSEQUENT OF SIZE 3) IN AN ARRAY

/* Explanation / Theory

A triplet consists of any three elements selected from the array. The elements do not need to be consecutive, but they must be present in the array.

To find the maximum product, we must consider the effect of negative numbers.
Multiplication of two negative numbers results in a positive number, which may produce a larger product than using only positive numbers.

Therefore, the maximum product of a triplet can be obtained in two possible ways:
1. Product of the three largest elements in the array.
2. Product of the largest element and the two smallest (most negative) elements in the array.
The final answer is the maximum of these two products.

Example:
Array = [-10, -10, 5, 2]
Possible products:
(5, 2, -10) → -100 ❌
(-10, -10, 5) → 500 ✅ (MAXIMUM)
*/

#include <iostream>
#include <vector>
#include <climits>
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
    
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < a; i++) {
        if (arr[i] > max1){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2) {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3) {
            max3 = arr[i];
        }

        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } 
        else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int case1 = (max1 * max2 * max3);
    int case2 = (min1 * min2 * max1);
    cout << "The product of largest three numbers is: " << max(case1 , case2);

    return 0;
}


//Time Complexity: O(n)
//Space Complexity: O(1)

/*
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 3) {
        cout << "Array must have at least 3 elements";
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        // Find three largest
        if (arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max3 = max2;
            max2 = arr[i];
        } else if (arr[i] > max3) {
            max3 = arr[i];
        }

        // Find two smallest
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }

    int product1 = max1 * max2 * max3;
    int product2 = min1 * min2 * max1;

    cout << "Maximum product of a triplet is: "
         << max(product1, product2);

    return 0;
}
*/