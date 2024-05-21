#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    
    Node(){
        data = 0;
        next = NULL;
    }
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

Node* convertToLL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

int lengthOfLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

bool checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << '\n';
}

int main()
{
    vector<int> arr = {2,3,5,4,7};
    Node* head = convertToLL(arr);
    printLL(head);
    cout << "Length of the Linked List: " << lengthOfLL(head) << '\n';
    cout << "Is value present? " << checkIfPresent(head, 6) << '\n';
    return 0;
}