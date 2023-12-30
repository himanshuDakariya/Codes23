#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t child_pid = fork();

    if (child_pid == 0) {
        // Child process
        execlp("ls", "ls", "-l", NULL);  // Running the "ls" command
        perror("Exec failed.");
        exit(1);
    } else if (child_pid > 0) {
        // Parent process
        printf("Parent process\n");
    }
      else {
        // An error occurred when forking
        perror("Fork failed.");
    }

    return 0;
}
