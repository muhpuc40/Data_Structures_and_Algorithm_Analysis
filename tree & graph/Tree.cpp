
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left,*right;
};

typedef struct node Node;

Node *create_node(int val)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

void preorder(Node *root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node *root)
{
    if(root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

void inorder(Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

int calculate_height(Node *root)
{
    int left_h,right_h,max_h;
    if(root == NULL)
        return 0;
    else
    {
        left_h = calculate_height(root->left);
        right_h = calculate_height(root->right);
        if(left_h >= right_h)
            return left_h+1;
        else
            return right_h+1;
    }
}

int calculate_node(Node *root)
{

    int left_h,right_h,max_h,total=0;
    if(root == NULL)
        return 0;
    else
    {
        left_h = calculate_node(root->left);
        right_h = calculate_node(root->right);
        total += left_h+right_h+1;
    }
}

bool check_full_binary_tree(Node *root)
{
    if(root == NULL)
        return true;
    if(root->left == NULL && root->right == NULL)
        return true;
    if(root->left && root->right)
        return check_full_binary_tree(root->left) && check_full_binary_tree(root->right);

    return false;
}

Node *construct_BST(Node *root,int val)
{
    if(root == NULL)
        return create_node(val);
    else if(val < root->data)
        root->left = construct_BST(root->left,val);
    else
        root->right = construct_BST(root->right,val);

    return root;
}

bool search_val(Node *root, int val)
{
    if(root == NULL)
        return false;
    else if(root->data == val)
        return true;
    else if(val < root->data)
        return search_val(root->left,val);
    else if(val > root->data)
        return search_val(root->right,val);
}
int main()
{
    Node *root = NULL;
    root = construct_BST(root,10);
    root = construct_BST(root,12);
    root = construct_BST(root,8);
    root = construct_BST(root,6);
    root = construct_BST(root,9);
    /*
    Node *root = create_node(1);
    root->left = create_node(2);
    root->right = create_node(3);
    root->left->left = create_node(4);
    root->left->right = create_node(5);*/

    cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder Traversal: ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal: ";
    postorder(root);
    cout<<endl;

    cout<<"Height Of The Tree: "<<calculate_height(root)-1<<endl;
    cout<<"Total Node Of The Tree: "<<calculate_node(root)<<endl;

    if(check_full_binary_tree(root))
        cout<<"Full Binary Tree!"<<endl;
    else
        cout<<"Not Full Binary Tree!"<<endl;

    bool chkvl = search_val(root,120);
    if(chkvl)
        cout<<"Value Found"<<endl;
    else
        cout<<"Not Found!";
}
