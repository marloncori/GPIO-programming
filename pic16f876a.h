
#ifndef __PIC16F876A_H__
#define __PIC16F876A_H__

//==============================================================================
//
//	Register Addresses
//
//==============================================================================

#ifndef NO_ADDR_DEFINES

#define INDF_ADDR               0x0000
#define TMR0_ADDR               0x0001
#define PCL_ADDR                0x0002
#define STATUS_ADDR             0x0003
#define FSR_ADDR                0x0004
#define PORTA_ADDR              0x0005
#define PORTB_ADDR              0x0006
#define PORTC_ADDR              0x0007
#define PCLATH_ADDR             0x000A
#define INTCON_ADDR             0x000B
#define PIR1_ADDR               0x000C
#define PIR2_ADDR               0x000D
#define TMR1_ADDR               0x000E
#define TMR1L_ADDR              0x000E
#define TMR1H_ADDR              0x000F
#define T1CON_ADDR              0x0010
#define TMR2_ADDR               0x0011
#define T2CON_ADDR              0x0012
#define SSPBUF_ADDR             0x0013
#define SSPCON_ADDR             0x0014
#define CCPR1_ADDR              0x0015
#define CCPR1L_ADDR             0x0015
#define CCPR1H_ADDR             0x0016
#define CCP1CON_ADDR            0x0017
#define RCSTA_ADDR              0x0018
#define TXREG_ADDR              0x0019
#define RCREG_ADDR              0x001A
#define CCPR2_ADDR              0x001B
#define CCPR2L_ADDR             0x001B
#define CCPR2H_ADDR             0x001C
#define CCP2CON_ADDR            0x001D
#define ADRESH_ADDR             0x001E
#define ADCON0_ADDR             0x001F
#define OPTION_REG_ADDR         0x0081
#define TRISA_ADDR              0x0085
#define TRISB_ADDR              0x0086
#define TRISC_ADDR              0x0087
#define PIE1_ADDR               0x008C
#define PIE2_ADDR               0x008D
#define PCON_ADDR               0x008E
#define SSPCON2_ADDR            0x0091
#define PR2_ADDR                0x0092
#define SSPADD_ADDR             0x0093
#define SSPSTAT_ADDR            0x0094
#define TXSTA_ADDR              0x0098
#define SPBRG_ADDR              0x0099
#define CMCON_ADDR              0x009C
#define CVRCON_ADDR             0x009D
#define ADRESL_ADDR             0x009E
#define ADCON1_ADDR             0x009F
#define EEDATA_ADDR             0x010C
#define EEADR_ADDR              0x010D
#define EEDATH_ADDR             0x010E
#define EEADRH_ADDR             0x010F
#define EECON1_ADDR             0x018C
#define EECON2_ADDR             0x018D

#endif // #ifndef NO_ADDR_DEFINES

//==============================================================================
//
//	Register Definitions
//
//==============================================================================

extern __at(0x0000) __sfr INDF;
extern __at(0x0001) __sfr TMR0;
extern __at(0x0002) __sfr PCL;

//==============================================================================
//        STATUS Bits

extern __at(0x0003) __sfr STATUS;

typedef union
  {
  struct
    {
    unsigned C                  : 1;
    unsigned DC                 : 1;
    unsigned Z                  : 1;
    unsigned NOT_PD             : 1;
    unsigned NOT_TO             : 1;
    unsigned RP0                : 1;
    unsigned RP1                : 1;
    unsigned IRP                : 1;
    };

  struct
    {
    unsigned                    : 5;
    unsigned RP                 : 2;
    unsigned                    : 1;
    };
  } __STATUSbits_t;

extern __at(0x0003) volatile __STATUSbits_t STATUSbits;

#define _C                      0x01
#define _DC                     0x02
#define _Z                      0x04
#define _NOT_PD                 0x08
#define _NOT_TO                 0x10
#define _RP0                    0x20
#define _RP1                    0x40
#define _IRP                    0x80

//==============================================================================

extern __at(0x0004) __sfr FSR;

//==============================================================================
//        PORTA Bits

extern __at(0x0005) __sfr PORTA;

typedef union
  {
  struct
    {
    unsigned RA0                : 1;
    unsigned RA1                : 1;
    unsigned RA2                : 1;
    unsigned RA3                : 1;
    unsigned RA4                : 1;
    unsigned RA5                : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned RA                 : 6;
    unsigned                    : 2;
    };
  } __PORTAbits_t;

extern __at(0x0005) volatile __PORTAbits_t PORTAbits;

#define _RA0                    0x01
#define _RA1                    0x02
#define _RA2                    0x04
#define _RA3                    0x08
#define _RA4                    0x10
#define _RA5                    0x20

//==============================================================================


//==============================================================================
//        PORTB Bits

extern __at(0x0006) __sfr PORTB;

typedef struct
  {
  unsigned RB0                  : 1;
  unsigned RB1                  : 1;
  unsigned RB2                  : 1;
  unsigned RB3                  : 1;
  unsigned RB4                  : 1;
  unsigned RB5                  : 1;
  unsigned RB6                  : 1;
  unsigned RB7                  : 1;
  } __PORTBbits_t;

extern __at(0x0006) volatile __PORTBbits_t PORTBbits;

#define _RB0                    0x01
#define _RB1                    0x02
#define _RB2                    0x04
#define _RB3                    0x08
#define _RB4                    0x10
#define _RB5                    0x20
#define _RB6                    0x40
#define _RB7                    0x80

//==============================================================================


//==============================================================================
//        PORTC Bits

extern __at(0x0007) __sfr PORTC;

typedef struct
  {
  unsigned RC0                  : 1;
  unsigned RC1                  : 1;
  unsigned RC2                  : 1;
  unsigned RC3                  : 1;
  unsigned RC4                  : 1;
  unsigned RC5                  : 1;
  unsigned RC6                  : 1;
  unsigned RC7                  : 1;
  } __PORTCbits_t;

extern __at(0x0007) volatile __PORTCbits_t PORTCbits;

#define _RC0                    0x01
#define _RC1                    0x02
#define _RC2                    0x04
#define _RC3                    0x08
#define _RC4                    0x10
#define _RC5                    0x20
#define _RC6                    0x40
#define _RC7                    0x80

