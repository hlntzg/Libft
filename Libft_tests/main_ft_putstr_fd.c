ft_putstr_fd

The ft_putstr_fd function is used to write a string to both standard output (stdout) and a file named "output.txt". The file is opened with the appropriate flags (O_WRONLY for write-only, O_CREAT to create the file if it doesn't exist, and O_TRUNC to truncate it if it does exist) and permissions (0644 for read/write permissions for the owner and read permissions for others). After writing, the file descriptor is closed.

#include <unistd.h> // For the write function
#include <fcntl.h>  // For file descriptor constants

// Declaration of the ft_putstr_fd function
void ft_putstr_fd(char *s, int fd);

int main() {
    // Write a string to standard output (stdout)
    ft_putstr_fd("Hello, world!\n", STDOUT_FILENO);

    // Write a string to a file
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    ft_putstr_fd("This is written to a file.\n", fd);

    close(fd); // Close the file descriptor

    return 0;
}

