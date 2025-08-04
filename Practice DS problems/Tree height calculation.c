#include<stdio.h>
#include<stdlib.h>

typedef struct node {
int value;
struct node*left;
struct node*right;
}str;

str * createnode(int data){
    str*node=(str*)malloc(sizeof(str));
    node->value=data;
    node->left=node->right=NULL;
    return node;
}
 
//Create function for BST
str* createBST(str *root,int key){
    if(root==NULL){
        return createnode(key);
    }
    if(key<root->value){
        root->left=createBST(root->left,key);
    }else if(key>root->value){
        root->right=createBST(root->right,key);
    }
    return root;
}

//function to calculate height of the tree
int getHeight(str*root){
    if(root==0){
        return -1;
    }
    int leftHeight=getHeight(root->left);
    int rightHeight=getHeight(root->right);

    //compare maximum height
    if(leftHeight>rightHeight){
        return leftHeight+1;
    }else{
        return rightHeight+1;
    }
}

int main(){
int n;//number of nodes in the tree
printf("Enter number of node:");
scanf("%d",&n);
int data,height;
str *root=0;

printf("Enter node value:");
for(int i=0;i<n;i++){
scanf("%d",&data);
root=createBST(root,data);
}

height=getHeight(root);
printf("%d\n",height);

return 0;
}