//==============================================================================

extern __at(0x000A) __sfr PCLATH;

//==============================================================================
//        INTCON Bits

extern __at(0x000B) __sfr INTCON;

typedef union
  {
  struct
    {
    unsigned RBIF               : 1;
    unsigned INTF               : 1;
    unsigned TMR0IF             : 1;
    unsigned RBIE               : 1;
    unsigned INTE               : 1;
    unsigned TMR0IE             : 1;
    unsigned PEIE               : 1;
    unsigned GIE                : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned T0IF               : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned T0IE               : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };
  } __INTCONbits_t;
#define _RBIF                   0x01
#define _INTF                   0x02
#define _TMR0IF                 0x04
#define _T0IF                   0x04
#define _RBIE                   0x08
#define _INTE                   0x10
#define _TMR0IE                 0x20
#define _T0IE                   0x20
#define _PEIE                   0x40
#define _GIE                    0x80

//==============================================================================


//==============================================================================
//        PIR1 Bits

extern __at(0x000C) __sfr PIR1;

typedef struct
  {
  unsigned TMR1IF               : 1;
  unsigned TMR2IF               : 1;
  unsigned CCP1IF               : 1;
  unsigned SSPIF                : 1;
  unsigned TXIF                 : 1;
  unsigned RCIF                 : 1;
  unsigned ADIF                 : 1;
  unsigned                      : 1;
  } __PIR1bits_t;

extern __at(0x000C) volatile __PIR1bits_t PIR1bits;

#define _TMR1IF                 0x01
#define _TMR2IF                 0x02
#define _CCP1IF                 0x04
#define _SSPIF                  0x08
#define _TXIF                   0x10
#define _RCIF                   0x20
#define _ADIF                   0x40

//==============================================================================


//==============================================================================
//        PIR2 Bits

extern __at(0x000D) __sfr PIR2;

typedef struct
  {
  unsigned CCP2IF               : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned BCLIF                : 1;
  unsigned EEIF                 : 1;
  unsigned                      : 1;
  unsigned CMIF                 : 1;
  unsigned                      : 1;
  } __PIR2bits_t;

extern __at(0x000D) volatile __PIR2bits_t PIR2bits;

#define _CCP2IF                 0x01
#define _BCLIF                  0x08
#define _EEIF                   0x10
#define _CMIF                   0x40

//==============================================================================

extern __at(0x000E) __sfr TMR1;
extern __at(0x000E) __sfr TMR1L;
extern __at(0x000F) __sfr TMR1H;

//==============================================================================
//        T1CON Bits

extern __at(0x0010) __sfr T1CON;

typedef union
  {
  struct
    {
    unsigned TMR1ON             : 1;
    unsigned TMR1CS             : 1;
    unsigned NOT_T1SYNC         : 1;
    unsigned T1OSCEN            : 1;
    unsigned T1CKPS0            : 1;
    unsigned T1CKPS1            : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned T1SYNC             : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned T1INSYNC           : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 4;
    unsigned T1CKPS             : 2;
    unsigned                    : 2;
    };
  } __T1CONbits_t;

extern __at(0x0010) volatile __T1CONbits_t T1CONbits;

#define _TMR1ON                 0x01
#define _TMR1CS                 0x02
#define _NOT_T1SYNC             0x04
#define _T1SYNC                 0x04
#define _T1INSYNC               0x04
#define _T1OSCEN                0x08
#define _T1CKPS0                0x10
#define _T1CKPS1                0x20

//==============================================================================

extern __at(0x0011) __sfr TMR2;

//==============================================================================
//        T2CON Bits

extern __at(0x0012) __sfr T2CON;

typedef union
  {
  struct
    {
    unsigned T2CKPS0            : 1;
    unsigned T2CKPS1            : 1;
    unsigned TMR2ON             : 1;
    unsigned TOUTPS0            : 1;
    unsigned TOUTPS1            : 1;
    unsigned TOUTPS2            : 1;
    unsigned TOUTPS3            : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned T2CKPS             : 2;
    unsigned                    : 6;
    };

  struct
    {
    unsigned                    : 3;
    unsigned TOUTPS             : 4;
    unsigned                    : 1;
    };
  } __T2CONbits_t;

extern __at(0x0012) volatile __T2CONbits_t T2CONbits;

#define _T2CKPS0                0x01
#define _T2CKPS1                0x02
#define _TMR2ON                 0x04
#define _TOUTPS0                0x08
#define _TOUTPS1                0x10
#define _TOUTPS2                0x20
#define _TOUTPS3                0x40

//==============================================================================

extern __at(0x0013) __sfr SSPBUF;

//==============================================================================
//        SSPCON Bits

extern __at(0x0014) __sfr SSPCON;

typedef union
  {
  struct
    {
    unsigned SSPM0              : 1;
    unsigned SSPM1              : 1;
    unsigned SSPM2              : 1;
    unsigned SSPM3              : 1;
    unsigned CKP                : 1;
    unsigned SSPEN              : 1;
    unsigned SSPOV              : 1;
    unsigned WCOL               : 1;
    };

  struct
    {
    unsigned SSPM               : 4;
    unsigned                    : 4;
    };
  } __SSPCONbits_t;

extern __at(0x0014) volatile __SSPCONbits_t SSPCONbits;

#define _SSPM0                  0x01
#define _SSPM1                  0x02
#define _SSPM2                  0x04
#define _SSPM3                  0x08
#define _CKP                    0x10
#define _SSPEN                  0x20
#define _SSPOV                  0x40
#define _WCOL                   0x80


//==============================================================================

extern __at(0x0015) __sfr CCPR1;
extern __at(0x0015) __sfr CCPR1L;
extern __at(0x0016) __sfr CCPR1H;

//==============================================================================
//        CCP1CON Bits

extern __at(0x0017) __sfr CCP1CON;

typedef union
  {
  struct
    {
    unsigned CCP1M0             : 1;
    unsigned CCP1M1             : 1;
    unsigned CCP1M2             : 1;
    unsigned CCP1M3             : 1;
    unsigned CCP1Y              : 1;
    unsigned CCP1X              : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned CCP1M              : 4;
    unsigned                    : 4;
    };
  } __CCP1CONbits_t;

