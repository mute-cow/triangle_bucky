#include <iostream>

using namespace std;

int main() {
    int y = -1;

    for (int i = 10; i > 0; i--) {

        for (int j = 1; j < 30; j++) {
            if (j >= i && j < i + y) {
                cout << "#";
            } else {
                cout << " ";
            }
        }

        cout << endl;
        y = y + 2;
    }

    cout << endl;

    return 0;
}