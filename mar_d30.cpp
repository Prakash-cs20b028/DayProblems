int fun(Node* root)
    {
        if(root->left == NULL)
        {
            return root->data;
        }
        else
        {
            return fun(root->left);
        }
    }
    int minValue(Node* root) {
        if(root == nullptr)
        {
            return -1;
        }
        return fun(root);
    } 
