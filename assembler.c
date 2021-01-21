#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* file;
    file = fopen("source.bb", "r");
    char line[128];

    while(fgets(line, sizeof(line), file)){
        printf("%s", line);
    }

    return 0;
}