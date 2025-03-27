#include <stdio.h>

int main(void) {
  int month, day, year;
  
  // Standard date form
  printf("Enter date (mm/dd/yyyy): ");
  // Split the user input into 3 variables for the date
  scanf("%d /%d /%d", &month, &day, &year);

  // Print the month
    switch(month){
      case 1:
        printf("January");
        break;
      case 2:
        printf("February");
        break;
      case 3:
        printf("March");
        break;
      case 4:
        printf("April");
        break;
      case 5:
        printf("May");
        break;
      case 6:
        printf("June");
        break;
      case 7:
        printf("July");
        break;
      case 8:
        printf("August");
        break;
      case 9:
        printf("September");
        break;
      case 10:
        printf("October");
        break;
      case 11:
        printf("November");
        break;
      case 12:
        printf("December");
        break;
    }
  // Print the day
    printf(" %d", day);
  
  // Print the suffix for a given day
/* When writing the day of the month, "st" is used for the 1st, "nd" for the 2nd, "rd" for the 3rd, and "th" for any other day of the month
  */
  switch(day){
    case 1: case 21: case 31:
      printf("st");
      break;
    case 2: case 22:
      printf("nd");
      break;
    case 3: case 13: case 23:
      printf("rd");
      break;
    default:
      printf("th");
  }

  // Print the year
  printf(", %d.", year);

  return 0;
}
