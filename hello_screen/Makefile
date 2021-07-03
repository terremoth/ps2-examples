EE_BIN = hello_screen.elf
EE_OBJS = hello_screen.o
EE_LIBS = -ldebug -lc 

all: $(EE_BIN) 
	$(EE_STRIP) --strip-all $(EE_BIN)


run: $(EE_BIN)
	ps2client execee host:$(EE_BIN)

reset:
	ps2client reset

include $(PS2SDK)/samples/Makefile.pref
include $(PS2SDK)/samples/Makefile.eeglobal

