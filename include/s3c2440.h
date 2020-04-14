
/*  author: Ali Liao
 *
 */

#ifndef S3C2440_H
#define S3C2440_H

#define _register(_addr)         (*(volatile unsigned int *) (_addr)) 
#define _register_byte(_addr)    (*(volatile unsigned char *) (_addr)) 

// Clock & Power Management | Chapter 7
#define LOCKTIME  _register(0x4C000000)
#define MPLLCON   _register(0x4C000004)
#define UPLLCON   _register(0x4C000008)
#define CLKCON    _register(0x4C00000C)
#define CLKSLOW   _register(0x4C000010)
#define CLKDIVN   _register(0x4C000014)
#define CAMDIVN   _register(0x4C000018)


// NAND FLASH
#define NFCONF    _register(0x4E000000)
#define NFCONT    _register(0x4E000004)
#define NFCMMD    _register_byte(0x4E000008)
#define NFADDR    _register_byte(0x4E00000C)
#define NFDATA    _register_byte(0x4E000010)
#define NFMECCD0  _register(0x4E000014)
#define NFMECCD1  _register(0x4E000018)
#define NFSECCD   _register(0x4E00001C)
#define NFSTAT    _register_byte(0x4E000020)
#define NFESTAT0  _register(0x4E000024)
#define NFESTAT1  _register(0x4E000028)
#define NFMECC0   _register(0x4E00002C)
#define NFMECC1   _register(0x4E000030)
#define NFSECC    _register(0x4E000034)
#define NFSBLK    _register(0x4E000038)
#define NFEBLK    _register(0x4E00003C)

/* Chapter 18 */
#define WTCON     _register(0x53000000)
#define WTDAT     _register(0x53000004)
#define WTCNT     _register(0x53000008)


#define GPBCON    _register(0x56000010)
#define GPBDAT    _register(0x56000014)
#define GPBUP     _register(0x56000018)

#define GPCCON    _register(0x56000020)
#define GPCDAT    _register(0x56000024)
#define GPCUP     _register(0x56000028)

#define GPDCON    _register(0x56000030)
#define GPDDAT    _register(0x56000034)
#define GPDUP     _register(0x56000038)

#define GPECON    _register(0x56000040)
#define GPEDAT    _register(0x56000044)
#define GPEUP     _register(0x56000048)

#define GPFCON    _register(0x56000050)
#define GPFDAT    _register(0x56000054)
#define GPFUP     _register(0x56000058)

#define GPGCON    _register(0x56000060)
#define GPGDAT    _register(0x56000064)
#define GPGUP     _register(0x56000068)

#define GPHCON    _register(0x56000070)
#define GPHDAT    _register(0x56000074)
#define GPHUP     _register(0x56000078)

#define EXTINT0   _register(0x56000088)
#define EXTINT1   _register(0x5600008C)
#define EXTINT2   _register(0x56000090)
#define EINTFLT0  _register(0x56000094)
#define EINTFLT1  _register(0x56000098)
#define EINTFLT2  _register(0x5600009C)
#define EINTFLT3  _register(0x560000A0)
#define EINTMASK  _register(0x560000A4)
#define EINTPEND  _register(0x560000A8)


#define ULCON0    _register(0x50000000)
#define ULCON1	  _register(0x50004000)
#define ULCON2    _register(0x50008000)

#define UBRDIV0   _register(0x50000028)
#define UBRDIV1   _register(0x50004028)
#define UBRDIV2   _register(0x50008028)

#define UTRSTAT0  _register(0x50000010)
#define UTRSTAT1  _register(0x50004010)
#define UTRSTAT2  _register(0x50008010)

#define UCON0     _register(0x50000004)
#define UCON1     _register(0x50004004)
#define UCON2     _register(0x50008004)

#define UTXH0     _register_byte(0x50000020)
#define URXH0     _register_byte(0x50000024)

#define BWSCON    _register(0x48000000)
#define BANKCON0  _register(0x48000004)
#define BANKCON1  _register(0x48000008)
#define BANKCON2  _register(0x4800000C)
#define BANKCON3  _register(0x48000010)
#define BANKCON4  _register(0x48000014)
#define BANKCON5  _register(0x48000018)
#define BANKCON6  _register(0x4800001C)
#define BANKCON7  _register(0x48000020)
#define REFRESH   _register(0x48000024)
#define BANKSIZE  _register(0x48000028)
#define MRSRB6    _register(0x4800002C)
#define MRSRB7    _register(0x48000030)

// Interrupt Controller
#define SRCPND    _register(0X4A000000)
#define INTMOD    _register(0X4A000004)
#define INTMSK    _register(0X4A000008)
#define PRIORITY  _register(0x4A00000C)
#define INTPND    _register(0X4A000010)
#define INTOFFSET _register(0x4A000014)
#define SUBSRCPND _register(0X4A000018)
#define INTSUBMSK _register(0X4A00001C)


// LCD Controller
#define LCDCON1   _register(0X4D000000)
#define LCDCON2   _register(0X4D000004)
#define LCDCON3   _register(0X4D000008)
#define LCDCON4   _register(0X4D00000C)
#define LCDCON5   _register(0X4D000010)
#define LCDSADDR1 _register(0X4D000014)
#define LCDSADDR2 _register(0X4D000018)


// PWM Timer
#define TCFG0     _register(0x51000000)
#define TCFG1     _register(0x51000004)
#define TCON      _register(0x51000008)
#define TCNTB0    _register(0x5100000C)
#define TCMPB0    _register(0x51000010)
#define TCNTO0    _register(0x51000014)
#define TCNTB1    _register(0x51000018)
#define TCMPB1    _register(0x5100001C)
#define TCNTO1    _register(0x51000020)
#define TCNTB2    _register(0x51000024)
#define TCMPB2    _register(0x51000028)
#define TCNTO2    _register(0x5100002C)
#define TCNTB3    _register(0x51000030)
#define TCMPB3    _register(0x51000034)
#define TCNTO3    _register(0x51000038)
#define TCNTB4    _register(0x5100003C)
#define TCNTO4    _register(0x51000040)

// adc & touchscreen                     /* NOTE:                         */
#define ADCCON    _register(0x58000000)  /* the address of                */
#define ADCTSC    _register(0x58000004)  /* S3C2440A_UserManual_Rev13.pdf */
#define ADCDLY    _register(0x58000008)  /* is WRONG                      */ 
#define ADCDAT0   _register(0x5800000C)  
#define ADCDAT1   _register(0x58000010)
#define ADCUPDN   _register(0x58000014)


// Chapter 20. IIC-Bus Interface
#define IICCON    _register(0x54000000)
#define IICSTAT   _register(0x54000004)
#define IICADD    _register(0x54000008)
#define IICDS     _register(0x5400000C)
#define IICLC     _register(0x54000010)

// Chapter 22. SPI
#define SPCON0    _register_byte(0x59000000)
#define SPCON1    _register_byte(0x59000020)
#define SPSTA0    _register_byte(0x59000004)
#define SPSTA1    _register_byte(0x59000024)
#define SPPIN0    _register_byte(0x59000008)
#define SPPIN1    _register_byte(0x59000028)
#define SPPRE0    _register_byte(0x5900000C)
#define SPPRE1    _register_byte(0x5900002C)
#define SPTDAT0   _register_byte(0x59000010)
#define SPTDAT1   _register_byte(0x59000030)
#define SPRDAT0   _register_byte(0x59000014)
#define SPRDAT1   _register_byte(0x59000034)


#endif // S3C2440_H
