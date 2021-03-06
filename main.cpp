#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Please enter the charest.\n";
    cin >> c;
//    int j= 1;
//    for (int i=6; i>0; i--) {
//        cout<<string(i, ' ');
//        cout << string(j, c) + "\n";
//        j += 2;
//    }
//  标准答案
    for(int i=1; i<=7; i++)
        cout<<string(7-i, ' ')+string(2*i-1, c)+'\n';
    return 0;
}
