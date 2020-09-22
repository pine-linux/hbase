all clean install uninstall:
	$(MAKE) $(SUBDIRS) TARGET=$@

$(SUBDIRS):
	cd $@ && $(MAKE) $(TARGET)

.PHONY: all install uninstall clean $(SUBDIRS)

