#include "header.h"
#include <stdio.h>

void util(struct s_node *root, int i)
{
	int c;
	printf("%s\n", root->name);
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
		i++;
		c++;
	}
	c = 0;
	while (root->children[c])
	{
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