extern __at(0x0017) volatile __CCP1CONbits_t CCP1CONbits;

#define _CCP1M0                 0x01
#define _CCP1M1                 0x02
#define _CCP1M2                 0x04
#define _CCP1M3                 0x08
#define _CCP1Y                  0x10
#define _CCP1X                  0x20

//==============================================================================


//==============================================================================
//        RCSTA Bits

extern __at(0x0018) __sfr RCSTA;

typedef union
  {
  struct
    {
    unsigned RX9D               : 1;
    unsigned OERR               : 1;
    unsigned FERR               : 1;
    unsigned ADDEN              : 1;
    unsigned CREN               : 1;
    unsigned SREN               : 1;
    unsigned RX9                : 1;
    unsigned SPEN               : 1;
    };

  struct
    {
    unsigned RCD8               : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned RC9                : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned NOT_RC8            : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned RC8_9              : 1;
    unsigned                    : 1;
    };
  } __RCSTAbits_t;

extern __at(0x0018) volatile __RCSTAbits_t RCSTAbits;

#define _RX9D                   0x01
#define _RCD8                   0x01
#define _OERR                   0x02
#define _FERR                   0x04
#define _ADDEN                  0x08
#define _CREN                   0x10
#define _SREN                   0x20
#define _RX9                    0x40
#define _RC9                    0x40
#define _NOT_RC8                0x40
#define _RC8_9                  0x40
#define _SPEN                   0x80

//==============================================================================

extern __at(0x0019) __sfr TXREG;
extern __at(0x001A) __sfr RCREG;
extern __at(0x001B) __sfr CCPR2;
extern __at(0x001B) __sfr CCPR2L;
extern __at(0x001C) __sfr CCPR2H;

//==============================================================================
//        CCP2CON Bits

extern __at(0x001D) __sfr CCP2CON;

typedef union
  {
  struct
    {
    unsigned CCP2M0             : 1;
    unsigned CCP2M1             : 1;
    unsigned CCP2M2             : 1;
    unsigned CCP2M3             : 1;
    unsigned CCP2Y              : 1;
    unsigned CCP2X              : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned CCP2M              : 4;
    unsigned                    : 4;
    };
  } __CCP2CONbits_t;

extern __at(0x001D) volatile __CCP2CONbits_t CCP2CONbits;

#define _CCP2M0                 0x01
#define _CCP2M1                 0x02
#define _CCP2M2                 0x04
#define _CCP2M3                 0x08
#define _CCP2Y                  0x10
#define _CCP2X                  0x20

//==============================================================================

extern __at(0x001E) __sfr ADRESH;

//==============================================================================
//        ADCON0 Bits

extern __at(0x001F) __sfr ADCON0;

typedef union
  {
  struct
    {
    unsigned ADON               : 1;
    unsigned                    : 1;
    unsigned GO_NOT_DONE        : 1;
    unsigned CHS0               : 1;
    unsigned CHS1               : 1;
    unsigned CHS2               : 1;
    unsigned ADCS0              : 1;
    unsigned ADCS1              : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned GO                 : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned NOT_DONE           : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned GO_DONE            : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 3;
    unsigned CHS                : 3;
    unsigned                    : 2;
    };

  struct
    {
    unsigned                    : 6;
    unsigned ADCS               : 2;
    };
  } __ADCON0bits_t;

extern __at(0x001F) volatile __ADCON0bits_t ADCON0bits;

#define _ADON                   0x01
#define _GO_NOT_DONE            0x04
#define _GO                     0x04
#define _NOT_DONE               0x04
#define _GO_DONE                0x04
#define _CHS0                   0x08
#define _CHS1                   0x10
#define _CHS2                   0x20
#define _ADCS0                  0x40
#define _ADCS1                  0x80

//==============================================================================


//==============================================================================
//        OPTION_REG Bits

extern __at(0x0081) __sfr OPTION_REG;

typedef union
  {
  struct
    {
    unsigned PS0                : 1;
    unsigned PS1                : 1;
    unsigned PS2                : 1;
    unsigned PSA                : 1;
    unsigned T0SE               : 1;
    unsigned T0CS               : 1;
    unsigned INTEDG             : 1;
    unsigned NOT_RBPU           : 1;
    };

  struct
    {
    unsigned PS                 : 3;
    unsigned                    : 5;
    };
  } __OPTION_REGbits_t;

extern __at(0x0081) volatile __OPTION_REGbits_t OPTION_REGbits;

#define _PS0                    0x01
#define _PS1                    0x02
#define _PS2                    0x04
#define _PSA                    0x08
#define _T0SE                   0x10
#define _T0CS                   0x20
#define _INTEDG                 0x40
#define _NOT_RBPU               0x80

//==============================================================================


//==============================================================================
//        TRISA Bits
extern __at(0x0085) __sfr TRISA;

typedef union
  {
  struct
    {
    unsigned TRISA0             : 1;
    unsigned TRISA1             : 1;
    unsigned TRISA2             : 1;
    unsigned TRISA3             : 1;
    unsigned TRISA4             : 1;
    unsigned TRISA5             : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned TRISA              : 6;
    unsigned                    : 2;
    };
  } __TRISAbits_t;

extern __at(0x0085) volatile __TRISAbits_t TRISAbits;

#define _TRISA0                 0x01
#define _TRISA1                 0x02
#define _TRISA2                 0x04
#define _TRISA3                 0x08
#define _TRISA4                 0x10
#define _TRISA5                 0x20

//==============================================================================


//==============================================================================
//        TRISB Bits

extern __at(0x0086) __sfr TRISB;

typedef struct
  {
  unsigned TRISB0               : 1;
  unsigned TRISB1               : 1;
  unsigned TRISB2               : 1;
  unsigned TRISB3               : 1;
  unsigned TRISB4               : 1;
  unsigned TRISB5               : 1;
  unsigned TRISB6               : 1;
  unsigned TRISB7               : 1;
  } __TRISBbits_t;

