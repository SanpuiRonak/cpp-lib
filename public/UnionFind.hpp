#pragma once
#include <vector>

class UnionFind{
private:
    std::vector<int> id;
    std::vector<int> sz;
    int getRoot (int i);
public:
    UnionFind(int size);
    bool isConnected(int id1,int id2);
    void Union(int id1, int id2);

};


