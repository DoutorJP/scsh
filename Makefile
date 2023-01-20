CC=gcc
CFLAGS=-Wall -g -Wpedantic
TARGET=scsh
SOURCE=main.c

$(TARGET):
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)
clean:
	rm -fr scsh
