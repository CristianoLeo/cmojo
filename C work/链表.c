#include <stdio.h>
#include <malloc.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

typedef struct Node *Linklist;

void Creat(Linklist* head) {
    *head = (Linklist)malloc(sizeof(Node));
    (*head)->next = NULL;
}

void Add(Linklist *linklist, int newData) {
    Linklist newNode = (Linklist) malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = NULL;
    if(*linklist == NULL) {
        *linklist = newNode;
    } else {
        Linklist p = *linklist;
//        while(p->next) {
//            p = p->next;
//        }
//        p->next = newNode;
        newNode->next = p->next;
        p->next = newNode;
    }
}

void print(Linklist linklist) {
    linklist = linklist->next;
    while(linklist) {
        printf("%d\n", linklist->data);
        linklist = linklist->next;
    }
}



int main() {
    Linklist linklist = NULL;
    Creat(&linklist);
    int n = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &n);
        Add(&linklist, n);
    }
    print(linklist);
    return 0;
}