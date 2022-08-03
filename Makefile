


all :
	gcc -g -Wall -Werror -Wextra gettest.c get_next_line.c get_next_line_utils.c

42 :
	gcc -g -Wall -Werror -Wextra -D BUFFER_SIZE=42 gettest.c get_next_line.c get_next_line_utils.c

1000:
	gcc -g -Wall -Werror -Wextra -D BUFFER_SIZE=1000 gettest.c get_next_line.c get_next_line_utils.c

b1:
	gcc -g -Wall -Werror -Wextra gettest.c get_next_line_bonus.c get_next_line_utils_bonus.c

b42 :
	gcc -g -Wall -Werror -Wextra -D BUFFER_SIZE=42 gettest.c get_next_line_bonus.c get_next_line_utils_bonus.c

b1000:
	gcc -g -Wall -Werror -Wextra -D BUFFER_SIZE=1000 gettest.c get_next_line_bonus.c get_next_line_utils_bonus.c

