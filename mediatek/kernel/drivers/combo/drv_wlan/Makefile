ifeq ($(MTK_WLAN_SUPPORT), yes)

SUPPORT_MT6620 := no
SUPPORT_MT6628 := no
SUPPORT_MT6630 := no

SUPPORT_MT6620 := $(if $(filter $(MTK_WLAN_CHIP), MT6620),yes,no)

SUPPORT_MT6628 := $(if $(filter $(MTK_WLAN_CHIP), MT6628),yes,no)

SUPPORT_MT6630 := $(if $(filter $(MTK_WLAN_CHIP), MT6630),yes,no)

ifeq ($(SUPPORT_MT6620), yes)
    obj-$(CONFIG_MTK_COMBO_WIFI) += mt6620/
endif    

ifeq ($(SUPPORT_MT6628), yes)
    obj-$(CONFIG_MTK_COMBO_WIFI) += mt6628/
endif    

ifeq ($(SUPPORT_MT6630), yes)
    obj-$(CONFIG_MTK_COMBO_WIFI) += mt6630/
endif

endif


