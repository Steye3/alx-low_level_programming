#include <stdio.h>
#include "list.h"

size_t print_list(const list_t *h)
{

	size_t count = 0;


	while (h != NULL ){
		if (h->str == NULL){
			printf("[0] (nil)\n");

		}else{
			printf("%s\n", h->str);
		}

		count++;
		h = h->next;
	}

	return count;
}

