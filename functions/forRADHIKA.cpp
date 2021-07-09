// C++ implementation to print the 
// pattern of alphabets A to Z using * 

#include <stdio.h> 

// Below height and width variable can be used 
// to create a user-defined sized alphabet's pattern 

// Number of lines for the alphabet's pattern 
int height = 5; 
// Number of character width in each line 
int width = (2 * height) - 1; 

// Function to find the absolute value 
// of a number D 
int abs(int d) 
{ 
	return d < 0 ? -1 * d : d; 
} 

// Function to print the pattern of 'R' 
void printR() 
{ 
    int i, j, half = (height / 2); 
    for (i = 0; i < height; i++) { 
        printf("*"); 
        for (j = 0; j < width; j++) { 
            if ((i == 0 || i == half) 
                && j < (width - 2)) 
                printf("*"); 
            else if (j == (width - 2) 
                     && !(i == 0 || i == half)) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
    } 
} 
// Function to print the pattern of 'A' 
void printA() 
{ 
    int n = width / 2, i, j; 
    for (i = 0; i < height; i++) { 
        for (j = 0; j <= width; j++) { 
            if (j == n || j == (width - n) 
                || (i == height / 2 && j > n 
                    && j < (width - n))) 
                printf("*"); 
            else
                printf(" "); 
        } 
        printf("\n"); 
        n--; 
    } 
} 

// Function print the pattern of the 
// alphabets from A to Z 
void printPattern(char character) 
{ 
	switch (character) { 

	 case 'A': 
        printA(); 
        break; 
	case 'R': 
		printR(); 
		break; 
	
	} 
} 

// Driver Code 
int main() 
{ 
	char character = 'R' ; 
	printPattern(character); 
	
	return 0; 
} 
