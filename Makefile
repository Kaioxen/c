CC = gcc
CFLAGS = -Wall -Wextra

# Compile semua file .c di folder saat ini
all:
	$(CC) $(CFLAGS) *.c

# Clean binary files
clean:
	rm -f *.o a.out program

# Run test
run: all
	./a.out