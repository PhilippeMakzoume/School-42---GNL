#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

# define BUFF_SIZE 10000

# define END_OF_LINE '\n'
# define NULL_CHARACTER '\0'

int		get_next_line(int fd, char **line);

#endif