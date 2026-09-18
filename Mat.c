#include <stdio.h>

int main()
{
    int n = 4;
    int adj[4][4] = {
        {0, 1, 1, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 0},
        {1, 0, 0, 0}
    };

    int i, j;
    int indegree, outdegree;

    printf("Vertex\tIndegree\tOutdegree\n");

    for (i = 0; i < n; i++)
    {
        indegree = 0;
        outdegree = 0;

        for (j = 0; j < n; j++)
        {
            outdegree += adj[i][j];
            indegree += adj[j][i];
        }

        printf("%d\t%d\t\t%d\n", i, indegree, outdegree);
    }

    return 0;
}
