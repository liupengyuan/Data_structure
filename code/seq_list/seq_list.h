#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define OVERFLOW -2

#define INIT_SIZE 100
#define INCREMENT 50

typedef int Status;
typedef int Elem_type;

typedef struct seq_list
{
	Elem_type * elem;
	int length;
	int size;
}seq_list;

Status init_sq(seq_list *);
Status destory_sq(seq_list *);
Status clear_sq(seq_list *);
Status is_empty_sq(seq_list);
int length_sq(seq_list);
Status get_elem_sq(seq_list, int, Elem_type *);
int Locate_elem_sq(seq_list, Elem_type);
Status insert_sq(seq_list *, int, Elem_type);
Status delete_sq(seq_list *, int, Elem_type *);
Status prior_sq(seq_list, Elem_type, Elem_type *);
Status next_sq(seq_list, Elem_type, Elem_type *);
Status traverse(seq_list, Status (*visit)(Elem_type));
Status print(Elem_type);
