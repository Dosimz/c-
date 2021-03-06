//
// Created by  鱼一一 on 2021/3/6.
//
#include <fstream>
#include <iostream>
#include "pr316.h"

using namespace std;
int pr316(){
    ifstream in("/Users/yuyy/CLionProjects/basic/pr316.txt");
    for(int a,b; in>>a>>b; )
        cout<<a-b<<"\n";
}