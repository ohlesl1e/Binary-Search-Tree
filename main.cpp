#include "BST.h"
#include <iostream>
using namespace std;

int main() {
    BST tree;
    tree.add(12);
    tree.add(4);
    tree.add(6);
    tree.add(2);
    tree.add(5);
    tree.add(20);
    tree.add(20);
    tree.add(22);
    tree.add(15);
    tree.print();
    return 0;
}

