.POSIX:

include $(CONFIG_MK)

OBJECTS = string.o

all: $(OBJECTS)

.c.o:
	$(CC) $(MYCFLAGS) -I $(INC) -c $<

clean:
	rm -f $(OBJECTS)

.PHONY: all clean
