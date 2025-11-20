#include <stdio.h>

/* 1-15 Rewrite the temperature conversion program of Section1.2 to use a function conversion */
#define LOWER 0
#define MAX 100
#define STEP 5

float toCelsius(int n);
float toFahr(int n);

int main(){
  
  for (int i = LOWER; i <= MAX; i = i + STEP) {
    printf("F: %d C: %.1f\n", i, toCelsius(i));
  }
  return 0;
}

float toCelsius(int t_fahr) {
  float celsius;

  celsius = (5.0/9.0) * (t_fahr - 32.0);
  return celsius;
}

float toFahr(int t_celsius) {
  float fahr;

  fahr = t_celsius * (9.0/5.0) + 32;
  return fahr;
}
