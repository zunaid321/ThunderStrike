obj-$(CONFIG_MTK_ECCCI_DRIVER) := ccci.o

ccflags-y += -I$(MTK_PATH_PLATFORM)/drivers/eccci/
ifeq ($(CONFIG_ARCH_MT6290), y)
	ccflags-y += -I$(srctree)/drivers/eccci_p/
	ccflags-y += -DMT6290
endif

# NOTICE:
# MT6595 can also define CONFIG_MTK_ECCCI_UT to enable UT mode.
# -DMT6290 is a must on MT6290, MT6290 can not simply defines CONFIG_MTK_ECCCI_UT
# to enable UT mode, Makefile must be reviewed if you want so.
# modem_cldma.o and modem_ut.o should not be enabled both, unless you checked code.

# CCCI common services
ccci-y := ccci_core.o ccci_bm.o ccci_sysfs.o ccci_dfo.o

# CCCI port layer
ccci-y += port_char.o port_net.o port_kernel.o port_ipc.o

# CCCI modem layer
ifneq ($(CONFIG_MTK_ECCCI_UT), y)
ccci-y += modem_cldma.o
else
ccci-y += modem_ut.o
endif
