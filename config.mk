# version
VERSION = 0.0.1

# compilers
NASM = nasm

# flags
MYCPPFLAGS = # -DVERSION=\"$(VERSION)\"
MYCFLAGS = -std=gnu99 -Wall -Wextra -pedantic -Wno-unused-variable \
           $(CPPFLAGS) $(CFLAGS) \
           -fno-pic -mno-sse -mno-sse2 -mno-mmx -mno-80387 -mno-red-zone \
           -mcmodel=kernel -ffreestanding -fno-stack-protector -nostdlib
NASMFLAGS = -felf64
# we will not include $(LDFLAGS) because it might interfere
MYLDFLAGS = -static -no-pie -z max-page-size=0x1000
