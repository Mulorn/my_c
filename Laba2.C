#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node
{
	char a[50];
	struct Node * next;
} Node;

Node * create()
{
	Node *one;
	char str[50] = {0};
	one = malloc(sizeof(Node));
	if (one == NULL){
		return NULL;
	}
	printf("Vvedite perviy element spiska \n");
	scanf("%s", str);
	if (_countof(str) == NULL){
		return NULL;
	}
	memcpy(one->a, str, _countof(str));
	one->next = NULL;
	return one;
}

int add(Node *s)
{
	char str[50] = {0};
	printf("Vvedite element \n");
	scanf("%s", str);
	if (_countof(str) == NULL){
		return 1;
	}
	t(str, _countof(str), s);
	return 0;
}

int t(char * data, int size, Node *s)
{
	Node *tmp = (Node*)malloc(sizeof(Node));

	memcpy(tmp->a, data, size);

	tmp->next = NULL;

	Node *p = s;

	while (p->next != NULL)
		p = p->next;

	p->next = tmp;

	return 0;
}

void print(Node *s)
{

	Node *tmp = s;
	while (tmp != NULL){
		printf("\n %s \n", tmp->a);
		tmp = tmp->next;
	}
}

void del_list(Node **s)
{
	Node* tmp;
	tmp = *s;
	while (tmp != NULL){
		void * next = tmp->next;

		free(tmp);

		tmp = next;
	}
	*s = NULL;
}

void del_one(Node **s) {
	if (*s == NULL){
		return;
	}
	Node *p = *s;

	if (p->next == NULL){
		free(p);
		*s = NULL;
		return;

	}

	Node * next = p->next;

	while (next->next != NULL)
	{
		p = next;
		next = p->next;
	}
	free(next);
	p -> next = NULL;
}

int search(Node *s, char * str, int size)
{

	int y=1;
	Node *tmp = s;
	while (tmp!= NULL){
		if (memcmp(tmp->a, str, size)==0){
			return y;
		}
		y++;
		tmp = tmp->next;
	}
	return 0;
}

void mainmenu()
{
	system("cls");

	printf("Najmite 1 4tobi sozdat' spisok\n");

	printf("Najmite 2 4tobi dobavit' noviy element v konec spiska \n");

	printf("Najmite 3 4tobi udalit' element iz konca spiska\n");

	printf("Najmite 4 4tobi posmotret' spisok\n");

	printf("Najmite 5 4tobi udalit' spisok\n");

	printf("Najmite 6 4tobi nayti element v spiske\n");

	printf("Najmite 7 4tobi viyti \n \n");
}

int main()
{
	Node * s;
	s = NULL;
	int n, o = 42;
	{
		while (o != 0){
			mainmenu();
			int res = scanf_s("%d", &n);

			if (res != 1){
				fflush(stdin);
				n = 0;
			}

			switch (n)
			{
			case 1:
				s = create();
				if (s == NULL){
					printf("Error! \n");
					break;
				}
				printf("\n Spisok sozdan \n"); system("pause");

				break;

			case 2:
				if (s == NULL){
					printf("Error! \n");
					system("pause");
					break;
				}
				int resadd = add(s);
				if (resadd == 1){
					printf("Error! \n");
					system("pause");
					break;
				}
				system("pause");  break;

			case 3:
				if (s == NULL){
					printf("Error! \n");
					system("pause");
					break;
				}
				del_one(&s); printf("udaleno \n"); system("pause"); break;

			case 4:
				if (s == NULL){
					printf("Error! \n");
					system("pause");
					break;
				}
				print(s); system("pause"); break;

			case 5:
				if (s == NULL){
					printf("Error! \n");
					system("pause");
					break;
				}
				del_list(&s);
				printf("udaleno \n");
				system("pause");
				break;

			case 6:
				if (s == NULL){
					printf("Error! \n");
					system("pause");
					break;
				}
				char str[50] = {0};
				printf("Vvedite element \n");
				scanf("%s", str);
				int pos = search(s, str, _countof(str));
				if (pos != 0)
					printf(" Nomer elementa: %d \n", pos);
				else
					printf("Not find \n");
				system("pause");
				break;

			case 7:
				exit(0); break;
			}
		}
	}

	system("pause");
	return 0;
}
