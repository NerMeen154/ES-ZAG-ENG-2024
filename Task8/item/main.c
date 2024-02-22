#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    float incre_Price;
    int incre_Quantity;
    char Name[40];
    float Price;
    int Quantity;

}ITEM_A;

ITEM_A *Ptr_Name  = NULL;
ITEM_A *Ptr_Price = NULL;
ITEM_A *Ptr_Quant = NULL;
ITEM_A *Ptr_Value = NULL;

void print_updated_Item(ITEM_A *ptr_name, ITEM_A *ptr_price, ITEM_A *ptr_quant);

int main()
{
    Ptr_Name  = (ITEM_A *)malloc(sizeof(ITEM_A));
    Ptr_Price = (ITEM_A*)malloc(sizeof(ITEM_A));
    Ptr_Quant = (ITEM_A *)malloc(sizeof(ITEM_A));
    Ptr_Value = (ITEM_A *)malloc(sizeof(ITEM_A));

    if((Ptr_Name != NULL) && (Ptr_Price != NULL) && (Ptr_Quant != NULL) &&(Ptr_Value != NULL))
    {
        printf("Input increment value: \n");
        printf("Price incerment and Quantity increment...\n");
        scanf("%f %i", &(Ptr_Price->incre_Price), &(Ptr_Quant->incre_Quantity));

        printf("Updated values of item ...\n");
        print_updated_Item(Ptr_Name, Ptr_Price, Ptr_Quant);
    }
    else
    {
        printf("Error !\n");
    }

    free(Ptr_Name);
    free(Ptr_Price);
    free(Ptr_Quant);
    free(Ptr_Value);

    return 0;
}

void print_updated_Item(ITEM_A *ptr_name, ITEM_A *ptr_price, ITEM_A *ptr_quant)
{
    strcpy(ptr_name->Name, "XYZ");
    printf("\n\tName     : %s \n", ptr_name->Name);

    ptr_price->Price = ptr_price->incre_Price + 27.85;
    printf("\tPrice    : %.3f \n", ptr_price->Price);

    ptr_quant->Quantity = ptr_quant->incre_Quantity + 15;
    printf("\tQuantity : %i\n\n", ptr_quant->Quantity);

    ptr_price->Price = ptr_price->Price * ptr_quant->Quantity;
    printf("Value of the item  = %.3f\n", ptr_price->Price);
}
