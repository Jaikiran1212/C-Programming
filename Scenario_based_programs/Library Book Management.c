#include <stdio.h>
void add_books(int id,int price , int status){
    
}
int main(){

    printf("======== LIBRARY BOOK MANAGEMENT ========\n");
    printf("1. Add Books\n");
    printf("2. Display Books\n");
    printf("3. Search by ID\n");
    printf("4. Count Available Books\n");
    printf("5. Count Issued Books\n");
    printf("6. Exit\n\n");

    int choice;
    printf("Enter you choice : ");
    scanf("%d",&choice);

    while (choice != 6){
        switch(choice){
            case 1:
                int id;
                int price;
                int status;
                int n;

                printf("Enter number of books : ");
                scanf("%d",&n);
       
                printf("Enter Book ID : ");
                scanf("%d",&id);

                printf("Enter Book Price : ");
                scanf("%d",&price);

                printf("Enter Book Status : ");
                scanf("%d",&status);

                
        }
    }
        
    }
    return 0;
}