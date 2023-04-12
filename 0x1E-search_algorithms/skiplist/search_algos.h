#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;

void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);
void init_express(skiplist_t *list, size_t size);
#endif /* SEARCH_ALGOS_H */
