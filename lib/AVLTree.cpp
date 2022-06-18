#include "../public/AVLTree.hpp"

template <typename T>
int AVLTree<T>::height(Node* n) {
    if (n == NULL) return 0;
    return n->height;
}

template <typename T>
int AVLTree<T>::getBalance(Node* n) {
    if (n == NULL) return 0;
    return height(n->left) - height(n->right);
}

template <typename T>
AVLTree<T>::Node* AVLTree<T>::LLRotate(Node* n) {
    Node* nL = n->left;
    n->left = nL->right;
    nL->right = n;

    n->height = 1 + max(height(n->left), height(n->right));
    nL->height = 1 + max(height(nL->left), height(nL->right));

    return nL;
}

template <typename T>
AVLTree<T>::Node* AVLTree<T>::RRRotate(Node* n) {
    Node* nR = n->right;
    n->right = nR->left;
    nR->left = n;

    n->height = 1 + max(height(n->left), height(n->right));
    nR->height = 1 + max(height(nR->left), height(nR->right));

    return nR;
}

template <typename T>
AVLTree<T>::Node* AVLTree<T>::LRRotate(Node* n) {
    n->left = RRRotate(n->left);
    return LLRotate(n);
}

template <typename T>
AVLTree<T>::Node* AVLTree<T>::RLRotate(Node* n) {
    n->right = LLRotate(n->right);
    return RRRotate(n);
}

template <typename T>
AVLTree<T>::Node* AVLTree<T>::balanceTree(Node* n) {
    int bf = getBalance(n);

    if (bf > 1) {
        if (getBalance(n->left) >= 0) {
            n = LLRotate(n);
        } else {
            n = LRRotate(n);
        }
    } else if (bf < -1) {
        if (getBalance(n->right) <= 0) {
            n = RRRotate(n);
        } else {
            n = RLRotate(n);
        }
    }
    return n;
}

template <typename T>
AVLTree<T>::Node* AVLTree<T>::getSuccesor(Node* root) {
    root = root->right;
    while (root->left) {
        root = root->left;
    }

    return root;
}

template <typename T>
AVLTree<T>::AVLTree() {
    this->root = nullptr;
}

template <typename T>
AVLTree<T>::~AVLTree() {
}
