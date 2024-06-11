ft_putchar_fd

In this simplified example, we directly use STDOUT_FILENO for writing to standard output and open a file named "output.txt" for writing characters into it. The file is opened with the appropriate flags (O_WRONLY for write-only, O_CREAT to create the file if it doesn't exist, and O_TRUNC to truncate it if it does exist) and permissions (0644 for read/write permissions for the owner and read permissions for others). After writing, the file descriptor is closed.

#include <fcntl.h>  // For file descriptor constants
#include <unistd.h> // For the write function

// Declaration of the ft_putchar_fd function
void ft_putchar_fd(char c, int fd);

int main() {
    // Write characters to stdout
    ft_putchar_fd('H', STDOUT_FILENO);
    ft_putchar_fd('i', STDOUT_FILENO);
    ft_putchar_fd('\n', STDOUT_FILENO);

    // Write characters to a file
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }
    ft_putchar_fd('H', fd);
    ft_putchar_fd('i', fd);
    ft_putchar_fd('\n', fd);

    close(fd); // Close the file descriptor

    return 0;
}

