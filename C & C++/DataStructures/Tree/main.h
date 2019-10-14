//
// Created by Sefa on 5.05.2019.
//

#ifndef PATATES_MAIN_H
#define PATATES_MAIN_H


#include <iostream>

using namespace std;

struct BTree {
    int data;
    BTree *right;
    BTree *left;
};

BTree *newNode(int data) {
    BTree *node = new BTree();
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

BTree *insert(BTree *root, int data) {
    if (root == NULL) {
        root = newNode(data);
    } else if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

bool search(BTree *root, int data) {
    if (root == NULL) {
        return false;
    } else if (root->data == data) {
        return true;
    } else if (root->data <= data) {
        return search(root->right, data);
    } else {
        return search(root->left, data);
    }
}
void treverseLDR (BTree * root){
    if(root == NULL){
        root = newNode(0);
    }
    else{
        treverseLDR(root->left);
        cout<<root->data<<endl;
        treverseLDR(root->right);
    }

}
void treverseDLR(BTree * root){
    if (root == NULL) {
        root = newNode(0);
    }
    else{
        cout<<root->data<<endl;
        treverseDLR(root->left);
        treverseDLR(root->right);
    }
}

void treverseLRD(BTree * root){
    if(root == NULL){
        root = newNode(0);
    }
    else{
        treverseDLR(root->left);
        treverseDLR(root->right);
        cout << root->data<<endl;
    }
}
bool findInTree(BTree *root, int key){
    while(root!=NULL){
        if(root->data == key){
            return true;

        }
        else if (root->data <= key){
            root = root->left;
        }
        else{
            root = root->right;
        }

    }
    return false;
}
int tree_depth(BTree * root){
    int left,right;

    if(root == NULL){
        return 0;
    }
    left=tree_depth(root->left);
    right=tree_depth(root->right);

    return left>right ? left+1: right+1;
}

int tree_remove(BTree *root,int key){

    

    if(n!=NULL){

    }

}






#endif //PATATES_MAIN_H
