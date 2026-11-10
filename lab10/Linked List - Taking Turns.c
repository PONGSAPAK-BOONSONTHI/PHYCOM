// Linked List - Taking Turns
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

void append(struct Node **head, struct Node **tail, int value) {
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = value;
    n->next = NULL;
    n->prev = *tail;
    if (*head == NULL) *head = n;
    else (*tail)->next = n;
    *tail = n;
}

void traverse(struct Node *head) {
    for (struct Node *p = head; p != NULL; p = p->next) {
        printf("%d", p->data);
        if (p->next != NULL) printf(" -> ");
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    struct Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        append(&head, &tail, x);
    }

    struct Node *nhead = NULL, *ntail = NULL;
    struct Node *front = head;
    struct Node *back = tail;
    int remaining = n;

    if (remaining > 0) {
        append(&nhead, &ntail, back->data);
        back = back->prev;
        remaining--;
    }

    int fromFront = 1;
    while (remaining > 0) {
        for (int k = 0; k < 2 && remaining > 0; k++) {
            if (fromFront) {
                append(&nhead, &ntail, front->data);
                front = front->next;
            } else {
                append(&nhead, &ntail, back->data);
                back = back->prev;
            }
            remaining--;
        }
        fromFront = !fromFront;
    }
    traverse(nhead);
    return 0;
}