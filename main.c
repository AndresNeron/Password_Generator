// With this piece of code you can generate long lists of randomized and customized passwords that suits your needs.
// Store the passowords in a safe location, you can use an open source password manager or a root directory, for example.
// Even you can write it in a paper and safeguard it without electronic devices.

// I hopeful this script is useful to you, reader. You can use it with any purpose.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>


// Each Box storage a range of characters in ASCII code
typedef struct{
  int index;
  int low;
  int high;
} Box;


// Function that returns a random integer number in a range
int Random(int low, int high){
  int diference = (high - low) + 1;
  int number = rand() % diference + low;

  return number;
}

int main(){

  // Open .txt file and change seed.
  FILE *fp;
  fp = fopen("results.txt", "w"); // -> You can change the name of your output HERE.
  srand(time(NULL));

  // total of characters randomized
  int length;
  printf("Write the password length (int): ");
  scanf("%d", &length);

  // total of passwords
  int total;
  printf("Write the total number of passwords (int): ");
  scanf("%d", &total);

  if (total > INT_MAX){
	printf("The number must to be less than INT_MAX=%d", INT_MAX);
	printf("\nRetry it...");
	return 0;
  }

  // ASCII bijective allocation
  Box box[4];
  // signs: #$%!
  box[0].index = 0;
  box[0].low   = 34;
  box[0].high  = 41;
  // signs: 123
  box[1].index = 1;
  box[1].low   = 48;
  box[1].high  = 57;
  // signs: ABC
  box[2].index = 2;
  box[2].low   = 65;
  box[2].high  = 90;
  // signs abc
  box[3].index = 3;
  box[3].low   = 97;
  box[3].high  = 122;


  for(int i = 0; i <= total; i++){

    printf("%d  --> ", i);
    // fprintf(fp, "%d ", i);
    for(int j = 0; j < length; j++){

      // first return a random number. This number pointed a single box
      int n = Random(0, 3);   // if you don't want consider one type of character, you can change their index random here instead of 0 and 3


      // here's all the magic. Compares n with each index box
      for(int k = 0; k <= 3; k++)
      {
        // in truth case, generate the random character
        if(n == box[k].index)
        {
          int random_char = Random(box[k].low, box[k].high);
          printf("%c", random_char);  // print the password
          fprintf(fp, "%c", random_char);  // write the password into a txt file, you can use it for every password that you need in internet.
        }
      }
    }
    printf("\n");
    fprintf(fp, "\n");
    //i++;
  }


  fclose(fp);

  return 0;
}
