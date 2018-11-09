#include "node.h"

class BST {
private:
    bool addLeaf(Node*, int);
    void printInOrder(Node* ptr);
    bool searchNode(Node*, int);
public:
    Node* root;
    BST();
    bool add(int);
    bool remove(int);
    bool search(int);
    void print();
};

