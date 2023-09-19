#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
   
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }
        current = current->next;
    }

    if (list1 != nullptr) {
        current->next = list1;
    } else {
        current->next = list2;
    }
    ListNode* mergedList = dummy->next;
    delete dummy;

    return mergedList;
}
void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);
    ListNode* mergedList = mergeTwoLists(list1, list2);
    printList(mergedList);
    delete list1;
    delete list2;


    return 0;
}
