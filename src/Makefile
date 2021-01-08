.POSIX:

include $(CONFIG_MK)

OBJECTS = kernel.o

all: emerald

.c.o:
	$(CC) $(MYCFLAGS) -I $(INC) -c $<
.s.o:
	$(NASM) $(NASMFLAGS) $< -o $@

kernel:
	$(MAKE) -C kernel CONFIG_MK=$(CONFIG_MK) INC=$(INC) all
libc:
	$(MAKE) -C libc CONFIG_MK=$(CONFIG_MK) INC=$(INC) all

emerald: $(OBJECTS) kernel libc
	#$(LD) $(MYLDFLAGS) -T link.ld $(OBJECTS) -o emerald

clean:
	$(MAKE) -C kernel CONFIG_MK=$(CONFIG_MK) INC=$(INC) clean
	$(MAKE) -C libc CONFIG_MK=$(CONFIG_MK) INC=$(INC) clean
	rm -f emerald $(OBJECTS)

.PHONY: all clean kernel libc
