//
// Created by atmadeep on 12/11/17.
//

#include <iostream>
using namespace std;
struct Bin_Tree{
    int item;
    Bin_Tree *left;
    Bin_Tree *right;
};
typedef struct Bin_Tree node;

void insert(node ** tree, int val)
{
    node *temp = NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->item = val;
        *tree = temp;
        return;
    }

    if(val < (*tree)->item)
    {
        insert(&(*tree)->left, val);
    }
    else if(val > (*tree)->item)
    {
        insert(&(*tree)->right, val);
    }

}

void preorder(node* tree){
if(tree){
    printf("%d\t",tree->item);
    preorder(tree->left);
    preorder(tree->right);
}
}
void inorder(node *tree){
    if(tree){
        inorder(tree->left);
        printf("%d\t",tree->item);
        inorder(tree->right);
    }
}
void postorder(node *tree){
    if(tree){
        postorder(tree->left);
        postorder(tree->right);
        printf("%d\t",tree->item);
    }
}
void del_tree(node *tree){
    if(tree){
        del_tree(tree->left);
        del_tree(tree->right);
        free(tree);
    }
}

node* search (node **tree,int data){
    node* temp;
    if(data == (*tree)->item);
    return *tree;
    if(!(*tree)){
        return nullptr;
    }
    if(data < (*tree)->item) {
        temp=search(&(*tree)->left,data);
    }
    if(data > (*tree)->item) {
        temp= search(&(*tree)->right,data);
    }
    return temp;
}
int main(){
    node *root;
    node *tmp;
    //int i;

    root = NULL;
    /* Inserting nodes into tree */
    for (int i = 0; i <5 ; ++i) {
        insert(&root,random()%100);
    }


    /* Printing nodes of tree */
    printf("\nPre Order Display\n");
    preorder(root);

    printf("\nIn Order Display\n");
    inorder(root);

    printf("\nPost Order Display\n");
    postorder(root);

    /* Search node into tree
    tmp = search(&root, 4);
    if (tmp)
    {
        printf("Searched node=%d\n", tmp->item);
    }
    else
    {
        printf("Data Not found in tree.\n");
    }

     Deleting all nodes of tree */
    del_tree(root);
}