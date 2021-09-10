#include "../public/BST.hpp"

int BST::get(int key) {
    return get(root, key);
}

int BST::get(Node* n, int key) {
    if (!n) return -1;

    if (n->key > key) {
        get(n->left, key);
    } else if (n->key < key) {
        get(n->right, key);
    } else {
        return n->val;
    }
}

void BST::insert(int key, int val) {
    root = insert(root, key, val);
}

BST::Node* BST::insert(Node* n, int key, int val) {
    if (!n)
        return new Node(key, val);
    else if (n->key > key) {
        n->left = insert(n->left, key, val);
    } else if (n->key < key) {
        n->right = insert(n->right, key, val);
    } else {
        n->val = val;
    }
    return n;
}

int BST::min() {
    return min(root)->key;
}

BST::Node* BST::min(Node* n) {
    if (!n->left)
        return n;
    else
        return min(n->left);
}
int BST::max() {
    return min(root)->key;
}

BST::Node* BST::max(Node* n) {
    if (!n->left)
        return n;
    else
        return min(n->right);
}

int BST::ceil(int key) {
    Node* t = ceil(root, key);
    if (!t) return NULL;

    return t->val;
}

BST::Node* BST::ceil(Node* n, int key) {

    if (!n) return NULL;

    if (n->key == key)
        return n;
    else if (n->key < key)
        return ceil(n->right, key);

    Node* t = ceil(n->left, key);

    if (!t)
        return n;
    else
        return t;
}

int BST::floor(int key) {
    Node* t = floor(root, key);
    if (!t) return NULL;

    return t->val;
}

BST::Node* BST::floor(Node* n, int key) {

    if (!n) return NULL;

    if (n->key == key)
        return n;
    else if (n->key > key)
        return floor(n->left, key);

    Node* t = floor(n->right, key);

    if (!t)
        return n;
    else
        return t;
}