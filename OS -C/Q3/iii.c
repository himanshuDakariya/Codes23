#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
        // Child process
        sleep(2); // Simulating some work
        printf("Child process has finished its work.\n");
    } else if (child_pid > 0) {
        // Parent process
        wait(NULL);  // Wait for the child to finish
        printf("Parent process\n");
    }
    else {
        // An error occurred when forking
        perror("Fork failed.");
    }

    return 0;
}
