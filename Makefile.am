## Process this file with automake to produce Makefile.in
## Created by Anjuta

SUBDIRS = src 

dynamic_motddocdir = ${prefix}/doc/dynamic_motd
dynamic_motddoc_DATA = \
	README\
	COPYING\
	AUTHORS\
	ChangeLog\
	INSTALL\
	NEWS


EXTRA_DIST = $(dynamic_motddoc_DATA)


# Remove doc directory on uninstall
uninstall-local:
	-rm -r $(dynamic_motddocdir)
