#include "header.h"
#include <stdio.h>

void util(struct s_node *root, int i)
{
	int c;
	if (i == 0) //if root
		printf("%s\n", root->name);
	i++;
	c = 0;
	while(root->children[c])
	{
		int b = 0;
		while (b < i)
		{
			b++;
			printf("\t");
		}
		printf("%s\n", root->children[c]->name);
		util(root->children[c], i);
		c++;
	}
}

struct s_node *findParent(struct s_node *root, char *firstSpecies, char *secondSpecies)
{
	util(root, 0);
	firstSpecies = NULL;
	secondSpecies = NULL;
	return NULL;
}
