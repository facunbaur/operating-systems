# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2001, 2003, 2006 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.17.50

SHELL = /bin/sh


srcdir = /cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/po
top_srcdir = /cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd
VPATH = /cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/po
top_builddir = ../

prefix = /root/cs161/tools
exec_prefix = ${prefix}
datadir = $(prefix)/share
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = /cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/../mkinstalldirs

CC = gcc
GENCAT = gencat
GMSGFMT = PATH=../src:$$PATH /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /usr/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/ja.po $(srcdir)/es.po $(srcdir)/sv.po $(srcdir)/da.po $(srcdir)/zh_CN.po $(srcdir)/ro.po $(srcdir)/rw.po $(srcdir)/vi.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/ja.gmo $(srcdir)/es.gmo $(srcdir)/sv.gmo $(srcdir)/da.gmo $(srcdir)/zh_CN.gmo $(srcdir)/ro.gmo $(srcdir)/rw.gmo $(srcdir)/vi.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aix386-core.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aix5ppc-core.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout0.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout32.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-adobe.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-arm.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-cris.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aoutf1.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-ns32k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-sparcle.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-target.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aout-tic30.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/aoutx.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/archive64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/archive.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/archures.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/armnetbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/bfd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/bfdio.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/bfdwin.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/binary.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/bout.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cache.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cf-i386lynx.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cf-sparclynx.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cisco-core.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff64-rs6000.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-alpha.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-apollo.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-arm.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-aux.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coffcode.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coffgen.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-go32.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-h8300.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-h8500.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-i386.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-i860.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-i960.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cofflink.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-m68k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-m88k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-maxq.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-mips.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-or32.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-rs6000.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-sh.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-sparc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-stgo32.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-svm68k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coffswap.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-tic30.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-tic4x.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-tic54x.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-tic80.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-u68k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-w65.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-we32k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-x86_64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-z80.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/coff-z8k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/corefile.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-alpha.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-arc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-arm.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-avr.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-bfin.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-cr16c.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-cris.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-crx.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-d10v.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-d30v.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-dlx.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-fr30.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-frv.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-h8300.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-h8500.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-hppa.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-i370.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-i386.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-i860.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-i960.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-ia64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-ip2k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-iq2000.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m10200.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m10300.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m32c.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m32r.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m68hc11.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m68hc12.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m68k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-m88k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-maxq.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-mcore.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-mips.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-mmix.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-msp430.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-mt.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-ns32k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-openrisc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-or32.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-pdp11.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-pj.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-powerpc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-rs6000.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-s390.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-score.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-sh.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-sparc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-spu.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-tic30.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-tic4x.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-tic54x.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-tic80.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-v850.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-vax.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-w65.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-we32k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-xc16x.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-xstormy16.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-xtensa.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-z80.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/cpu-z8k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/demo64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/dwarf1.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/dwarf2.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ecoff.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ecofflink.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ecoffswap.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/efi-app-ia32.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/efi-app-ia64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-am33lin.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-arc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-arm.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-avr.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-bfin.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-cr16c.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-cris.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-crx.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-d10v.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-d30v.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-dlx.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-fr30.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-frv.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-gen.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-h8300.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-hppa.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-hppa.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-i370.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-i386.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-i860.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-i960.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-ip2k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-iq2000.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m32c.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m32r.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m68hc11.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m68hc12.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m68hc1x.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m68k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-m88k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-mcore.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-mips.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-msp430.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-mt.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-openrisc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-or32.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-pj.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-ppc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-s390.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-score.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sh64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sh64-com.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sh.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sh-symbian.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-sparc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-spu.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-v850.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-vax.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-xc16x.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-xstormy16.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf32-xtensa.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-alpha.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-gen.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-hppa.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-hppa.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-mips.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-mmix.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-ppc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-s390.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-sh64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-sparc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf64-x86-64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-bfd.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfcode.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfcore.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-eh-frame.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-hppa.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elflink.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-m10200.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-m10300.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfn32-mips.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-strtab.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elf-vxworks.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfxx-mips.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/elfxx-sparc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/epoc-pe-arm.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/epoc-pei-arm.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/format.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/freebsd.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/genlink.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/go32stub.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/hash.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/hp300bsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/hp300hpux.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/hpux-core.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386aout.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386bsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386dynix.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386freebsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386linux.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386lynx.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386mach3.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386msdos.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386netbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/i386os9k.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ieee.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ihex.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/init.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/irix-core.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libaout.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libbfd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libbfd.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libcoff.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libecoff.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libhppa.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libieee.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libnlm.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/liboasys.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libpei.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/libxcoff.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/linker.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/lynx-core.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m68k4knetbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m68klinux.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m68knetbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m88kmach3.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/m88kopenbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/mach-o.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/mach-o.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/merge.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/mipsbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/mmo.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/netbsd.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/newsos3.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32-alpha.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32-i386.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32-ppc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm32-sparc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlmcode.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlmswap.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/nlm-target.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ns32k.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ns32knetbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/oasys.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/opncls.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/osf-core.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pc532-mach.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pdp11.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-arm.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-arm-wince.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pef.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pef.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pef-traceback.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-i386.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-arm.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-arm-wince.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/peicode.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-i386.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-mcore.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-mips.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-ppc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-sh.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pei-x86_64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-mcore.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-mips.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-ppc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-sh.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/pe-x86_64.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/ppcboot.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/reloc16.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/reloc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/riscix.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sco5-core.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/section.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/simple.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/som.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/som.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sparclinux.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sparclynx.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sparcnetbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/srec.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/stabs.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/stab-syms.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/sunos.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/syms.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/targets.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/tekhex.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/trad-core.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vax1knetbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vaxbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vaxnetbsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/versados.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/version.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms-gsd.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms-hdr.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms-misc.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/vms-tir.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xcofflink.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xcoff-target.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xsym.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xsym.h \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xtensa-isa.c \
	/cs161/cs161-gdb-1.5/./gdb-6.6+cs161/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfdver.h \
	../elf32-ia64.c \
	../elf32-target.h \
	../elf64-ia64.c \
	../elf64-target.h \
	../peigen.c \
	../pepigen.c \
	../pex64igen.c \
	../targmatch.h 

CATALOGS =  da.gmo es.gmo fr.gmo ja.gmo ro.gmo rw.gmo sv.gmo tr.gmo vi.gmo zh_CN.gmo da.gmo es.gmo fr.gmo ja.gmo ro.gmo rw.gmo sv.gmo tr.gmo vi.gmo zh_CN.gmo
CATOBJEXT = .gmo
INSTOBJEXT = .mo

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=$(srcdir)/`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-yes

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --files-from=$(srcdir)/BLD-POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
