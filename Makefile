.POSIX:

include config.mk

all: options emerald

options:
	@echo Emerald build options:
	@echo "CFLAGS    = $(MYCFLAGS)"
	@echo "NASMFLAGS = $(NASMFLAGS)"
	@echo "LDFLAGS   = $(MYLDFLAGS)"
	@echo "CC        = $(CC)"
	@echo "NASM      = $(NASM)"

emerald:
	$(MAKE) -C src CONFIG_MK="`pwd`/config.mk" INC="`pwd`/include" all

clean:
	$(MAKE) -C src CONFIG_MK="`pwd`/config.mk" INC="`pwd`/include" clean

.PHONY: all options emerald clean
