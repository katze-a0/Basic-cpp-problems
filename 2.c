#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{      char ch;
       char s[100];
       char sen[100];
       
       scanf("%c", &ch);
       scanf("%s", s);
       scanf("%[^\n]", sen); 
    
     //Enter your code here. Read input from STDIN. Print output to STDOUT 
       printf("%c\n", ch);
       printf("%s\n", s);
       printf("%s\n", sen);
    return 0;
}



/*#include <stdio.h>

int main() {
    char character;      // To store the single character
    char string[100];    // To store the string
    char sentence[100];  // To store the sentence

    // Taking inputs
    scanf(" %c", &character);  // Read the single character
    scanf("%s", string);        // Read the string
    scanf(" %[^\n]", sentence); // Read the entire sentence including spaces

    // Printing the outputs
    printf("%c\n", character);
    printf("%s\n", string);
    printf("%s\n", sentence);  // Print the sentence

    return 0;
}
*/