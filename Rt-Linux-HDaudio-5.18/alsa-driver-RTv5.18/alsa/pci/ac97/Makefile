ifndef SND_TOPDIR
SND_TOPDIR=../..
endif

include $(SND_TOPDIR)/toplevel.config
include $(SND_TOPDIR)/Makefile.conf

clean-files := ac97_codec.c

include $(SND_TOPDIR)/alsa-kernel/pci/ac97/Makefile

include $(SND_TOPDIR)/Rules.make

ac97_codec.c: ac97_codec.patch $(SND_TOPDIR)/alsa-kernel/pci/ac97/ac97_codec.c
