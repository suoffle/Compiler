#include <stdio.h>
#include <stdlib.h>
#include "type.h"
extern int syntax_err;
extern int semantic_err;
extern A_NODE *root;
void initialize();
void print_ast();
void main(int argc, char *argv[])
{
	initialize();
	yyparse();
	if(syntax_err) exit(1);
	print_ast(root);
	semantic_analysis(root);
	if(semantic_err) exit(1);
	print_sem_ast(root);
}
