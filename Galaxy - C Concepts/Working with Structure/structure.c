#include<stdio.h>
#include<string.h>
struct Books{
    int book_id;
    char title[75];
    char author[50];
    char subject[100];
};
int main()
{
    struct Books book1;
    struct Books book2;
    struct Books book3;
    
    book1.book_id=5695683;
    strcpy(book1.title, "C by Programming Hero");
    strcpy(book1.author, "Jhankar Mahbub");
    strcpy(book1.subject, "C Programming Tutorial");
    
    book2.book_id=1459684;
    strcpy(book2.title, "C++ by Programming_Hero");
    strcpy(book2.author, "Mahbub Jhankar");
    strcpy(book2.subject, "C++ Programming Tutorial");
    
    book3.book_id=6590348;
    strcpy(book3.title, "Python by Programming_Hero");
    strcpy(book3.author, "J. Mahbub");
    strcpy(book3.subject, "Python Programming Tutorial");
    
    printf("Book 1 ID: %d\n",book1.book_id);
    printf("Book 1 title: %s\n",book1.title);
    printf("Book 1 author: %s\n",book1.author);
    printf("Book 1 subject: %s\n\n\n",book1.subject);
    
    printf("Book 2 ID: %d\n",book2.book_id);
    printf("Book 2 title: %s\n",book2.title);
    printf("Book 2 author: %s\n",book2.author);
    printf("Book 2 subject: %s\n\n\n",book2.subject);
    
    printf("Book 3 ID: %d\n",book3.book_id);
    printf("Book 3 title: %s\n",book3.title);
    printf("Book 3 author: %s\n",book3.author);
    printf("Book 3 subject: %s\n",book3.subject);
    
    
    return 0;
    
}
