#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorderPrint(struct Node *root)
{
    if (root == NULL)
        return;
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}

void postorder(struct Node *root)
{
    if (root == NULL)
        return;
    postorder(  );
    postorder(root->right);
    cout << root->data << " ";
}
// maximum node at level L is 2^L
// maximun nodes in tree of height H is 2^H-1
// for N nodes minimun possible height is log2(N+1)


// int search(int inorder[],int start,int end,int curr){
//     for (int i = start; i < end; i++)
//     {
//         if(inorder[i] == curr){
//             return i;
//         }
//     }
    
// }

// Node* buildTree(int preorder[], int inorder[], int start, int end)
// {
//     if(start > end) return NULL;

//     static int idx = 0;
//     int curr = preorder[idx];
//     idx++;
//     Node* node = new Node(curr);

//     if(start == end) return node;

//     int pos = search(inorder,start,end,curr);
//     node->left = buildTree(preorder,inorder,start,pos-1);
//     node->right = buildTree(preorder,inorder,pos+1,end);

//     return node;
// }

int main()
{

    /*
    
             1
            / \
           2   3
          / \ / \
         4  5 6  7
    */

    
    struct Node* root= new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // preorder(root);
    cout<<endl;
    // inorder(root);
    // cout<<endl;
    postorder(root);


    // int preorder[] = {1, 2, 4, 3, 5};
    // int inorder[] = {4, 2, 1, 5, 3};

    // Node* root = buildTree(preorder,inorder,0,4);
    // inorderPrint(root); 
}