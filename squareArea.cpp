//
// Created by  鱼一一 on 2021/3/6.
//
#include "iostream"
#include "fstream"
#include "squareArea.h"

using namespace std;
int squareArea(){
    ifstream in("/Users/yuyy/CLionProjects/basic/aaa.txt");
    for(int n; in>>n; )
        cout<<n*n<<"\n";
    return 0;
}