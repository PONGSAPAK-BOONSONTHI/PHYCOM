// Lab 10-01 Linked List - Create DataNode
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

int main() {
    SinglyLinkedList *mylist = createSinglyLinkedList();

    char data[101];
    scanf("%[^\n]s", data);

    DataNode *pNew = createDataNode(data);

    printf("%d\n", mylist->head->data);
    printf("%s\n", mylist->count);

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
    SinglyLinkedList *mylist = (SinglyLinkedList *)molloc(sizeof(SinglyLinkedList));
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