extern __at(0x0086) volatile __TRISBbits_t TRISBbits;

#define _TRISB0                 0x01
#define _TRISB1                 0x02
#define _TRISB2                 0x04
#define _TRISB3                 0x08
#define _TRISB4                 0x10
#define _TRISB5                 0x20
#define _TRISB6                 0x40
#define _TRISB7                 0x80

//==============================================================================


//==============================================================================
//        TRISC Bits

extern __at(0x0087) __sfr TRISC;

typedef struct
  {
  unsigned TRISC0               : 1;
  unsigned TRISC1               : 1;
  unsigned TRISC2               : 1;
  unsigned TRISC3               : 1;
  unsigned TRISC4               : 1;
  unsigned TRISC5               : 1;
  unsigned TRISC6               : 1;
  unsigned TRISC7               : 1;
  } __TRISCbits_t;

extern __at(0x0087) volatile __TRISCbits_t TRISCbits;

#define _TRISC0                 0x01
#define _TRISC1                 0x02
#define _TRISC2                 0x04
#define _TRISC3                 0x08
#define _TRISC4                 0x10
#define _TRISC5                 0x20
#define _TRISC6                 0x40
#define _TRISC7                 0x80

//==============================================================================


//==============================================================================
//        PIE1 Bits

extern __at(0x008C) __sfr PIE1;

typedef struct
  {
  unsigned TMR1IE               : 1;
  unsigned TMR2IE               : 1;
  unsigned CCP1IE               : 1;
  unsigned SSPIE                : 1;
  unsigned TXIE                 : 1;
  unsigned RCIE                 : 1;
  unsigned ADIE                 : 1;
  unsigned                      : 1;
  } __PIE1bits_t;

extern __at(0x008C) volatile __PIE1bits_t PIE1bits;

#define _TMR1IE                 0x01
#define _TMR2IE                 0x02
#define _CCP1IE                 0x04
#define _SSPIE                  0x08
#define _TXIE                   0x10
#define _RCIE                   0x20
#define _ADIE                   0x40

//==============================================================================


//==============================================================================
//        PIE2 Bits

extern __at(0x008D) __sfr PIE2;

typedef struct
  {
  unsigned CCP2IE               : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned BCLIE                : 1;
  unsigned EEIE                 : 1;
  unsigned                      : 1;
  unsigned CMIE                 : 1;
  unsigned                      : 1;
  } __PIE2bits_t;

extern __at(0x008D) volatile __PIE2bits_t PIE2bits;

#define _CCP2IE                 0x01
#define _BCLIE                  0x08
#define _EEIE                   0x10
#define _CMIE                   0x40

//==============================================================================


//==============================================================================
//        PCON Bits

extern __at(0x008E) __sfr PCON;

typedef union
  {
  struct
    {
    unsigned NOT_BOR            : 1;
    unsigned NOT_POR            : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned NOT_BO             : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };
  } __PCONbits_t;

extern __at(0x008E) volatile __PCONbits_t PCONbits;

#define _NOT_BOR                0x01
#define _NOT_BO                 0x01
#define _NOT_POR                0x02

//==============================================================================


//==============================================================================
//        SSPCON2 Bits

extern __at(0x0091) __sfr SSPCON2;

typedef struct
  {
  unsigned SEN                  : 1;
  unsigned RSEN                 : 1;
  unsigned PEN                  : 1;
  unsigned RCEN                 : 1;
  unsigned ACKEN                : 1;
  unsigned ACKDT                : 1;
  unsigned ACKSTAT              : 1;
  unsigned GCEN                 : 1;
  } __SSPCON2bits_t;

extern __at(0x0091) volatile __SSPCON2bits_t SSPCON2bits;

#define _SEN                    0x01
#define _RSEN                   0x02
#define _PEN                    0x04
#define _RCEN                   0x08
#define _ACKEN                  0x10
#define _ACKDT                  0x20
#define _ACKSTAT                0x40
#define _GCEN                   0x80

//==============================================================================

extern __at(0x0092) __sfr PR2;
extern __at(0x0093) __sfr SSPADD;

//==============================================================================
//        SSPSTAT Bits

extern __at(0x0094) __sfr SSPSTAT;

typedef union
  {
  struct
    {
    unsigned BF                 : 1;
    unsigned UA                 : 1;
    unsigned R_NOT_W            : 1;
    unsigned S                  : 1;
    unsigned P                  : 1;
    unsigned D_NOT_A            : 1;
    unsigned CKE                : 1;
    unsigned SMP                : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned R                  : 1;
    unsigned I2C_START          : 1;
    unsigned I2C_STOP           : 1;
    unsigned D                  : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned I2C_READ           : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned I2C_DATA           : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned NOT_W              : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned NOT_A              : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned NOT_WRITE          : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned NOT_ADDRESS        : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned R_W                : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned D_A                : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned READ_WRITE         : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned DATA_ADDRESS       : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    };
  } __SSPSTATbits_t;

extern __at(0x0094) volatile __SSPSTATbits_t SSPSTATbits;

#define _BF                     0x01
#define _UA                     0x02
#define _R_NOT_W                0x04
#define _R                      0x04
#define _I2C_READ               0x04
#define _NOT_W                  0x04
#define _NOT_WRITE              0x04
#define _R_W                    0x04
#define _READ_WRITE             0x04
#define _S                      0x08
#define _I2C_START              0x08
#define _P                      0x10
#define _I2C_STOP               0x10
#define _D_NOT_A                0x20
#define _D                      0x20
#define _I2C_DATA               0x20
#define _NOT_A                  0x20
#define _NOT_ADDRESS            0x20
#define _D_A                    0x20
#define _DATA_ADDRESS           0x20
#define _CKE                    0x40
#define _SMP                    0x80

//==============================================================================


//==============================================================================
//        TXSTA Bits

extern __at(0x0098) __sfr TXSTA;

