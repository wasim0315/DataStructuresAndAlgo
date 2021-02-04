//https://www.hackerrank.com/challenges/tree-preorder-traversal/problem




/* you only have to complete the function given below.  
Node is defined as  

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    void preOrder(Node *root) {

        if(root!=NULL)
        {
            printf("%d ",root->data);
            preOrder(root->left);
            preOrder(root->right);
        }

    }

