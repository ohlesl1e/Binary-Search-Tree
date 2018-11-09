#include "BST.h"
#include <iostream>
using namespace std;

Node::Node(int val){
    left = NULL;
    right = NULL;
    value = val;
}

BST::BST() {
    root = NULL;
}

bool BST::addLeaf(Node* root, int val) {
    if (val < root -> value) {
        if (root -> left != NULL) {
            addLeaf(root -> left, val);
        } else {
            Node* temp = new Node(val);
            root -> left = temp;
            temp = NULL;
            return true;
        }
    } else if (val > root -> value) {
        if (root -> right != NULL) {
            addLeaf(root -> right, val);
        } else {
            Node* temp = new Node(val);
            root -> right = temp;
            temp = NULL;
            return true;
        }
    }
    return false;
}

bool BST::add(int val) {
    if (root) {
        addLeaf(root, val);
    } else {
        Node* temp = new Node(val);
        root = temp;
        temp = NULL;
        return true;
    }
    return false;
}

bool BST::remove(int x) {
    return false;
}

bool BST::search(int val) {
    searchNode(root, val);
    return false;
}

bool BST::searchNode(Node* root, int val);{
    if (root == NULL) {
        return false;
    } else if (val == root -> value) {
        return ture;
    } else if (val > root -> value) {
        if (root -> right == NULL) {
            return false;
        } else {
            searchNode(root -> right, val);
        }
    } else {
        if (root -> left == NULL) {
            return false;
        } else {
            searchNode(root -> left, val);
        }
    }
    return false;
}

void BST::print() {
    printInOrder(root);
}

void BST::printInOrder(Node* ptr) {
    if (root != NULL) {
        if (ptr -> left != NULL) {
            printInOrder(ptr -> left);
        }
        cout << ptr -> value << " ";
        if (ptr -> right != NULL) {
            printInOrder(ptr -> right);
        }
    } else {
        cout << "the tree is empty" << '\n';
    }
}

