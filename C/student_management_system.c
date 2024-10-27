#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

typedef struct Node node;
struct Node
{
    char first_name[50];
    char last_name[50];
    char student_id[30];
    char gender[10];
    char email[50];
    char father_name[50];
    char mother_name[50];
    char date_of_birth[50];
    node *next;
} std, *head = NULL;

FILE *file;
int f = 0, m = 0;

void display_student();
void add_new_student();
void remove_student();
void modify_student_data();
void search_student();
void break_t(unsigned int t);
void print_title();
void saved_data();

void saved_data()
{
    node *temp, *new_node;
    f = 0;
    m = 0;
    head = NULL;
    rewind(file);

    while (fread(&std, sizeof(std), 1, file) == 1)
    {
        temp = (node *)malloc(sizeof(node));
        if (!temp)
        {
            printf("Memory allocation failed.\n");
            return;
        }
        strcpy(temp->first_name, std.first_name);
        strcpy(temp->last_name, std.last_name);
        strcpy(temp->student_id, std.student_id);
        strcpy(temp->gender, std.gender);
        if (strcmp(temp->gender, "F") == 0 || strcmp(temp->gender, "f") == 0)
            f++;
        if (strcmp(temp->gender, "M") == 0 || strcmp(temp->gender, "m") == 0)
            m++;
        strcpy(temp->father_name, std.father_name);
        strcpy(temp->mother_name, std.mother_name);
        strcpy(temp->date_of_birth, std.date_of_birth);
        temp->next = NULL;

        if (head == NULL)
        {
            head = temp;
            new_node = temp;
        }
        else
        {
            new_node->next = temp;
            new_node = temp;
        }
    }
}

void print_title()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t\t\t\t\tSTUDENT MANAGEMENT SYSTEM\n");
    printf("\t\t\t\t\t*-------------------------------------*\n");
    printf("\n\n");
}

void search_student()
{
    print_title();
    saved_data();
    char flag = 'y';

    do
    {
        node *c = head, *temp = NULL;
        char id[100];
        printf("\n\t\t\tEnter Student ID: ");
        scanf("%s", id);
        printf("\n");

        while (c != NULL)
        {
            if (strcmp(c->student_id, id) == 0)
            {
                temp = c;
                break;
            }
            c = c->next;
        }

        if (temp == NULL)
        {
            printf("\t\tRecord Not found!!!\n\n");
        }
        else
        {
            printf("\n\t\tStudent Name: %s %s\n", temp->first_name, temp->last_name);
            printf("\t\tStudent ID: %s\n", temp->student_id);
            printf("\t\tFather Name: %s\n", temp->father_name);
            printf("\t\tMother Name: %s\n", temp->mother_name);
            printf("\t\tGender: %s\n", temp->gender);
            printf("\t\tDate of Birth: %s\n\n", temp->date_of_birth);
        }

        getchar();
        printf("Do you want to search more (Y/N): ");
        scanf("%c", &flag);
    } while (flag == 'y' || flag == 'Y');

    printf("\n");
    system("pause");
}

void modify_student_data()
{
    print_title();
    char id[100];
    int check = 0;

    printf("\n\t\tEnter Student ID to Modify: ");
    scanf("%s", id);

    rewind(file);

    while (fread(&std, sizeof(std), 1, file) == 1)
    {
        if (strcmp(id, std.student_id) == 0)
        {
            check = 1;
            fseek(file, -sizeof(std), SEEK_CUR);
            printf("\n\t\tEnter new data:\n");

            printf("\t\t\tEnter First name: ");
            scanf("%s", std.first_name);

            printf("\n\t\t\tEnter Last name: ");
            scanf("%s", std.last_name);

            printf("\n\t\t\tEnter Student ID: ");
            scanf("%s", std.student_id);

            printf("\n\t\t\tIf Female write F or If Male write M: ");
            scanf("%s", std.gender);

            getchar();
            printf("\n\t\t\tEnter Father name: ");
            fgets(std.father_name, sizeof(std.father_name), stdin);
            std.father_name[strcspn(std.father_name, "\n")] = '\0';

            printf("\n\t\t\tEnter Mother name: ");
            fgets(std.mother_name, sizeof(std.mother_name), stdin);
            std.mother_name[strcspn(std.mother_name, "\n")] = '\0';

            printf("\n\t\t\tEnter Date of Birth: ");
            scanf("%s", std.date_of_birth);

            fwrite(&std, sizeof(std), 1, file);
            break;
        }
    }

    if (check == 1)
    {
        printf("\n\t\tRecord was changed successfully.\n");
    }
    else
    {
        printf("\n\t\tRecord not found!!!\n");
    }

    printf("\n");
    system("pause");
}

