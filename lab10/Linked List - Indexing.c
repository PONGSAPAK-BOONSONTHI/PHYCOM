// Linked List - Indexing 
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

void insert_last(SinglyLinkedList *list, char *data);
void traverse(SinglyLinkedList *list, int index);

int main() {
    SinglyLinkedList *mylist = createSinglyLinkedList();

    while (1) {
        char *data = (char*) malloc(sizeof(char) * 100);
        scanf("%s", data);

        if (strcmp(data, "Last") == 0) {
            break;
        }

        insert_last(mylist, data);
    }

    int index;
    scanf("%d", &index);
    traverse(mylist, index);   
}

DataNode *createDataNode(char *data) {
    unsigned int lenData = strlen(data);
    char *text_new = (char*) malloc(sizeof(char) * (lenData + 1));
    strcpy(text_new, data);

    DataNode *pNew = (DataNode*) malloc(sizeof(DataNode));
    pNew->data = text_new;
    pNew->next = NULL;

    return pNew;
}

SinglyLinkedList *createSinglyLinkedList() {
    SinglyLinkedList *mylist = (SinglyLinkedList*) malloc(sizeof(SinglyLinkedList));
    mylist->count = 0;
    mylist->head = NULL;
    return mylist;
}

void insert_last(SinglyLinkedList *list, char *data) {
    DataNode *pNew = createDataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode *p = list->head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = pNew;
    }
    list->count++;
}

void traverse(SinglyLinkedList *list, int index) {
    if (index < 0) {
        index = (int) list->count + index;
    }

    if (index < 0 || index >= (int) list->count) {
        printf("Error");
        return;
    }

    DataNode *pointer = list->head;
    for (int i = 0; i < index; i++) {
        pointer = pointer->next;
    }
    printf("%s", pointer->data);
}