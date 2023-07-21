#include "header.h"
int main() 
{
  /*Table of list of products*/
  struct product products[NO_OF_PRODUCTS] = {
    {"Tusker cider", "500ml", 250.0},
    {"Tusker legacy","500ml", 750.0},
    {"Tusker AR","650ml",1000.0}
  };

  /*Display Products to user*/

  printf("Items On MENU");
  printf("ID   Product       Quantity   Price\n");
  printf("----------------------------------\n");
  for (int i = 0; i < NO_OF_PRODUCTS; i++)
  {
    printf("%d    %s      %d         %.2f\n", i + 1, products[i].name, products[i].quantity, products[i].price);
  }
  return (0);
}
