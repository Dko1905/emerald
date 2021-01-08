.POSIX:

include $(CONFIG_MK)

OBJECTS = asm.o info.o

all: $(OBJECTS)

.c.o:
	$(CC) $(MYCFLAGS) -I $(INC) -c $<

clean:
	rm -f $(OBJECTS)

.PHONY: all clean
