// Linked List - Insert Front 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode *head;
} SinglyLinkedList;

DataNode *createDataNode(char *data);
SinglyLinkedList *createSinglyLinkedList();

void traverse(SinglyLinkedList *list);
void insert_last(SinglyLinkedList *list, char *data);
void insert_front(SinglyLinkedList *list, char *data);

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]s", &condition, data);

        if (condition == 'F') {
            insert_front(mylist, data);
        } else if (condition == 'L') {
            insert_last(mylist, data);
        } else if (condition == 'D') {
            ;
        } else {
            printf("Invalid Condition!\n");
        }
    }
    traverse(mylist);


    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}

DataNode *createDataNode(char *data) {
    unsigned int len = strlen(data);
    char *text_new = (char *)malloc(sizeof(char) * (len + 1));
    strcpy(text_new, data);

    DataNode *pNew = (DataNode *)malloc(sizeof(DataNode));
    pNew->data = text_new;
    pNew->next = NULL;

    return pNew;
}

// Create a new SinglyLinkedList
SinglyLinkedList *createSinglyLinkedList() {
    SinglyLinkedList *mylist = (SinglyLinkedList *) malloc(sizeof(SinglyLinkedList));
    mylist->count = 0;
    mylist->head = NULL;

    return mylist;
}

// Traverse the list and print data
void traverse(SinglyLinkedList *list) {
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    struct DataNode *pointer = list->head;
    while (pointer->next != NULL) {
        printf("%s -> ", pointer->data);
        pointer = pointer->next;
    }
    printf("%s\n", pointer->data);
}

// Insert a new node at the end of the list
void insert_last(SinglyLinkedList *list, char *data) {
    struct DataNode *pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode *p = list->head;
        while(p->next != NULL)
            p = p->next;
        p->next = pNew;
    }
    list->count++;
}

void insert_front(SinglyLinkedList *list, char *data) {
    struct DataNode *pNew = createDataNode(data);
    pNew->next  = list->head;
    list->head = pNew;
    list->count++;
}