void remove_student()
{
    print_title();
    char id[100];
    FILE *tmp;

    if ((tmp = fopen("tmp.txt", "wb+")) == NULL)
    {
        printf("\n\t\tCannot open temporary file.");
        return;
    }

    printf("\n\t\tEnter Student ID to delete: ");
    scanf("%s", id);

    int check = 0;
    rewind(file);

    while (fread(&std, sizeof(std), 1, file) == 1)
    {
        if (strcmp(std.student_id, id) != 0)
        {
            fwrite(&std, sizeof(std), 1, tmp);
        }
        else
        {
            check = 1;
        }
    }

    fclose(file);
    fclose(tmp);
    remove("sectiong.txt");
    rename("tmp.txt", "sectiong.txt");

    if ((file = fopen("sectiong.txt", "rb+")) == NULL)
    {
        printf("Cannot open file.");
        return;
    }

    if (check == 1)
    {
        printf("\n\t\tThe record has been deleted successfully.\n");
    }
    else
    {
        printf("\n\t\tRecord Not Found.\n");
    }

    printf("\n");
    system("pause");
}

void add_new_student()
{
    print_title();
    char check = 'y';
    int k = 1;

    while (check == 'y' || check == 'Y')
    {
        printf("\t\tStudent %d:\n", k);
        printf("\t\t\tEnter First name: ");
        scanf("%s", std.first_name);

        printf("\n\t\t\tEnter Last name: ");
        scanf("%s", std.last_name);

        printf("\n\t\t\tEnter Student ID: ");
        scanf("%s", std.student_id);

        printf("\n\t\t\tIf Female write F or If Male write M: ");
        scanf("%s", std.gender);

        getchar();
        printf("\n\t\t\tEnter Father name: ");
        fgets(std.father_name, sizeof(std.father_name), stdin);
        std.father_name[strcspn(std.father_name, "\n")] = '\0';

        printf("\n\t\t\tEnter Mother name: ");
        fgets(std.mother_name, sizeof(std.mother_name), stdin);
        std.mother_name[strcspn(std.mother_name, "\n")] = '\0';

        printf("\n\t\t\tEnter Date of Birth: ");
        scanf("%s", std.date_of_birth);

        fwrite(&std, sizeof(std), 1, file);
        printf("\n\t\t\tDo You Want to Add More Information (y/n): ");
        getchar();
        check = getchar();
        printf("\n");
        k++;
    }
}

void display_student()
{
    print_title();
    saved_data();
    node *c = head;

    if (head != NULL)
    {
        printf("\t\t\t\tSTUDENT NAME\t\t\tID\n\n");
    }

    while (c != NULL)
    {
        printf("\t\t\t\t%s %s\t\t%s\n", c->first_name, c->last_name, c->student_id);
        c = c->next;
    }

    printf("\n\nTotal Female Students: %d && Total Male Students: %d.\n", f, m);
    printf("\n");
    system("pause");
}

int main()
{
    if ((file = fopen("sectiong.txt", "rb+")) == NULL)
    {
        file = fopen("sectiong.txt", "wb+");
        if (!file)
        {
            printf("Cannot open or create file.\n");
            exit(1);
        }
    }

    while (1)
    {
        int choice;
        print_title();
        printf("\t\t\t\t1. Add New Records\n\n");
        printf("\t\t\t\t2. Display all Students Records\n\n");
        printf("\t\t\t\t3. Delete Records\n\n");
        printf("\t\t\t\t4. Search and View Records\n\n");
        printf("\t\t\t\t5. Modify Records\n\n");
        printf("\t\t\t\t6. Exit\n\n");

        printf("\n\t\t\tEnter Option: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            add_new_student();
            break;
        case 2:
            display_student();
            break;
        case 3:
            remove_student();
            break;
        case 4:
            search_student();
            break;
        case 5:
            modify_student_data();
            break;
        case 6:
            fclose(file);
            exit(0);
        default:
            printf("Wrong Input.. Please try again.\n");
            system("pause");
        }
    }

        return 0;
}