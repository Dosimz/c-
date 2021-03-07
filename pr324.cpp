//
// Created by  鱼一一 on 2021/3/7.
//
#include <fstream>
#include <iostream>
#include "pr324.h"
using namespace std;

int pr324(){
    ifstream in("/Users/yuyy/CLionProjects/basic/pr324.txt");
    for(int n; in>>n; ){
        for(int i=1; i<=n; i++){
//            cout<<string(i-1, ' ');
//             for(int j=i; j<n; j++)
//                 cout<<"ST";
//             cout<<"S\n";
            /* 标准答案 */
            cout<<string(i-1, ' ');
            for(int j=1; j<=2*(n-i+1)-1; j++)   //每行的字符数和高度有关
                cout<<(j%2 ? "S" : "T");
            cout<<'\n';
        }
    }
    return 0;
}