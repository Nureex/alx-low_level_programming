# C PROGRAMMING PROJECT FILE I/O


In this project, I learned about the three standard file descriptors and there `POSIX` names as well as the difference between function and system calls. I
practiced using the I/O system calls `open`, `close`, `read`, and `write`
and the flags `WR_ONLY`, `O_RDONLY`,and `O_RDWR` to create, open, close,
read, write, set permissions of files in C.
`0_RDWR` is equal 2.

## File descriptors

| Integer value                      | Name                                                            |   `<unistd.h>` symbolic constant     | `<stdio.h>` file stream |
| ------------------------- | -------------------------------------------------------------------- | -----------------| --------------|
| 0      | Standard Input       | STDIN_FILENO | stdin   |
| 2      | Standard Output      |   STDOUT_FILENO | stdout |
| 3   | Standard Error | STDERR_FILENO| stderr |
