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

    int* getStats() const{
        //write your function here!
        int* data = new int[3];
        if(head==nullptr){
            data[0] = 0;
            data[1] = 0;
            data[2] = 0;
            return data;
        }
        data[0] = this->head->data;
        data[1] = this->head->data;
        data[2] = this->head->data;
        Node* cur_node = head->next;
        int count = 1;
        while(cur_node!=nullptr){
            if(cur_node->data < data[0]){
                data[0] = cur_node->data;
            }
            if(cur_node->data > data[1]){
                data[1] = cur_node->data;
            }
            data[2] += cur_node->data;
            cur_node = cur_node->next;
            count++;
        }
        data[2] /= count;
        return data;
    }
    

private:
    Node* head = nullptr;
};
