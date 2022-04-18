/*
Dania Naseresddin
2-1-2021
Daily Sales is a program that takes the total of money from the user
and prints them in a table with the total.
It only takes three values as ints (without decimals).
*/
#include <stdio.h>

int main()
{
  int day1, day2, day3; //variables for the days

  printf("Enter the sales for day 1: "); //prompts user for day 1
  scanf(" %d", &day1); //recieves value for day 1 and stores it

  printf("Enter the sales for day 2: "); //prompts user for day 2
  scanf(" %d", &day2); //recieves value for day 2 and stores it

  printf("Enter the sales for day 3: "); //prompts user for day 3
  scanf(" %d", &day3); //recieves value for day 3 and stores it

  int total = day1 + day2 + day3; // adds total of the 3 days and stores it in total

  printf("Sales Amounts \n"); //prints it out in table
  printf("------------------------------- \n");
  printf("Day 1:\t \t %d \n" , day1);
  printf("Day 2:\t \t %d \n" , day2);
  printf("Day 3:\t \t %d \n" , day3);
  printf("Total:\t \t %d \n" , total);

  return 0;
}
