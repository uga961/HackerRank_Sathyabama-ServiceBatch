#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[100000];
    fgets(s,sizeof(s),stdin);
    int l = strlen(s);
    for(int i=0;i<l;i++){
        if(s[i]>='a' && s[i] <= 'z'){
            s[i] = toupper(s[i]);
        }
        else if (s[i]>='A' && s[i] <= 'Z'){
            s[i] = tolower(s[i]); 
        }
        else{
            s[i] = s[i];
        }
        // switch(s[i]){
        //     case 'a-z': s[i] = toupper(s[i]); break;
        //     case 'A-Z': s[i] = tolower(s[i]); break;
        // }
    }
    printf("%s",s);
    return 0;
}
