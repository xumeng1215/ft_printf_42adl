# Compiler and Linker
CC = cc

TARGET = ft_printf.a

SOURCES = ft_printf.c ft_printf_char.c ft_printf_hex.c ft_printf_int.c
HEADERS = ft_printf.h
OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean
all: $(TARGET)

$(TARGET): $(OBJECTS)
	ar rcs $@ $(OBJECTS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

