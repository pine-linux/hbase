
include ../config.mk

CPPFLAGS += -DSHELL=\"/bin/sh\"
CFLAGS += -I../libcommon
BIN = dc
LDFLAGS += -L../libcommon -lcommon
OBJS = dc.o

include ../bin.mk

