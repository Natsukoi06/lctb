#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node
{
    char hoten[50];
    int tuoi;
    double diemtb;
    struct Node *next;
} Node;

typedef struct
{
    Node *first;
    Node *last;
} Linkedlist;

Node *previous_node = NULL; // Khai báo biến toàn cục

Linkedlist* create_linked_list()
{
    Linkedlist *list = (Linkedlist*)malloc(sizeof(Linkedlist));
    list->first = NULL;
    list->last = NULL;
    return list;
}

Node *create_node(char hoten[], int tuoi, double diemtb)
{
    Node *node = (Node*)malloc(sizeof(Node));
    strcpy(node->hoten, hoten);
    node->tuoi = tuoi;
    node->diemtb = diemtb;
    node->next = NULL;
    return node;
}

void insert_node(Linkedlist *list, char hoten[], int tuoi, double diemtb)
{
    Node *node = create_node(hoten, tuoi, diemtb);

    if(list->first == NULL)
    {
        list->first = node;
        list->last = node;
    }
    else
    {
        list->last->next = node;
        list->last = node;
    }
}
void insert_before(Linkedlist *list, char *target_name, char hoten[], int tuoi, double diemtb)
{
    Node *current = list->first;
    Node *prev = NULL;

    while(current != NULL)
    {
        if(strcmp(current->hoten, target_name) == 0)
        {
            Node *new_node = create_node(hoten, tuoi, diemtb);

            if(prev == NULL)
            {
                new_node->next = list->first;
                list->first = new_node;
            }
            else
            {
                prev->next = new_node;
                new_node->next = current;
            }
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("Khong tim thay sinh vien %s\n", target_name);
}

Node *search_node(Linkedlist *list, char *key)
{
    previous_node = NULL;
    Node *node = list->first;
    while(node != NULL)
    {
        if(strcmp(node->hoten, key) == 0)
        {
            return node;
        }
        previous_node = node;
        node = node->next;
    }
    return NULL;
}

void delete_hoten(Linkedlist *list, char *key)
{
    Node *found = search_node(list, key);
    if(found != NULL)
    {
        if(list->first == found)
        {
            list->first = found->next;
            if(list->first == NULL)
            {
                list->last = NULL;
            }
        }
        else if(list->last == found)
        {
            previous_node->next = NULL;
            list->last = previous_node;
        }
        else
        {
            previous_node->next = found->next;
        }
        free(found);
    }
}

void inDanhsach(Linkedlist *list)
{
    Node *node = list->first;
    int res = 1;
    printf("\t\tDANH SACH SINH VIEN\n");
    printf("%-5s %-25s %-10s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    while(node != NULL)
    {
        printf("%-5d %-25s %-10d %-10.2lf\n", res, node->hoten, node->tuoi, node->diemtb);
        res++;
        node = node->next;
    }
}

int main()
{
    Linkedlist *list = create_linked_list();
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    char hoten[50];
    char hoten_target[50];
    int tuoi;
    double diemtb;


    for(int i = 0; i < n; i++)
    {
        printf("\nSinh vien thu %d\n", i+1);
        printf("Ho ten: ");
        fgets(hoten, sizeof(hoten), stdin);
        hoten[strcspn(hoten, "\n")] = '\0';
        printf("Nhap tuoi: ");
        scanf("%d", &tuoi);
        printf("Nhap diem TB: ");
        scanf("%lf", &diemtb);
        getchar();
        insert_node(list, hoten, tuoi, diemtb);
    }

    inDanhsach(list);

    int luachon;
    do
    {
        printf("\n0: Ket thuc\n");
        printf("1: Chen them sinh vien\n");
        printf("2: Xoa sinh vien\n");
        printf("Nhap lua chon: ");
        scanf("%d", &luachon);
        getchar();

        switch(luachon)
        {
        case 1:
        {
            printf("\nNhap ten sinh vien truoc do can chen: ");
            fgets(hoten_target, sizeof(hoten_target), stdin);
            hoten_target[strcspn(hoten_target, "\n")] = '\0';

            printf("Ho ten: ");
            fgets(hoten, sizeof(hoten), stdin);
            hoten[strcspn(hoten, "\n")] = '\0';
            printf("Nhap tuoi: ");
            scanf("%d", &tuoi);
            printf("Nhap diem TB: ");
            scanf("%lf", &diemtb);
            getchar();

            insert_before(list, hoten_target, hoten, tuoi, diemtb);
            inDanhsach(list);
            break;
        }
        case 2:
        {
            printf("\nNhap ten sinh vien can xoa: ");
            fgets(hoten, sizeof(hoten), stdin);
            hoten[strcspn(hoten, "\n")] = '\0';
            delete_hoten(list, hoten);
            inDanhsach(list);
            break;
        }
        case 0:
            printf("Ket thuc chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    }
    while(luachon != 0);

    free(list);
    return 0;
}
