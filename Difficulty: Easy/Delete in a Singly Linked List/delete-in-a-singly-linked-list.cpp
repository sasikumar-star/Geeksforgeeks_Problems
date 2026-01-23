/*
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        // code here
        if(x==1){
            Node* temp=head;
            head=head->next;
            delete(temp);
            return head;
        }
        Node* prev=head;
        int cnt=1;
        while(cnt<x-1){
            prev=prev->next;
            cnt++;
        }
        Node* curr=prev->next;
        prev->next=curr->next;
        return head;
    }
};