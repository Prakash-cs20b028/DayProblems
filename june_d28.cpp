bool areIdentical(struct Node *head1, struct Node *head2) {
    
    while(head1 != NULL and head2 != NULL)
    {
        if(head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if((head1 == nullptr and head2 != nullptr) or (head2 == nullptr and head1 != nullptr))
    {
        return false;
    }
    
    return true;
} 
