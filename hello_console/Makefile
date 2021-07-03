EE_BIN = hello_console.elf
EE_OBJS = hello_console.o

all: $(EE_BIN) 
	$(EE_STRIP) --strip-all $(EE_BIN)


run: $(EE_BIN)
	ps2client execee host:$(EE_BIN)

reset:
	ps2client reset

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal

