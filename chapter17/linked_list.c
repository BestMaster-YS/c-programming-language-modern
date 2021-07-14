/**
 * 链表
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
};

typedef struct {
    int value;
    // Node *next;
} Node;

struct node *add_to_list_head(struct node *list, int n);
void add_to_list_headV2(struct node **list, int n);
struct node *read_numbers(void);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);

int main() {
    struct node *first = NULL;
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    new_node->value = 10;
    printf("%d\n", new_node->value);
    printf("%d\n", &new_node->value);
    return 0;
}

struct node *add_to_list_head(struct node *list, int n) {
    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    if (new_node == NULL) {
        exit(EXIT_FAILURE);
    }

    new_node->value = n;
    new_node->next = list;
    return new_node;
}

struct node *read_numbers(void) {
    struct node *first = NULL;
    int n;
    printf("Enter a series of integers (0 to terminate);");
    for(;;) {
        scanf("%d", &n);
        if (n == 0)
            return first;
        first = add_to_list_head(first, n);
    }

}

struct node *search_list(struct node *list, int n) {
    struct node *p;
    for (p = list; p != NULL; p = p->next) {
        if (p->value == n)
            return p;
    }
    return NULL;
}

struct node *delete_from_list(struct node *list, int n) {
    struct node *cur, *prev;

    for (cur = list, prev = NULL;
        cur != NULL && cur->value != n;
        prev = cur, cur = cur->next)
        ;
    
    if (cur == NULL) {
        return list;
    }

    if (prev == NULL)
        list = list->next;
    else
        prev->next = cur->next;
    free(cur);
    return list;
}

void add_to_list_headV2(struct node **list, int n) {
    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list_headV2\n");
        return;
    }

    new_node->value = n;
    new_node->next = *list;
    *list = new_node;
}
