typedef struct no *Lista;
Lista cria_lista();
int lista_vazia(Lista *lst);
int insere_final(Lista *lst, int elem);
int remove_inicio(Lista *lst, int *elem);
int insere_inicio(Lista *lst, int elem);
int tamanho(Lista *lst);
int insere_pos(Lista *lst, int index, int elem);
int remove_pos(Lista *lst, int index, int *elem);