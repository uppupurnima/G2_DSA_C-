#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int i = 0;

    while (i < n) {
        int j = 0;

        // Print numbers in increasing order
        while (j < n - i) {
            cout << (j + 1) << " ";
            j++;
        }

        // Print asterisks
        j = 0;
        while (j < 2*i) {
            cout << "* ";
            j++;
        }

        // Print numbers in decreasing order
        j = n - i - 1;
        while (j >= 0) {
            if (j != n - i)
                cout << (j+1) << " "; // Mirror the increasing order
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