typedef union
  {
  struct
    {
    unsigned TX9D               : 1;
    unsigned TRMT               : 1;
    unsigned BRGH               : 1;
    unsigned                    : 1;
    unsigned SYNC               : 1;
    unsigned TXEN               : 1;
    unsigned TX9                : 1;
    unsigned CSRC               : 1;
    };

  struct
    {
    unsigned TXD8               : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned NOT_TX8            : 1;
    unsigned                    : 1;
    };

  struct
    {
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned TX8_9              : 1;
    unsigned                    : 1;
    };
  } __TXSTAbits_t;

extern __at(0x0098) volatile __TXSTAbits_t TXSTAbits;

#define _TX9D                   0x01
#define _TXD8                   0x01
#define _TRMT                   0x02
#define _BRGH                   0x04
#define _SYNC                   0x10
#define _TXEN                   0x20
#define _TX9                    0x40
#define _NOT_TX8                0x40
#define _TX8_9                  0x40
#define _CSRC                   0x80

//==============================================================================

extern __at(0x0099) __sfr SPBRG;

//==============================================================================
//        CMCON Bits

extern __at(0x009C) __sfr CMCON;

typedef union
  {
  struct
    {
    unsigned CM0                : 1;
    unsigned CM1                : 1;
    unsigned CM2                : 1;
    unsigned CIS                : 1;
    unsigned C1INV              : 1;
    unsigned C2INV              : 1;
    unsigned C1OUT              : 1;
    unsigned C2OUT              : 1;
    };

  struct
    {
    unsigned CM                 : 3;
    unsigned                    : 5;
    };
  } __CMCONbits_t;


extern __at(0x009C) volatile __CMCONbits_t CMCONbits;

#define _CM0                    0x01
#define _CM1                    0x02
#define _CM2                    0x04
#define _CIS                    0x08
#define _C1INV                  0x10
#define _C2INV                  0x20
#define _C1OUT                  0x40
#define _C2OUT                  0x80

//==============================================================================


//==============================================================================
//        CVRCON Bits

extern __at(0x009D) __sfr CVRCON;

typedef union
  {
  struct
    {
    unsigned CVR0               : 1;
    unsigned CVR1               : 1;
    unsigned CVR2               : 1;
    unsigned CVR3               : 1;
    unsigned                    : 1;
    unsigned CVRR               : 1;
    unsigned CVROE              : 1;
    unsigned CVREN              : 1;
    };

  struct
    {
    unsigned CVR                : 4;
    unsigned                    : 4;
    };
  } __CVRCONbits_t;

extern __at(0x009D) volatile __CVRCONbits_t CVRCONbits;

#define _CVR0                   0x01
#define _CVR1                   0x02
#define _CVR2                   0x04
#define _CVR3                   0x08
#define _CVRR                   0x20
#define _CVROE                  0x40
#define _CVREN                  0x80

//==============================================================================

extern __at(0x009E) __sfr ADRESL;

//==============================================================================
//        ADCON1 Bits

extern __at(0x009F) __sfr ADCON1;

typedef union
  {
  struct
    {
    unsigned PCFG0              : 1;
    unsigned PCFG1              : 1;
    unsigned PCFG2              : 1;
    unsigned PCFG3              : 1;
    unsigned                    : 1;
    unsigned                    : 1;
    unsigned ADCS2              : 1;
    unsigned ADFM               : 1;
    };

  struct
    {
    unsigned PCFG               : 4;
    unsigned                    : 4;
    };
  } __ADCON1bits_t;

extern __at(0x009F) volatile __ADCON1bits_t ADCON1bits;

#define _PCFG0                  0x01
#define _PCFG1                  0x02
#define _PCFG2                  0x04
#define _PCFG3                  0x08
#define _ADCS2                  0x40
#define _ADFM                   0x80

//==============================================================================

extern __at(0x010C) __sfr EEDATA;
extern __at(0x010D) __sfr EEADR;
extern __at(0x010E) __sfr EEDATH;
extern __at(0x010F) __sfr EEADRH;

//==============================================================================
//        EECON1 Bits

extern __at(0x018C) __sfr EECON1;

typedef struct
  {
  unsigned RD                   : 1;
  unsigned WR                   : 1;
  unsigned WREN                 : 1;
  unsigned WRERR                : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned                      : 1;
  unsigned EEPGD                : 1;
  } __EECON1bits_t;

extern __at(0x018C) volatile __EECON1bits_t EECON1bits;

#define _RD                     0x01
#define _WR                     0x02
#define _WREN                   0x04
#define _WRERR                  0x08
#define _EEPGD                  0x80

//==============================================================================

extern __at(0x018D) __sfr EECON2;

//==============================================================================
//
//        Configuration Bits
//
//==============================================================================

#define _CONFIG                 0x2007

//----------------------------- CONFIG Options -------------------------------

#define _FOSC_LP                0x3FFC  // LP oscillator.
#define _LP_OSC                 0x3FFC  // LP oscillator.
#define _FOSC_XT                0x3FFD  // XT oscillator.
#define _XT_OSC                 0x3FFD  // XT oscillator.
#define _FOSC_HS                0x3FFE  // HS oscillator.
#define _HS_OSC                 0x3FFE  // HS oscillator.
#define _FOSC_EXTRC             0x3FFF  // RC oscillator.
#define _RC_OSC                 0x3FFF  // RC oscillator.
#define _WDTE_OFF               0x3FFB  // WDT disabled.
#define _WDT_OFF                0x3FFB  // WDT disabled.
#define _WDTE_ON                0x3FFF  // WDT enabled.
#define _WDT_ON                 0x3FFF  // WDT enabled.
#define _PWRTE_ON               0x3FF7  // PWRT enabled.
#define _PWRTE_OFF              0x3FFF  // PWRT disabled.
#define _BOREN_OFF              0x3FBF  // BOR disabled.
#define _BODEN_OFF              0x3FBF  // BOR disabled.
#define _BOREN_ON               0x3FFF  // BOR enabled.
#define _BODEN_ON               0x3FFF  // BOR enabled.
#define _LVP_OFF                0x3F7F  // RB3 is digital I/O, HV on MCLR must be used for programming.
#define _LVP_ON                 0x3FFF  // RB3/PGM pin has PGM function; low-voltage programming enabled.
#define _CPD_ON                 0x3EFF  // Data EEPROM code-protected.
#define _CPD_OFF                0x3FFF  // Data EEPROM code protection off.
#define _WRT_HALF               0x39FF  // 0000h to 0FFFh write-protected; 1000h to 1FFFh may be written to by EECON control.
#define _WRT_1FOURTH            0x3BFF  // 0000h to 07FFh write-protected; 0800h to 1FFFh may be written to by EECON control.
#define _WRT_256                0x3DFF  // 0000h to 00FFh write-protected; 0100h to 1FFFh may be written to by EECON control.
#define _WRT_OFF                0x3FFF  // Write protection off; all program memory may be written to by EECON control.
#define _DEBUG_ON               0x37FF  // In-Circuit Debugger enabled, RB6 and RB7 are dedicated to the debugger.
#define _DEBUG_OFF              0x3FFF  // In-Circuit Debugger disabled, RB6 and RB7 are general purpose I/O pins.
#define _CP_ON                  0x1FFF  // All program memory code-protected.
#define _CP_ALL                 0x1FFF  // All program memory code-protected.
#define _CP_OFF                 0x3FFF  // Code protection off.

