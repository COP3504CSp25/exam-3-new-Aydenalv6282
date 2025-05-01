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
        Node* cur_ptr = this->head;
        while(cur_ptr != nullptr){
            revlist.addHead(cur_ptr->data);
            cur_ptr = cur_ptr->next;
        }
        return revlist;
    }

    Node* head = nullptr;
};
