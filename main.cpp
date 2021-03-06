#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Please enter the charest.\n";
    cin >> c;
    int j= 1;
    for (int i=6; i>0; i--) {
        cout<<string(i, ' ');
        cout << string(j, c) + "\n";
        j += 2;
    }
    return 0;
}
