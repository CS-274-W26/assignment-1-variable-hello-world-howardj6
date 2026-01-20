#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>

// TODO Other includes


int main() {
	srand(time(NULL));
	
	int myrand = rand();
	myrand = myrand % 11;

	if (myrand <= 4) {
        printf("Eat more beef, kick less cats. \n");
    }
    else if (myrand >= 5 && myrand <= 9) {
        printf("FRODO LIVES. \n");
    }
    else if (myrand == 10) {
        printf("Larn is the best roguelike \n");
    }

	printf("The random number was: %d", myrand);
	printf("\n");
}
	// The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	
	// TODO Complete the program
