#include <iostream>
using namespace std ;
#include <unordered_set>

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Function to find elements from three linked lists that sum up to the target
void findSumElements(Node* list1, Node* list2, Node* list3, int target) {
    unordered_set<int> values1;
    Node* current1 = list1;

    while (current1 != nullptr) {
        values1.insert(current1->data);
        current1 = current1->next;
    }

    Node* current2 = list2;
    Node* current3 = list3;

    while (current2 != nullptr) {
        while (current3 != nullptr) {
            int diff = target - (current2->data + current3->data);
            if (values1.find(diff) != values1.end()) {
                cout << diff << " " << current2->data << " " << current3->data << std::endl;
                return;
            }
            current3 = current3->next;
        }
        current2 = current2->next;
        current3 = list3;  // Reset the pointer to the beginning of list3
    }
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    Node* list1 = nullptr;
    Node* list2 = nullptr;
    Node* list3 = nullptr;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        Node* newNode = new Node(data);
        newNode->next = list1;
        list1 = newNode;
    }

    for (int i = 0; i < m; i++) {
        int data;
        cin >> data;
        Node* newNode = new Node(data);
        newNode->next = list2;
        list2 = newNode;
    }

    for (int i = 0; i < k; i++) {
        int data;
        cin >> data;
        Node* newNode = new Node(data);
        newNode->next = list3;
        list3 = newNode;
    }

    int target; cin >> target;

    findSumElements(list1, list2, list3, target);

return 0;
     }