//==============================================================================

#define _DEVID1                 0x2006

#define _IDLOC0                 0x2000
#define _IDLOC1                 0x2001
#define _IDLOC2                 0x2002
#define _IDLOC3                 0x2003

//==============================================================================

#ifndef NO_BIT_DEFINES

#define ADON                    ADCON0bits.ADON                 // bit 0
#define GO_NOT_DONE             ADCON0bits.GO_NOT_DONE          // bit 2, shadows bit in ADCON0bits
#define GO                      ADCON0bits.GO                   // bit 2, shadows bit in ADCON0bits
#define NOT_DONE                ADCON0bits.NOT_DONE             // bit 2, shadows bit in ADCON0bits
#define GO_DONE                 ADCON0bits.GO_DONE              // bit 2, shadows bit in ADCON0bits
#define CHS0                    ADCON0bits.CHS0                 // bit 3
#define CHS1                    ADCON0bits.CHS1                 // bit 4
#define CHS2                    ADCON0bits.CHS2                 // bit 5
#define ADCS0                   ADCON0bits.ADCS0                // bit 6
#define ADCS1                   ADCON0bits.ADCS1                // bit 7

#define PCFG0                   ADCON1bits.PCFG0                // bit 0
#define PCFG1                   ADCON1bits.PCFG1                // bit 1
#define PCFG2                   ADCON1bits.PCFG2                // bit 2
#define PCFG3                   ADCON1bits.PCFG3                // bit 3
#define ADCS2                   ADCON1bits.ADCS2                // bit 6
#define ADFM                    ADCON1bits.ADFM                 // bit 7

#define CCP1M0                  CCP1CONbits.CCP1M0              // bit 0
#define CCP1M1                  CCP1CONbits.CCP1M1              // bit 1
#define CCP1M2                  CCP1CONbits.CCP1M2              // bit 2
#define CCP1M3                  CCP1CONbits.CCP1M3              // bit 3
#define CCP1Y                   CCP1CONbits.CCP1Y               // bit 4
#define CCP1X                   CCP1CONbits.CCP1X               // bit 5

#define CCP2M0                  CCP2CONbits.CCP2M0              // bit 0
#define CCP2M1                  CCP2CONbits.CCP2M1              // bit 1
#define CCP2M2                  CCP2CONbits.CCP2M2              // bit 2
#define CCP2M3                  CCP2CONbits.CCP2M3              // bit 3
#define CCP2Y                   CCP2CONbits.CCP2Y               // bit 4
#define CCP2X                   CCP2CONbits.CCP2X               // bit 5

#define CM0                     CMCONbits.CM0                   // bit 0
#define CM1                     CMCONbits.CM1                   // bit 1
#define CM2                     CMCONbits.CM2                   // bit 2
#define CIS                     CMCONbits.CIS                   // bit 3
#define C1INV                   CMCONbits.C1INV                 // bit 4
#define C2INV                   CMCONbits.C2INV                 // bit 5
#define C1OUT                   CMCONbits.C1OUT                 // bit 6
#define C2OUT                   CMCONbits.C2OUT                 // bit 7

#define CVR0                    CVRCONbits.CVR0                 // bit 0
#define CVR1                    CVRCONbits.CVR1                 // bit 1
#define CVR2                    CVRCONbits.CVR2                 // bit 2
#define CVR3                    CVRCONbits.CVR3                 // bit 3
#define CVRR                    CVRCONbits.CVRR                 // bit 5
#define CVROE                   CVRCONbits.CVROE                // bit 6
#define CVREN                   CVRCONbits.CVREN                // bit 7

#define RD                      EECON1bits.RD                   // bit 0
#define WR                      EECON1bits.WR                   // bit 1
#define WREN                    EECON1bits.WREN                 // bit 2
#define WRERR                   EECON1bits.WRERR                // bit 3
#define EEPGD                   EECON1bits.EEPGD                // bit 7

#define RBIF                    INTCONbits.RBIF                 // bit 0
#define INTF                    INTCONbits.INTF                 // bit 1
#define TMR0IF                  INTCONbits.TMR0IF               // bit 2, shadows bit in INTCONbits
#define T0IF                    INTCONbits.T0IF                 // bit 2, shadows bit in INTCONbits
#define RBIE                    INTCONbits.RBIE                 // bit 3
#define INTE                    INTCONbits.INTE                 // bit 4
#define TMR0IE                  INTCONbits.TMR0IE               // bit 5, shadows bit in INTCONbits
#define T0IE                    INTCONbits.T0IE                 // bit 5, shadows bit in INTCONbits
#define PEIE                    INTCONbits.PEIE                 // bit 6
#define GIE                     INTCONbits.GIE                  // bit 7

#define PS0                     OPTION_REGbits.PS0              // bit 0
#define PS1                     OPTION_REGbits.PS1              // bit 1
#define PS2                     OPTION_REGbits.PS2              // bit 2
#define PSA                     OPTION_REGbits.PSA              // bit 3
#define T0SE                    OPTION_REGbits.T0SE             // bit 4
#define T0CS                    OPTION_REGbits.T0CS             // bit 5
#define INTEDG                  OPTION_REGbits.INTEDG           // bit 6
#define NOT_RBPU                OPTION_REGbits.NOT_RBPU         // bit 7

