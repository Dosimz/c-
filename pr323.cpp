//
// Created by  鱼一一 on 2021/3/6.
//
#include <fstream>
#include <iostream>
#include "pr323.h"
using namespace std;
int pr323(){
    ifstream in("/Users/yuyy/CLionProjects/basic/pr323.txt");
    char a;
    for(int b; in>>a>>b; ){
        for(int i=1; i<=b; ++i)
            cout<<string(b-i, ' ')+string(i, a)+" "+string(i, a)+"\n";
    }
}