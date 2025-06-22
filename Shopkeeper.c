#include <stdio.h>
#include <string.h>

int main() {
    char title[100], author[100], publisher[100];
    char correctAuthor[] = "Neeraj";
    printf("Enter title: "); gets(title);
    printf("Enter author: "); gets(author);
    printf("Enter publisher: "); gets(publisher);

    if(strcmp(author, correctAuthor) == 0)
        printf("Charge: ₹1000 (Perfect match)\n");
    else
        printf("Charge: ₹500 (Mismatch)\n");

    return 0;
}
