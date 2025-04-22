#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define TASK_LENGTH 256
#define FILE_NAME "tasks.txt"

char tasks[MAX_TASKS][TASK_LENGTH];
int task_count = 0;

// Function to load tasks from the file
void load_tasks()
{
    FILE *file = fopen(FILE_NAME, "r");
    if (file == NULL)
        return; // No file yet

    while (fgets(tasks[task_count], TASK_LENGTH, file))
    {
        tasks[task_count][strcspn(tasks[task_count], "\n")] = '\0'; // Remove newline
        task_count++;
    }
    fclose(file);
}

// Function to save tasks to the file
void save_tasks()
{
    FILE *file = fopen(FILE_NAME, "w");
    if (file == NULL)
    {
        printf("Error saving tasks.\n");
        return;
    }
    for (int i = 0; i < task_count; i++)
    {
        fprintf(file, "%s\n", tasks[i]);
    }
    fclose(file);
}

// Function to add a task
void add_task(char *task)
{
    if (task_count < MAX_TASKS)
    {
        strcpy(tasks[task_count], task);
        task_count++;
        save_tasks();
        printf("Task added!\n");
    }
    else
    {
        printf("Task list is full!\n");
    }
}

// Function to view tasks
void view_tasks()
{
    if (task_count == 0)
    {
        printf("No tasks yet!\n");
        return;
    }
    printf("Your tasks:\n");
    for (int i = 0; i < task_count; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

// Function to remove a task
void remove_task(int index)
{
    if (index < 1 || index > task_count)
    {
        printf("Invalid task number.\n");
        return;
    }

    for (int i = index - 1; i < task_count - 1; i++)
    {
        strcpy(tasks[i], tasks[i + 1]);
    }
    task_count--;
    save_tasks();
    printf("Task removed!\n");
}

int main()
{
    int choice;
    char task[TASK_LENGTH];
    int task_number;

    load_tasks(); // Load tasks at startup

    while (1)
    {
        printf("\nTo-Do List Manager\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Remove Task\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); // Consume newline

        switch (choice)
        {
            case 1:
                printf("Enter task: ");
                fgets(task, TASK_LENGTH, stdin);
                task[strcspn(task, "\n")] = '\0'; // Remove newline
                add_task(task);
                break;
            case 2:
                view_tasks();
                break;
            case 3:
                printf("Enter task number to remove: ");
                scanf("%d", &task_number);
                remove_task(task_number);
                break;
            case 4:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }
    }
}
