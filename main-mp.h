#include <stdio.h>
#include <stdlib.h>

typedef int tweet;

tweet * readTweets(int n, char * filename);

void writeTweets(tweet * tweets, int n, char * filename);