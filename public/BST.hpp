#pragma once
#include <stdlib.h>
class BST {
   private:
    class Node {
       public:
        int key;
        int val;
        Node* left;
        Node* right;

        Node(int key, int value) {
            this->key = key;
            this->val = value;
            left = NULL;
            right = NULL;
        }
    };

    Node* root;

    int get(Node* n, int key);
    Node* insert(Node* n, int key, int val);
    Node* min(Node* n);
    Node* max(Node* n);
    Node* floor(Node* n, int key);
    Node* ceil(Node* n, int key);
    Node* deleteNode(Node* n, int key);
    Node* deleteMin(Node* n);

   public:
    BST() {
        root = NULL;
    };
    int get(int key);
    void insert(int key, int val);
    int min();
    int max();
    int floor(int key);
    int ceil(int key);
    void deleteMin();
    void deleteNode(int key);
};
