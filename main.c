/*
*   CODING CHALLENGE #2
*   Filename: main.c
*   This file measures a person's blood pressure readings and reports their category.
*   Last modified by: Timothy Gonzales (9/28/2020)
*   
*   Check the // TODO comments to see what is missing and needs to be completed.
*/

#include <stdio.h>

int main(void) {
  int s, d;

  // Read Systolic and Diastolic pressure
  scanf("%d %d", &s, &d);

  if (s < d) {
      printf("ERROR\n");
      // End program, with error code
      return 1;
  }

  if (s >= 180 || d > 120) {
    printf("Hypertensive Crysis\n"); 
  } else if (s >= 140 || d > 90) {
    printf("Stage 2 Hypertension\n");
  } else if (s >= 130 || (d >= 80 && d < 90 )) {
    printf("Stage 1 Hypertension\n");
  } else if (s >= 120 && d < 80) {
        printf("Elavated\n");
  } else if (s < 120 && d < 80) {
      printf("Normal\n");
  } 

  return 0;
}
