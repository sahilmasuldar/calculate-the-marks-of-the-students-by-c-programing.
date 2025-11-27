#include <stdio.h>

int main() {
    
    int pens, notebooks, pencils, id, paybill, pens_cost, notebooks_cost, pencils_cost,  total, disc;
   
    int mobile;
    
    printf("           ~~~~~~~~~~NEW ENTERPRISES~~~~~~~~~~~~\n"); 
    
    printf("\n");
    printf("******** Offer! Offer! Offer! get 20% Off on all things *******\n"); 

    char names[100];
    
    printf("Enter the name of customer:\n");
       scanf("%s", names);
     printf("Enter the customer mobile no:.\n");
    scanf("%d", &mobile);
    
    
    printf("Enter the customer id:\n");
         scanf("%d", &id);
   
    printf("Enter the number of pens you want <ONE PEN COST IS 10 RUPEES>:\n");
         scanf("%d", &pens);
    printf("Enter the number of notebooks you want<ONE NOTEBOOK COST IS 50 RUPEES>:\n");
        scanf("%d", &notebooks);
    printf("Enter the number of pencil packs you want<ONE pencils COST IS 10 RUPEES>:\n");
    scanf("%d", &pencils);
    
   
    pens_cost = pens * 10;  
    notebooks_cost = notebooks * 50; 
    pencils_cost = pencils * 10;   
    
    total = pens_cost + notebooks_cost + pencils_cost ;
   disc = (20 * total) / 100;
   
    paybill = total - disc;
    printf("Your bill is\n\n");
    
    printf("                     *******WELCOME TO NEW ENTERPRISES********                             \n");
   
    printf("Name: %s" , names);      
    printf("\nCustomer ID: %d \n", id);
    printf("Mobile No.: %d\n", mobile);
    printf("\n");
    printf("PENS: %d\n", pens);
    printf("NOTEBOOKS: %d\n", notebooks);
    printf("PENCIL PACKS: %d\n", pencils);
   
    printf("_\n");
       printf("There is a discount of 20%\n");
           printf("_\n");
           
    
    printf("Total Bill: %d\n", total);
    printf("Discount: %d\n", disc);
    printf("_______________________________\n");
    printf("Payable Bill: %d\n", paybill);
    printf("\n");
    printf("               (*_*) Thank you for visiting NEW ENTERPRISES (*_*)                     \n");

    
    return 0;
}

