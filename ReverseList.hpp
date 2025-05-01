#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        LinkedList revlist;
        if(this->head==nullptr){
            return revlist;
        }
        if(this->head->next == nullptr){
            revlist.addHead(this->head->data);
            return revlist;
        }

        int size = 0;
        Node* cur_ptr = this->head;
        while(cur_ptr != nullptr){
            size += 1;
            cur_ptr = cur_ptr->next;
        }
        for(int i=0; i<size; i++){
            Node* cur_ptr = this->head;
            for(int j=i+1; j<size; j++){
                cur_ptr = cur_ptr->next;
            }
            revlist.addHead(cur_ptr->data);
        }
        return revlist;
    }

    Node* head = nullptr;
};
