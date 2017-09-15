// Rough (mostly) pseudocode for using with a 3-D LED matrix - just trying to outline thoughts. 8/5/14

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main ()
{

/* Sizes of columns and rows for 10x10x10 3-d CA matrix */
int length = 0, width = 0, depth = 0;

printf("Enter the value for the length: ");
scanf("%d", &length);

printf("Enter the value for the width: ");
scanf("%d", &width);

printf("Enter the value for the depth: ");
scanf("%d", &depth);

// Start the random number seed generator
srand(time(NULL));

/* Initialize the array containing the values (1 = alive / 0 = dead) for each cell in the matrix*/
int automata[length][width][depth];

// Counters
int x, y, z;

/* Seed cell values */
for (x = 0; x < length; x++) {

	for (y = 0; y < width; y++) {

		for (z = 0; z < depth; z++) {

			automata[x][y][z] = rand() % 2; // RANDOM NUMBER, EITHER 0 OR 1;
			// printf("[%d][%d][%d] = %d\n", x, y, z, automata[x][y][z]);
			if (z == depth - 1) {
                printf("%d\n", automata[x][y][z]);
			}
			else {
                printf("%d     ", automata[x][y][z]);
			}
		}

	}

}
//system("cls");
return 0;
}
