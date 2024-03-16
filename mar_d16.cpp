void deleteNode(Node *del_node)
    {
        if(del_node != NULL or del_node->next != NULL)
        {
            Node* temp = del_node->next;
            del_node->data = temp->data;
            del_node->next = temp->next;
            delete(temp);
        }
    } 