#define NOT_BOR                 PCONbits.NOT_BOR                // bit 0, shadows bit in PCONbits
#define NOT_BO                  PCONbits.NOT_BO                 // bit 0, shadows bit in PCONbits
#define NOT_POR                 PCONbits.NOT_POR                // bit 1

#define TMR1IE                  PIE1bits.TMR1IE                 // bit 0
#define TMR2IE                  PIE1bits.TMR2IE                 // bit 1
#define CCP1IE                  PIE1bits.CCP1IE                 // bit 2
#define SSPIE                   PIE1bits.SSPIE                  // bit 3
#define TXIE                    PIE1bits.TXIE                   // bit 4
#define RCIE                    PIE1bits.RCIE                   // bit 5
#define ADIE                    PIE1bits.ADIE                   // bit 6

#define CCP2IE                  PIE2bits.CCP2IE                 // bit 0
#define BCLIE                   PIE2bits.BCLIE                  // bit 3
#define EEIE                    PIE2bits.EEIE                   // bit 4
#define CMIE                    PIE2bits.CMIE                   // bit 6

#define TMR1IF                  PIR1bits.TMR1IF                 // bit 0
#define TMR2IF                  PIR1bits.TMR2IF                 // bit 1
#define CCP1IF                  PIR1bits.CCP1IF                 // bit 2
#define SSPIF                   PIR1bits.SSPIF                  // bit 3
#define TXIF                    PIR1bits.TXIF                   // bit 4
#define RCIF                    PIR1bits.RCIF                   // bit 5
#define ADIF                    PIR1bits.ADIF                   // bit 6

#define CCP2IF                  PIR2bits.CCP2IF                 // bit 0
#define BCLIF                   PIR2bits.BCLIF                  // bit 3
#define EEIF                    PIR2bits.EEIF                   // bit 4
#define CMIF                    PIR2bits.CMIF                   // bit 6

#define RA0                     PORTAbits.RA0                   // bit 0
#define RA1                     PORTAbits.RA1                   // bit 1
#define RA2                     PORTAbits.RA2                   // bit 2
#define RA3                     PORTAbits.RA3                   // bit 3
#define RA4                     PORTAbits.RA4                   // bit 4
#define RA5                     PORTAbits.RA5                   // bit 5

#define RB0                     PORTBbits.RB0                   // bit 0
#define RB1                     PORTBbits.RB1                   // bit 1
#define RB2                     PORTBbits.RB2                   // bit 2
#define RB3                     PORTBbits.RB3                   // bit 3
#define RB4                     PORTBbits.RB4                   // bit 4
#define RB5                     PORTBbits.RB5                   // bit 5
#define RB6                     PORTBbits.RB6                   // bit 6
#define RB7                     PORTBbits.RB7                   // bit 7

#define RC0                     PORTCbits.RC0                   // bit 0
#define RC1                     PORTCbits.RC1                   // bit 1
#define RC2                     PORTCbits.RC2                   // bit 2
#define RC3                     PORTCbits.RC3                   // bit 3
#define RC4                     PORTCbits.RC4                   // bit 4
#define RC5                     PORTCbits.RC5                   // bit 5
#define RC6                     PORTCbits.RC6                   // bit 6
#define RC7                     PORTCbits.RC7                   // bit 7

#define RX9D                    RCSTAbits.RX9D                  // bit 0, shadows bit in RCSTAbits
#define RCD8                    RCSTAbits.RCD8                  // bit 0, shadows bit in RCSTAbits
#define OERR                    RCSTAbits.OERR                  // bit 1
#define FERR                    RCSTAbits.FERR                  // bit 2
#define ADDEN                   RCSTAbits.ADDEN                 // bit 3
#define CREN                    RCSTAbits.CREN                  // bit 4
#define SREN                    RCSTAbits.SREN                  // bit 5
#define RX9                     RCSTAbits.RX9                   // bit 6, shadows bit in RCSTAbits
#define RC9                     RCSTAbits.RC9                   // bit 6, shadows bit in RCSTAbits
#define NOT_RC8                 RCSTAbits.NOT_RC8               // bit 6, shadows bit in RCSTAbits
#define RC8_9                   RCSTAbits.RC8_9                 // bit 6, shadows bit in RCSTAbits
#define SPEN                    RCSTAbits.SPEN                  // bit 7

#define SSPM0                   SSPCONbits.SSPM0                // bit 0
#define SSPM1                   SSPCONbits.SSPM1                // bit 1
#define SSPM2                   SSPCONbits.SSPM2                // bit 2
#define SSPM3                   SSPCONbits.SSPM3                // bit 3
#define CKP                     SSPCONbits.CKP                  // bit 4
#define SSPEN                   SSPCONbits.SSPEN                // bit 5
#define SSPOV                   SSPCONbits.SSPOV                // bit 6
#define WCOL                    SSPCONbits.WCOL                 // bit 7

#define SEN                     SSPCON2bits.SEN                 // bit 0
#define RSEN                    SSPCON2bits.RSEN                // bit 1
#define PEN                     SSPCON2bits.PEN                 // bit 2
#define RCEN                    SSPCON2bits.RCEN                // bit 3
#define ACKEN                   SSPCON2bits.ACKEN               // bit 4
#define ACKDT                   SSPCON2bits.ACKDT               // bit 5
#define ACKSTAT                 SSPCON2bits.ACKSTAT             // bit 6
#define GCEN                    SSPCON2bits.GCEN                // bit 7

