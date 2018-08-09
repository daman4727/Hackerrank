#include <stdio.h>

typedef struct list
{
    int data;
    struct list *next;
} node;

static node *list_merge(node *x, node *y)
{
    if (x == 0)
        return y;
    if (y == 0)
        return x;
    node *z = x;
    node *t = x;
    x = x->next;
    while (y != 0 && x != 0)
    {
        t->next = y;
        y = y->next;
        t = t->next;
        t->next = x;
        x = x->next;
        t = t->next;
    }
    if (y != 0)
        t->next = y;
    else if (x != 0)
        t->next = x;
    else
        t->next = 0;
    return z;
}

static void dump_list(char const *tag, node *list)
{
    printf("%s:", tag);
    while (list != 0)
    {
        printf(" -> %d", list->data);
        list = list->next;
    }
    putchar('\n');
}

int main(void)
{
    node list[10] =
    {
        { 1,  &list[1] },
        { 5,  &list[2] },
        { 6,  &list[3] },
        { 3,  &list[4] },
        { 10, &list[5] },
        { 11,       0  },
        {  2, &list[7] },
        {  8, &list[8] },
        {  4, &list[9] },
        {  9,       0  },
    };
    node *x = &list[0];
    dump_list("x", x);
    node *y = &list[6];
    dump_list("y", y);

    node *z = list_merge(x, y);
    dump_list("z", z);
}
