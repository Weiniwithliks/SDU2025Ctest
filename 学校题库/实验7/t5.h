#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ContactTag
{
    int id;
    char use;
    char name[15];
    char phone[16];
    char email[32];
    int birth_date;
    char address[56];
};
typedef struct ContactTag Contact;

struct AddressBookTag
{
    int capacity;
    int size;
    Contact *contacts;
};
typedef struct AddressBookTag AddressBook;

int address_book_init(AddressBook *book, int n)
{
    if (n < 0)
        return -1; //
    else
    {
        book->contacts = (Contact *)malloc(sizeof(Contact) * n);
        if (book->contacts == NULL)
            return -2;
        else
        {
            book->capacity = n;
            book->size = 0;
            // 下面所有联系人的状态设为空闲
            int i;
            for (i = 0; i < n; i++)
            {
                book->contacts[i].id = i;
                book->contacts[i].use = 0;
            }
            return 0;
        }
    }
}

void address_book_free(AddressBook *book)
{
    free(book->contacts);
    book->contacts = NULL;
    book->capacity = book->size = 0;
}

void address_book_print(const AddressBook *book)
{
    printf("capacity=%d,size=%d\n", book->capacity, book->size);
    printf("id,use,name,phone,email,birth_date,address\n");
    int i;
    for (i = 0; i < book->capacity; i++)
    {
        if (book->contacts[i].use == 0)
        {
            printf("%d,0,,,,,\n", book->contacts[i].id);
        }
        else
        {
            printf("%d,1,%s,%s,%s,%d,%s\n", book->contacts[i].id, book->contacts[i].name, book->contacts[i].phone, book->contacts[i].email, book->contacts[i].birth_date, book->contacts[i].address); // id,1,name,phone,email,birth_date,address
        }
    }
}
void copystr(char *a, const char *b, int max)
{
    if (a == NULL || b == NULL || max == 0)
    {
        return;
    }
    int i;
    for (i = 0; b[i] != '\0' && i < max - 1; i++)
    {
        a[i] = b[i];
    }
    a[i] = '\0';
}
int insert_contact(AddressBook *book, const char *name, const char *phone, const char *email, int birth_date, const char *address)
{
    if (book == NULL || book->contacts == NULL)
        return -1;
    else
    {
        int free_index = -1;
        int i = 0;
        for (i = 0; i < book->capacity; i++)
        {
            if (book->contacts[i].use == 0)
            {
                free_index = i;
                break;
            }
        }
        if (free_index == -1)
            return -1;
        Contact *a = &book->contacts[free_index];
        a->use = 1;
        copystr(a->name, name, 15);
        copystr(a->phone, phone, 16);
        copystr(a->email, email, 32);
        copystr(a->address, address, 56);
        if (birth_date != 0)
            a->birth_date = birth_date;
        book->size++;
        return free_index;
    }
}

int delete_contact(AddressBook *book, int id)
{
    if (id < 0 || id >= book->capacity)
        return -1;
    Contact *a = &book->contacts[id];
    if (a->use == 0)
        return -1;
    a->use = 0;
    book->size--;
    return 0;
}

int update_contact(AddressBook *book, int id, const char *name, const char *phone, const char *email, int birth_date, const char *address)
{
    if (id < 0 || id >= book->capacity)
        return -1;
    Contact *a = &book->contacts[id];
    if (a->use == 0)
        return -1;
    if (name != NULL)
        copystr(a->name, name, 15);
    if (phone != NULL)
        copystr(a->phone, phone, 16);
    if (email != NULL)
        copystr(a->email, email, 32);
    if (birth_date != 0)
        a->birth_date = birth_date;
    if (address != NULL)
        copystr(a->address, address, 56);
    return 0;
}

const Contact *select_contact(const AddressBook *book, const char *name, const char *phone, const char *email)
{
    if (book == NULL || book->contacts == NULL)
        return NULL;
    int i;
    for (i = 0; i < book->capacity; i++)
    {
        const Contact *a = &book->contacts[i];
        if (a->use == 0)
            continue;

        if (name != NULL && strcmp(a->name, name) != 0)
        {
            continue;
        }
        if (phone != NULL && strcmp(a->phone, phone) != 0)
        {
            continue;
        }
        if (email != NULL && strcmp(a->email, email) != 0)
        {
            continue;
        }

        return a;
    }
    return NULL;
}
