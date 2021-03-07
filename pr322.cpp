//
// Created by  鱼一一 on 2021/3/6.
//
#include <fstream>
#include <iostream>
#include "pr322.h"

using namespace std;
int pr322(){
    ifstream in("/Users/yuyy/CLionProjects/basic/pr321.txt");
    char a;
    for(int b; in>>a>>b; ) {
//        for (int i = 1; i <= b; i++)
//            cout << string(b - i, ' ') + string(2 * i - 1, a) + "\n";
//        for (int j = b-1; j > 0; j--)
//            cout << string(b - j, ' ') + string(2 * j - 1, a) + "\n";
/* 标准答案 */
        for(int i=0; i<=b; i++)
            cout<<string(b>i?b-i:i-b, ' ') + string(b>i?2*i-1:4*b-2*i-1, a)+ "\n";
    }
}