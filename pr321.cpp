//
// Created by  鱼一一 on 2021/3/6.
//
#include <fstream>
#include <iostream>
#include "pr321.h"

using namespace std;
int pr321(){
    ifstream in("/Users/yuyy/CLionProjects/basic/pr321.txt");
    for(char a, b; in>>a>>b; ) {
        int h = b-'0';  // int 类型转换为 char
/*
 *  标准答案
 *  char a;
 *  for(int b; in>>a>>b)
 * */
        for (int i = 1; i <= h; i++) {
            cout << string(h-i, ' ')+string(2*i-1, a)+"\n";
        }
    }
}
