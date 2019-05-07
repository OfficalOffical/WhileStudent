#include "main.h"

int main(){

    BTree * root = NULL;
    root = insert(root, 60);
    root = insert(root, 50);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 80);
    root = insert(root, 90);
    root = insert(root, 30);

    cout<<tree_depth(root)<<endl;
}
