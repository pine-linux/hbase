SUBDIRS =\
	libcommon\
	yacc\
	stty\
	fmt\
	hd\
	bc\
	pgrep\
	patch\
	diff

include dir.mk

bc lex: yacc

dc diff fmt hd pgrep stty: libcommon


