#include "main-mp.h"

tweet * readTweets(int n, char * filename) {
    FILE * fp = fopen(filename, "r");
    tweet * tweets = (tweet *) malloc(n * sizeof(tweet));
    char buffer[255];
    int i;
    for (i = 0; i < n; i++) {
        fgets(buffer,255,fp);
        tweets[i] = atoi(buffer);
    }
    fclose(fp);
    return tweets;
}

void writeTweets(tweet * tweets, int n, char * filename) {
    FILE * fp = fopen(filename, "w");
    int i;
    for (i = 0; i < n; i++) {
        fprintf(fp, "%d\n", tweets[i]);
    }
    fclose(fp);
}

void function(int* value) {

    *value = 20;

    // printf("%d \n", *value);
}

int main() {
    int tollerInt = 13;
    // int arrays[256];

    function(&tollerInt);

    // int* speicher;
    // speicher = malloc(sizeof(int)*256);

    char* tweet = malloc(sizeof(char)*1024);

    free(tweet);

    printf("%d \n", tollerInt);


    return 0;
}