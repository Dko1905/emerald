.POSIX:

include $(CONFIG_MK)

OBJECTS = asm.o info.o

all: $(OBJECTS) mem proc

.c.o:
	$(CC) $(MYCFLAGS) -I $(INC) -c $<

mem:
	$(MAKE) -C mem CONFIG_MK=$(CONFIG_MK) INC=$(INC) all
proc:
	$(MAKE) -C proc CONFIG_MK=$(CONFIG_MK) INC=$(INC) all

clean:
	$(MAKE) -C mem CONFIG_MK=$(CONFIG_MK) INC=$(INC) clean
	$(MAKE) -C proc CONFIG_MK=$(CONFIG_MK) INC=$(INC) clean
	rm -f $(OBJECTS)

.PHONY: all clean mem proc
