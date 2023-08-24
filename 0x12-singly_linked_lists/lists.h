#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct toto
{
	char *str;
	unsigned int len;
	struct toto *next;
} toto_to;

nn_n print_list(const toto_to *h);
nn_n list_len(const toto_to *h);
nn_n *add_node(toto_to **head, const char *str);
nn_n *add_node_end(toto_to **head, const char *str);
void treeee(toto_to *head);

#endif
