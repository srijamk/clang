#include <stdio.h>
#include <stdlib.h>

typedef struct task {
    long time;
    long deadline;
}
task;

int compare(const void *a, const void *b) {
    long task_a = ((task *) a) -> deadline;
    long task_b = ((task *) b) -> deadline;
    
    if (task_a > task_b)
        return 1;
    else if (task_a < task_b)
        return -1;
    else
        return 0;
}

int main() {
    int n, i;
    task tasks[200000];
    i = 0;
    long sum = 0;

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%ld %ld", &tasks[i].time, &tasks[i].deadline);
    }

    qsort(tasks, n, sizeof(task), compare);
    
    for (i = 0; i < n; i++) {
        if (sum + tasks[i].time <= tasks[i].deadline) {
            sum += tasks[i].time;
        } else {
            break;
        }
    }

    printf("%s\n", (i == n) ? "Yes" : "No");
}