/* include/config1.h.  Generated from config1.h.in by configure.  */
/* Soundcard configuration for ALSA driver */
/* Copyright (c) by Jaroslav Kysela <perex@perex.cz>, */
/*                  Anders Semb Hermansen <ahermans@vf.telia.no> */

#define CONFIG_SOUND_MODULE 1
/* #undef CONFIG_HAS_IOMEM_MODULE */
#define CONFIG_SOUND_OSS_CORE 1
/* #undef CONFIG_SOUND_OSS_CORE_PRECLAIM */
#define CONFIG_SND_MODULE 1
#define CONFIG_SND_TIMER_MODULE 1
#define CONFIG_SND_PCM_MODULE 1
#define CONFIG_SND_HWDEP_MODULE 1
/* #undef CONFIG_SND_RAWMIDI_MODULE */
/* #undef CONFIG_SND_COMPRESS_OFFLOAD_MODULE */
#define CONFIG_SND_JACK 1
#define CONFIG_SND_SEQUENCER_MODULE 1
/* #undef CONFIG_SND_SEQ_DUMMY_MODULE */
#define CONFIG_SND_OSSEMUL 1
#define CONFIG_SND_MIXER_OSS_MODULE 1
#define CONFIG_SND_PCM_OSS_MODULE 1
#define CONFIG_SND_PCM_OSS_PLUGINS 1
#define CONFIG_SND_SEQUENCER_OSS 1
/* #undef CONFIG_SND_HRTIMER_MODULE */
/* #undef CONFIG_SND_SEQ_HRTIMER_DEFAULT */
/* #undef CONFIG_SND_RTCTIMER_MODULE */
/* #undef CONFIG_SND_SEQ_RTCTIMER_DEFAULT */
/* #undef CONFIG_SND_DYNAMIC_MINORS */
/* #undef CONFIG_SND_MAX_CARDS */
#define CONFIG_SND_SUPPORT_OLD_API 1
#define CONFIG_SND_VERBOSE_PROCFS 1
#define CONFIG_SND_VERBOSE_PRINTK 1
/* #undef CONFIG_SND_DEBUG */
/* #undef CONFIG_SND_DEBUG_VERBOSE */
/* #undef CONFIG_SND_PCM_XRUN_DEBUG */
#define CONFIG_SND_VMASTER 1
#define CONFIG_SND_KCTL_JACK 1
#define CONFIG_SND_DMA_SGBUF 1
/* #undef CONFIG_SND_RAWMIDI_SEQ_MODULE */
/* #undef CONFIG_SND_OPL3_LIB_SEQ_MODULE */
/* #undef CONFIG_SND_OPL3_LIB_MODULE */
/* #undef CONFIG_SND_OPL4_LIB_SEQ_MODULE */
/* #undef CONFIG_SND_OPL4_LIB_MODULE */
/* #undef CONFIG_SND_SBAWE_SEQ_MODULE */
/* #undef CONFIG_SND_SBAWE_MODULE */
/* #undef CONFIG_SND_EMU10K1_SEQ_MODULE */
/* #undef CONFIG_SND_EMU10K1_MODULE */
/* #undef CONFIG_SND_BIT32_EMUL_MODULE */
/* #undef CONFIG_SND_DEBUG_MEMORY */
/* #undef CONFIG_SND_HPET_MODULE */
/* #undef CONFIG_SND_MPU401_UART_MODULE */
/* #undef CONFIG_SND_VX_LIB_MODULE */
/* #undef CONFIG_SND_AC97_CODEC_MODULE */
#define CONFIG_SND_DRIVERS 1
/* #undef CONFIG_SND_PCSP_MODULE */
/* #undef CONFIG_SND_DUMMY_MODULE */
/* #undef CONFIG_SND_ALOOP_MODULE */
/* #undef CONFIG_SND_VIRMIDI_MODULE */
/* #undef CONFIG_SND_MTPAV_MODULE */
/* #undef CONFIG_SND_MTS64_MODULE */
/* #undef CONFIG_SND_SERIAL_U16550_MODULE */
/* #undef CONFIG_SND_MPU401_MODULE */
/* #undef CONFIG_SND_PORTMAN2X4_MODULE */
/* #undef CONFIG_SND_ML403_AC97CR_MODULE */
/* #undef CONFIG_SND_AC97_POWER_SAVE */
/* #undef CONFIG_SND_AC97_POWER_SAVE_DEFAULT */
/* #undef CONFIG_SND_SERIALMIDI_MODULE */
/* #undef CONFIG_SND_LOOPBACK_MODULE */
/* #undef CONFIG_SND_WSS_LIB_MODULE */
/* #undef CONFIG_SND_SB_COMMON_MODULE */
/* #undef CONFIG_SND_SB8_DSP_MODULE */
/* #undef CONFIG_SND_SB16_DSP_MODULE */
/* #undef CONFIG_SND_ISA */
/* #undef CONFIG_SND_ADLIB_MODULE */
/* #undef CONFIG_SND_AD1816A_MODULE */
/* #undef CONFIG_SND_AD1848_MODULE */
/* #undef CONFIG_SND_ALS100_MODULE */
/* #undef CONFIG_SND_AZT1605_MODULE */
/* #undef CONFIG_SND_AZT2316_MODULE */
/* #undef CONFIG_SND_AZT2320_MODULE */
/* #undef CONFIG_SND_CMI8328_MODULE */
/* #undef CONFIG_SND_CMI8330_MODULE */
/* #undef CONFIG_SND_CS4231_MODULE */
/* #undef CONFIG_SND_CS4236_MODULE */
/* #undef CONFIG_SND_ES1688_MODULE */
/* #undef CONFIG_SND_ES18XX_MODULE */
/* #undef CONFIG_SND_SC6000_MODULE */
/* #undef CONFIG_SND_GUSCLASSIC_MODULE */
/* #undef CONFIG_SND_GUSEXTREME_MODULE */
/* #undef CONFIG_SND_GUSMAX_MODULE */
/* #undef CONFIG_SND_INTERWAVE_MODULE */
/* #undef CONFIG_SND_INTERWAVE_STB_MODULE */
/* #undef CONFIG_SND_JAZZ16_MODULE */
/* #undef CONFIG_SND_OPL3SA2_MODULE */
/* #undef CONFIG_SND_OPTI92X_AD1848_MODULE */
/* #undef CONFIG_SND_OPTI92X_CS4231_MODULE */
/* #undef CONFIG_SND_OPTI93X_MODULE */
/* #undef CONFIG_SND_MIRO_MODULE */
/* #undef CONFIG_SND_SB8_MODULE */
/* #undef CONFIG_SND_SB16_MODULE */
/* #undef CONFIG_SND_SB16_CSP */
/* #undef CONFIG_SND_SSCAPE_MODULE */
/* #undef CONFIG_SND_WAVEFRONT_MODULE */
/* #undef CONFIG_SND_MSND_PINNACLE_MODULE */
/* #undef CONFIG_SND_MSND_CLASSIC_MODULE */
/* #undef CONFIG_SND_PC98_CS4232_MODULE */
/* #undef CONFIG_SND_TEA575X_MODULE */
/* #undef CONFIG_SND_FM801_TEA575X_BOOL */
/* #undef CONFIG_SND_ES1968_RADIO */
/* #undef CONFIG_RADIO_SF16FMR2_MODULE */
/* #undef CONFIG_RADIO_MAXIRADIO_MODULE */
/* #undef CONFIG_RADIO_SHARK_MODULE */
/* #undef CONFIG_SND_FM801_MODULE */
/* #undef CONFIG_SND_ES1968_MODULE */
#define CONFIG_SND_PCI 1
/* #undef CONFIG_SND_AD1889_MODULE */
/* #undef CONFIG_SND_ALS300_MODULE */
/* #undef CONFIG_SND_ALS4000_MODULE */
/* #undef CONFIG_SND_ALI5451_MODULE */
/* #undef CONFIG_SND_ASIHPI_MODULE */
/* #undef CONFIG_SND_ATIIXP_MODULE */
/* #undef CONFIG_SND_ATIIXP_MODEM_MODULE */
/* #undef CONFIG_SND_AU8810_MODULE */
/* #undef CONFIG_SND_AU8820_MODULE */
/* #undef CONFIG_SND_AU8830_MODULE */
/* #undef CONFIG_SND_AW2_MODULE */
/* #undef CONFIG_SND_AZT3328_MODULE */
/* #undef CONFIG_SND_BT87X_MODULE */
/* #undef CONFIG_SND_BT87X_OVERCLOCK */
/* #undef CONFIG_SND_CA0106_MODULE */
/* #undef CONFIG_SND_CMIPCI_MODULE */
/* #undef CONFIG_SND_OXYGEN_LIB_MODULE */
/* #undef CONFIG_SND_OXYGEN_MODULE */
/* #undef CONFIG_SND_CS4281_MODULE */
/* #undef CONFIG_SND_CS46XX_MODULE */
/* #undef CONFIG_SND_CS46XX_NEW_DSP */
/* #undef CONFIG_SND_CS5530_MODULE */
/* #undef CONFIG_SND_CS5535AUDIO_MODULE */
/* #undef CONFIG_SND_CTXFI_MODULE */
/* #undef CONFIG_SND_DARLA20_MODULE */
/* #undef CONFIG_SND_GINA20_MODULE */
/* #undef CONFIG_SND_LAYLA20_MODULE */
/* #undef CONFIG_SND_DARLA24_MODULE */
/* #undef CONFIG_SND_GINA24_MODULE */
/* #undef CONFIG_SND_LAYLA24_MODULE */
/* #undef CONFIG_SND_MONA_MODULE */
/* #undef CONFIG_SND_MIA_MODULE */
/* #undef CONFIG_SND_ECHO3G_MODULE */
/* #undef CONFIG_SND_INDIGO_MODULE */
/* #undef CONFIG_SND_INDIGOIO_MODULE */
/* #undef CONFIG_SND_INDIGODJ_MODULE */
/* #undef CONFIG_SND_INDIGOIOX_MODULE */
/* #undef CONFIG_SND_INDIGODJX_MODULE */
/* #undef CONFIG_SND_EMU10K1X_MODULE */
/* #undef CONFIG_SND_ENS1370_MODULE */
/* #undef CONFIG_SND_ENS1371_MODULE */
/* #undef CONFIG_SND_ES1938_MODULE */
/* #undef CONFIG_SND_ES1968_INPUT */
#define CONFIG_SND_HDA_INTEL_MODULE 1
#define CONFIG_SND_HDA_DSP_LOADER 1
#define CONFIG_SND_HDA_PREALLOC_SIZE 64
#define CONFIG_SND_HDA_HWDEP 1
#define CONFIG_SND_HDA_RECONFIG 1
#define CONFIG_SND_HDA_INPUT_BEEP 1
#define CONFIG_SND_HDA_INPUT_BEEP_MODE 1
#define CONFIG_SND_HDA_INPUT_JACK 1
#define CONFIG_SND_HDA_PATCH_LOADER 1
#define CONFIG_SND_HDA_CODEC_REALTEK 1
#define CONFIG_SND_HDA_CODEC_ANALOG 1
#define CONFIG_SND_HDA_CODEC_SIGMATEL 1
#define CONFIG_SND_HDA_CODEC_VIA 1
#define CONFIG_SND_HDA_CODEC_HDMI 1
#define CONFIG_SND_HDA_CODEC_CIRRUS 1
#define CONFIG_SND_HDA_CODEC_CONEXANT 1
#define CONFIG_SND_HDA_CODEC_CA0110 1
#define CONFIG_SND_HDA_CODEC_CA0132 1
#define CONFIG_SND_HDA_CODEC_CA0132_DSP 1
#define CONFIG_SND_HDA_CODEC_CMEDIA 1
#define CONFIG_SND_HDA_CODEC_SI3054 1
#define CONFIG_SND_HDA_GENERIC 1
#define CONFIG_SND_HDA_POWER_SAVE_DEFAULT 0
/* #undef CONFIG_PM_MODULE */
/* #undef CONFIG_SND_HDSP_MODULE */
/* #undef CONFIG_SND_HDSPM_MODULE */
/* #undef CONFIG_SND_ICE1712_MODULE */
/* #undef CONFIG_BITREVERSE_MODULE */
/* #undef CONFIG_SND_ICE1724_MODULE */
/* #undef CONFIG_SND_INTEL8X0_MODULE */
/* #undef CONFIG_SND_INTEL8X0M_MODULE */
/* #undef CONFIG_SND_KORG1212_MODULE */
/* #undef CONFIG_SND_LOLA_MODULE */
/* #undef CONFIG_SND_LX6464ES_MODULE */
/* #undef CONFIG_SND_MAESTRO3_MODULE */
/* #undef CONFIG_SND_MAESTRO3_INPUT */
/* #undef CONFIG_SND_MIXART_MODULE */
/* #undef CONFIG_SND_NM256_MODULE */
/* #undef CONFIG_SND_PCXHR_MODULE */
/* #undef CONFIG_SND_RIPTIDE_MODULE */
/* #undef CONFIG_SND_RME32_MODULE */
/* #undef CONFIG_SND_RME96_MODULE */
/* #undef CONFIG_SND_RME9652_MODULE */
/* #undef CONFIG_SND_SIS7019_MODULE */
/* #undef CONFIG_SND_SONICVIBES_MODULE */
/* #undef CONFIG_SND_TRIDENT_MODULE */
/* #undef CONFIG_SND_VIA82XX_MODULE */
/* #undef CONFIG_SND_VIA82XX_MODEM_MODULE */
/* #undef CONFIG_SND_VIRTUOSO_MODULE */
/* #undef CONFIG_SND_VX222_MODULE */
/* #undef CONFIG_SND_YMFPCI_MODULE */
/* #undef CONFIG_SND_PDPLUS_MODULE */
/* #undef CONFIG_SND_PPC */
/* #undef CONFIG_SND_POWERMAC_MODULE */
/* #undef CONFIG_SND_POWERMAC_AUTO_DRC */
/* #undef CONFIG_SND_PS3_MODULE */
/* #undef CONFIG_SND_PS3_DEFAULT_START_DELAY */
/* #undef CONFIG_SND_AOA_MODULE */
/* #undef CONFIG_SND_AOA_FABRIC_LAYOUT_MODULE */
/* #undef CONFIG_SND_AOA_ONYX_MODULE */
/* #undef CONFIG_SND_AOA_TAS_MODULE */
/* #undef CONFIG_SND_AOA_TOONIE_MODULE */
/* #undef CONFIG_SND_AOA_SOUNDBUS_MODULE */
/* #undef CONFIG_SND_AOA_SOUNDBUS_I2S_MODULE */
/* #undef CONFIG_SND_ARM */
/* #undef CONFIG_SND_ARMAACI_MODULE */
/* #undef CONFIG_SND_PXA2XX_PCM_MODULE */
/* #undef CONFIG_SND_PXA2XX_LIB_MODULE */
/* #undef CONFIG_SND_PXA2XX_LIB_AC97 */
/* #undef CONFIG_SND_PXA2XX_AC97_MODULE */
/* #undef CONFIG_SND_SA11XX_UDA1341_MODULE */
/* #undef CONFIG_SND_S3C2410_MODULE */
/* #undef CONFIG_SND_PXA2XX_I2SOUND_MODULE */
/* #undef CONFIG_SND_ATMEL_ABDAC_MODULE */
/* #undef CONFIG_DW_DMAC_MODULE */
/* #undef CONFIG_SND_ATMEL_AC97C_MODULE */
/* #undef CONFIG_SND_SPI */
/* #undef CONFIG_SND_AT73C213_MODULE */
/* #undef CONFIG_SND_AT73C213_TARGET_BITRATE */
/* #undef CONFIG_SND_MIPS */
/* #undef CONFIG_SND_SGI_O2_MODULE */
/* #undef CONFIG_SND_SGI_HAL2_MODULE */
/* #undef CONFIG_SND_AU1X00_MODULE */
/* #undef CONFIG_SND_SUPERH */
/* #undef CONFIG_SND_AICA_MODULE */
/* #undef CONFIG_G2_DMA_MODULE */
/* #undef CONFIG_SND_SH_DAC_AUDIO_MODULE */
#define CONFIG_SND_USB 1
/* #undef CONFIG_SND_USB_AUDIO_MODULE */
/* #undef CONFIG_SND_USB_UA101_MODULE */
/* #undef CONFIG_SND_USB_USX2Y_MODULE */
/* #undef CONFIG_SND_USB_CAIAQ_MODULE */
/* #undef CONFIG_SND_USB_CAIAQ_INPUT */
/* #undef CONFIG_SND_USB_US122L_MODULE */
/* #undef CONFIG_SND_USB_6FIRE_MODULE */
#define CONFIG_SND_FIREWIRE 1
/* #undef CONFIG_SND_FIREWIRE_LIB_MODULE */
/* #undef CONFIG_SND_FIREWIRE_SPEAKERS_MODULE */
/* #undef CONFIG_SND_ISIGHT_MODULE */
/* #undef CONFIG_SND_SCS1X_MODULE */
#define CONFIG_SND_PCMCIA 1
/* #undef CONFIG_SND_VXPOCKET_MODULE */
/* #undef CONFIG_SND_PDAUDIOCF_MODULE */
/* #undef CONFIG_SND_SPARC */
/* #undef CONFIG_SND_SUN_AMD7930_MODULE */
/* #undef CONFIG_SND_SUN_CS4231_MODULE */
/* #undef CONFIG_SND_SUN_DBRI_MODULE */
/* #undef CONFIG_SND_GSC */
/* #undef CONFIG_SND_HARMONY_MODULE */
/* #undef CONFIG_SND_SOC_MODULE */
/* #undef CONFIG_REGMAP_I2C_MODULE */
/* #undef CONFIG_REGMAP_SPI_MODULE */
/* #undef CONFIG_SND_SOC_AC97_BUS */
/* #undef CONFIG_SND_SOC_DMAENGINE_PCM */
/* #undef CONFIG_SND_SOC_GENERIC_DMAENGINE_PCM */
/* #undef CONFIG_SND_ATMEL_SOC_MODULE */
/* #undef CONFIG_SND_ATMEL_SOC_PDC_MODULE */
/* #undef CONFIG_SND_ATMEL_SOC_DMA_MODULE */
/* #undef CONFIG_SND_ATMEL_SOC_SSC_MODULE */
/* #undef CONFIG_SND_AT91_SOC_SAM9G20_WM8731_MODULE */
/* #undef CONFIG_AT91_PROGRAMMABLE_CLOCKS_MODULE */
/* #undef CONFIG_SND_AT91_SOC_AFEB9260_MODULE */
/* #undef CONFIG_SND_SOC_AU1XPSC_MODULE */
/* #undef CONFIG_SND_SOC_AU1XPSC_I2S_MODULE */
/* #undef CONFIG_SND_SOC_AU1XPSC_AC97_MODULE */
/* #undef CONFIG_SND_SOC_AU1XAUDIO_MODULE */
/* #undef CONFIG_SND_SOC_AU1XAC97C_MODULE */
/* #undef CONFIG_SND_SOC_AU1XI2SC_MODULE */
/* #undef CONFIG_SND_SOC_DB1000_MODULE */
/* #undef CONFIG_SND_SOC_DB1200_MODULE */
/* #undef CONFIG_SND_BF5XX_I2S_MODULE */
/* #undef CONFIG_SND_BF5XX_SOC_SSM2602_MODULE */
/* #undef CONFIG_SPI_MASTER_MODULE */
/* #undef CONFIG_SND_SOC_BFIN_EVAL_ADAU1701_MODULE */
/* #undef CONFIG_SND_SOC_BFIN_EVAL_ADAU1373_MODULE */
/* #undef CONFIG_SND_SOC_BFIN_EVAL_ADAV80X_MODULE */
/* #undef CONFIG_SND_BF5XX_SOC_AD73311_MODULE */
/* #undef CONFIG_SND_BFIN_AD73311_SE */
/* #undef CONFIG_SND_BF5XX_TDM_MODULE */
/* #undef CONFIG_SND_BF5XX_SOC_AD1836_MODULE */
/* #undef CONFIG_SND_BF5XX_SOC_AD193X_MODULE */
/* #undef CONFIG_SND_BF5XX_AC97_MODULE */
/* #undef CONFIG_SND_BF5XX_MMAP_SUPPORT */
/* #undef CONFIG_SND_BF5XX_MULTICHAN_SUPPORT */
/* #undef CONFIG_SND_BF5XX_HAVE_COLD_RESET */
/* #undef CONFIG_SND_BF5XX_RESET_GPIO_NUM */
/* #undef CONFIG_SND_BF5XX_SOC_AD1980_MODULE */
/* #undef CONFIG_SND_BF5XX_SOC_SPORT_MODULE */
/* #undef CONFIG_SND_BF6XX_SOC_SPORT_MODULE */
/* #undef CONFIG_SND_BF5XX_SOC_I2S_MODULE */
/* #undef CONFIG_SND_BF6XX_SOC_I2S_MODULE */
/* #undef CONFIG_SND_BF5XX_SOC_TDM_MODULE */
/* #undef CONFIG_SND_BF5XX_SOC_AC97_MODULE */
/* #undef CONFIG_SND_BF5XX_SPORT_NUM */
/* #undef CONFIG_SND_EP93XX_SOC_MODULE */
/* #undef CONFIG_SND_EP93XX_SOC_I2S_MODULE */
/* #undef CONFIG_SND_EP93XX_SOC_AC97_MODULE */
/* #undef CONFIG_SND_EP93XX_SOC_SNAPPERCL15_MODULE */
/* #undef CONFIG_SND_EP93XX_SOC_SIMONE_MODULE */
/* #undef CONFIG_SND_EP93XX_SOC_EDB93XX_MODULE */
/* #undef CONFIG_SND_DAVINCI_SOC_MODULE */
/* #undef CONFIG_SND_DAVINCI_SOC_I2S_MODULE */
/* #undef CONFIG_SND_DAVINCI_SOC_MCASP_MODULE */
/* #undef CONFIG_SND_DAVINCI_SOC_VCIF_MODULE */
/* #undef CONFIG_SND_DAVINCI_SOC_EVM_MODULE */
/* #undef CONFIG_SND_DM365_AIC3X_CODEC */
/* #undef CONFIG_SND_DM365_VOICE_CODEC */
/* #undef CONFIG_SND_DM6467_SOC_EVM_MODULE */
/* #undef CONFIG_SND_DAVINCI_SOC_SFFSDR_MODULE */
/* #undef CONFIG_SFFSDR_FPGA_MODULE */
/* #undef CONFIG_SND_DA830_SOC_EVM_MODULE */
/* #undef CONFIG_SND_DA850_SOC_EVM_MODULE */
/* #undef CONFIG_SND_DESIGNWARE_I2S_MODULE */
/* #undef CONFIG_CLKDEV_LOOKUP_MODULE */
/* #undef CONFIG_SND_SOC_FSL_SSI_MODULE */
/* #undef CONFIG_SND_SOC_FSL_UTILS_MODULE */
/* #undef CONFIG_SND_POWERPC_SOC_MODULE */
/* #undef CONFIG_FSL_SOC_MODULE */
/* #undef CONFIG_SND_MPC52XX_DMA_MODULE */
/* #undef CONFIG_SND_SOC_POWERPC_DMA_MODULE */
/* #undef CONFIG_SND_SOC_MPC8610_HPCD_MODULE */
/* #undef CONFIG_SND_SOC_P1022_DS_MODULE */
/* #undef CONFIG_P1022_DS_MODULE */
/* #undef CONFIG_SND_SOC_P1022_RDK_MODULE */
/* #undef CONFIG_P1022_RDK_MODULE */
/* #undef CONFIG_SND_SOC_MPC5200_I2S_MODULE */
/* #undef CONFIG_SND_SOC_MPC5200_AC97_MODULE */
/* #undef CONFIG_SND_MPC52XX_SOC_PCM030_MODULE */
/* #undef CONFIG_SND_MPC52XX_SOC_EFIKA_MODULE */
/* #undef CONFIG_SND_IMX_SOC_MODULE */
/* #undef CONFIG_SND_SOC_IMX_SSI_MODULE */
/* #undef CONFIG_SND_SOC_IMX_PCM_MODULE */
/* #undef CONFIG_SND_SOC_IMX_PCM_FIQ */
/* #undef CONFIG_FIQ_MODULE */
/* #undef CONFIG_SND_SOC_IMX_PCM_DMA */
/* #undef CONFIG_SND_SOC_IMX_AUDMUX_MODULE */
/* #undef CONFIG_SND_MXC_SOC_WM1133_EV1_MODULE */
/* #undef CONFIG_SND_SOC_MX27VIS_AIC32X4_MODULE */
/* #undef CONFIG_SND_SOC_PHYCORE_AC97_MODULE */
/* #undef CONFIG_SND_SOC_EUKREA_TLV320_MODULE */
/* #undef CONFIG_SND_SOC_IMX_SGTL5000_MODULE */
/* #undef CONFIG_OF_MODULE */
/* #undef CONFIG_SND_SOC_IMX_MC13783_MODULE */
/* #undef CONFIG_SND_JZ4740_SOC_MODULE */
/* #undef CONFIG_SND_JZ4740_SOC_I2S_MODULE */
/* #undef CONFIG_SND_JZ4740_SOC_QI_LB60_MODULE */
/* #undef CONFIG_JZ4740_QI_LB60_MODULE */
/* #undef CONFIG_SND_SOC_NUC900_MODULE */
/* #undef CONFIG_SND_SOC_NUC900_AC97_MODULE */
/* #undef CONFIG_SND_SOC_NUC900EVB_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_MODULE */
/* #undef CONFIG_DMA_OMAP_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_DMIC_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_MCBSP_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_MCPDM_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_HDMI_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_N810_MODULE */
/* #undef CONFIG_OMAP_MUX_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_RX51_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_AMS_DELTA_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_OSK5912_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_AM3517EVM_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_OMAP_TWL4030_MODULE */
/* #undef CONFIG_TWL4030_CORE_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_OMAP_ABE_TWL6040_MODULE */
/* #undef CONFIG_TWL6040_CORE_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_OMAP_HDMI_MODULE */
/* #undef CONFIG_OMAP4_DSS_HDMI_MODULE */
/* #undef CONFIG_OMAP2_DSS_MODULE */
/* #undef CONFIG_OMAP4_DSS_HDMI_AUDIO_MODULE */
/* #undef CONFIG_SND_OMAP_SOC_OMAP3_PANDORA_MODULE */
/* #undef CONFIG_SND_KIRKWOOD_SOC_MODULE */
/* #undef CONFIG_SND_KIRKWOOD_SOC_I2S_MODULE */
/* #undef CONFIG_SND_KIRKWOOD_SOC_OPENRD_MODULE */
/* #undef CONFIG_SND_KIRKWOOD_SOC_T5325_MODULE */
/* #undef CONFIG_SND_MFLD_MACHINE_MODULE */
/* #undef CONFIG_INTEL_SCU_IPC_MODULE */
/* #undef CONFIG_SND_SST_PLATFORM_MODULE */
/* #undef CONFIG_SND_MXS_SOC_MODULE */
/* #undef CONFIG_SND_SOC_MXS_SGTL5000_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_MODULE */
/* #undef CONFIG_SND_MMP_SOC */
/* #undef CONFIG_SND_PXA2XX_SOC_AC97_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_I2S_MODULE */
/* #undef CONFIG_SND_PXA_SOC_SSP_MODULE */
/* #undef CONFIG_SND_MMP_SOC_SSPA_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_CORGI_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_SPITZ_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_Z2_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_POODLE_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_TOSA_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_E740_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_E750_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_E800_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_EM_X270_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_PALM27X */
/* #undef CONFIG_SND_SOC_SAARB_MODULE */
/* #undef CONFIG_SND_SOC_TAVOREVB3_MODULE */
/* #undef CONFIG_SND_PXA910_SOC_MODULE */
/* #undef CONFIG_SND_SOC_TTC_DKB */
/* #undef CONFIG_SND_SOC_ZYLONITE_MODULE */
/* #undef CONFIG_SND_SOC_RAUMFELD_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_HX4700_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_MAGICIAN_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_MIOA701_MODULE */
/* #undef CONFIG_SND_PXA2XX_SOC_IMOTE2_MODULE */
/* #undef CONFIG_SND_MMP_SOC_BROWNSTONE_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_MODULE */
/* #undef CONFIG_PLAT_SAMSUNG_MODULE */
/* #undef CONFIG_S3C64XX_DMA_MODULE */
/* #undef CONFIG_S3C2410_DMA_MODULE */
/* #undef CONFIG_SND_S3C24XX_I2S_MODULE */
/* #undef CONFIG_SND_S3C_I2SV2_SOC_MODULE */
/* #undef CONFIG_SND_S3C2412_SOC_I2S_MODULE */
/* #undef CONFIG_SND_SAMSUNG_PCM_MODULE */
/* #undef CONFIG_SND_SAMSUNG_AC97_MODULE */
/* #undef CONFIG_SND_SAMSUNG_SPDIF_MODULE */
/* #undef CONFIG_SND_SAMSUNG_I2S_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_NEO1973_WM8753_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_JIVE_WM8750_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_SMDK_WM8580_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_SMDK_WM8994_MODULE */
/* #undef CONFIG_GENERIC_HARDIRQS_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_SMDK2443_WM9710_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_LN2440SBC_ALC650_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_S3C24XX_UDA134X_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_SIMTEC_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_SIMTEC_TLV320AIC23_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_SIMTEC_HERMES_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_H1940_UDA1380_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_RX1950_UDA1380_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_SMDK_WM9713_MODULE */
/* #undef CONFIG_SND_SOC_SMARTQ_MODULE */
/* #undef CONFIG_SND_SOC_GONI_AQUILA_WM8994_MODULE */
/* #undef CONFIG_SND_SOC_SAMSUNG_SMDK_SPDIF_MODULE */
/* #undef CONFIG_SND_SOC_SMDK_WM8580_PCM_MODULE */
/* #undef CONFIG_SND_SOC_SMDK_WM8994_PCM_MODULE */
/* #undef CONFIG_SND_SOC_SPEYSIDE_MODULE */
/* #undef CONFIG_SND_SOC_TOBERMORY_MODULE */
/* #undef CONFIG_SND_SOC_BELLS_MODULE */
/* #undef CONFIG_SND_SOC_LOWLAND_MODULE */
/* #undef CONFIG_SND_SOC_LITTLEMILL_MODULE */
/* #undef CONFIG_SND_S6000_SOC_MODULE */
/* #undef CONFIG_XTENSA_VARIANT_S6000_MODULE */
/* #undef CONFIG_SND_S6000_SOC_I2S_MODULE */
/* #undef CONFIG_SND_S6000_SOC_S6IPCAM_MODULE */
/* #undef CONFIG_XTENSA_PLATFORM_S6105_MODULE */
/* #undef CONFIG_SND_SOC_PCM_SH7760_MODULE */
/* #undef CONFIG_SND_SOC_SH4_HAC_MODULE */
/* #undef CONFIG_SND_SOC_SH4_SSI_MODULE */
/* #undef CONFIG_SND_SOC_SH4_FSI_MODULE */
/* #undef CONFIG_SND_SOC_SH4_SIU_MODULE */
/* #undef CONFIG_HAVE_CLK_MODULE */
/* #undef CONFIG_DMA_ENGINE_MODULE */
/* #undef CONFIG_DMADEVICES_MODULE */
/* #undef CONFIG_SND_SH7760_AC97_MODULE */
/* #undef CONFIG_SND_SIU_MIGOR_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA_MODULE */
/* #undef CONFIG_TEGRA20_APB_DMA_MODULE */
/* #undef CONFIG_REGMAP_MMIO_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA20_AC97_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA20_DAS_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA20_I2S_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA20_SPDIF_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA30_AHUB_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA30_I2S_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA_WM8753_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA_WM8903_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA_WM9712_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA_TRIMSLICE_MODULE */
/* #undef CONFIG_SND_SOC_TEGRA_ALC5632_MODULE */
/* #undef CONFIG_SND_SOC_TXX9ACLC_MODULE */
/* #undef CONFIG_HAS_TXX9_ACLC */
/* #undef CONFIG_TXX9_DMAC_MODULE */
/* #undef CONFIG_SND_SOC_TXX9ACLC_AC97_MODULE */
/* #undef CONFIG_SND_SOC_TXX9ACLC_GENERIC_MODULE */
/* #undef CONFIG_SND_SOC_UX500_MODULE */
/* #undef CONFIG_SND_SOC_UX500_PLAT_MSP_I2S_MODULE */
/* #undef CONFIG_SND_SOC_UX500_PLAT_DMA_MODULE */
/* #undef CONFIG_SND_SOC_UX500_MACH_MOP500_MODULE */
/* #undef CONFIG_AB8500_CORE_MODULE */
/* #undef CONFIG_AB8500_GPADC_MODULE */
/* #undef CONFIG_SND_SOC_I2C_AND_SPI_MODULE */
/* #undef CONFIG_SND_SOC_88PM860X_MODULE */
/* #undef CONFIG_SND_SOC_ARIZONA_MODULE */
/* #undef CONFIG_SND_SOC_WM_HUBS_MODULE */
/* #undef CONFIG_SND_SOC_WM_ADSP_MODULE */
/* #undef CONFIG_SND_SOC_AB8500_CODEC_MODULE */
/* #undef CONFIG_SND_SOC_AC97_CODEC_MODULE */
/* #undef CONFIG_SND_SOC_AD1836_MODULE */
/* #undef CONFIG_SND_SOC_AD193X_MODULE */
/* #undef CONFIG_SND_SOC_AD1980_MODULE */
/* #undef CONFIG_SND_SOC_AD73311_MODULE */
/* #undef CONFIG_SND_SOC_ADAU1701_MODULE */
/* #undef CONFIG_SND_SOC_ADAU1373_MODULE */
/* #undef CONFIG_SND_SOC_ADAV80X_MODULE */
/* #undef CONFIG_SND_SOC_ADS117X_MODULE */
/* #undef CONFIG_SND_SOC_AK4104_MODULE */
/* #undef CONFIG_SND_SOC_AK4535_MODULE */
/* #undef CONFIG_SND_SOC_AK4641_MODULE */
/* #undef CONFIG_SND_SOC_AK4642_MODULE */
/* #undef CONFIG_SND_SOC_AK4671_MODULE */
/* #undef CONFIG_SND_SOC_AK5386_MODULE */
/* #undef CONFIG_SND_SOC_ALC5623_MODULE */
/* #undef CONFIG_SND_SOC_ALC5632_MODULE */
/* #undef CONFIG_SND_SOC_CQ0093VC_MODULE */
/* #undef CONFIG_SND_SOC_CS42L51_MODULE */
/* #undef CONFIG_SND_SOC_CS42L52_MODULE */
/* #undef CONFIG_SND_SOC_CS42L73_MODULE */
/* #undef CONFIG_SND_SOC_CS4270_MODULE */
/* #undef CONFIG_SND_SOC_CS4270_VD33_ERRATA */
/* #undef CONFIG_SND_SOC_CS4271_MODULE */
/* #undef CONFIG_SND_SOC_CX20442_MODULE */
/* #undef CONFIG_TTY_MODULE */
/* #undef CONFIG_SND_SOC_JZ4740_CODEC_MODULE */
/* #undef CONFIG_SND_SOC_L3_MODULE */
/* #undef CONFIG_SND_SOC_DA7210_MODULE */
/* #undef CONFIG_SND_SOC_DA7213_MODULE */
/* #undef CONFIG_SND_SOC_DA732X_MODULE */
/* #undef CONFIG_SND_SOC_DA9055_MODULE */
/* #undef CONFIG_SND_SOC_DFBMCS320_MODULE */
/* #undef CONFIG_SND_SOC_DMIC_MODULE */
/* #undef CONFIG_SND_SOC_ISABELLE_MODULE */
/* #undef CONFIG_SND_SOC_LM49453_MODULE */
/* #undef CONFIG_SND_SOC_MAX98088_MODULE */
/* #undef CONFIG_SND_SOC_MAX98090_MODULE */
/* #undef CONFIG_SND_SOC_MAX98095_MODULE */
/* #undef CONFIG_SND_SOC_MAX9850_MODULE */
/* #undef CONFIG_SND_SOC_OMAP_HDMI_CODEC_MODULE */
/* #undef CONFIG_SND_SOC_PCM3008_MODULE */
/* #undef CONFIG_SND_SOC_RT5631_MODULE */
/* #undef CONFIG_SND_SOC_SGTL5000_MODULE */
/* #undef CONFIG_SND_SOC_SI476X_MODULE */
/* #undef CONFIG_SND_SOC_SIGMADSP_MODULE */
/* #undef CONFIG_CRC32_MODULE */
/* #undef CONFIG_SND_SOC_SN95031_MODULE */
/* #undef CONFIG_SND_SOC_SPDIF_MODULE */
/* #undef CONFIG_SND_SOC_SSM2602_MODULE */
/* #undef CONFIG_SND_SOC_STA32X_MODULE */
/* #undef CONFIG_SND_SOC_STA529_MODULE */
/* #undef CONFIG_SND_SOC_STAC9766_MODULE */
/* #undef CONFIG_SND_SOC_TAS5086_MODULE */
/* #undef CONFIG_SND_SOC_TLV320AIC23_MODULE */
/* #undef CONFIG_SND_SOC_TLV320AIC26_MODULE */
/* #undef CONFIG_SND_SOC_TLV320AIC32X4_MODULE */
/* #undef CONFIG_SND_SOC_TLV320AIC3X_MODULE */
/* #undef CONFIG_SND_SOC_TLV320DAC33_MODULE */
/* #undef CONFIG_SND_SOC_TWL4030_MODULE */
/* #undef CONFIG_SND_SOC_TWL6040_MODULE */
/* #undef CONFIG_SND_SOC_UDA134X_MODULE */
/* #undef CONFIG_SND_SOC_UDA1380_MODULE */
/* #undef CONFIG_SND_SOC_WL1273_MODULE */
/* #undef CONFIG_SND_SOC_WM0010_MODULE */
/* #undef CONFIG_SND_SOC_WM1250_EV1_MODULE */
/* #undef CONFIG_SND_SOC_WM2000_MODULE */
/* #undef CONFIG_SND_SOC_WM2200_MODULE */
/* #undef CONFIG_SND_SOC_WM5100_MODULE */
/* #undef CONFIG_SND_SOC_WM5102_MODULE */
/* #undef CONFIG_SND_SOC_WM5110_MODULE */
/* #undef CONFIG_SND_SOC_WM8350_MODULE */
/* #undef CONFIG_SND_SOC_WM8400_MODULE */
/* #undef CONFIG_SND_SOC_WM8510_MODULE */
/* #undef CONFIG_SND_SOC_WM8523_MODULE */
/* #undef CONFIG_SND_SOC_WM8580_MODULE */
/* #undef CONFIG_SND_SOC_WM8711_MODULE */
/* #undef CONFIG_SND_SOC_WM8727_MODULE */
/* #undef CONFIG_SND_SOC_WM8728_MODULE */
/* #undef CONFIG_SND_SOC_WM8731_MODULE */
/* #undef CONFIG_SND_SOC_WM8737_MODULE */
/* #undef CONFIG_SND_SOC_WM8741_MODULE */
/* #undef CONFIG_SND_SOC_WM8750_MODULE */
/* #undef CONFIG_SND_SOC_WM8753_MODULE */
/* #undef CONFIG_SND_SOC_WM8770_MODULE */
/* #undef CONFIG_SND_SOC_WM8776_MODULE */
/* #undef CONFIG_SND_SOC_WM8782_MODULE */
/* #undef CONFIG_SND_SOC_WM8804_MODULE */
/* #undef CONFIG_SND_SOC_WM8900_MODULE */
/* #undef CONFIG_SND_SOC_WM8903_MODULE */
/* #undef CONFIG_SND_SOC_WM8904_MODULE */
/* #undef CONFIG_SND_SOC_WM8940_MODULE */
/* #undef CONFIG_SND_SOC_WM8955_MODULE */
/* #undef CONFIG_SND_SOC_WM8960_MODULE */
/* #undef CONFIG_SND_SOC_WM8961_MODULE */
/* #undef CONFIG_SND_SOC_WM8962_MODULE */
/* #undef CONFIG_SND_SOC_WM8971_MODULE */
/* #undef CONFIG_SND_SOC_WM8974_MODULE */
/* #undef CONFIG_SND_SOC_WM8978_MODULE */
/* #undef CONFIG_SND_SOC_WM8983_MODULE */
/* #undef CONFIG_SND_SOC_WM8985_MODULE */
/* #undef CONFIG_SND_SOC_WM8988_MODULE */
/* #undef CONFIG_SND_SOC_WM8990_MODULE */
/* #undef CONFIG_SND_SOC_WM8991_MODULE */
/* #undef CONFIG_SND_SOC_WM8993_MODULE */
/* #undef CONFIG_SND_SOC_WM8994_MODULE */
/* #undef CONFIG_SND_SOC_WM8995_MODULE */
/* #undef CONFIG_SND_SOC_WM8996_MODULE */
/* #undef CONFIG_SND_SOC_WM9081_MODULE */
/* #undef CONFIG_SND_SOC_WM9090_MODULE */
/* #undef CONFIG_SND_SOC_WM9705_MODULE */
/* #undef CONFIG_SND_SOC_WM9712_MODULE */
/* #undef CONFIG_SND_SOC_WM9713_MODULE */
/* #undef CONFIG_SND_SOC_LM4857_MODULE */
/* #undef CONFIG_SND_SOC_MAX9768_MODULE */
/* #undef CONFIG_SND_SOC_MAX9877_MODULE */
/* #undef CONFIG_SND_SOC_MC13783_MODULE */
/* #undef CONFIG_SND_SOC_ML26124_MODULE */
/* #undef CONFIG_SND_SOC_TPA6130A2_MODULE */
/* #undef CONFIG_SND_SIMPLE_CARD_MODULE */
/* #undef CONFIG_SOUND_PRIME_MODULE */
