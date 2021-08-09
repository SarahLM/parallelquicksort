#include "parallel-sort-tweets.h"

int compareTweets(const void * a, const void * b) {
    tweet * ta = (tweet *) a;
    tweet * tb = (tweet *) b;
    if (*ta > *tb) {
        return 1;
    }
    if (*tb > *ta) {
        return -1;
    }
    return 0;
}

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

int main() {
    tweet * tweets = readTweets(4096, "../unsorted4096.tweets");
    qsort((void *) tweets, 4096, sizeof(tweet), compareTweets);
    writeTweets(tweets, 4096, "../neusorted4096.tweets");
    return 0;
}
