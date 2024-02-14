void insert(Node<int> *&head, Node<int> *&tail, int val){
    Node<int> *newnode = new Node(val);
    if(head == NULL){
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
Node<int>* sortTwoLists(Node<int>* first, Node<int>* second){
    Node<int> * head = NULL, *tail = NULL;
    while(first && second){
        if(first->data > second->data){
            insert(head,tail,second->data);
            second = second-> next;
        }
        else{
            insert(head,tail,first->data);
            first = first->next;
        }
    }    
    while(first){
        insert(head,tail,first->data);
        first = first->next;
    }
    while(second){
        insert(head,tail,second->data);
        second = second-> next;
    }
    return head;
}
