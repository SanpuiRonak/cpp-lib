#include "../public/UnionFind.hpp"

UnionFind::UnionFind(int size) {
    id.resize(size);

    for (int i = 0; i < (int)id.size(); i++) {
        id[i] = i;
    }
    sz.resize(size, 1);
}

int UnionFind::getRoot(int i) {

    while (i != id[i]) {
        id[i] = id[id[i]];
        i = id[i];
    }
    return i;
}

bool UnionFind::isConnected(int id1, int id2) {
    return getRoot(id1) == getRoot(id2);
}

void UnionFind::Union(int id1, int id2){
    int i = getRoot(id1);
    int j = getRoot(id2);

    if(i == j) return;

    if(sz[i] < sz[j]){
        id[i]=j;
        sz[j]+=sz[i];
    }
    else{
        id[j]=i;
        sz[i]+=sz[j];
    }
}