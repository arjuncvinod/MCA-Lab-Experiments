#include <stdio.h>

int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;
typedef enum boolean { false, true } bool;
bool visited_dfs[10];

void bfs(int v) {
    for (i = 0; i < n; i++)
        if (a[v][i] && !visited[i])
            q[++r] = i;

    if (f <= r) {
        visited[q[f]] = 1;
        bfs(q[f++]);
    }
}

void bfs_sort() {
    int v;
    printf("\nEnter the number of vertices:");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        q[i] = 0;
        visited[i] = 0;
    }

    printf("\nEnter graph data in matrix form:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("\nEnter the starting vertex:");
    scanf("%d", &v);
    bfs(v);

    printf("\nThe nodes which are reachable are:\n");
    for (i = 0; i < n; i++)
        if (visited[i])
            printf("%d\t", i);
        else
            printf("\nBFS is not possible");
}

void dfs(int v) {
    int stack[10], top = -1, pop;
    top++;
    stack[top] = v;

    while (top >= 0) {
        pop = stack[top];
        top--;

        if (visited_dfs[pop] == false) {
            printf("%d", pop);
            visited_dfs[pop] = true;
        } else
            continue;

        for (i = n - 1; i >= 0; i--)
            if (a[pop][i] == 1 && visited_dfs[i] == false) {
                top++;
                stack[top] = i;
            }
    }
}

void dfs_sort() {
    int v;
    printf("\nEnter the no. of nodes in the graph\n");
    scanf("%d", &n);

    printf("Enter the adjacency matrix \n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("The adjacency matrix shown as\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    printf("Enter the starting node for Depth First search\n");
    scanf("%d", &v);

    for (i = 0; i < n; i++)
        visited_dfs[i] = false;

    dfs(v);
}

void top_sort() {
    int i, j, k, indeg[10], flag[10], count = 0;
    printf("Enter the no of vertices:\n");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        printf("Enter row %d\n", i + 1);
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }

    for (i = 0; i < n; i++) {
        indeg[i] = 0;
        flag[i] = 0;
    }

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            indeg[i] = indeg[i] + a[j][i];

    printf("\nThe topological order is:");
    while (count < n) {
        for (k = 0; k < n; k++) {
            if ((indeg[k] == 0) && (flag[k] == 0)) {
                printf("%d ", (k + 1));
                flag[k] = 1;
            }
            for (i = 0; i < n; i++) {
                if (a[i][k] == 1)
                    indeg[k]--;
            }
        }
        count++;
    }
}

int main() {
    int ch;
    do {
        printf("\n1) Topological sort\n2) BFS\n3) DFS\n4) Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                top_sort();
                break;
            case 2:
                bfs_sort();
                break;
            case 3:
                dfs_sort();
                break;
            case 4:
                printf("Exit");
                break;
            default:
                printf("Enter a valid choice:");
        }
    } while (ch != 4);

    return 0;
}
