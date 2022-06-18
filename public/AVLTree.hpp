template <typename T>
class AVLTree {
   private:
    class Node {
       public:
        T data;
        int key;
        int height;
        Node *left;
        Node *right;
        Node(T data, int key) {
            this->key = key;
            this->data = data;
            this->height = 0;
            this->left = this->right = NULL;
        }
    };

    // Root of tree
    Node *root;

    // Utility functions

    int height(Node *node);
    int getBalance(Node *node);
    Node *getSuccesor(Node *node);

    Node *LLRotate(Node *node);
    Node *RRRotate(Node *node);
    Node *LRRotate(Node *node);
    Node *RLRotate(Node *node);
    Node *balanceTree(Node *node);

    Node *insertNode(int key, T data);
    Node *deleteNode(int key);

   public:
    AVLTree();
    ~AVLTree();
    void insertKey(int key, T data);
    T deleteKey(int);
    int min();
    int max();
    int floor(int key);
    int ceil(int key);
    void deleteMin();
    void deleteNode(int key);
};