/* INF01147 -­‐ Compiladores -­‐ 2016/1
 * Trabalho Prático - Etapa 2
 * Autores: Fernando Bombardelli da Silva (218324)
 *          Pedro Henrique Arruda Faustini (217432)
 */

#ifndef __HASH__
#define __HASH__

#define HASH_SIZE 997
#define SYMBOL_LITERAL_INT 1
#define SYMBOL_LITERAL_REAL 2
#define SYMBOL_LITERAL_CHAR 3
#define SYMBOL_LITERAL_STRING 4
#define SYMBOL_IDENTIFIER 7

#define TYPE_INT 11
#define TYPE_REAL 12
#define TYPE_STRING 14
#define TYPE_CHAR 13
#define TYPE_BOOL 15

typedef struct hash_node
{
  char *text;
  int type;
  struct hash_node *next;
  int dataType;
}HASH;

void init_hash();
void print_hash();
int hash_address(char *text);
HASH* get_hash_node(char * text);
HASH* hash_add(int type, char *text);
int hash_update_type(char * text, int t); // Retorna 1 se dataType foi atualizado, 0 se contrário

#endif