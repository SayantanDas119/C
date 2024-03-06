#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

void insert_at_nth_position(struct ListNode** head, int data, int position) {
    struct ListNode* new_node = (struct ListNode*)malloc(sizeof(struct ListNode));
    new_node->data = data;
    new_node->next = (position == 1 || *head == NULL) ? *head : insert_at_nth_position(&((*head)->next), data, position - 1);
    *head = new_node;
}

void print_linked_list(struct ListNode* head) {
    for (; head != NULL; head = head->next)
        printf("%d -> ", head->data);
    printf("NULL\n");
}

int main() {
    struct ListNode* head = NULL;
    for (int i = 4; i >= 1; --i)
        insert_at_nth_position(&head, i, 1);

    printf("Original Linked List:\n");
    print_linked_list(head);

    insert_at_nth_position(&head, 5, 3);

    printf("Linked List after inserting node:\n");
    print_linked_list(head);

    return 0;
}