#define BF                      SSPSTATbits.BF                  // bit 0
#define UA                      SSPSTATbits.UA                  // bit 1
#define R_NOT_W                 SSPSTATbits.R_NOT_W             // bit 2, shadows bit in SSPSTATbits
#define R                       SSPSTATbits.R                   // bit 2, shadows bit in SSPSTATbits
#define I2C_READ                SSPSTATbits.I2C_READ            // bit 2, shadows bit in SSPSTATbits
#define NOT_W                   SSPSTATbits.NOT_W               // bit 2, shadows bit in SSPSTATbits
#define NOT_WRITE               SSPSTATbits.NOT_WRITE           // bit 2, shadows bit in SSPSTATbits
#define R_W                     SSPSTATbits.R_W                 // bit 2, shadows bit in SSPSTATbits
#define READ_WRITE              SSPSTATbits.READ_WRITE          // bit 2, shadows bit in SSPSTATbits
#define S                       SSPSTATbits.S                   // bit 3, shadows bit in SSPSTATbits
#define I2C_START               SSPSTATbits.I2C_START           // bit 3, shadows bit in SSPSTATbits
#define P                       SSPSTATbits.P                   // bit 4, shadows bit in SSPSTATbits
#define I2C_STOP                SSPSTATbits.I2C_STOP            // bit 4, shadows bit in SSPSTATbits
#define D_NOT_A                 SSPSTATbits.D_NOT_A             // bit 5, shadows bit in SSPSTATbits
#define D                       SSPSTATbits.D                   // bit 5, shadows bit in SSPSTATbits
#define I2C_DATA                SSPSTATbits.I2C_DATA            // bit 5, shadows bit in SSPSTATbits
#define NOT_A                   SSPSTATbits.NOT_A               // bit 5, shadows bit in SSPSTATbits
#define NOT_ADDRESS             SSPSTATbits.NOT_ADDRESS         // bit 5, shadows bit in SSPSTATbits
#define D_A                     SSPSTATbits.D_A                 // bit 5, shadows bit in SSPSTATbits
#define DATA_ADDRESS            SSPSTATbits.DATA_ADDRESS        // bit 5, shadows bit in SSPSTATbits
#define CKE                     SSPSTATbits.CKE                 // bit 6
#define SMP                     SSPSTATbits.SMP                 // bit 7

#define C                       STATUSbits.C                    // bit 0
#define DC                      STATUSbits.DC                   // bit 1
#define Z                       STATUSbits.Z                    // bit 2
#define NOT_PD                  STATUSbits.NOT_PD               // bit 3
#define NOT_TO                  STATUSbits.NOT_TO               // bit 4
#define RP0                     STATUSbits.RP0                  // bit 5
#define RP1                     STATUSbits.RP1                  // bit 6
#define IRP                     STATUSbits.IRP                  // bit 7

#define TMR1ON                  T1CONbits.TMR1ON                // bit 0
#define TMR1CS                  T1CONbits.TMR1CS                // bit 1
#define NOT_T1SYNC              T1CONbits.NOT_T1SYNC            // bit 2, shadows bit in T1CONbits
#define T1SYNC                  T1CONbits.T1SYNC                // bit 2, shadows bit in T1CONbits
#define T1INSYNC                T1CONbits.T1INSYNC              // bit 2, shadows bit in T1CONbits
#define T1OSCEN                 T1CONbits.T1OSCEN               // bit 3
#define T1CKPS0                 T1CONbits.T1CKPS0               // bit 4
#define T1CKPS1                 T1CONbits.T1CKPS1               // bit 5

#define T2CKPS0                 T2CONbits.T2CKPS0               // bit 0
#define T2CKPS1                 T2CONbits.T2CKPS1               // bit 1
#define TMR2ON                  T2CONbits.TMR2ON                // bit 2
#define TOUTPS0                 T2CONbits.TOUTPS0               // bit 3
#define TOUTPS1                 T2CONbits.TOUTPS1               // bit 4
#define TOUTPS2                 T2CONbits.TOUTPS2               // bit 5
#define TOUTPS3                 T2CONbits.TOUTPS3               // bit 6

#define TRISA0                  TRISAbits.TRISA0                // bit 0
#define TRISA1                  TRISAbits.TRISA1                // bit 1
#define TRISA2                  TRISAbits.TRISA2                // bit 2
#define TRISA3                  TRISAbits.TRISA3                // bit 3
#define TRISA4                  TRISAbits.TRISA4                // bit 4
#define TRISA5                  TRISAbits.TRISA5                // bit 5

#define TRISB0                  TRISBbits.TRISB0                // bit 0
#define TRISB1                  TRISBbits.TRISB1                // bit 1
#define TRISB2                  TRISBbits.TRISB2                // bit 2
#define TRISB3                  TRISBbits.TRISB3                // bit 3
#define TRISB4                  TRISBbits.TRISB4                // bit 4
#define TRISB5                  TRISBbits.TRISB5                // bit 5
#define TRISB6                  TRISBbits.TRISB6                // bit 6
#define TRISB7                  TRISBbits.TRISB7                // bit 7

#define TRISC0                  TRISCbits.TRISC0                // bit 0
#define TRISC1                  TRISCbits.TRISC1                // bit 1
#define TRISC2                  TRISCbits.TRISC2                // bit 2
#define TRISC3                  TRISCbits.TRISC3                // bit 3
#define TRISC4                  TRISCbits.TRISC4                // bit 4
#define TRISC5                  TRISCbits.TRISC5                // bit 5
#define TRISC6                  TRISCbits.TRISC6                // bit 6
#define TRISC7                  TRISCbits.TRISC7                // bit 7

#define TX9D                    TXSTAbits.TX9D                  // bit 0, shadows bit in TXSTAbits
#define TXD8                    TXSTAbits.TXD8                  // bit 0, shadows bit in TXSTAbits
#define TRMT                    TXSTAbits.TRMT                  // bit 1
#define BRGH                    TXSTAbits.BRGH                  // bit 2
#define SYNC                    TXSTAbits.SYNC                  // bit 4
#define TXEN                    TXSTAbits.TXEN                  // bit 5
#define TX9                     TXSTAbits.TX9                   // bit 6, shadows bit in TXSTAbits
#define NOT_TX8                 TXSTAbits.NOT_TX8               // bit 6, shadows bit in TXSTAbits
#define TX8_9                   TXSTAbits.TX8_9                 // bit 6, shadows bit in TXSTAbits
#define CSRC                    TXSTAbits.CSRC                  // bit 7

#endif // #ifndef NO_BIT_DEFINES

#endif // #ifndef __PIC16F876A_H__
