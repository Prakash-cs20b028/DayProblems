 
Node *head,*root1;
    bool flag = true;
    
    void fun(int val)
    {
        Node* t=new Node(val);
        if(flag)
        {
            root1 = t;
            head = root1;
            flag = false;
        }
        else
        {
            root1->right = t;
            root1 = root1->right;
        }
        
    }
    void Inorder(Node* root)
    {
        if(root != NULL)
        {
            Inorder(root->left);
            fun(root->data);
            Inorder(root->right);
        }
    }
    Node *flattenBST(Node *root)
    {
        Inorder(root);
        return head;
    }