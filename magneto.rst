                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.5.0 #9253 (Jun 20 2015) (Mac OS X i386)
                                      4 ; This file was generated Tue Jun  7 15:26:23 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module MagnetoZ_C8051F990_Simplicity_main
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _Flash_Write_SWversion_1_293
                                     13 	.globl _main
                                     14 	.globl _memset
                                     15 	.globl _LPM_Enable_Wakeup
                                     16 	.globl _LPM
                                     17 	.globl _LPM_Init
                                     18 	.globl _RTC0CN_SetBits
                                     19 	.globl _RTC_WriteAlarm
                                     20 	.globl _RTC_Init
                                     21 	.globl _GREEN_LED
                                     22 	.globl _ZWAVE_MODULE_CONTROL
                                     23 	.globl _VOLTAGE_REG_CONTROL
                                     24 	.globl _MR_CONTROL_INVERTED
                                     25 	.globl _MOSI_PIN
                                     26 	.globl _PRODUCTION_PIN
                                     27 	.globl _UART_RX
                                     28 	.globl _UART_TX
                                     29 	.globl _DOOR_MR_SW
                                     30 	.globl _INCLUDE_MR_SW
                                     31 	.globl _SPI0EN
                                     32 	.globl _TXBMT0
                                     33 	.globl _NSS0MD0
                                     34 	.globl _NSS0MD1
                                     35 	.globl _RXOVRN0
                                     36 	.globl _MODF0
                                     37 	.globl _WCOL0
                                     38 	.globl _SPIF0
                                     39 	.globl _AD0CM0
                                     40 	.globl _AD0CM1
                                     41 	.globl _AD0CM2
                                     42 	.globl _AD0WINT
                                     43 	.globl _AD0BUSY
                                     44 	.globl _AD0INT
                                     45 	.globl _BURSTEN
                                     46 	.globl _AD0EN
                                     47 	.globl _CCF0
                                     48 	.globl _CCF1
                                     49 	.globl _CCF2
                                     50 	.globl _CCF3
                                     51 	.globl _CCF4
                                     52 	.globl _CCF5
                                     53 	.globl _CR
                                     54 	.globl _CF
                                     55 	.globl _P
                                     56 	.globl _F1
                                     57 	.globl _OV
                                     58 	.globl _RS0
                                     59 	.globl _RS1
                                     60 	.globl _F0
                                     61 	.globl _AC
                                     62 	.globl _CY
                                     63 	.globl _T2XCLK
                                     64 	.globl _T2RCLK
                                     65 	.globl _TR2
                                     66 	.globl _T2SPLIT
                                     67 	.globl _TF2CEN
                                     68 	.globl _TF2LEN
                                     69 	.globl _TF2L
                                     70 	.globl _TF2H
                                     71 	.globl _SI
                                     72 	.globl _ACK
                                     73 	.globl _ARBLOST
                                     74 	.globl _ACKRQ
                                     75 	.globl _STO
                                     76 	.globl _STA
                                     77 	.globl _TXMODE
                                     78 	.globl _MASTER
                                     79 	.globl _PX0
                                     80 	.globl _PT0
                                     81 	.globl _PX1
                                     82 	.globl _PT1
                                     83 	.globl _PS0
                                     84 	.globl _PT2
                                     85 	.globl _PSPI0
                                     86 	.globl _CS0CMPF
                                     87 	.globl _CS0AAA
                                     88 	.globl _CS0BBB
                                     89 	.globl _CS0CMPEN
                                     90 	.globl _CS0BUSY
                                     91 	.globl _CS0INT
                                     92 	.globl _CS0EOS
                                     93 	.globl _CS0EN
                                     94 	.globl _EX0
                                     95 	.globl _ET0
                                     96 	.globl _EX1
                                     97 	.globl _ET1
                                     98 	.globl _ES0
                                     99 	.globl _ET2
                                    100 	.globl _ESPI0
                                    101 	.globl _EA
                                    102 	.globl _RI0
                                    103 	.globl _TI0
                                    104 	.globl _RB80
                                    105 	.globl _TB80
                                    106 	.globl _REN0
                                    107 	.globl _MCE0
                                    108 	.globl _S0MODE
                                    109 	.globl _IT0
                                    110 	.globl _IE0
                                    111 	.globl _IT1
                                    112 	.globl _IE1
                                    113 	.globl _TR0
                                    114 	.globl _TF0
                                    115 	.globl _TR1
                                    116 	.globl _TF1
                                    117 	.globl _CS0TH
                                    118 	.globl _PCA0CP0
                                    119 	.globl _PCA0
                                    120 	.globl _CS0D
                                    121 	.globl _PCA0CP2
                                    122 	.globl _PCA0CP1
                                    123 	.globl _TMR2
                                    124 	.globl _TMR2RL
                                    125 	.globl _ADC0LT
                                    126 	.globl _ADC0GT
                                    127 	.globl _ADC0
                                    128 	.globl _TMR3
                                    129 	.globl _TMR3RL
                                    130 	.globl _TOFF
                                    131 	.globl _DP
                                    132 	.globl _VDM0CN
                                    133 	.globl _CS0THH
                                    134 	.globl _CS0THL
                                    135 	.globl _PCA0CPH0
                                    136 	.globl _PCA0CPL0
                                    137 	.globl _PCA0H
                                    138 	.globl _PCA0L
                                    139 	.globl _SPI0CN
                                    140 	.globl _EIP2
                                    141 	.globl _EIP1
                                    142 	.globl _SMB0ADM
                                    143 	.globl _SMB0ADR
                                    144 	.globl _CS0MD3
                                    145 	.globl _CS0MD2
                                    146 	.globl _P1MDIN
                                    147 	.globl _P0MDIN
                                    148 	.globl _B
                                    149 	.globl _RSTSRC
                                    150 	.globl _CS0DH
                                    151 	.globl _CS0DL
                                    152 	.globl _PCA0CPH2
                                    153 	.globl _PCA0CPL2
                                    154 	.globl _PCA0CPH1
                                    155 	.globl _PCA0CPL1
                                    156 	.globl _ADC0CN
                                    157 	.globl _EIE2
                                    158 	.globl _EIE1
                                    159 	.globl _FLWR
                                    160 	.globl _IT01CF
                                    161 	.globl _XBR2
                                    162 	.globl _REVID
                                    163 	.globl _XBR1
                                    164 	.globl _DEVICEID
                                    165 	.globl _XBR0
                                    166 	.globl _ACC
                                    167 	.globl _PCA0PWM
                                    168 	.globl _CS0PM
                                    169 	.globl _CS0SE
                                    170 	.globl _CS0SS
                                    171 	.globl _PCA0CPM2
                                    172 	.globl _PCA0CPM1
                                    173 	.globl _PCA0CPM0
                                    174 	.globl _PCA0MD
                                    175 	.globl _PCA0CN
                                    176 	.globl _P0MAT
                                    177 	.globl _IREF0CN
                                    178 	.globl _P1SKIP
                                    179 	.globl _P0SKIP
                                    180 	.globl _CS0SCAN1
                                    181 	.globl _CS0SCAN0
                                    182 	.globl _REF0CN
                                    183 	.globl _PSW
                                    184 	.globl _P1MAT
                                    185 	.globl _PMU0FL
                                    186 	.globl _TMR2H
                                    187 	.globl _TMR2L
                                    188 	.globl _TMR2RLH
                                    189 	.globl _TMR2RLL
                                    190 	.globl _REG0CN
                                    191 	.globl _TMR2CN
                                    192 	.globl _P0MASK
                                    193 	.globl _ADC0LTH
                                    194 	.globl _ADC0LTL
                                    195 	.globl _ADC0GTH
                                    196 	.globl _ADC0GTL
                                    197 	.globl _SMB0DAT
                                    198 	.globl _SMB0CF
                                    199 	.globl _SMB0CN
                                    200 	.globl _P1MASK
                                    201 	.globl _ADC0H
                                    202 	.globl _ADC0L
                                    203 	.globl _ADC0TK
                                    204 	.globl _ADC0PWR
                                    205 	.globl _ADC0AC
                                    206 	.globl _IREF0CF
                                    207 	.globl _IP
                                    208 	.globl _FLKEY
                                    209 	.globl _FLSCL
                                    210 	.globl _PMU0MD
                                    211 	.globl _PMU0CF
                                    212 	.globl _OSCICL
                                    213 	.globl _OSCICN
                                    214 	.globl _OSCXCN
                                    215 	.globl _CS0CN
                                    216 	.globl _CS0MD1
                                    217 	.globl _RTC0KEY
                                    218 	.globl _RTC0DAT
                                    219 	.globl _RTC0ADR
                                    220 	.globl _CS0MX
                                    221 	.globl _CS0CF
                                    222 	.globl _CLKSEL
                                    223 	.globl _IE
                                    224 	.globl _SFRPAGE
                                    225 	.globl _P2MDOUT
                                    226 	.globl _P1MDOUT
                                    227 	.globl _P0MDOUT
                                    228 	.globl _SPI0DAT
                                    229 	.globl _SPI0CKR
                                    230 	.globl _SPI0CFG
                                    231 	.globl _P2
                                    232 	.globl _CPT0MX
                                    233 	.globl _CRC0AUTO
                                    234 	.globl _P2DRV
                                    235 	.globl _CPT0MD
                                    236 	.globl _CRC0FLIP
                                    237 	.globl _P1DRV
                                    238 	.globl _CPT0CN
                                    239 	.globl _CRC0CNT
                                    240 	.globl _SBUF0
                                    241 	.globl _P0DRV
                                    242 	.globl _SCON0
                                    243 	.globl _ADC0CF
                                    244 	.globl _ADC0MX
                                    245 	.globl _TMR3H
                                    246 	.globl _TMR3L
                                    247 	.globl _TMR3RLH
                                    248 	.globl _TMR3RLL
                                    249 	.globl _TMR3CN
                                    250 	.globl _P1
                                    251 	.globl _PSCTL
                                    252 	.globl _TOFFH
                                    253 	.globl _CKCON
                                    254 	.globl _TOFFL
                                    255 	.globl _TH1
                                    256 	.globl _TH0
                                    257 	.globl _TL1
                                    258 	.globl _TL0
                                    259 	.globl _TMOD
                                    260 	.globl _TCON
                                    261 	.globl _PCON
                                    262 	.globl _CRC0DAT
                                    263 	.globl _CRC0IN
                                    264 	.globl _CRC0CN
                                    265 	.globl _DPH
                                    266 	.globl _DPL
                                    267 	.globl _SP
                                    268 	.globl _P0
                                    269 	.globl _OFFSET_CALIBRATION_VAL
                                    270 	.globl _First_Hour_Seconds_Counter
                                    271 	.globl _Seconds_Counter
                                    272 	.globl _Hour_Counter
                                    273 	.globl _First_Hour_Counter
                                    274 	.globl _reserved
                                    275 	.globl _ZW_TimeOut_Flag
                                    276 	.globl _WakeUpNIFConfigFlag
                                    277 	.globl _SuspendFlag
                                    278 	.globl _ByteSent
                                    279 	.globl _TamperCmdFailed
                                    280 	.globl _ExcludeFailed
                                    281 	.globl _FirstTimeVR
                                    282 	.globl _IsIncluded
                                    283 	.globl _TamperCmdSent
                                    284 	.globl _BattIsDead
                                    285 	.globl _Z_Received
                                    286 	.globl _SendCmd_flag
                                    287 	.globl _ResendCmd_flag
                                    288 	.globl _InterpretPacket
                                    289 	.globl _ZWaveOn
                                    290 	.globl _WakeUpTime_Set_flag
                                    291 	.globl _Pattern_Detection_flag
                                    292 	.globl _Current_Include_MR_SW_Status
                                    293 	.globl _Current_Door_Status
                                    294 	.globl _interval
                                    295 	.globl _TIMER0_ISR
                                    296 	.globl _TIMER2_ISR
                                    297 	.globl _UART0_ISR
                                    298 ;--------------------------------------------------------
                                    299 ; special function registers
                                    300 ;--------------------------------------------------------
                                    301 	.area RSEG    (ABS,DATA)
      000000                        302 	.org 0x0000
                           000080   303 _P0	=	0x0080
                           000081   304 _SP	=	0x0081
                           000082   305 _DPL	=	0x0082
                           000083   306 _DPH	=	0x0083
                           000084   307 _CRC0CN	=	0x0084
                           000085   308 _CRC0IN	=	0x0085
                           000086   309 _CRC0DAT	=	0x0086
                           000087   310 _PCON	=	0x0087
                           000088   311 _TCON	=	0x0088
                           000089   312 _TMOD	=	0x0089
                           00008A   313 _TL0	=	0x008a
                           00008B   314 _TL1	=	0x008b
                           00008C   315 _TH0	=	0x008c
                           00008D   316 _TH1	=	0x008d
                           00008D   317 _TOFFL	=	0x008d
                           00008E   318 _CKCON	=	0x008e
                           00008E   319 _TOFFH	=	0x008e
                           00008F   320 _PSCTL	=	0x008f
                           000090   321 _P1	=	0x0090
                           000091   322 _TMR3CN	=	0x0091
                           000092   323 _TMR3RLL	=	0x0092
                           000093   324 _TMR3RLH	=	0x0093
                           000094   325 _TMR3L	=	0x0094
                           000095   326 _TMR3H	=	0x0095
                           000096   327 _ADC0MX	=	0x0096
                           000097   328 _ADC0CF	=	0x0097
                           000098   329 _SCON0	=	0x0098
                           000099   330 _P0DRV	=	0x0099
                           000099   331 _SBUF0	=	0x0099
                           00009A   332 _CRC0CNT	=	0x009a
                           00009B   333 _CPT0CN	=	0x009b
                           00009B   334 _P1DRV	=	0x009b
                           00009C   335 _CRC0FLIP	=	0x009c
                           00009D   336 _CPT0MD	=	0x009d
                           00009D   337 _P2DRV	=	0x009d
                           00009E   338 _CRC0AUTO	=	0x009e
                           00009F   339 _CPT0MX	=	0x009f
                           0000A0   340 _P2	=	0x00a0
                           0000A1   341 _SPI0CFG	=	0x00a1
                           0000A2   342 _SPI0CKR	=	0x00a2
                           0000A3   343 _SPI0DAT	=	0x00a3
                           0000A4   344 _P0MDOUT	=	0x00a4
                           0000A5   345 _P1MDOUT	=	0x00a5
                           0000A6   346 _P2MDOUT	=	0x00a6
                           0000A7   347 _SFRPAGE	=	0x00a7
                           0000A8   348 _IE	=	0x00a8
                           0000A9   349 _CLKSEL	=	0x00a9
                           0000AA   350 _CS0CF	=	0x00aa
                           0000AB   351 _CS0MX	=	0x00ab
                           0000AC   352 _RTC0ADR	=	0x00ac
                           0000AD   353 _RTC0DAT	=	0x00ad
                           0000AE   354 _RTC0KEY	=	0x00ae
                           0000AF   355 _CS0MD1	=	0x00af
                           0000B0   356 _CS0CN	=	0x00b0
                           0000B1   357 _OSCXCN	=	0x00b1
                           0000B2   358 _OSCICN	=	0x00b2
                           0000B3   359 _OSCICL	=	0x00b3
                           0000B5   360 _PMU0CF	=	0x00b5
                           0000B5   361 _PMU0MD	=	0x00b5
                           0000B6   362 _FLSCL	=	0x00b6
                           0000B7   363 _FLKEY	=	0x00b7
                           0000B8   364 _IP	=	0x00b8
                           0000B9   365 _IREF0CF	=	0x00b9
                           0000BA   366 _ADC0AC	=	0x00ba
                           0000BB   367 _ADC0PWR	=	0x00bb
                           0000BC   368 _ADC0TK	=	0x00bc
                           0000BD   369 _ADC0L	=	0x00bd
                           0000BE   370 _ADC0H	=	0x00be
                           0000BF   371 _P1MASK	=	0x00bf
                           0000C0   372 _SMB0CN	=	0x00c0
                           0000C1   373 _SMB0CF	=	0x00c1
                           0000C2   374 _SMB0DAT	=	0x00c2
                           0000C3   375 _ADC0GTL	=	0x00c3
                           0000C4   376 _ADC0GTH	=	0x00c4
                           0000C5   377 _ADC0LTL	=	0x00c5
                           0000C6   378 _ADC0LTH	=	0x00c6
                           0000C7   379 _P0MASK	=	0x00c7
                           0000C8   380 _TMR2CN	=	0x00c8
                           0000C9   381 _REG0CN	=	0x00c9
                           0000CA   382 _TMR2RLL	=	0x00ca
                           0000CB   383 _TMR2RLH	=	0x00cb
                           0000CC   384 _TMR2L	=	0x00cc
                           0000CD   385 _TMR2H	=	0x00cd
                           0000CE   386 _PMU0FL	=	0x00ce
                           0000CF   387 _P1MAT	=	0x00cf
                           0000D0   388 _PSW	=	0x00d0
                           0000D1   389 _REF0CN	=	0x00d1
                           0000D2   390 _CS0SCAN0	=	0x00d2
                           0000D3   391 _CS0SCAN1	=	0x00d3
                           0000D4   392 _P0SKIP	=	0x00d4
                           0000D5   393 _P1SKIP	=	0x00d5
                           0000D6   394 _IREF0CN	=	0x00d6
                           0000D7   395 _P0MAT	=	0x00d7
                           0000D8   396 _PCA0CN	=	0x00d8
                           0000D9   397 _PCA0MD	=	0x00d9
                           0000DA   398 _PCA0CPM0	=	0x00da
                           0000DB   399 _PCA0CPM1	=	0x00db
                           0000DC   400 _PCA0CPM2	=	0x00dc
                           0000DD   401 _CS0SS	=	0x00dd
                           0000DE   402 _CS0SE	=	0x00de
                           0000DE   403 _CS0PM	=	0x00de
                           0000DF   404 _PCA0PWM	=	0x00df
                           0000E0   405 _ACC	=	0x00e0
                           0000E1   406 _XBR0	=	0x00e1
                           0000E3   407 _DEVICEID	=	0x00e3
                           0000E2   408 _XBR1	=	0x00e2
                           0000E2   409 _REVID	=	0x00e2
                           0000E3   410 _XBR2	=	0x00e3
                           0000E4   411 _IT01CF	=	0x00e4
                           0000E5   412 _FLWR	=	0x00e5
                           0000E6   413 _EIE1	=	0x00e6
                           0000E7   414 _EIE2	=	0x00e7
                           0000E8   415 _ADC0CN	=	0x00e8
                           0000E9   416 _PCA0CPL1	=	0x00e9
                           0000EA   417 _PCA0CPH1	=	0x00ea
                           0000EB   418 _PCA0CPL2	=	0x00eb
                           0000EC   419 _PCA0CPH2	=	0x00ec
                           0000ED   420 _CS0DL	=	0x00ed
                           0000EE   421 _CS0DH	=	0x00ee
                           0000EF   422 _RSTSRC	=	0x00ef
                           0000F0   423 _B	=	0x00f0
                           0000F1   424 _P0MDIN	=	0x00f1
                           0000F2   425 _P1MDIN	=	0x00f2
                           0000F3   426 _CS0MD2	=	0x00f3
                           0000F3   427 _CS0MD3	=	0x00f3
                           0000F4   428 _SMB0ADR	=	0x00f4
                           0000F5   429 _SMB0ADM	=	0x00f5
                           0000F6   430 _EIP1	=	0x00f6
                           0000F7   431 _EIP2	=	0x00f7
                           0000F8   432 _SPI0CN	=	0x00f8
                           0000F9   433 _PCA0L	=	0x00f9
                           0000FA   434 _PCA0H	=	0x00fa
                           0000FB   435 _PCA0CPL0	=	0x00fb
                           0000FC   436 _PCA0CPH0	=	0x00fc
                           0000FD   437 _CS0THL	=	0x00fd
                           0000FE   438 _CS0THH	=	0x00fe
                           0000FF   439 _VDM0CN	=	0x00ff
                           008382   440 _DP	=	0x8382
                           008E8D   441 _TOFF	=	0x8e8d
                           009392   442 _TMR3RL	=	0x9392
                           009594   443 _TMR3	=	0x9594
                           00BEBD   444 _ADC0	=	0xbebd
                           00C4C3   445 _ADC0GT	=	0xc4c3
                           00C6C5   446 _ADC0LT	=	0xc6c5
                           00CBCA   447 _TMR2RL	=	0xcbca
                           00CDCC   448 _TMR2	=	0xcdcc
                           00EAE9   449 _PCA0CP1	=	0xeae9
                           00ECEB   450 _PCA0CP2	=	0xeceb
                           00EEED   451 _CS0D	=	0xeeed
                           00FAF9   452 _PCA0	=	0xfaf9
                           00FCFB   453 _PCA0CP0	=	0xfcfb
                           00FEFD   454 _CS0TH	=	0xfefd
                                    455 ;--------------------------------------------------------
                                    456 ; special function bits
                                    457 ;--------------------------------------------------------
                                    458 	.area RSEG    (ABS,DATA)
      000000                        459 	.org 0x0000
                           00008F   460 _TF1	=	0x008f
                           00008E   461 _TR1	=	0x008e
                           00008D   462 _TF0	=	0x008d
                           00008C   463 _TR0	=	0x008c
                           00008B   464 _IE1	=	0x008b
                           00008A   465 _IT1	=	0x008a
                           000089   466 _IE0	=	0x0089
                           000088   467 _IT0	=	0x0088
                           00009F   468 _S0MODE	=	0x009f
                           00009D   469 _MCE0	=	0x009d
                           00009C   470 _REN0	=	0x009c
                           00009B   471 _TB80	=	0x009b
                           00009A   472 _RB80	=	0x009a
                           000099   473 _TI0	=	0x0099
                           000098   474 _RI0	=	0x0098
                           0000AF   475 _EA	=	0x00af
                           0000AE   476 _ESPI0	=	0x00ae
                           0000AD   477 _ET2	=	0x00ad
                           0000AC   478 _ES0	=	0x00ac
                           0000AB   479 _ET1	=	0x00ab
                           0000AA   480 _EX1	=	0x00aa
                           0000A9   481 _ET0	=	0x00a9
                           0000A8   482 _EX0	=	0x00a8
                           0000B7   483 _CS0EN	=	0x00b7
                           0000B6   484 _CS0EOS	=	0x00b6
                           0000B5   485 _CS0INT	=	0x00b5
                           0000B4   486 _CS0BUSY	=	0x00b4
                           0000B3   487 _CS0CMPEN	=	0x00b3
                           0000B2   488 _CS0BBB	=	0x00b2
                           0000B1   489 _CS0AAA	=	0x00b1
                           0000B0   490 _CS0CMPF	=	0x00b0
                           0000BE   491 _PSPI0	=	0x00be
                           0000BD   492 _PT2	=	0x00bd
                           0000BC   493 _PS0	=	0x00bc
                           0000BB   494 _PT1	=	0x00bb
                           0000BA   495 _PX1	=	0x00ba
                           0000B9   496 _PT0	=	0x00b9
                           0000B8   497 _PX0	=	0x00b8
                           0000C7   498 _MASTER	=	0x00c7
                           0000C6   499 _TXMODE	=	0x00c6
                           0000C5   500 _STA	=	0x00c5
                           0000C4   501 _STO	=	0x00c4
                           0000C3   502 _ACKRQ	=	0x00c3
                           0000C2   503 _ARBLOST	=	0x00c2
                           0000C1   504 _ACK	=	0x00c1
                           0000C0   505 _SI	=	0x00c0
                           0000CF   506 _TF2H	=	0x00cf
                           0000CE   507 _TF2L	=	0x00ce
                           0000CD   508 _TF2LEN	=	0x00cd
                           0000CC   509 _TF2CEN	=	0x00cc
                           0000CB   510 _T2SPLIT	=	0x00cb
                           0000CA   511 _TR2	=	0x00ca
                           0000C9   512 _T2RCLK	=	0x00c9
                           0000C8   513 _T2XCLK	=	0x00c8
                           0000D7   514 _CY	=	0x00d7
                           0000D6   515 _AC	=	0x00d6
                           0000D5   516 _F0	=	0x00d5
                           0000D4   517 _RS1	=	0x00d4
                           0000D3   518 _RS0	=	0x00d3
                           0000D2   519 _OV	=	0x00d2
                           0000D1   520 _F1	=	0x00d1
                           0000D0   521 _P	=	0x00d0
                           0000DF   522 _CF	=	0x00df
                           0000DE   523 _CR	=	0x00de
                           0000DD   524 _CCF5	=	0x00dd
                           0000DC   525 _CCF4	=	0x00dc
                           0000DB   526 _CCF3	=	0x00db
                           0000DA   527 _CCF2	=	0x00da
                           0000D9   528 _CCF1	=	0x00d9
                           0000D8   529 _CCF0	=	0x00d8
                           0000EF   530 _AD0EN	=	0x00ef
                           0000EE   531 _BURSTEN	=	0x00ee
                           0000ED   532 _AD0INT	=	0x00ed
                           0000EC   533 _AD0BUSY	=	0x00ec
                           0000EB   534 _AD0WINT	=	0x00eb
                           0000EA   535 _AD0CM2	=	0x00ea
                           0000E9   536 _AD0CM1	=	0x00e9
                           0000E8   537 _AD0CM0	=	0x00e8
                           0000FF   538 _SPIF0	=	0x00ff
                           0000FE   539 _WCOL0	=	0x00fe
                           0000FD   540 _MODF0	=	0x00fd
                           0000FC   541 _RXOVRN0	=	0x00fc
                           0000FB   542 _NSS0MD1	=	0x00fb
                           0000FA   543 _NSS0MD0	=	0x00fa
                           0000F9   544 _TXBMT0	=	0x00f9
                           0000F8   545 _SPI0EN	=	0x00f8
                           000087   546 _INCLUDE_MR_SW	=	0x0087
                           000095   547 _DOOR_MR_SW	=	0x0095
                           000084   548 _UART_TX	=	0x0084
                           000085   549 _UART_RX	=	0x0085
                           000081   550 _PRODUCTION_PIN	=	0x0081
                           000082   551 _MOSI_PIN	=	0x0082
                           000083   552 _MR_CONTROL_INVERTED	=	0x0083
                           000090   553 _VOLTAGE_REG_CONTROL	=	0x0090
                           000092   554 _ZWAVE_MODULE_CONTROL	=	0x0092
                           000097   555 _GREEN_LED	=	0x0097
                                    556 ;--------------------------------------------------------
                                    557 ; overlayable register banks
                                    558 ;--------------------------------------------------------
                                    559 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        560 	.ds 8
                                    561 ;--------------------------------------------------------
                                    562 ; internal ram data
                                    563 ;--------------------------------------------------------
                                    564 	.area DSEG    (DATA)
      000024                        565 _interval::
      000024                        566 	.ds 2
      000026                        567 _UART_Buffer:
      000026                        568 	.ds 32
      000046                        569 _UART_Buffer_Size:
      000046                        570 	.ds 1
      000047                        571 _UART_Input_First:
      000047                        572 	.ds 1
      000048                        573 _UART_Actual_Size:
      000048                        574 	.ds 1
      000049                        575 _Byte:
      000049                        576 	.ds 1
      00004A                        577 _Command_Queue:
      00004A                        578 	.ds 8
      000052                        579 _prevCommand:
      000052                        580 	.ds 1
      000053                        581 _WakeupCount:
      000053                        582 	.ds 4
      000057                        583 _Turn_ON_VR_Counter:
      000057                        584 	.ds 1
      000058                        585 _Temperature_ref:
      000058                        586 	.ds 1
      000059                        587 _Zs_Counter:
      000059                        588 	.ds 1
      00005A                        589 _ZW_On_Time:
      00005A                        590 	.ds 2
      00005C                        591 _T0_Tick_Counter:
      00005C                        592 	.ds 2
      00005E                        593 _ZW_TimeOut_Counter:
      00005E                        594 	.ds 1
      00005F                        595 _MagnetoZ_Info:
      00005F                        596 	.ds 27
      00007A                        597 _main_MR_Control_On_count_1_81:
      00007A                        598 	.ds 1
      00007B                        599 _InterpretUARTInfo_BufferPointer_1_208:
      00007B                        600 	.ds 2
                                    601 ;--------------------------------------------------------
                                    602 ; overlayable items in internal ram 
                                    603 ;--------------------------------------------------------
                                    604 	.area	OSEG    (OVR,DATA)
      00000E                        605 _strtol_PARM_2:
      00000E                        606 	.ds 1
                                    607 	.area	OSEG    (OVR,DATA)
      00000E                        608 _UseTimer0_PARM_2:
      00000E                        609 	.ds 2
                                    610 	.area	OSEG    (OVR,DATA)
                                    611 	.area	OSEG    (OVR,DATA)
                                    612 	.area	OSEG    (OVR,DATA)
                                    613 	.area	OSEG    (OVR,DATA)
                                    614 	.area	OSEG    (OVR,DATA)
                                    615 	.area	OSEG    (OVR,DATA)
                                    616 ;--------------------------------------------------------
                                    617 ; Stack segment in internal ram 
                                    618 ;--------------------------------------------------------
                                    619 	.area	SSEG
      00007D                        620 __start__stack:
      00007D                        621 	.ds	1
                                    622 
                                    623 ;--------------------------------------------------------
                                    624 ; indirectly addressable internal ram data
                                    625 ;--------------------------------------------------------
                                    626 	.area ISEG    (DATA)
                                    627 ;--------------------------------------------------------
                                    628 ; absolute internal ram data
                                    629 ;--------------------------------------------------------
                                    630 	.area IABS    (ABS,DATA)
                                    631 	.area IABS    (ABS,DATA)
                                    632 ;--------------------------------------------------------
                                    633 ; bit data
                                    634 ;--------------------------------------------------------
                                    635 	.area BSEG    (BIT)
      000000                        636 _Current_Door_Status::
      000000                        637 	.ds 1
      000001                        638 _Current_Include_MR_SW_Status::
      000001                        639 	.ds 1
      000002                        640 _Pattern_Detection_flag::
      000002                        641 	.ds 1
      000003                        642 _WakeUpTime_Set_flag::
      000003                        643 	.ds 1
      000004                        644 _ZWaveOn::
      000004                        645 	.ds 1
      000005                        646 _InterpretPacket::
      000005                        647 	.ds 1
      000006                        648 _ResendCmd_flag::
      000006                        649 	.ds 1
      000007                        650 _SendCmd_flag::
      000007                        651 	.ds 1
      000008                        652 _Z_Received::
      000008                        653 	.ds 1
      000009                        654 _BattIsDead::
      000009                        655 	.ds 1
      00000A                        656 _TamperCmdSent::
      00000A                        657 	.ds 1
      00000B                        658 _IsIncluded::
      00000B                        659 	.ds 1
      00000C                        660 _FirstTimeVR::
      00000C                        661 	.ds 1
      00000D                        662 _ExcludeFailed::
      00000D                        663 	.ds 1
      00000E                        664 _TamperCmdFailed::
      00000E                        665 	.ds 1
      00000F                        666 _ByteSent::
      00000F                        667 	.ds 1
      000010                        668 _SuspendFlag::
      000010                        669 	.ds 1
      000011                        670 _WakeUpNIFConfigFlag::
      000011                        671 	.ds 1
      000012                        672 _ZW_TimeOut_Flag::
      000012                        673 	.ds 1
      000013                        674 _main_Prev_Door_Status_1_81:
      000013                        675 	.ds 1
      000014                        676 _main_Prev_Include_MR_SW_Status_1_81:
      000014                        677 	.ds 1
      000015                        678 _main_AutoInclusion_1_81:
      000015                        679 	.ds 1
      000016                        680 _LED_Pattern_PARM_1:
      000016                        681 	.ds 1
      000017                        682 _Flash_Write_EA_SAVE_1_293:
      000017                        683 	.ds 1
      000018                        684 _Flash_Read_EA_SAVE_1_296:
      000018                        685 	.ds 1
                                    686 ;--------------------------------------------------------
                                    687 ; paged external ram data
                                    688 ;--------------------------------------------------------
                                    689 	.area PSEG    (PAG,XDATA)
                                    690 ;--------------------------------------------------------
                                    691 ; external ram data
                                    692 ;--------------------------------------------------------
                                    693 	.area XSEG    (XDATA)
                           000000   694 _reserved	=	0x0000
                                    695 ;--------------------------------------------------------
                                    696 ; absolute external ram data
                                    697 ;--------------------------------------------------------
                                    698 	.area XABS    (ABS,XDATA)
                                    699 ;--------------------------------------------------------
                                    700 ; external initialized ram data
                                    701 ;--------------------------------------------------------
                                    702 	.area XISEG   (XDATA)
      000001                        703 _First_Hour_Counter::
      000001                        704 	.ds 1
      000002                        705 _Hour_Counter::
      000002                        706 	.ds 1
      000003                        707 _Seconds_Counter::
      000003                        708 	.ds 2
      000005                        709 _First_Hour_Seconds_Counter::
      000005                        710 	.ds 2
      000007                        711 _OFFSET_CALIBRATION_VAL::
      000007                        712 	.ds 2
                                    713 	.area HOME    (CODE)
                                    714 	.area GSINIT0 (CODE)
                                    715 	.area GSINIT1 (CODE)
                                    716 	.area GSINIT2 (CODE)
                                    717 	.area GSINIT3 (CODE)
                                    718 	.area GSINIT4 (CODE)
                                    719 	.area GSINIT5 (CODE)
                                    720 	.area GSINIT  (CODE)
                                    721 	.area GSFINAL (CODE)
                                    722 	.area CSEG    (CODE)
                                    723 ;--------------------------------------------------------
                                    724 ; interrupt vector 
                                    725 ;--------------------------------------------------------
                                    726 	.area HOME    (CODE)
      000000                        727 __interrupt_vect:
      000000 02 00 31         [24]  728 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  729 	reti
      000004                        730 	.ds	7
      00000B 02 0B B8         [24]  731 	ljmp	_TIMER0_ISR
      00000E                        732 	.ds	5
      000013 32               [24]  733 	reti
      000014                        734 	.ds	7
      00001B 32               [24]  735 	reti
      00001C                        736 	.ds	7
      000023 02 0B D0         [24]  737 	ljmp	_UART0_ISR
      000026                        738 	.ds	5
      00002B 02 0B CC         [24]  739 	ljmp	_TIMER2_ISR
                                    740 ;--------------------------------------------------------
                                    741 ; global & static initialisations
                                    742 ;--------------------------------------------------------
                                    743 	.area HOME    (CODE)
                                    744 	.area GSINIT  (CODE)
                                    745 	.area GSFINAL (CODE)
                                    746 	.area GSINIT  (CODE)
                                    747 	.globl __sdcc_gsinit_startup
                                    748 	.globl __sdcc_program_startup
                                    749 	.globl __start__stack
                                    750 	.globl __mcs51_genXINIT
                                    751 	.globl __mcs51_genXRAMCLEAR
                                    752 	.globl __mcs51_genRAMCLEAR
                                    753 ;	MagnetoZ-C8051F990-Simplicity_main.c:183: static U8 UART_Buffer_Size = 0;
      00008A 75 46 00         [24]  754 	mov	_UART_Buffer_Size,#0x00
                                    755 ;	MagnetoZ-C8051F990-Simplicity_main.c:184: static volatile U8 UART_Input_First = 0;
      00008D 75 47 00         [24]  756 	mov	_UART_Input_First,#0x00
                                    757 ;	MagnetoZ-C8051F990-Simplicity_main.c:185: static U8 UART_Actual_Size = 0;
      000090 75 48 00         [24]  758 	mov	_UART_Actual_Size,#0x00
                                    759 ;	MagnetoZ-C8051F990-Simplicity_main.c:191: static COMMAND prevCommand 		= COMMAND_8051_NONE;
      000093 75 52 00         [24]  760 	mov	_prevCommand,#0x00
                                    761 ;	MagnetoZ-C8051F990-Simplicity_main.c:217: static U32 WakeupCount 						= DEFAULT_WAKE_UP_INTERVAL;
      000096 75 53 80         [24]  762 	mov	_WakeupCount,#0x80
      000099 75 54 51         [24]  763 	mov	(_WakeupCount + 1),#0x51
      00009C 75 55 01         [24]  764 	mov	(_WakeupCount + 2),#0x01
      00009F 75 56 00         [24]  765 	mov	(_WakeupCount + 3),#0x00
                                    766 ;	MagnetoZ-C8051F990-Simplicity_main.c:225: static U8 Turn_ON_VR_Counter	    		= 0;
      0000A2 75 57 00         [24]  767 	mov	_Turn_ON_VR_Counter,#0x00
                                    768 ;	MagnetoZ-C8051F990-Simplicity_main.c:226: static S8 Temperature_ref					= -40; //Temperature_ref = Temperature/10
      0000A5 75 58 D8         [24]  769 	mov	_Temperature_ref,#0xD8
                                    770 ;	MagnetoZ-C8051F990-Simplicity_main.c:228: static U8  Zs_Counter		 				= 0;
      0000A8 75 59 00         [24]  771 	mov	_Zs_Counter,#0x00
                                    772 ;	MagnetoZ-C8051F990-Simplicity_main.c:229: static U16 ZW_On_Time		 				= 0;
      0000AB E4               [12]  773 	clr	a
      0000AC F5 5A            [12]  774 	mov	_ZW_On_Time,a
      0000AE F5 5B            [12]  775 	mov	(_ZW_On_Time + 1),a
                                    776 ;	MagnetoZ-C8051F990-Simplicity_main.c:230: static U16 T0_Tick_Counter 					= 0;
      0000B0 F5 5C            [12]  777 	mov	_T0_Tick_Counter,a
      0000B2 F5 5D            [12]  778 	mov	(_T0_Tick_Counter + 1),a
                                    779 ;	MagnetoZ-C8051F990-Simplicity_main.c:231: static U8  ZW_TimeOut_Counter 				= 0; //Max Count = 3
                                    780 ;	1-genFromRTrack replaced	mov	_ZW_TimeOut_Counter,#0x00
      0000B4 F5 5E            [12]  781 	mov	_ZW_TimeOut_Counter,a
                                    782 ;	MagnetoZ-C8051F990-Simplicity_main.c:194: bit Current_Door_Status 			= 1; //DOOR_MR_SW. 	  SW_NOT_PRESSED
      0000B6 D2 00            [12]  783 	setb	_Current_Door_Status
                                    784 ;	MagnetoZ-C8051F990-Simplicity_main.c:195: bit Current_Include_MR_SW_Status 	= 1; //INCLUDE_MR_SW. SW_NOT_PRESSED
      0000B8 D2 01            [12]  785 	setb	_Current_Include_MR_SW_Status
                                    786 ;	MagnetoZ-C8051F990-Simplicity_main.c:198: bit Pattern_Detection_flag 			= 0;
      0000BA C2 02            [12]  787 	clr	_Pattern_Detection_flag
                                    788 ;	MagnetoZ-C8051F990-Simplicity_main.c:199: bit WakeUpTime_Set_flag 	    	= 0;
      0000BC C2 03            [12]  789 	clr	_WakeUpTime_Set_flag
                                    790 ;	MagnetoZ-C8051F990-Simplicity_main.c:200: bit ZWaveOn 			        	= 0;
      0000BE C2 04            [12]  791 	clr	_ZWaveOn
                                    792 ;	MagnetoZ-C8051F990-Simplicity_main.c:201: bit InterpretPacket 				= 0;
      0000C0 C2 05            [12]  793 	clr	_InterpretPacket
                                    794 ;	MagnetoZ-C8051F990-Simplicity_main.c:202: bit ResendCmd_flag 					= 0;
      0000C2 C2 06            [12]  795 	clr	_ResendCmd_flag
                                    796 ;	MagnetoZ-C8051F990-Simplicity_main.c:203: bit SendCmd_flag 					= 0;
      0000C4 C2 07            [12]  797 	clr	_SendCmd_flag
                                    798 ;	MagnetoZ-C8051F990-Simplicity_main.c:204: bit Z_Received 						= 0;
      0000C6 C2 08            [12]  799 	clr	_Z_Received
                                    800 ;	MagnetoZ-C8051F990-Simplicity_main.c:205: bit BattIsDead 						= 0;  //Battery Not Dead
      0000C8 C2 09            [12]  801 	clr	_BattIsDead
                                    802 ;	MagnetoZ-C8051F990-Simplicity_main.c:206: bit TamperCmdSent	 				= 0;
      0000CA C2 0A            [12]  803 	clr	_TamperCmdSent
                                    804 ;	MagnetoZ-C8051F990-Simplicity_main.c:207: bit IsIncluded 						= 0;
      0000CC C2 0B            [12]  805 	clr	_IsIncluded
                                    806 ;	MagnetoZ-C8051F990-Simplicity_main.c:208: bit FirstTimeVR 					= 0;
      0000CE C2 0C            [12]  807 	clr	_FirstTimeVR
                                    808 ;	MagnetoZ-C8051F990-Simplicity_main.c:209: bit ExcludeFailed 					= 0;
      0000D0 C2 0D            [12]  809 	clr	_ExcludeFailed
                                    810 ;	MagnetoZ-C8051F990-Simplicity_main.c:210: bit TamperCmdFailed 				= 0;
      0000D2 C2 0E            [12]  811 	clr	_TamperCmdFailed
                                    812 ;	MagnetoZ-C8051F990-Simplicity_main.c:211: volatile bit ByteSent	     				= 0;
      0000D4 C2 0F            [12]  813 	clr	_ByteSent
                                    814 ;	MagnetoZ-C8051F990-Simplicity_main.c:212: bit SuspendFlag	     				= 0;
      0000D6 C2 10            [12]  815 	clr	_SuspendFlag
                                    816 ;	MagnetoZ-C8051F990-Simplicity_main.c:213: bit WakeUpNIFConfigFlag	     		= 0;
      0000D8 C2 11            [12]  817 	clr	_WakeUpNIFConfigFlag
                                    818 ;	MagnetoZ-C8051F990-Simplicity_main.c:214: bit ZW_TimeOut_Flag	     			= 0;
      0000DA C2 12            [12]  819 	clr	_ZW_TimeOut_Flag
                                    820 	.area GSFINAL (CODE)
      0000DC 02 00 2E         [24]  821 	ljmp	__sdcc_program_startup
                                    822 ;--------------------------------------------------------
                                    823 ; Home
                                    824 ;--------------------------------------------------------
                                    825 	.area HOME    (CODE)
                                    826 	.area HOME    (CODE)
      00002E                        827 __sdcc_program_startup:
      00002E 02 01 71         [24]  828 	ljmp	_main
                                    829 ;	return from main will return to caller
                                    830 ;--------------------------------------------------------
                                    831 ; code
                                    832 ;--------------------------------------------------------
                                    833 	.area CSEG    (CODE)
                                    834 ;------------------------------------------------------------
                                    835 ;Allocation info for local variables in function 'strtol'
                                    836 ;------------------------------------------------------------
                                    837 ;length                    Allocated with name '_strtol_PARM_2'
                                    838 ;s                         Allocated to registers r1 
                                    839 ;result                    Allocated to registers r6 r7 
                                    840 ;l                         Allocated to registers r5 
                                    841 ;------------------------------------------------------------
                                    842 ;	MagnetoZ-C8051F990-Simplicity_main.c:276: static U16 strtol(const char SEG_NEAR *s, U8 length)
                                    843 ;	-----------------------------------------
                                    844 ;	 function strtol
                                    845 ;	-----------------------------------------
      0000DF                        846 _strtol:
                           000007   847 	ar7 = 0x07
                           000006   848 	ar6 = 0x06
                           000005   849 	ar5 = 0x05
                           000004   850 	ar4 = 0x04
                           000003   851 	ar3 = 0x03
                           000002   852 	ar2 = 0x02
                           000001   853 	ar1 = 0x01
                           000000   854 	ar0 = 0x00
      0000DF A9 82            [24]  855 	mov	r1,dpl
                                    856 ;	MagnetoZ-C8051F990-Simplicity_main.c:278: U16 result = 0;
      0000E1 7E 00            [12]  857 	mov	r6,#0x00
      0000E3 7F 00            [12]  858 	mov	r7,#0x00
                                    859 ;	MagnetoZ-C8051F990-Simplicity_main.c:280: while (*s && l < length)
      0000E5 7D 00            [12]  860 	mov	r5,#0x00
      0000E7                        861 00110$:
      0000E7 E7               [12]  862 	mov	a,@r1
      0000E8 FC               [12]  863 	mov	r4,a
      0000E9 70 03            [24]  864 	jnz	00134$
      0000EB 02 01 6C         [24]  865 	ljmp	00112$
      0000EE                        866 00134$:
      0000EE C3               [12]  867 	clr	c
      0000EF ED               [12]  868 	mov	a,r5
      0000F0 95 0E            [12]  869 	subb	a,_strtol_PARM_2
      0000F2 40 03            [24]  870 	jc	00135$
      0000F4 02 01 6C         [24]  871 	ljmp	00112$
      0000F7                        872 00135$:
                                    873 ;	MagnetoZ-C8051F990-Simplicity_main.c:282: l++;
      0000F7 0D               [12]  874 	inc	r5
                                    875 ;	MagnetoZ-C8051F990-Simplicity_main.c:283: result = result * 16;
      0000F8 EF               [12]  876 	mov	a,r7
      0000F9 C4               [12]  877 	swap	a
      0000FA 54 F0            [12]  878 	anl	a,#0xF0
      0000FC CE               [12]  879 	xch	a,r6
      0000FD C4               [12]  880 	swap	a
      0000FE CE               [12]  881 	xch	a,r6
      0000FF 6E               [12]  882 	xrl	a,r6
      000100 CE               [12]  883 	xch	a,r6
      000101 54 F0            [12]  884 	anl	a,#0xF0
      000103 CE               [12]  885 	xch	a,r6
      000104 6E               [12]  886 	xrl	a,r6
      000105 FF               [12]  887 	mov	r7,a
                                    888 ;	MagnetoZ-C8051F990-Simplicity_main.c:284: if (*s <= '9')
      000106 C3               [12]  889 	clr	c
      000107 74 B9            [12]  890 	mov	a,#(0x39 ^ 0x80)
      000109 8C F0            [24]  891 	mov	b,r4
      00010B 63 F0 80         [24]  892 	xrl	b,#0x80
      00010E 95 F0            [12]  893 	subb	a,b
      000110 40 16            [24]  894 	jc	00107$
                                    895 ;	MagnetoZ-C8051F990-Simplicity_main.c:286: result += *s - '0';
      000112 EC               [12]  896 	mov	a,r4
      000113 FA               [12]  897 	mov	r2,a
      000114 33               [12]  898 	rlc	a
      000115 95 E0            [12]  899 	subb	a,acc
      000117 FB               [12]  900 	mov	r3,a
      000118 EA               [12]  901 	mov	a,r2
      000119 24 D0            [12]  902 	add	a,#0xD0
      00011B FA               [12]  903 	mov	r2,a
      00011C EB               [12]  904 	mov	a,r3
      00011D 34 FF            [12]  905 	addc	a,#0xFF
      00011F FB               [12]  906 	mov	r3,a
      000120 EA               [12]  907 	mov	a,r2
      000121 2E               [12]  908 	add	a,r6
      000122 FE               [12]  909 	mov	r6,a
      000123 EB               [12]  910 	mov	a,r3
      000124 3F               [12]  911 	addc	a,r7
      000125 FF               [12]  912 	mov	r7,a
      000126 80 BF            [24]  913 	sjmp	00110$
      000128                        914 00107$:
                                    915 ;	MagnetoZ-C8051F990-Simplicity_main.c:288: else if (*s <= 'F')
      000128 C3               [12]  916 	clr	c
      000129 74 C6            [12]  917 	mov	a,#(0x46 ^ 0x80)
      00012B 8C F0            [24]  918 	mov	b,r4
      00012D 63 F0 80         [24]  919 	xrl	b,#0x80
      000130 95 F0            [12]  920 	subb	a,b
      000132 40 16            [24]  921 	jc	00104$
                                    922 ;	MagnetoZ-C8051F990-Simplicity_main.c:290: result += *s - 'A' + 10;
      000134 EC               [12]  923 	mov	a,r4
      000135 FA               [12]  924 	mov	r2,a
      000136 33               [12]  925 	rlc	a
      000137 95 E0            [12]  926 	subb	a,acc
      000139 FB               [12]  927 	mov	r3,a
      00013A 74 C9            [12]  928 	mov	a,#0xC9
      00013C 2A               [12]  929 	add	a,r2
      00013D FA               [12]  930 	mov	r2,a
      00013E 74 FF            [12]  931 	mov	a,#0xFF
      000140 3B               [12]  932 	addc	a,r3
      000141 FB               [12]  933 	mov	r3,a
      000142 EA               [12]  934 	mov	a,r2
      000143 2E               [12]  935 	add	a,r6
      000144 FE               [12]  936 	mov	r6,a
      000145 EB               [12]  937 	mov	a,r3
      000146 3F               [12]  938 	addc	a,r7
      000147 FF               [12]  939 	mov	r7,a
      000148 80 9D            [24]  940 	sjmp	00110$
      00014A                        941 00104$:
                                    942 ;	MagnetoZ-C8051F990-Simplicity_main.c:292: else if (*s <= 'f')
      00014A C3               [12]  943 	clr	c
      00014B 74 E6            [12]  944 	mov	a,#(0x66 ^ 0x80)
      00014D 8C F0            [24]  945 	mov	b,r4
      00014F 63 F0 80         [24]  946 	xrl	b,#0x80
      000152 95 F0            [12]  947 	subb	a,b
      000154 40 91            [24]  948 	jc	00110$
                                    949 ;	MagnetoZ-C8051F990-Simplicity_main.c:294: result += *s - 'a' + 10;
      000156 EC               [12]  950 	mov	a,r4
      000157 33               [12]  951 	rlc	a
      000158 95 E0            [12]  952 	subb	a,acc
      00015A FB               [12]  953 	mov	r3,a
      00015B 74 A9            [12]  954 	mov	a,#0xA9
      00015D 2C               [12]  955 	add	a,r4
      00015E FC               [12]  956 	mov	r4,a
      00015F 74 FF            [12]  957 	mov	a,#0xFF
      000161 3B               [12]  958 	addc	a,r3
      000162 FB               [12]  959 	mov	r3,a
      000163 EC               [12]  960 	mov	a,r4
      000164 2E               [12]  961 	add	a,r6
      000165 FE               [12]  962 	mov	r6,a
      000166 EB               [12]  963 	mov	a,r3
      000167 3F               [12]  964 	addc	a,r7
      000168 FF               [12]  965 	mov	r7,a
      000169 02 00 E7         [24]  966 	ljmp	00110$
      00016C                        967 00112$:
                                    968 ;	MagnetoZ-C8051F990-Simplicity_main.c:297: return result;
      00016C 8E 82            [24]  969 	mov	dpl,r6
      00016E 8F 83            [24]  970 	mov	dph,r7
      000170 22               [24]  971 	ret
                                    972 ;------------------------------------------------------------
                                    973 ;Allocation info for local variables in function 'main'
                                    974 ;------------------------------------------------------------
                                    975 ;Include_count             Allocated to registers r5 
                                    976 ;MR_Control_On_count       Allocated with name '_main_MR_Control_On_count_1_81'
                                    977 ;Reset_AI_Counter          Allocated to registers r7 
                                    978 ;------------------------------------------------------------
                                    979 ;	MagnetoZ-C8051F990-Simplicity_main.c:308: void main(void)
                                    980 ;	-----------------------------------------
                                    981 ;	 function main
                                    982 ;	-----------------------------------------
      000171                        983 _main:
                                    984 ;	MagnetoZ-C8051F990-Simplicity_main.c:317: U8 Reset_AI_Counter 		= 0;
      000171 7F 00            [12]  985 	mov	r7,#0x00
                                    986 ;	MagnetoZ-C8051F990-Simplicity_main.c:319: bit Prev_Door_Status 				= 1; //DOOR_MR_SW. 	  SW_NOT_PRESSED
      000173 D2 13            [12]  987 	setb	_main_Prev_Door_Status_1_81
                                    988 ;	MagnetoZ-C8051F990-Simplicity_main.c:320: bit Prev_Include_MR_SW_Status 		= 1; //INCLUDE_MR_SW. SW_NOT_PRESSED
      000175 D2 14            [12]  989 	setb	_main_Prev_Include_MR_SW_Status_1_81
                                    990 ;	MagnetoZ-C8051F990-Simplicity_main.c:321: bit AutoInclusion 					= 0;
      000177 C2 15            [12]  991 	clr	_main_AutoInclusion_1_81
                                    992 ;	MagnetoZ-C8051F990-Simplicity_main.c:325: MR_Control_On_count = 0;
      000179 75 7A 00         [24]  993 	mov	_main_MR_Control_On_count_1_81,#0x00
                                    994 ;	MagnetoZ-C8051F990-Simplicity_main.c:326: Include_count 		= 0;
      00017C 7D 00            [12]  995 	mov	r5,#0x00
                                    996 ;	MagnetoZ-C8051F990-Simplicity_main.c:329: PCA0MD &= ~0x40;
      00017E AC D9            [24]  997 	mov	r4,_PCA0MD
      000180 74 BF            [12]  998 	mov	a,#0xBF
      000182 5C               [12]  999 	anl	a,r4
      000183 F5 D9            [12] 1000 	mov	_PCA0MD,a
                                   1001 ;	MagnetoZ-C8051F990-Simplicity_main.c:332: Init();
      000185 C0 07            [24] 1002 	push	ar7
      000187 C0 05            [24] 1003 	push	ar5
      000189 12 0C 36         [24] 1004 	lcall	_Init
                                   1005 ;	MagnetoZ-C8051F990-Simplicity_main.c:335: UART_TX = 0;  //For Lars = 1
      00018C C2 84            [12] 1006 	clr	_UART_TX
                                   1007 ;	MagnetoZ-C8051F990-Simplicity_main.c:338: VOLTAGE_REG_CONTROL = 0; //For Lars = 1
      00018E C2 90            [12] 1008 	clr	_VOLTAGE_REG_CONTROL
                                   1009 ;	MagnetoZ-C8051F990-Simplicity_main.c:341: PRODUCTION_PIN = 1;
      000190 D2 81            [12] 1010 	setb	_PRODUCTION_PIN
                                   1011 ;	MagnetoZ-C8051F990-Simplicity_main.c:342: MOSI_PIN = 1;
      000192 D2 82            [12] 1012 	setb	_MOSI_PIN
                                   1013 ;	MagnetoZ-C8051F990-Simplicity_main.c:344: RTC_Init();                         // Initialize SmaRTClock
      000194 12 19 C7         [24] 1014 	lcall	_RTC_Init
                                   1015 ;	MagnetoZ-C8051F990-Simplicity_main.c:345: RTC_WriteAlarm(WAKE_INTERVAL_TICKS);// Set the Alarm Value
      000197 90 80 00         [24] 1016 	mov	dptr,#0x8000
      00019A E4               [12] 1017 	clr	a
      00019B F5 F0            [12] 1018 	mov	b,a
      00019D 12 1A 41         [24] 1019 	lcall	_RTC_WriteAlarm
                                   1020 ;	MagnetoZ-C8051F990-Simplicity_main.c:346: RTC0CN_SetBits(RTC0TR+RTC0AEN+ALRM);// Enable Counter, Alarm, and Auto-Reset
      0001A0 75 82 1C         [24] 1021 	mov	dpl,#0x1C
      0001A3 12 1A 75         [24] 1022 	lcall	_RTC0CN_SetBits
                                   1023 ;	MagnetoZ-C8051F990-Simplicity_main.c:348: LPM_Init();                        // Initialize Power Management
      0001A6 12 1A 8D         [24] 1024 	lcall	_LPM_Init
                                   1025 ;	MagnetoZ-C8051F990-Simplicity_main.c:349: LPM_Enable_Wakeup(RTC);  			// Wakeup sources: SmaRTClock
      0001A9 75 82 0C         [24] 1026 	mov	dpl,#0x0C
      0001AC 12 1A A0         [24] 1027 	lcall	_LPM_Enable_Wakeup
                                   1028 ;	MagnetoZ-C8051F990-Simplicity_main.c:351: EA = 1;                             // Enable global interrupts
      0001AF D2 AF            [12] 1029 	setb	_EA
                                   1030 ;	MagnetoZ-C8051F990-Simplicity_main.c:352: RTC_Alarm = 1;                      // Set the RTC Alarm Flag on startup
      0001B1 75 0A 01         [24] 1031 	mov	_RTC_Alarm,#0x01
                                   1032 ;	MagnetoZ-C8051F990-Simplicity_main.c:355: memset(Command_Queue, COMMAND_8051_NONE, COMMAND_QUEUE_SIZE);
      0001B4 75 0E 00         [24] 1033 	mov	_memset_PARM_2,#0x00
      0001B7 75 0F 08         [24] 1034 	mov	_memset_PARM_3,#0x08
      0001BA 75 10 00         [24] 1035 	mov	(_memset_PARM_3 + 1),#0x00
      0001BD 90 00 4A         [24] 1036 	mov	dptr,#_Command_Queue
      0001C0 75 F0 40         [24] 1037 	mov	b,#0x40
      0001C3 12 1B 29         [24] 1038 	lcall	_memset
                                   1039 ;	MagnetoZ-C8051F990-Simplicity_main.c:358: SFRPAGE = 0x0F;
      0001C6 75 A7 0F         [24] 1040 	mov	_SFRPAGE,#0x0F
                                   1041 ;	MagnetoZ-C8051F990-Simplicity_main.c:359: OFFSET_CALIBRATION_VAL = (TOFFH << 2);
      0001C9 AB 8E            [24] 1042 	mov	r3,_TOFFH
      0001CB E4               [12] 1043 	clr	a
      0001CC CB               [12] 1044 	xch	a,r3
      0001CD 25 E0            [12] 1045 	add	a,acc
      0001CF CB               [12] 1046 	xch	a,r3
      0001D0 33               [12] 1047 	rlc	a
      0001D1 CB               [12] 1048 	xch	a,r3
      0001D2 25 E0            [12] 1049 	add	a,acc
      0001D4 CB               [12] 1050 	xch	a,r3
      0001D5 33               [12] 1051 	rlc	a
      0001D6 FC               [12] 1052 	mov	r4,a
                                   1053 ;	MagnetoZ-C8051F990-Simplicity_main.c:360: OFFSET_CALIBRATION_VAL += (TOFFL >> 6);
      0001D7 E5 8D            [12] 1054 	mov	a,_TOFFL
      0001D9 23               [12] 1055 	rl	a
      0001DA 23               [12] 1056 	rl	a
      0001DB 54 03            [12] 1057 	anl	a,#0x03
      0001DD FA               [12] 1058 	mov	r2,a
      0001DE 7E 00            [12] 1059 	mov	r6,#0x00
      0001E0 90 00 07         [24] 1060 	mov	dptr,#_OFFSET_CALIBRATION_VAL
      0001E3 EA               [12] 1061 	mov	a,r2
      0001E4 2B               [12] 1062 	add	a,r3
      0001E5 F0               [24] 1063 	movx	@dptr,a
      0001E6 EE               [12] 1064 	mov	a,r6
      0001E7 3C               [12] 1065 	addc	a,r4
      0001E8 A3               [24] 1066 	inc	dptr
      0001E9 F0               [24] 1067 	movx	@dptr,a
                                   1068 ;	MagnetoZ-C8051F990-Simplicity_main.c:361: SFRPAGE = 0x00;
                                   1069 ;	1-genFromRTrack replaced	mov	_SFRPAGE,#0x00
      0001EA 8E A7            [24] 1070 	mov	_SFRPAGE,r6
                                   1071 ;	MagnetoZ-C8051F990-Simplicity_main.c:364: Flash_Read();
      0001EC 12 19 47         [24] 1072 	lcall	_Flash_Read
                                   1073 ;	MagnetoZ-C8051F990-Simplicity_main.c:443: XBR2    =  0xC0;                     // disable weak pull-ups and enable crossbar
      0001EF 75 E3 C0         [24] 1074 	mov	_XBR2,#0xC0
                                   1075 ;	MagnetoZ-C8051F990-Simplicity_main.c:445: TurnOffZWave(); //For Lars comment this out
      0001F2 12 0D B3         [24] 1076 	lcall	_TurnOffZWave
                                   1077 ;	MagnetoZ-C8051F990-Simplicity_main.c:446: UART_RX = 0; //For Lars = 1
      0001F5 C2 85            [12] 1078 	clr	_UART_RX
                                   1079 ;	MagnetoZ-C8051F990-Simplicity_main.c:447: PRODUCTION_PIN = 1;
      0001F7 D2 81            [12] 1080 	setb	_PRODUCTION_PIN
                                   1081 ;	MagnetoZ-C8051F990-Simplicity_main.c:450: P0MDIN &= ~0X06; //MISO & MOSI to Analog
      0001F9 AE F1            [24] 1082 	mov	r6,_P0MDIN
      0001FB 74 F9            [12] 1083 	mov	a,#0xF9
      0001FD 5E               [12] 1084 	anl	a,r6
      0001FE F5 F1            [12] 1085 	mov	_P0MDIN,a
                                   1086 ;	MagnetoZ-C8051F990-Simplicity_main.c:465: PCA_Init();                         // Intialize the PCA for Watchdog
      000200 12 0C D7         [24] 1087 	lcall	_PCA_Init
      000203 D0 05            [24] 1088 	pop	ar5
      000205 D0 07            [24] 1089 	pop	ar7
                                   1090 ;	MagnetoZ-C8051F990-Simplicity_main.c:476: else */if (STATE_8051_ACTIVE == MagnetoZ_Info.CurrentState)
      000207 74 01            [12] 1091 	mov	a,#0x01
      000209 B5 5F 02         [24] 1092 	cjne	a,_MagnetoZ_Info,00773$
      00020C 80 03            [24] 1093 	sjmp	00774$
      00020E                       1094 00773$:
      00020E 02 02 98         [24] 1095 	ljmp	00373$
      000211                       1096 00774$:
                                   1097 ;	MagnetoZ-C8051F990-Simplicity_main.c:479: if ( (0x00 != MagnetoZ_Info.Day_VR_Fail)
      000211 AC 6F            [24] 1098 	mov	r4,((_MagnetoZ_Info + 0x0010) + 0)
      000213 AE 70            [24] 1099 	mov	r6,((_MagnetoZ_Info + 0x0010) + 1)
      000215 EC               [12] 1100 	mov	a,r4
      000216 4E               [12] 1101 	orl	a,r6
      000217 70 08            [24] 1102 	jnz	00101$
                                   1103 ;	MagnetoZ-C8051F990-Simplicity_main.c:480: || (0xFF != MagnetoZ_Info.Day_VR_Fail) )
      000219 BC FF 05         [24] 1104 	cjne	r4,#0xFF,00776$
      00021C BE 00 02         [24] 1105 	cjne	r6,#0x00,00776$
      00021F 80 02            [24] 1106 	sjmp	00102$
      000221                       1107 00776$:
      000221                       1108 00101$:
                                   1109 ;	MagnetoZ-C8051F990-Simplicity_main.c:481: BattIsDead = 1;
      000221 D2 09            [12] 1110 	setb	_BattIsDead
      000223                       1111 00102$:
                                   1112 ;	MagnetoZ-C8051F990-Simplicity_main.c:484: if (!BattIsDead)
      000223 20 09 10         [24] 1113 	jb	_BattIsDead,00105$
                                   1114 ;	MagnetoZ-C8051F990-Simplicity_main.c:486: ++MagnetoZ_Info.Num_Crashes;
      000226 E5 79            [12] 1115 	mov	a,(_MagnetoZ_Info + 0x001a)
      000228 04               [12] 1116 	inc	a
      000229 F5 79            [12] 1117 	mov	(_MagnetoZ_Info + 0x001a),a
                                   1118 ;	MagnetoZ-C8051F990-Simplicity_main.c:487: Flash_Write();
      00022B C0 07            [24] 1119 	push	ar7
      00022D C0 05            [24] 1120 	push	ar5
      00022F 12 18 8E         [24] 1121 	lcall	_Flash_Write
      000232 D0 05            [24] 1122 	pop	ar5
      000234 D0 07            [24] 1123 	pop	ar7
      000236                       1124 00105$:
                                   1125 ;	MagnetoZ-C8051F990-Simplicity_main.c:490: WakeupCount = MagnetoZ_Info.SleepStepTime;
      000236 85 63 53         [24] 1126 	mov	_WakeupCount,(_MagnetoZ_Info + 0x0004)
      000239 85 64 54         [24] 1127 	mov	(_WakeupCount + 1),((_MagnetoZ_Info + 0x0004) + 1)
                                   1128 ;	MagnetoZ-C8051F990-Simplicity_main.c:491: WakeupCount = WakeupCount << 1;
      00023C E4               [12] 1129 	clr	a
      00023D F5 55            [12] 1130 	mov	(_WakeupCount + 2),a
      00023F F5 56            [12] 1131 	mov	(_WakeupCount + 3),a
      000241 E5 53            [12] 1132 	mov	a,_WakeupCount
      000243 25 53            [12] 1133 	add	a,_WakeupCount
      000245 F5 53            [12] 1134 	mov	_WakeupCount,a
      000247 E5 54            [12] 1135 	mov	a,(_WakeupCount + 1)
      000249 33               [12] 1136 	rlc	a
      00024A F5 54            [12] 1137 	mov	(_WakeupCount + 1),a
      00024C E5 55            [12] 1138 	mov	a,(_WakeupCount + 2)
      00024E 33               [12] 1139 	rlc	a
      00024F F5 55            [12] 1140 	mov	(_WakeupCount + 2),a
      000251 E5 56            [12] 1141 	mov	a,(_WakeupCount + 3)
      000253 33               [12] 1142 	rlc	a
      000254 F5 56            [12] 1143 	mov	(_WakeupCount + 3),a
                                   1144 ;	MagnetoZ-C8051F990-Simplicity_main.c:493: if (0 < WakeupCount)
      000256 C3               [12] 1145 	clr	c
      000257 E4               [12] 1146 	clr	a
      000258 95 53            [12] 1147 	subb	a,_WakeupCount
      00025A E4               [12] 1148 	clr	a
      00025B 95 54            [12] 1149 	subb	a,(_WakeupCount + 1)
      00025D E4               [12] 1150 	clr	a
      00025E 95 55            [12] 1151 	subb	a,(_WakeupCount + 2)
      000260 E4               [12] 1152 	clr	a
      000261 95 56            [12] 1153 	subb	a,(_WakeupCount + 3)
      000263 50 02            [24] 1154 	jnc	00107$
                                   1155 ;	MagnetoZ-C8051F990-Simplicity_main.c:494: WakeUpTime_Set_flag = 1;
      000265 D2 03            [12] 1156 	setb	_WakeUpTime_Set_flag
      000267                       1157 00107$:
                                   1158 ;	MagnetoZ-C8051F990-Simplicity_main.c:497: CheckMRsensorStatus();
      000267 C0 07            [24] 1159 	push	ar7
      000269 C0 05            [24] 1160 	push	ar5
      00026B 12 0D 24         [24] 1161 	lcall	_CheckMRsensorStatus
      00026E D0 05            [24] 1162 	pop	ar5
      000270 D0 07            [24] 1163 	pop	ar7
                                   1164 ;	MagnetoZ-C8051F990-Simplicity_main.c:500: if (SW_NOT_PRESSED == Current_Door_Status)
      000272 A2 00            [12] 1165 	mov	c,_Current_Door_Status
      000274 E4               [12] 1166 	clr	a
      000275 33               [12] 1167 	rlc	a
      000276 FE               [12] 1168 	mov	r6,a
      000277 BE 01 10         [24] 1169 	cjne	r6,#0x01,00109$
                                   1170 ;	MagnetoZ-C8051F990-Simplicity_main.c:501: SetCommand(COMMAND_8051_DOOR_OPEN);
      00027A 75 82 08         [24] 1171 	mov	dpl,#0x08
      00027D C0 07            [24] 1172 	push	ar7
      00027F C0 05            [24] 1173 	push	ar5
      000281 12 0D 64         [24] 1174 	lcall	_SetCommand
      000284 D0 05            [24] 1175 	pop	ar5
      000286 D0 07            [24] 1176 	pop	ar7
      000288 80 0E            [24] 1177 	sjmp	00373$
      00028A                       1178 00109$:
                                   1179 ;	MagnetoZ-C8051F990-Simplicity_main.c:503: SetCommand(COMMAND_8051_DOOR_CLOSE);
      00028A 75 82 07         [24] 1180 	mov	dpl,#0x07
      00028D C0 07            [24] 1181 	push	ar7
      00028F C0 05            [24] 1182 	push	ar5
      000291 12 0D 64         [24] 1183 	lcall	_SetCommand
      000294 D0 05            [24] 1184 	pop	ar5
      000296 D0 07            [24] 1185 	pop	ar7
                                   1186 ;	MagnetoZ-C8051F990-Simplicity_main.c:622: while (1) // Spin forever
      000298                       1187 00373$:
                                   1188 ;	MagnetoZ-C8051F990-Simplicity_main.c:625: MagnetoZ_Info.CurrentState = STATE_8051_DEMO;		// Demo =1, Active = 2, Else means fault/un checked
                                   1189 ;	MagnetoZ-C8051F990-Simplicity_main.c:630: PCA0CPH2 = 0x00;
                                   1190 ;	MagnetoZ-C8051F990-Simplicity_main.c:635: if(RTC_Failure)
      000298 E4               [12] 1191 	clr	a
      000299 F5 5F            [12] 1192 	mov	_MagnetoZ_Info,a
      00029B F5 EC            [12] 1193 	mov	_PCA0CPH2,a
      00029D E5 0B            [12] 1194 	mov	a,_RTC_Failure
      00029F 60 1D            [24] 1195 	jz	00114$
                                   1196 ;	MagnetoZ-C8051F990-Simplicity_main.c:637: RTC_Failure = 0;              // Reset RTC Failure Flag to indicate
      0002A1 75 0B 00         [24] 1197 	mov	_RTC_Failure,#0x00
                                   1198 ;	MagnetoZ-C8051F990-Simplicity_main.c:641: RTC_Init();                         // Initialize SmaRTClock
      0002A4 C0 07            [24] 1199 	push	ar7
      0002A6 C0 05            [24] 1200 	push	ar5
      0002A8 12 19 C7         [24] 1201 	lcall	_RTC_Init
                                   1202 ;	MagnetoZ-C8051F990-Simplicity_main.c:642: RTC_WriteAlarm(WAKE_INTERVAL_TICKS);// Set the Alarm Value
      0002AB 90 80 00         [24] 1203 	mov	dptr,#0x8000
      0002AE E4               [12] 1204 	clr	a
      0002AF F5 F0            [12] 1205 	mov	b,a
      0002B1 12 1A 41         [24] 1206 	lcall	_RTC_WriteAlarm
                                   1207 ;	MagnetoZ-C8051F990-Simplicity_main.c:643: RTC0CN_SetBits(RTC0TR+RTC0AEN+ALRM);// Enable Counter, Alarm, and Auto-Reset
      0002B4 75 82 1C         [24] 1208 	mov	dpl,#0x1C
      0002B7 12 1A 75         [24] 1209 	lcall	_RTC0CN_SetBits
      0002BA D0 05            [24] 1210 	pop	ar5
      0002BC D0 07            [24] 1211 	pop	ar7
      0002BE                       1212 00114$:
                                   1213 ;	MagnetoZ-C8051F990-Simplicity_main.c:650: if (RTC_Alarm)
      0002BE E5 0A            [12] 1214 	mov	a,_RTC_Alarm
      0002C0 70 03            [24] 1215 	jnz	00782$
      0002C2 02 08 E1         [24] 1216 	ljmp	00306$
      0002C5                       1217 00782$:
                                   1218 ;	MagnetoZ-C8051F990-Simplicity_main.c:652: RTC_Alarm = 0;                // Reset RTC Alarm Flag to indicate
      0002C5 75 0A 00         [24] 1219 	mov	_RTC_Alarm,#0x00
                                   1220 ;	MagnetoZ-C8051F990-Simplicity_main.c:657: if (BattIsDead)
      0002C8 30 09 02         [24] 1221 	jnb	_BattIsDead,00116$
                                   1222 ;	MagnetoZ-C8051F990-Simplicity_main.c:658: VOLTAGE_REG_CONTROL = 1;
      0002CB D2 90            [12] 1223 	setb	_VOLTAGE_REG_CONTROL
      0002CD                       1224 00116$:
                                   1225 ;	MagnetoZ-C8051F990-Simplicity_main.c:661: if (!ZWaveOn)
      0002CD 20 04 0B         [24] 1226 	jb	_ZWaveOn,00118$
                                   1227 ;	MagnetoZ-C8051F990-Simplicity_main.c:662: CheckMRsensorStatus();
      0002D0 C0 07            [24] 1228 	push	ar7
      0002D2 C0 05            [24] 1229 	push	ar5
      0002D4 12 0D 24         [24] 1230 	lcall	_CheckMRsensorStatus
      0002D7 D0 05            [24] 1231 	pop	ar5
      0002D9 D0 07            [24] 1232 	pop	ar7
      0002DB                       1233 00118$:
                                   1234 ;	MagnetoZ-C8051F990-Simplicity_main.c:664: switch (MagnetoZ_Info.CurrentState)
      0002DB AE 5F            [24] 1235 	mov	r6,_MagnetoZ_Info
      0002DD 8E 04            [24] 1236 	mov	ar4,r6
      0002DF BC 00 03         [24] 1237 	cjne	r4,#0x00,00785$
      0002E2 02 07 6E         [24] 1238 	ljmp	00254$
      0002E5                       1239 00785$:
      0002E5 BE 01 02         [24] 1240 	cjne	r6,#0x01,00786$
      0002E8 80 03            [24] 1241 	sjmp	00787$
      0002EA                       1242 00786$:
      0002EA 02 08 E1         [24] 1243 	ljmp	00306$
      0002ED                       1244 00787$:
                                   1245 ;	MagnetoZ-C8051F990-Simplicity_main.c:668: if (!ZWaveOn)
      0002ED 30 04 03         [24] 1246 	jnb	_ZWaveOn,00788$
      0002F0 02 05 CE         [24] 1247 	ljmp	00252$
      0002F3                       1248 00788$:
                                   1249 ;	MagnetoZ-C8051F990-Simplicity_main.c:670: IsIncluded = 0; //PATCH: Reset Included flag.
      0002F3 C2 0B            [12] 1250 	clr	_IsIncluded
                                   1251 ;	MagnetoZ-C8051F990-Simplicity_main.c:676: if (Current_Door_Status != Prev_Door_Status)
      0002F5 A2 00            [12] 1252 	mov	c,_Current_Door_Status
      0002F7 20 13 01         [24] 1253 	jb	_main_Prev_Door_Status_1_81,00789$
      0002FA B3               [12] 1254 	cpl	c
      0002FB                       1255 00789$:
      0002FB 40 2C            [24] 1256 	jc	00158$
                                   1257 ;	MagnetoZ-C8051F990-Simplicity_main.c:679: Prev_Door_Status = Current_Door_Status;
      0002FD A2 00            [12] 1258 	mov	c,_Current_Door_Status
                                   1259 ;	MagnetoZ-C8051F990-Simplicity_main.c:682: if (SW_NOT_PRESSED == Prev_Door_Status)
      0002FF 92 13            [24] 1260 	mov  _main_Prev_Door_Status_1_81,c
      000301 E4               [12] 1261 	clr	a
      000302 33               [12] 1262 	rlc	a
      000303 FE               [12] 1263 	mov	r6,a
      000304 BE 01 11         [24] 1264 	cjne	r6,#0x01,00121$
                                   1265 ;	MagnetoZ-C8051F990-Simplicity_main.c:684: SetCommand(COMMAND_8051_DOOR_OPEN);
      000307 75 82 08         [24] 1266 	mov	dpl,#0x08
      00030A C0 07            [24] 1267 	push	ar7
      00030C C0 05            [24] 1268 	push	ar5
      00030E 12 0D 64         [24] 1269 	lcall	_SetCommand
      000311 D0 05            [24] 1270 	pop	ar5
      000313 D0 07            [24] 1271 	pop	ar7
      000315 02 04 47         [24] 1272 	ljmp	00159$
      000318                       1273 00121$:
                                   1274 ;	MagnetoZ-C8051F990-Simplicity_main.c:687: SetCommand(COMMAND_8051_DOOR_CLOSE);
      000318 75 82 07         [24] 1275 	mov	dpl,#0x07
      00031B C0 07            [24] 1276 	push	ar7
      00031D C0 05            [24] 1277 	push	ar5
      00031F 12 0D 64         [24] 1278 	lcall	_SetCommand
      000322 D0 05            [24] 1279 	pop	ar5
      000324 D0 07            [24] 1280 	pop	ar7
      000326 02 04 47         [24] 1281 	ljmp	00159$
      000329                       1282 00158$:
                                   1283 ;	MagnetoZ-C8051F990-Simplicity_main.c:693: else if (ResendCmd_flag)
      000329 20 06 03         [24] 1284 	jb	_ResendCmd_flag,00793$
      00032C 02 04 0A         [24] 1285 	ljmp	00155$
      00032F                       1286 00793$:
                                   1287 ;	MagnetoZ-C8051F990-Simplicity_main.c:696: if (0 != First_Hour_Counter)
      00032F 90 00 01         [24] 1288 	mov	dptr,#_First_Hour_Counter
      000332 E0               [24] 1289 	movx	a,@dptr
      000333 FE               [12] 1290 	mov	r6,a
      000334 E0               [24] 1291 	movx	a,@dptr
      000335 60 73            [24] 1292 	jz	00143$
                                   1293 ;	MagnetoZ-C8051F990-Simplicity_main.c:698: if (--Seconds_Counter)
      000337 90 00 03         [24] 1294 	mov	dptr,#_Seconds_Counter
      00033A E0               [24] 1295 	movx	a,@dptr
      00033B 24 FF            [12] 1296 	add	a,#0xFF
      00033D FB               [12] 1297 	mov	r3,a
      00033E A3               [24] 1298 	inc	dptr
      00033F E0               [24] 1299 	movx	a,@dptr
      000340 34 FF            [12] 1300 	addc	a,#0xFF
      000342 FC               [12] 1301 	mov	r4,a
      000343 90 00 03         [24] 1302 	mov	dptr,#_Seconds_Counter
      000346 EB               [12] 1303 	mov	a,r3
      000347 F0               [24] 1304 	movx	@dptr,a
      000348 EC               [12] 1305 	mov	a,r4
      000349 A3               [24] 1306 	inc	dptr
      00034A F0               [24] 1307 	movx	@dptr,a
      00034B 90 00 03         [24] 1308 	mov	dptr,#_Seconds_Counter
      00034E E0               [24] 1309 	movx	a,@dptr
      00034F F5 F0            [12] 1310 	mov	b,a
      000351 A3               [24] 1311 	inc	dptr
      000352 E0               [24] 1312 	movx	a,@dptr
      000353 45 F0            [12] 1313 	orl	a,b
      000355 60 28            [24] 1314 	jz	00130$
                                   1315 ;	MagnetoZ-C8051F990-Simplicity_main.c:700: --First_Hour_Seconds_Counter;
      000357 90 00 05         [24] 1316 	mov	dptr,#_First_Hour_Seconds_Counter
      00035A E0               [24] 1317 	movx	a,@dptr
      00035B 24 FF            [12] 1318 	add	a,#0xFF
      00035D FB               [12] 1319 	mov	r3,a
      00035E A3               [24] 1320 	inc	dptr
      00035F E0               [24] 1321 	movx	a,@dptr
      000360 34 FF            [12] 1322 	addc	a,#0xFF
      000362 FC               [12] 1323 	mov	r4,a
      000363 90 00 05         [24] 1324 	mov	dptr,#_First_Hour_Seconds_Counter
      000366 EB               [12] 1325 	mov	a,r3
      000367 F0               [24] 1326 	movx	@dptr,a
      000368 EC               [12] 1327 	mov	a,r4
      000369 A3               [24] 1328 	inc	dptr
      00036A F0               [24] 1329 	movx	@dptr,a
                                   1330 ;	MagnetoZ-C8051F990-Simplicity_main.c:702: if ( (COMMAND_8051_DOOR_OPEN == Command_Queue[0])
      00036B AC 4A            [24] 1331 	mov	r4,_Command_Queue
      00036D BC 08 02         [24] 1332 	cjne	r4,#0x08,00796$
      000370 80 08            [24] 1333 	sjmp	00123$
      000372                       1334 00796$:
                                   1335 ;	MagnetoZ-C8051F990-Simplicity_main.c:703: || (COMMAND_8051_DOOR_CLOSE == Command_Queue[0]) )
      000372 BC 07 02         [24] 1336 	cjne	r4,#0x07,00797$
      000375 80 03            [24] 1337 	sjmp	00798$
      000377                       1338 00797$:
      000377 02 04 47         [24] 1339 	ljmp	00159$
      00037A                       1340 00798$:
      00037A                       1341 00123$:
                                   1342 ;	MagnetoZ-C8051F990-Simplicity_main.c:704: SendCmd_flag = 0;
      00037A C2 07            [12] 1343 	clr	_SendCmd_flag
      00037C 02 04 47         [24] 1344 	ljmp	00159$
      00037F                       1345 00130$:
                                   1346 ;	MagnetoZ-C8051F990-Simplicity_main.c:708: --First_Hour_Counter;
      00037F EE               [12] 1347 	mov	a,r6
      000380 14               [12] 1348 	dec	a
      000381 90 00 01         [24] 1349 	mov	dptr,#_First_Hour_Counter
      000384 F0               [24] 1350 	movx	@dptr,a
                                   1351 ;	MagnetoZ-C8051F990-Simplicity_main.c:709: switch (Command_Queue[0])
      000385 AE 4A            [24] 1352 	mov	r6,_Command_Queue
      000387 BE 07 02         [24] 1353 	cjne	r6,#0x07,00799$
      00038A 80 0F            [24] 1354 	sjmp	00127$
      00038C                       1355 00799$:
      00038C BE 08 16         [24] 1356 	cjne	r6,#0x08,00128$
                                   1357 ;	MagnetoZ-C8051F990-Simplicity_main.c:712: Seconds_Counter = FIRST_HOUR_OPEN_CMD_RESEND_SECONDS_COUNTER;
      00038F 90 00 03         [24] 1358 	mov	dptr,#_Seconds_Counter
      000392 74 2C            [12] 1359 	mov	a,#0x2C
      000394 F0               [24] 1360 	movx	@dptr,a
      000395 74 01            [12] 1361 	mov	a,#0x01
      000397 A3               [24] 1362 	inc	dptr
      000398 F0               [24] 1363 	movx	@dptr,a
                                   1364 ;	MagnetoZ-C8051F990-Simplicity_main.c:713: break;
                                   1365 ;	MagnetoZ-C8051F990-Simplicity_main.c:715: case COMMAND_8051_DOOR_CLOSE:
      000399 80 0A            [24] 1366 	sjmp	00128$
      00039B                       1367 00127$:
                                   1368 ;	MagnetoZ-C8051F990-Simplicity_main.c:716: Seconds_Counter = FIRST_HOUR_CLOSE_CMD_RESEND_SECONDS_COUNTER;
      00039B 90 00 03         [24] 1369 	mov	dptr,#_Seconds_Counter
      00039E 74 84            [12] 1370 	mov	a,#0x84
      0003A0 F0               [24] 1371 	movx	@dptr,a
      0003A1 74 03            [12] 1372 	mov	a,#0x03
      0003A3 A3               [24] 1373 	inc	dptr
      0003A4 F0               [24] 1374 	movx	@dptr,a
                                   1375 ;	MagnetoZ-C8051F990-Simplicity_main.c:718: }
      0003A5                       1376 00128$:
                                   1377 ;	MagnetoZ-C8051F990-Simplicity_main.c:719: SendCmd_flag 	= 1;
      0003A5 D2 07            [12] 1378 	setb	_SendCmd_flag
      0003A7 02 04 47         [24] 1379 	ljmp	00159$
      0003AA                       1380 00143$:
                                   1381 ;	MagnetoZ-C8051F990-Simplicity_main.c:724: First_Hour_Seconds_Counter = 0;
      0003AA 90 00 05         [24] 1382 	mov	dptr,#_First_Hour_Seconds_Counter
      0003AD E4               [12] 1383 	clr	a
      0003AE F0               [24] 1384 	movx	@dptr,a
      0003AF A3               [24] 1385 	inc	dptr
      0003B0 F0               [24] 1386 	movx	@dptr,a
                                   1387 ;	MagnetoZ-C8051F990-Simplicity_main.c:726: if (HOURLY_SECONDS_COUNTER_VAL > Seconds_Counter)
      0003B1 90 00 03         [24] 1388 	mov	dptr,#_Seconds_Counter
      0003B4 E0               [24] 1389 	movx	a,@dptr
      0003B5 FC               [12] 1390 	mov	r4,a
      0003B6 A3               [24] 1391 	inc	dptr
      0003B7 E0               [24] 1392 	movx	a,@dptr
      0003B8 FE               [12] 1393 	mov	r6,a
      0003B9 C3               [12] 1394 	clr	c
      0003BA EC               [12] 1395 	mov	a,r4
      0003BB 94 10            [12] 1396 	subb	a,#0x10
      0003BD EE               [12] 1397 	mov	a,r6
      0003BE 94 0E            [12] 1398 	subb	a,#0x0E
      0003C0 50 19            [24] 1399 	jnc	00138$
                                   1400 ;	MagnetoZ-C8051F990-Simplicity_main.c:728: ++Seconds_Counter;
      0003C2 90 00 03         [24] 1401 	mov	dptr,#_Seconds_Counter
      0003C5 74 01            [12] 1402 	mov	a,#0x01
      0003C7 2C               [12] 1403 	add	a,r4
      0003C8 F0               [24] 1404 	movx	@dptr,a
      0003C9 E4               [12] 1405 	clr	a
      0003CA 3E               [12] 1406 	addc	a,r6
      0003CB A3               [24] 1407 	inc	dptr
      0003CC F0               [24] 1408 	movx	@dptr,a
                                   1409 ;	MagnetoZ-C8051F990-Simplicity_main.c:729: if ( (COMMAND_8051_DOOR_OPEN == Command_Queue[0])
      0003CD AB 4A            [24] 1410 	mov	r3,_Command_Queue
      0003CF BB 08 02         [24] 1411 	cjne	r3,#0x08,00803$
      0003D2 80 03            [24] 1412 	sjmp	00132$
      0003D4                       1413 00803$:
                                   1414 ;	MagnetoZ-C8051F990-Simplicity_main.c:730: || (COMMAND_8051_DOOR_CLOSE == Command_Queue[0]) )
      0003D4 BB 07 19         [24] 1415 	cjne	r3,#0x07,00139$
      0003D7                       1416 00132$:
                                   1417 ;	MagnetoZ-C8051F990-Simplicity_main.c:731: SendCmd_flag = 0;
      0003D7 C2 07            [12] 1418 	clr	_SendCmd_flag
      0003D9 80 15            [24] 1419 	sjmp	00139$
      0003DB                       1420 00138$:
                                   1421 ;	MagnetoZ-C8051F990-Simplicity_main.c:733: else if (HOURLY_SECONDS_COUNTER_VAL == Seconds_Counter) // 1hr reached
      0003DB BC 10 12         [24] 1422 	cjne	r4,#0x10,00139$
      0003DE BE 0E 0F         [24] 1423 	cjne	r6,#0x0E,00139$
                                   1424 ;	MagnetoZ-C8051F990-Simplicity_main.c:735: Seconds_Counter = 0;
      0003E1 90 00 03         [24] 1425 	mov	dptr,#_Seconds_Counter
      0003E4 E4               [12] 1426 	clr	a
      0003E5 F0               [24] 1427 	movx	@dptr,a
      0003E6 A3               [24] 1428 	inc	dptr
      0003E7 F0               [24] 1429 	movx	@dptr,a
                                   1430 ;	MagnetoZ-C8051F990-Simplicity_main.c:736: SendCmd_flag 	= 1;
      0003E8 D2 07            [12] 1431 	setb	_SendCmd_flag
                                   1432 ;	MagnetoZ-C8051F990-Simplicity_main.c:737: --Hour_Counter;
      0003EA 90 00 02         [24] 1433 	mov	dptr,#_Hour_Counter
      0003ED E0               [24] 1434 	movx	a,@dptr
      0003EE 14               [12] 1435 	dec	a
      0003EF F0               [24] 1436 	movx	@dptr,a
      0003F0                       1437 00139$:
                                   1438 ;	MagnetoZ-C8051F990-Simplicity_main.c:740: if ( 0 == Hour_Counter ) // +24hrs reached?
      0003F0 90 00 02         [24] 1439 	mov	dptr,#_Hour_Counter
      0003F3 E0               [24] 1440 	movx	a,@dptr
      0003F4 70 51            [24] 1441 	jnz	00159$
                                   1442 ;	MagnetoZ-C8051F990-Simplicity_main.c:742: SendCmd_flag = 0;
      0003F6 C2 07            [12] 1443 	clr	_SendCmd_flag
                                   1444 ;	MagnetoZ-C8051F990-Simplicity_main.c:745: SuspendFlag = 1;
      0003F8 D2 10            [12] 1445 	setb	_SuspendFlag
                                   1446 ;	MagnetoZ-C8051F990-Simplicity_main.c:747: ResendCmd_flag = 0;
      0003FA C2 06            [12] 1447 	clr	_ResendCmd_flag
                                   1448 ;	MagnetoZ-C8051F990-Simplicity_main.c:749: WakeUpTime_Set_flag = 0; // Turn OFF Wake up notification, new CR #13 on BitBucket issue list
      0003FC C2 03            [12] 1449 	clr	_WakeUpTime_Set_flag
                                   1450 ;	MagnetoZ-C8051F990-Simplicity_main.c:751: Seconds_Counter = SUSPEND_MODE_WAKE_UP_INTERVAL; //18hrs // new CR #13 on BitBucket issue list
      0003FE 90 00 03         [24] 1451 	mov	dptr,#_Seconds_Counter
      000401 74 20            [12] 1452 	mov	a,#0x20
      000403 F0               [24] 1453 	movx	@dptr,a
      000404 74 FD            [12] 1454 	mov	a,#0xFD
      000406 A3               [24] 1455 	inc	dptr
      000407 F0               [24] 1456 	movx	@dptr,a
      000408 80 3D            [24] 1457 	sjmp	00159$
      00040A                       1458 00155$:
                                   1459 ;	MagnetoZ-C8051F990-Simplicity_main.c:755: else if (SuspendFlag) // new CR #13 on BitBucket issue list
      00040A 30 10 3A         [24] 1460 	jnb	_SuspendFlag,00159$
                                   1461 ;	MagnetoZ-C8051F990-Simplicity_main.c:757: switch (Command_Queue[0])
      00040D AE 4A            [24] 1462 	mov	r6,_Command_Queue
      00040F BE 07 02         [24] 1463 	cjne	r6,#0x07,00810$
      000412 80 03            [24] 1464 	sjmp	00146$
      000414                       1465 00810$:
      000414 BE 08 30         [24] 1466 	cjne	r6,#0x08,00159$
                                   1467 ;	MagnetoZ-C8051F990-Simplicity_main.c:760: case COMMAND_8051_DOOR_CLOSE:
      000417                       1468 00146$:
                                   1469 ;	MagnetoZ-C8051F990-Simplicity_main.c:762: if (--Seconds_Counter)
      000417 90 00 03         [24] 1470 	mov	dptr,#_Seconds_Counter
      00041A E0               [24] 1471 	movx	a,@dptr
      00041B 24 FF            [12] 1472 	add	a,#0xFF
      00041D FC               [12] 1473 	mov	r4,a
      00041E A3               [24] 1474 	inc	dptr
      00041F E0               [24] 1475 	movx	a,@dptr
      000420 34 FF            [12] 1476 	addc	a,#0xFF
      000422 FE               [12] 1477 	mov	r6,a
      000423 90 00 03         [24] 1478 	mov	dptr,#_Seconds_Counter
      000426 EC               [12] 1479 	mov	a,r4
      000427 F0               [24] 1480 	movx	@dptr,a
      000428 EE               [12] 1481 	mov	a,r6
      000429 A3               [24] 1482 	inc	dptr
      00042A F0               [24] 1483 	movx	@dptr,a
      00042B 90 00 03         [24] 1484 	mov	dptr,#_Seconds_Counter
      00042E E0               [24] 1485 	movx	a,@dptr
      00042F F5 F0            [12] 1486 	mov	b,a
      000431 A3               [24] 1487 	inc	dptr
      000432 E0               [24] 1488 	movx	a,@dptr
      000433 45 F0            [12] 1489 	orl	a,b
      000435 60 04            [24] 1490 	jz	00148$
                                   1491 ;	MagnetoZ-C8051F990-Simplicity_main.c:763: SendCmd_flag = 0;
      000437 C2 07            [12] 1492 	clr	_SendCmd_flag
      000439 80 0C            [24] 1493 	sjmp	00159$
      00043B                       1494 00148$:
                                   1495 ;	MagnetoZ-C8051F990-Simplicity_main.c:766: Seconds_Counter = SUSPEND_MODE_WAKE_UP_INTERVAL;
      00043B 90 00 03         [24] 1496 	mov	dptr,#_Seconds_Counter
      00043E 74 20            [12] 1497 	mov	a,#0x20
      000440 F0               [24] 1498 	movx	@dptr,a
      000441 74 FD            [12] 1499 	mov	a,#0xFD
      000443 A3               [24] 1500 	inc	dptr
      000444 F0               [24] 1501 	movx	@dptr,a
                                   1502 ;	MagnetoZ-C8051F990-Simplicity_main.c:767: SendCmd_flag 	= 1;
      000445 D2 07            [12] 1503 	setb	_SendCmd_flag
                                   1504 ;	MagnetoZ-C8051F990-Simplicity_main.c:774: }
      000447                       1505 00159$:
                                   1506 ;	MagnetoZ-C8051F990-Simplicity_main.c:780: if (WakeUpTime_Set_flag)
      000447 30 03 60         [24] 1507 	jnb	_WakeUpTime_Set_flag,00166$
                                   1508 ;	MagnetoZ-C8051F990-Simplicity_main.c:782: if (0 == WakeupCount)
      00044A E5 53            [12] 1509 	mov	a,_WakeupCount
      00044C 45 54            [12] 1510 	orl	a,(_WakeupCount + 1)
      00044E 45 55            [12] 1511 	orl	a,(_WakeupCount + 2)
      000450 45 56            [12] 1512 	orl	a,(_WakeupCount + 3)
      000452 70 43            [24] 1513 	jnz	00163$
                                   1514 ;	MagnetoZ-C8051F990-Simplicity_main.c:785: WakeupCount = MagnetoZ_Info.SleepStepTime;
      000454 85 63 53         [24] 1515 	mov	_WakeupCount,(_MagnetoZ_Info + 0x0004)
      000457 85 64 54         [24] 1516 	mov	(_WakeupCount + 1),((_MagnetoZ_Info + 0x0004) + 1)
                                   1517 ;	MagnetoZ-C8051F990-Simplicity_main.c:786: WakeupCount = WakeupCount << 1;
      00045A E4               [12] 1518 	clr	a
      00045B F5 55            [12] 1519 	mov	(_WakeupCount + 2),a
      00045D F5 56            [12] 1520 	mov	(_WakeupCount + 3),a
      00045F E5 53            [12] 1521 	mov	a,_WakeupCount
      000461 25 53            [12] 1522 	add	a,_WakeupCount
      000463 F5 53            [12] 1523 	mov	_WakeupCount,a
      000465 E5 54            [12] 1524 	mov	a,(_WakeupCount + 1)
      000467 33               [12] 1525 	rlc	a
      000468 F5 54            [12] 1526 	mov	(_WakeupCount + 1),a
      00046A E5 55            [12] 1527 	mov	a,(_WakeupCount + 2)
      00046C 33               [12] 1528 	rlc	a
      00046D F5 55            [12] 1529 	mov	(_WakeupCount + 2),a
      00046F E5 56            [12] 1530 	mov	a,(_WakeupCount + 3)
      000471 33               [12] 1531 	rlc	a
      000472 F5 56            [12] 1532 	mov	(_WakeupCount + 3),a
                                   1533 ;	MagnetoZ-C8051F990-Simplicity_main.c:789: SetCommand(COMMAND_8051_WAKE_UP_ZWAVE);
      000474 75 82 10         [24] 1534 	mov	dpl,#0x10
      000477 C0 07            [24] 1535 	push	ar7
      000479 C0 05            [24] 1536 	push	ar5
      00047B 12 0D 64         [24] 1537 	lcall	_SetCommand
      00047E D0 05            [24] 1538 	pop	ar5
      000480 D0 07            [24] 1539 	pop	ar7
                                   1540 ;	MagnetoZ-C8051F990-Simplicity_main.c:792: if (COMMAND_8051_BATTERY_DEAD == MagnetoZ_Info.prevBatteryLevel)
      000482 74 01            [12] 1541 	mov	a,#0x01
      000484 B5 6B 23         [24] 1542 	cjne	a,(_MagnetoZ_Info + 0x000c),00166$
                                   1543 ;	MagnetoZ-C8051F990-Simplicity_main.c:793: SetCommand(COMMAND_8051_BATTERY_DEAD);
      000487 75 82 01         [24] 1544 	mov	dpl,#0x01
      00048A C0 07            [24] 1545 	push	ar7
      00048C C0 05            [24] 1546 	push	ar5
      00048E 12 0D 64         [24] 1547 	lcall	_SetCommand
      000491 D0 05            [24] 1548 	pop	ar5
      000493 D0 07            [24] 1549 	pop	ar7
      000495 80 13            [24] 1550 	sjmp	00166$
      000497                       1551 00163$:
                                   1552 ;	MagnetoZ-C8051F990-Simplicity_main.c:796: --WakeupCount; //Decrement wake up time counter
      000497 15 53            [12] 1553 	dec	_WakeupCount
      000499 74 FF            [12] 1554 	mov	a,#0xFF
      00049B B5 53 0C         [24] 1555 	cjne	a,_WakeupCount,00818$
      00049E 15 54            [12] 1556 	dec	(_WakeupCount + 1)
      0004A0 B5 54 07         [24] 1557 	cjne	a,(_WakeupCount + 1),00818$
      0004A3 15 55            [12] 1558 	dec	(_WakeupCount + 2)
      0004A5 B5 55 02         [24] 1559 	cjne	a,(_WakeupCount + 2),00818$
      0004A8 15 56            [12] 1560 	dec	(_WakeupCount + 3)
      0004AA                       1561 00818$:
      0004AA                       1562 00166$:
                                   1563 ;	MagnetoZ-C8051F990-Simplicity_main.c:803: if (Current_Include_MR_SW_Status!=Prev_Include_MR_SW_Status)
      0004AA A2 01            [12] 1564 	mov	c,_Current_Include_MR_SW_Status
      0004AC 20 14 01         [24] 1565 	jb	_main_Prev_Include_MR_SW_Status_1_81,00819$
      0004AF B3               [12] 1566 	cpl	c
      0004B0                       1567 00819$:
      0004B0 40 64            [24] 1568 	jc	00184$
                                   1569 ;	MagnetoZ-C8051F990-Simplicity_main.c:805: Prev_Include_MR_SW_Status = Current_Include_MR_SW_Status;
      0004B2 A2 01            [12] 1570 	mov	c,_Current_Include_MR_SW_Status
      0004B4 92 14            [24] 1571 	mov	_main_Prev_Include_MR_SW_Status_1_81,c
                                   1572 ;	MagnetoZ-C8051F990-Simplicity_main.c:807: if (!Pattern_Detection_flag)
      0004B6 20 02 3E         [24] 1573 	jb	_Pattern_Detection_flag,00181$
                                   1574 ;	MagnetoZ-C8051F990-Simplicity_main.c:809: if (SW_PRESSED == Current_Include_MR_SW_Status)
      0004B9 20 01 5A         [24] 1575 	jb	_Current_Include_MR_SW_Status,00184$
                                   1576 ;	MagnetoZ-C8051F990-Simplicity_main.c:811: if (SW_NOT_PRESSED == Current_Door_Status)
      0004BC A2 00            [12] 1577 	mov	c,_Current_Door_Status
      0004BE E4               [12] 1578 	clr	a
      0004BF 33               [12] 1579 	rlc	a
      0004C0 FE               [12] 1580 	mov	r6,a
      0004C1 BE 01 13         [24] 1581 	cjne	r6,#0x01,00172$
                                   1582 ;	MagnetoZ-C8051F990-Simplicity_main.c:813: Pattern_Detection_flag = 1;
      0004C4 D2 02            [12] 1583 	setb	_Pattern_Detection_flag
                                   1584 ;	MagnetoZ-C8051F990-Simplicity_main.c:815: BlinkLED(DOOR_OPEN_BLINK);
      0004C6 75 82 01         [24] 1585 	mov	dpl,#0x01
      0004C9 C0 07            [24] 1586 	push	ar7
      0004CB C0 05            [24] 1587 	push	ar5
      0004CD 12 17 68         [24] 1588 	lcall	_BlinkLED
      0004D0 D0 05            [24] 1589 	pop	ar5
      0004D2 D0 07            [24] 1590 	pop	ar7
                                   1591 ;	MagnetoZ-C8051F990-Simplicity_main.c:818: ++Include_count;
      0004D4 0D               [12] 1592 	inc	r5
      0004D5 80 3F            [24] 1593 	sjmp	00184$
      0004D7                       1594 00172$:
                                   1595 ;	MagnetoZ-C8051F990-Simplicity_main.c:820: else if ( (SW_PRESSED == Current_Door_Status)
      0004D7 20 00 3C         [24] 1596 	jb	_Current_Door_Status,00184$
                                   1597 ;	MagnetoZ-C8051F990-Simplicity_main.c:821: && (!TamperCmdSent)
      0004DA 20 0A 39         [24] 1598 	jb	_TamperCmdSent,00184$
                                   1599 ;	MagnetoZ-C8051F990-Simplicity_main.c:822: && (!TamperCmdFailed) )
      0004DD 20 0E 36         [24] 1600 	jb	_TamperCmdFailed,00184$
                                   1601 ;	MagnetoZ-C8051F990-Simplicity_main.c:825: MR_Control_On_count = 0;
      0004E0 75 7A 00         [24] 1602 	mov	_main_MR_Control_On_count_1_81,#0x00
                                   1603 ;	MagnetoZ-C8051F990-Simplicity_main.c:826: Include_count = 0;
      0004E3 7D 00            [12] 1604 	mov	r5,#0x00
                                   1605 ;	MagnetoZ-C8051F990-Simplicity_main.c:828: Pattern_Detection_flag = 0;
      0004E5 C2 02            [12] 1606 	clr	_Pattern_Detection_flag
                                   1607 ;	MagnetoZ-C8051F990-Simplicity_main.c:830: SetCommand(COMMAND_8051_TAMPERING);
      0004E7 75 82 0F         [24] 1608 	mov	dpl,#0x0F
      0004EA C0 07            [24] 1609 	push	ar7
      0004EC C0 05            [24] 1610 	push	ar5
      0004EE 12 0D 64         [24] 1611 	lcall	_SetCommand
      0004F1 D0 05            [24] 1612 	pop	ar5
      0004F3 D0 07            [24] 1613 	pop	ar7
      0004F5 80 1F            [24] 1614 	sjmp	00184$
      0004F7                       1615 00181$:
                                   1616 ;	MagnetoZ-C8051F990-Simplicity_main.c:834: else if ( (SW_PRESSED == Current_Include_MR_SW_Status)
      0004F7 20 01 1C         [24] 1617 	jb	_Current_Include_MR_SW_Status,00184$
                                   1618 ;	MagnetoZ-C8051F990-Simplicity_main.c:835: && (SW_NOT_PRESSED == Current_Door_Status)
      0004FA A2 00            [12] 1619 	mov	c,_Current_Door_Status
      0004FC E4               [12] 1620 	clr	a
      0004FD 33               [12] 1621 	rlc	a
      0004FE FE               [12] 1622 	mov	r6,a
      0004FF BE 01 14         [24] 1623 	cjne	r6,#0x01,00184$
                                   1624 ;	MagnetoZ-C8051F990-Simplicity_main.c:836: && (3 > Include_count) )
      000502 BD 03 00         [24] 1625 	cjne	r5,#0x03,00831$
      000505                       1626 00831$:
      000505 50 0F            [24] 1627 	jnc	00184$
                                   1628 ;	MagnetoZ-C8051F990-Simplicity_main.c:838: BlinkLED(DOOR_OPEN_BLINK);
      000507 75 82 01         [24] 1629 	mov	dpl,#0x01
      00050A C0 07            [24] 1630 	push	ar7
      00050C C0 05            [24] 1631 	push	ar5
      00050E 12 17 68         [24] 1632 	lcall	_BlinkLED
      000511 D0 05            [24] 1633 	pop	ar5
      000513 D0 07            [24] 1634 	pop	ar7
                                   1635 ;	MagnetoZ-C8051F990-Simplicity_main.c:841: ++Include_count;
      000515 0D               [12] 1636 	inc	r5
      000516                       1637 00184$:
                                   1638 ;	MagnetoZ-C8051F990-Simplicity_main.c:846: if (Pattern_Detection_flag)
      000516 30 02 02         [24] 1639 	jnb	_Pattern_Detection_flag,00186$
                                   1640 ;	MagnetoZ-C8051F990-Simplicity_main.c:847: ++MR_Control_On_count;
      000519 05 7A            [12] 1641 	inc	_main_MR_Control_On_count_1_81
      00051B                       1642 00186$:
                                   1643 ;	MagnetoZ-C8051F990-Simplicity_main.c:850: if (3 <= Include_count)
      00051B BD 03 00         [24] 1644 	cjne	r5,#0x03,00834$
      00051E                       1645 00834$:
      00051E 40 47            [24] 1646 	jc	00197$
                                   1647 ;	MagnetoZ-C8051F990-Simplicity_main.c:852: if (SW_PRESSED == Current_Include_MR_SW_Status)
      000520 20 01 02         [24] 1648 	jb	_Current_Include_MR_SW_Status,00188$
                                   1649 ;	MagnetoZ-C8051F990-Simplicity_main.c:853: ExcludeFailed = 1;
      000523 D2 0D            [12] 1650 	setb	_ExcludeFailed
      000525                       1651 00188$:
                                   1652 ;	MagnetoZ-C8051F990-Simplicity_main.c:855: if (SW_NOT_PRESSED == Current_Include_MR_SW_Status)
      000525 A2 01            [12] 1653 	mov	c,_Current_Include_MR_SW_Status
      000527 E4               [12] 1654 	clr	a
      000528 33               [12] 1655 	rlc	a
      000529 FE               [12] 1656 	mov	r6,a
      00052A BE 01 3A         [24] 1657 	cjne	r6,#0x01,00197$
                                   1658 ;	MagnetoZ-C8051F990-Simplicity_main.c:858: MR_Control_On_count = 0;
      00052D 75 7A 00         [24] 1659 	mov	_main_MR_Control_On_count_1_81,#0x00
                                   1660 ;	MagnetoZ-C8051F990-Simplicity_main.c:859: Include_count = 0;
      000530 7D 00            [12] 1661 	mov	r5,#0x00
                                   1662 ;	MagnetoZ-C8051F990-Simplicity_main.c:861: if (SW_NOT_PRESSED == Current_Door_Status)
      000532 A2 00            [12] 1663 	mov	c,_Current_Door_Status
      000534 E4               [12] 1664 	clr	a
      000535 33               [12] 1665 	rlc	a
      000536 FE               [12] 1666 	mov	r6,a
      000537 BE 01 1C         [24] 1667 	cjne	r6,#0x01,00192$
                                   1668 ;	MagnetoZ-C8051F990-Simplicity_main.c:863: PatternDetected(COMMAND_8051_TAMPERING);
      00053A 75 82 0F         [24] 1669 	mov	dpl,#0x0F
      00053D C0 07            [24] 1670 	push	ar7
      00053F C0 05            [24] 1671 	push	ar5
      000541 12 0D 57         [24] 1672 	lcall	_PatternDetected
                                   1673 ;	MagnetoZ-C8051F990-Simplicity_main.c:865: SetCommand(COMMAND_8051_LEARN_MODE_EXCLUDE);
      000544 75 82 0D         [24] 1674 	mov	dpl,#0x0D
      000547 12 0D 64         [24] 1675 	lcall	_SetCommand
      00054A D0 05            [24] 1676 	pop	ar5
      00054C D0 07            [24] 1677 	pop	ar7
                                   1678 ;	MagnetoZ-C8051F990-Simplicity_main.c:867: MagnetoZ_Info.Num_NIFs_InActive++;
      00054E E5 77            [12] 1679 	mov	a,(_MagnetoZ_Info + 0x0018)
      000550 FE               [12] 1680 	mov	r6,a
      000551 04               [12] 1681 	inc	a
      000552 F5 77            [12] 1682 	mov	(_MagnetoZ_Info + 0x0018),a
      000554 80 11            [24] 1683 	sjmp	00197$
      000556                       1684 00192$:
                                   1685 ;	MagnetoZ-C8051F990-Simplicity_main.c:869: else if (SW_PRESSED == Current_Door_Status)
      000556 20 00 0E         [24] 1686 	jb	_Current_Door_Status,00197$
                                   1687 ;	MagnetoZ-C8051F990-Simplicity_main.c:870: PatternDetected(COMMAND_8051_TAMPERING);
      000559 75 82 0F         [24] 1688 	mov	dpl,#0x0F
      00055C C0 07            [24] 1689 	push	ar7
      00055E C0 05            [24] 1690 	push	ar5
      000560 12 0D 57         [24] 1691 	lcall	_PatternDetected
      000563 D0 05            [24] 1692 	pop	ar5
      000565 D0 07            [24] 1693 	pop	ar7
      000567                       1694 00197$:
                                   1695 ;	MagnetoZ-C8051F990-Simplicity_main.c:875: if (SW_NOT_PRESSED == Current_Include_MR_SW_Status)
      000567 A2 01            [12] 1696 	mov	c,_Current_Include_MR_SW_Status
      000569 E4               [12] 1697 	clr	a
      00056A 33               [12] 1698 	rlc	a
      00056B FE               [12] 1699 	mov	r6,a
      00056C BE 01 14         [24] 1700 	cjne	r6,#0x01,00214$
                                   1701 ;	MagnetoZ-C8051F990-Simplicity_main.c:877: Reset_AI_Counter = 0;
      00056F 7F 00            [12] 1702 	mov	r7,#0x00
                                   1703 ;	MagnetoZ-C8051F990-Simplicity_main.c:879: TamperCmdSent = 0;
      000571 C2 0A            [12] 1704 	clr	_TamperCmdSent
                                   1705 ;	MagnetoZ-C8051F990-Simplicity_main.c:881: if (ExcludeFailed)
      000573 30 0D 06         [24] 1706 	jnb	_ExcludeFailed,00201$
                                   1707 ;	MagnetoZ-C8051F990-Simplicity_main.c:883: TamperCmdFailed = 0;
      000576 C2 0E            [12] 1708 	clr	_TamperCmdFailed
                                   1709 ;	MagnetoZ-C8051F990-Simplicity_main.c:885: ExcludeFailed = 0;
      000578 C2 0D            [12] 1710 	clr	_ExcludeFailed
      00057A 80 47            [24] 1711 	sjmp	00215$
      00057C                       1712 00201$:
                                   1713 ;	MagnetoZ-C8051F990-Simplicity_main.c:887: else if (SW_PRESSED == Current_Door_Status)
      00057C 20 00 44         [24] 1714 	jb	_Current_Door_Status,00215$
                                   1715 ;	MagnetoZ-C8051F990-Simplicity_main.c:888: TamperCmdFailed = 0;
      00057F C2 0E            [12] 1716 	clr	_TamperCmdFailed
      000581 80 40            [24] 1717 	sjmp	00215$
      000583                       1718 00214$:
                                   1719 ;	MagnetoZ-C8051F990-Simplicity_main.c:891: else if ( (SW_PRESSED == Current_Include_MR_SW_Status)
      000583 20 01 2F         [24] 1720 	jb	_Current_Include_MR_SW_Status,00209$
                                   1721 ;	MagnetoZ-C8051F990-Simplicity_main.c:892: && (SW_NOT_PRESSED == Current_Door_Status)
      000586 A2 00            [12] 1722 	mov	c,_Current_Door_Status
      000588 E4               [12] 1723 	clr	a
      000589 33               [12] 1724 	rlc	a
      00058A FE               [12] 1725 	mov	r6,a
      00058B BE 01 27         [24] 1726 	cjne	r6,#0x01,00209$
                                   1727 ;	MagnetoZ-C8051F990-Simplicity_main.c:893: && (ExcludeFailed))
      00058E 30 0D 24         [24] 1728 	jnb	_ExcludeFailed,00209$
                                   1729 ;	MagnetoZ-C8051F990-Simplicity_main.c:895: ++Reset_AI_Counter;
      000591 0F               [12] 1730 	inc	r7
                                   1731 ;	MagnetoZ-C8051F990-Simplicity_main.c:897: if (11 == Reset_AI_Counter)
      000592 BF 0B 2E         [24] 1732 	cjne	r7,#0x0B,00215$
                                   1733 ;	MagnetoZ-C8051F990-Simplicity_main.c:900: Include_count = 0;
      000595 7D 00            [12] 1734 	mov	r5,#0x00
                                   1735 ;	MagnetoZ-C8051F990-Simplicity_main.c:901: MR_Control_On_count = 0;
                                   1736 ;	1-genFromRTrack replaced	mov	_main_MR_Control_On_count_1_81,#0x00
      000597 8D 7A            [24] 1737 	mov	_main_MR_Control_On_count_1_81,r5
                                   1738 ;	MagnetoZ-C8051F990-Simplicity_main.c:904: BlinkLED(DOOR_OPEN_BLINK);
      000599 75 82 01         [24] 1739 	mov	dpl,#0x01
      00059C C0 07            [24] 1740 	push	ar7
      00059E C0 05            [24] 1741 	push	ar5
      0005A0 12 17 68         [24] 1742 	lcall	_BlinkLED
                                   1743 ;	MagnetoZ-C8051F990-Simplicity_main.c:906: PatternDetected(COMMAND_8051_TAMPERING);
      0005A3 75 82 0F         [24] 1744 	mov	dpl,#0x0F
      0005A6 12 0D 57         [24] 1745 	lcall	_PatternDetected
                                   1746 ;	MagnetoZ-C8051F990-Simplicity_main.c:908: SetCommand(COMMAND_8051_DEVICE_RESET);
      0005A9 75 82 06         [24] 1747 	mov	dpl,#0x06
      0005AC 12 0D 64         [24] 1748 	lcall	_SetCommand
      0005AF D0 05            [24] 1749 	pop	ar5
      0005B1 D0 07            [24] 1750 	pop	ar7
      0005B3 80 0E            [24] 1751 	sjmp	00215$
      0005B5                       1752 00209$:
                                   1753 ;	MagnetoZ-C8051F990-Simplicity_main.c:911: else if ( (SW_PRESSED == Current_Include_MR_SW_Status)
      0005B5 20 01 0B         [24] 1754 	jb	_Current_Include_MR_SW_Status,00215$
                                   1755 ;	MagnetoZ-C8051F990-Simplicity_main.c:912: && (SW_PRESSED == Current_Door_Status) )
      0005B8 20 00 08         [24] 1756 	jb	_Current_Door_Status,00215$
                                   1757 ;	MagnetoZ-C8051F990-Simplicity_main.c:914: Reset_AI_Counter = 0;
      0005BB 7F 00            [12] 1758 	mov	r7,#0x00
                                   1759 ;	MagnetoZ-C8051F990-Simplicity_main.c:916: TamperCmdSent = 0;
      0005BD C2 0A            [12] 1760 	clr	_TamperCmdSent
                                   1761 ;	MagnetoZ-C8051F990-Simplicity_main.c:918: TamperCmdFailed = 0;
      0005BF C2 0E            [12] 1762 	clr	_TamperCmdFailed
                                   1763 ;	MagnetoZ-C8051F990-Simplicity_main.c:920: ExcludeFailed = 0;
      0005C1 C2 0D            [12] 1764 	clr	_ExcludeFailed
      0005C3                       1765 00215$:
                                   1766 ;	MagnetoZ-C8051F990-Simplicity_main.c:923: if (!Pattern_Detection_flag)
      0005C3 30 02 03         [24] 1767 	jnb	_Pattern_Detection_flag,00854$
      0005C6 02 08 E1         [24] 1768 	ljmp	00306$
      0005C9                       1769 00854$:
                                   1770 ;	MagnetoZ-C8051F990-Simplicity_main.c:925: MR_CONTROL_INVERTED = 1;
      0005C9 D2 83            [12] 1771 	setb	_MR_CONTROL_INVERTED
      0005CB 02 08 E1         [24] 1772 	ljmp	00306$
      0005CE                       1773 00252$:
                                   1774 ;	MagnetoZ-C8051F990-Simplicity_main.c:931: else if ( (ZWaveOn) && ( ( (ZW_On_Time > 0) && (T0_Tick_Counter == ZW_On_Time) )
      0005CE 20 04 03         [24] 1775 	jb	_ZWaveOn,00855$
      0005D1 02 08 E1         [24] 1776 	ljmp	00306$
      0005D4                       1777 00855$:
      0005D4 E5 5A            [12] 1778 	mov	a,_ZW_On_Time
      0005D6 45 5B            [12] 1779 	orl	a,(_ZW_On_Time + 1)
      0005D8 60 0C            [24] 1780 	jz	00249$
      0005DA E5 5A            [12] 1781 	mov	a,_ZW_On_Time
      0005DC B5 5C 07         [24] 1782 	cjne	a,_T0_Tick_Counter,00857$
      0005DF E5 5B            [12] 1783 	mov	a,(_ZW_On_Time + 1)
      0005E1 B5 5D 02         [24] 1784 	cjne	a,(_T0_Tick_Counter + 1),00857$
      0005E4 80 0E            [24] 1785 	sjmp	00246$
      0005E6                       1786 00857$:
      0005E6                       1787 00249$:
                                   1788 ;	MagnetoZ-C8051F990-Simplicity_main.c:932: || (T0_Tick_Counter > 554) ) //Or if 'Z' not received for max 30 seconds.
      0005E6 C3               [12] 1789 	clr	c
      0005E7 74 2A            [12] 1790 	mov	a,#0x2A
      0005E9 95 5C            [12] 1791 	subb	a,_T0_Tick_Counter
      0005EB 74 02            [12] 1792 	mov	a,#0x02
      0005ED 95 5D            [12] 1793 	subb	a,(_T0_Tick_Counter + 1)
      0005EF 40 03            [24] 1794 	jc	00858$
      0005F1 02 08 E1         [24] 1795 	ljmp	00306$
      0005F4                       1796 00858$:
      0005F4                       1797 00246$:
                                   1798 ;	MagnetoZ-C8051F990-Simplicity_main.c:935: T0_Tick_Counter = ZW_On_Time = 0;
      0005F4 E4               [12] 1799 	clr	a
      0005F5 F5 5A            [12] 1800 	mov	_ZW_On_Time,a
      0005F7 F5 5B            [12] 1801 	mov	(_ZW_On_Time + 1),a
      0005F9 F5 5C            [12] 1802 	mov	_T0_Tick_Counter,a
      0005FB F5 5D            [12] 1803 	mov	(_T0_Tick_Counter + 1),a
                                   1804 ;	MagnetoZ-C8051F990-Simplicity_main.c:938: TurnOffZWave();
      0005FD C0 07            [24] 1805 	push	ar7
      0005FF C0 05            [24] 1806 	push	ar5
      000601 12 0D B3         [24] 1807 	lcall	_TurnOffZWave
                                   1808 ;	MagnetoZ-C8051F990-Simplicity_main.c:941: memset(UART_Buffer, 0x00, UART_BUFFERSIZE);
      000604 75 0E 00         [24] 1809 	mov	_memset_PARM_2,#0x00
      000607 75 0F 20         [24] 1810 	mov	_memset_PARM_3,#0x20
      00060A 75 10 00         [24] 1811 	mov	(_memset_PARM_3 + 1),#0x00
      00060D 90 00 26         [24] 1812 	mov	dptr,#_UART_Buffer
      000610 75 F0 40         [24] 1813 	mov	b,#0x40
      000613 12 1B 29         [24] 1814 	lcall	_memset
      000616 D0 05            [24] 1815 	pop	ar5
      000618 D0 07            [24] 1816 	pop	ar7
                                   1817 ;	MagnetoZ-C8051F990-Simplicity_main.c:944: InterpretPacket = 0;
      00061A C2 05            [12] 1818 	clr	_InterpretPacket
                                   1819 ;	MagnetoZ-C8051F990-Simplicity_main.c:947: UART_Actual_Size = 0;
                                   1820 ;	MagnetoZ-C8051F990-Simplicity_main.c:949: UART_Buffer_Size = 0;
                                   1821 ;	MagnetoZ-C8051F990-Simplicity_main.c:952: if (    (COMMAND_8051_NONE != Command_Queue[0])
      00061C E4               [12] 1822 	clr	a
      00061D F5 48            [12] 1823 	mov	_UART_Actual_Size,a
      00061F F5 46            [12] 1824 	mov	_UART_Buffer_Size,a
      000621 E5 4A            [12] 1825 	mov	a,_Command_Queue
      000623 FE               [12] 1826 	mov	r6,a
      000624 70 03            [24] 1827 	jnz	00859$
      000626 02 07 60         [24] 1828 	ljmp	00242$
      000629                       1829 00859$:
                                   1830 ;	MagnetoZ-C8051F990-Simplicity_main.c:953: && (COMMAND_8051_LEARN_MODE_EXCLUDE != Command_Queue[0])
      000629 BE 0D 03         [24] 1831 	cjne	r6,#0x0D,00860$
      00062C 02 07 60         [24] 1832 	ljmp	00242$
      00062F                       1833 00860$:
                                   1834 ;	MagnetoZ-C8051F990-Simplicity_main.c:954: && (COMMAND_8051_DEVICE_RESET != Command_Queue[0])
      00062F BE 06 03         [24] 1835 	cjne	r6,#0x06,00861$
      000632 02 07 60         [24] 1836 	ljmp	00242$
      000635                       1837 00861$:
                                   1838 ;	MagnetoZ-C8051F990-Simplicity_main.c:957: ++ZW_TimeOut_Counter;
      000635 05 5E            [12] 1839 	inc	_ZW_TimeOut_Counter
                                   1840 ;	MagnetoZ-C8051F990-Simplicity_main.c:959: if (3 > ZW_TimeOut_Counter)
      000637 74 FD            [12] 1841 	mov	a,#0x100 - 0x03
      000639 25 5E            [12] 1842 	add	a,_ZW_TimeOut_Counter
      00063B 50 03            [24] 1843 	jnc	00862$
      00063D 02 07 4D         [24] 1844 	ljmp	00239$
      000640                       1845 00862$:
                                   1846 ;	MagnetoZ-C8051F990-Simplicity_main.c:961: ZW_TimeOut_Flag = 1;
      000640 D2 12            [12] 1847 	setb	_ZW_TimeOut_Flag
                                   1848 ;	MagnetoZ-C8051F990-Simplicity_main.c:963: if (2 == ZW_TimeOut_Counter)
      000642 74 02            [12] 1849 	mov	a,#0x02
      000644 B5 5E 02         [24] 1850 	cjne	a,_ZW_TimeOut_Counter,00863$
      000647 80 03            [24] 1851 	sjmp	00864$
      000649                       1852 00863$:
      000649 02 08 E1         [24] 1853 	ljmp	00306$
      00064C                       1854 00864$:
                                   1855 ;	MagnetoZ-C8051F990-Simplicity_main.c:969: ZWAVE_MODULE_CONTROL = 1;
      00064C D2 92            [12] 1856 	setb	_ZWAVE_MODULE_CONTROL
                                   1857 ;	MagnetoZ-C8051F990-Simplicity_main.c:971: if (!BattIsDead)
      00064E 20 09 02         [24] 1858 	jb	_BattIsDead,00219$
                                   1859 ;	MagnetoZ-C8051F990-Simplicity_main.c:973: VOLTAGE_REG_CONTROL = 0;
      000651 C2 90            [12] 1860 	clr	_VOLTAGE_REG_CONTROL
      000653                       1861 00219$:
                                   1862 ;	MagnetoZ-C8051F990-Simplicity_main.c:975: TR0 = 0;                            // Timer0 OFF
      000653 C2 8C            [12] 1863 	clr	_TR0
                                   1864 ;	MagnetoZ-C8051F990-Simplicity_main.c:976: CKCON |= 0x04;                       // Timer0 uses the system clock
      000655 43 8E 04         [24] 1865 	orl	_CKCON,#0x04
                                   1866 ;	MagnetoZ-C8051F990-Simplicity_main.c:979: UseTimer0(WAIT_TICKS, 100);
      000658 75 0E 64         [24] 1867 	mov	_UseTimer0_PARM_2,#0x64
      00065B 75 0F 00         [24] 1868 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      00065E 90 D0 26         [24] 1869 	mov	dptr,#0xD026
      000661 C0 07            [24] 1870 	push	ar7
      000663 C0 05            [24] 1871 	push	ar5
      000665 12 0C F1         [24] 1872 	lcall	_UseTimer0
      000668 D0 05            [24] 1873 	pop	ar5
      00066A D0 07            [24] 1874 	pop	ar7
                                   1875 ;	MagnetoZ-C8051F990-Simplicity_main.c:981: if ( (FirstTimeVR) && (10 > MagnetoZ_Info.FailZWCounter) )
      00066C 30 0C 0B         [24] 1876 	jnb	_FirstTimeVR,00221$
      00066F AE 6C            [24] 1877 	mov	r6,(_MagnetoZ_Info + 0x000d)
      000671 BE 0A 00         [24] 1878 	cjne	r6,#0x0A,00867$
      000674                       1879 00867$:
      000674 50 04            [24] 1880 	jnc	00221$
                                   1881 ;	MagnetoZ-C8051F990-Simplicity_main.c:982: ++MagnetoZ_Info.FailZWCounter;
      000676 EE               [12] 1882 	mov	a,r6
      000677 04               [12] 1883 	inc	a
      000678 F5 6C            [12] 1884 	mov	(_MagnetoZ_Info + 0x000d),a
      00067A                       1885 00221$:
                                   1886 ;	MagnetoZ-C8051F990-Simplicity_main.c:984: if ( (0x00 == MagnetoZ_Info.Day_VR_FirstTime)
      00067A E5 6D            [12] 1887 	mov	a,(_MagnetoZ_Info + 0x000e)
      00067C 45 6E            [12] 1888 	orl	a,((_MagnetoZ_Info + 0x000e) + 1)
      00067E 70 19            [24] 1889 	jnz	00224$
                                   1890 ;	MagnetoZ-C8051F990-Simplicity_main.c:985: && (0 < MagnetoZ_Info.FailZWCounter) )
      000680 E5 6C            [12] 1891 	mov	a,(_MagnetoZ_Info + 0x000d)
      000682 24 FF            [12] 1892 	add	a,#0xff - 0x00
      000684 50 13            [24] 1893 	jnc	00224$
                                   1894 ;	MagnetoZ-C8051F990-Simplicity_main.c:987: MagnetoZ_Info.Day_VR_FirstTime = MagnetoZ_Info.ActualHalfDays;
      000686 AC 65            [24] 1895 	mov	r4,((_MagnetoZ_Info + 0x0006) + 0)
      000688 AE 66            [24] 1896 	mov	r6,((_MagnetoZ_Info + 0x0006) + 1)
      00068A 8C 6D            [24] 1897 	mov	((_MagnetoZ_Info + 0x000e) + 0),r4
      00068C 8E 6E            [24] 1898 	mov	((_MagnetoZ_Info + 0x000e) + 1),r6
                                   1899 ;	MagnetoZ-C8051F990-Simplicity_main.c:988: Flash_Write();
      00068E C0 07            [24] 1900 	push	ar7
      000690 C0 05            [24] 1901 	push	ar5
      000692 12 18 8E         [24] 1902 	lcall	_Flash_Write
      000695 D0 05            [24] 1903 	pop	ar5
      000697 D0 07            [24] 1904 	pop	ar7
      000699                       1905 00224$:
                                   1906 ;	MagnetoZ-C8051F990-Simplicity_main.c:991: if (Temperature_ref	< MeasureTemperature())
      000699 C0 07            [24] 1907 	push	ar7
      00069B C0 05            [24] 1908 	push	ar5
      00069D 12 0D 53         [24] 1909 	lcall	_MeasureTemperature
      0006A0 AC 82            [24] 1910 	mov	r4,dpl
      0006A2 AE 83            [24] 1911 	mov	r6,dph
      0006A4 D0 05            [24] 1912 	pop	ar5
      0006A6 D0 07            [24] 1913 	pop	ar7
      0006A8 E5 58            [12] 1914 	mov	a,_Temperature_ref
      0006AA FA               [12] 1915 	mov	r2,a
      0006AB 33               [12] 1916 	rlc	a
      0006AC 95 E0            [12] 1917 	subb	a,acc
      0006AE FB               [12] 1918 	mov	r3,a
      0006AF C3               [12] 1919 	clr	c
      0006B0 EA               [12] 1920 	mov	a,r2
      0006B1 9C               [12] 1921 	subb	a,r4
      0006B2 EB               [12] 1922 	mov	a,r3
      0006B3 64 80            [12] 1923 	xrl	a,#0x80
      0006B5 8E F0            [24] 1924 	mov	b,r6
      0006B7 63 F0 80         [24] 1925 	xrl	b,#0x80
      0006BA 95 F0            [12] 1926 	subb	a,b
      0006BC 50 11            [24] 1927 	jnc	00227$
                                   1928 ;	MagnetoZ-C8051F990-Simplicity_main.c:992: Temperature_ref	= MeasureTemperature();
      0006BE C0 07            [24] 1929 	push	ar7
      0006C0 C0 05            [24] 1930 	push	ar5
      0006C2 12 0D 53         [24] 1931 	lcall	_MeasureTemperature
      0006C5 AC 82            [24] 1932 	mov	r4,dpl
      0006C7 AE 83            [24] 1933 	mov	r6,dph
      0006C9 D0 05            [24] 1934 	pop	ar5
      0006CB D0 07            [24] 1935 	pop	ar7
      0006CD 8C 58            [24] 1936 	mov	_Temperature_ref,r4
      0006CF                       1937 00227$:
                                   1938 ;	MagnetoZ-C8051F990-Simplicity_main.c:993: DetermineBattPercentage();
      0006CF C0 07            [24] 1939 	push	ar7
      0006D1 C0 05            [24] 1940 	push	ar5
      0006D3 12 0D 4C         [24] 1941 	lcall	_DetermineBattPercentage
      0006D6 D0 05            [24] 1942 	pop	ar5
      0006D8 D0 07            [24] 1943 	pop	ar7
                                   1944 ;	MagnetoZ-C8051F990-Simplicity_main.c:995: if ( (BattIsDead) || ( (10 == MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) ) )		//Always use V.R.
      0006DA 20 09 08         [24] 1945 	jb	_BattIsDead,00231$
      0006DD 74 0A            [12] 1946 	mov	a,#0x0A
      0006DF B5 6C 1E         [24] 1947 	cjne	a,(_MagnetoZ_Info + 0x000d),00232$
      0006E2 30 0C 1B         [24] 1948 	jnb	_FirstTimeVR,00232$
      0006E5                       1949 00231$:
                                   1950 ;	MagnetoZ-C8051F990-Simplicity_main.c:998: VOLTAGE_REG_CONTROL = 1;
      0006E5 D2 90            [12] 1951 	setb	_VOLTAGE_REG_CONTROL
                                   1952 ;	MagnetoZ-C8051F990-Simplicity_main.c:1000: Turn_ON_VR_Counter = 10;//for condition: ( (10 == MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) )
      0006E7 75 57 0A         [24] 1953 	mov	_Turn_ON_VR_Counter,#0x0A
                                   1954 ;	MagnetoZ-C8051F990-Simplicity_main.c:1003: UseTimer0(WAIT_TICKS, 2);
      0006EA 75 0E 02         [24] 1955 	mov	_UseTimer0_PARM_2,#0x02
      0006ED 75 0F 00         [24] 1956 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      0006F0 90 D0 26         [24] 1957 	mov	dptr,#0xD026
      0006F3 C0 07            [24] 1958 	push	ar7
      0006F5 C0 05            [24] 1959 	push	ar5
      0006F7 12 0C F1         [24] 1960 	lcall	_UseTimer0
      0006FA D0 05            [24] 1961 	pop	ar5
      0006FC D0 07            [24] 1962 	pop	ar7
      0006FE 80 37            [24] 1963 	sjmp	00233$
      000700                       1964 00232$:
                                   1965 ;	MagnetoZ-C8051F990-Simplicity_main.c:1005: else if ( (FirstTimeVR) && ( Turn_ON_VR_Counter < (MagnetoZ_Info.FailZWCounter*5) ) )
      000700 30 0C 34         [24] 1966 	jnb	_FirstTimeVR,00233$
      000703 E5 6C            [12] 1967 	mov	a,(_MagnetoZ_Info + 0x000d)
      000705 75 F0 05         [24] 1968 	mov	b,#0x05
      000708 A4               [48] 1969 	mul	ab
      000709 FC               [12] 1970 	mov	r4,a
      00070A AE F0            [24] 1971 	mov	r6,b
      00070C AA 57            [24] 1972 	mov	r2,_Turn_ON_VR_Counter
      00070E 7B 00            [12] 1973 	mov	r3,#0x00
      000710 C3               [12] 1974 	clr	c
      000711 EA               [12] 1975 	mov	a,r2
      000712 9C               [12] 1976 	subb	a,r4
      000713 EB               [12] 1977 	mov	a,r3
      000714 64 80            [12] 1978 	xrl	a,#0x80
      000716 8E F0            [24] 1979 	mov	b,r6
      000718 63 F0 80         [24] 1980 	xrl	b,#0x80
      00071B 95 F0            [12] 1981 	subb	a,b
      00071D 50 18            [24] 1982 	jnc	00233$
                                   1983 ;	MagnetoZ-C8051F990-Simplicity_main.c:1007: VOLTAGE_REG_CONTROL = 1;
      00071F D2 90            [12] 1984 	setb	_VOLTAGE_REG_CONTROL
                                   1985 ;	MagnetoZ-C8051F990-Simplicity_main.c:1009: ++Turn_ON_VR_Counter;
      000721 05 57            [12] 1986 	inc	_Turn_ON_VR_Counter
                                   1987 ;	MagnetoZ-C8051F990-Simplicity_main.c:1012: UseTimer0(WAIT_TICKS, 2);
      000723 75 0E 02         [24] 1988 	mov	_UseTimer0_PARM_2,#0x02
      000726 75 0F 00         [24] 1989 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      000729 90 D0 26         [24] 1990 	mov	dptr,#0xD026
      00072C C0 07            [24] 1991 	push	ar7
      00072E C0 05            [24] 1992 	push	ar5
      000730 12 0C F1         [24] 1993 	lcall	_UseTimer0
      000733 D0 05            [24] 1994 	pop	ar5
      000735 D0 07            [24] 1995 	pop	ar7
      000737                       1996 00233$:
                                   1997 ;	MagnetoZ-C8051F990-Simplicity_main.c:1016: FirstTimeVR = 1;
      000737 D2 0C            [12] 1998 	setb	_FirstTimeVR
                                   1999 ;	MagnetoZ-C8051F990-Simplicity_main.c:1020: ZWAVE_MODULE_CONTROL = 0;
      000739 C2 92            [12] 2000 	clr	_ZWAVE_MODULE_CONTROL
                                   2001 ;	MagnetoZ-C8051F990-Simplicity_main.c:1023: CKCON &= ~0x04;                       // Timer0 uses the system clock
      00073B AE 8E            [24] 2002 	mov	r6,_CKCON
      00073D 74 FB            [12] 2003 	mov	a,#0xFB
      00073F 5E               [12] 2004 	anl	a,r6
      000740 F5 8E            [12] 2005 	mov	_CKCON,a
                                   2006 ;	MagnetoZ-C8051F990-Simplicity_main.c:1024: TL0 = 0;
      000742 75 8A 00         [24] 2007 	mov	_TL0,#0x00
                                   2008 ;	MagnetoZ-C8051F990-Simplicity_main.c:1025: TH0 = 0;
      000745 75 8C 00         [24] 2009 	mov	_TH0,#0x00
                                   2010 ;	MagnetoZ-C8051F990-Simplicity_main.c:1026: TR0 = 1;      //{**                   // Timer0 ON
      000748 D2 8C            [12] 2011 	setb	_TR0
      00074A 02 08 E1         [24] 2012 	ljmp	00306$
      00074D                       2013 00239$:
                                   2014 ;	MagnetoZ-C8051F990-Simplicity_main.c:1032: ZW_TimeOut_Counter = 0; //Reset counter
      00074D 75 5E 00         [24] 2015 	mov	_ZW_TimeOut_Counter,#0x00
                                   2016 ;	MagnetoZ-C8051F990-Simplicity_main.c:1034: ZW_TimeOut_Flag = 0; //Normal failure
      000750 C2 12            [12] 2017 	clr	_ZW_TimeOut_Flag
                                   2018 ;	MagnetoZ-C8051F990-Simplicity_main.c:1036: CommandFailed();
      000752 C0 07            [24] 2019 	push	ar7
      000754 C0 05            [24] 2020 	push	ar5
      000756 12 15 FC         [24] 2021 	lcall	_CommandFailed
      000759 D0 05            [24] 2022 	pop	ar5
      00075B D0 07            [24] 2023 	pop	ar7
      00075D 02 08 E1         [24] 2024 	ljmp	00306$
      000760                       2025 00242$:
                                   2026 ;	MagnetoZ-C8051F990-Simplicity_main.c:1040: CommandFailed();
      000760 C0 07            [24] 2027 	push	ar7
      000762 C0 05            [24] 2028 	push	ar5
      000764 12 15 FC         [24] 2029 	lcall	_CommandFailed
      000767 D0 05            [24] 2030 	pop	ar5
      000769 D0 07            [24] 2031 	pop	ar7
                                   2032 ;	MagnetoZ-C8051F990-Simplicity_main.c:1047: break;
      00076B 02 08 E1         [24] 2033 	ljmp	00306$
                                   2034 ;	MagnetoZ-C8051F990-Simplicity_main.c:1049: case STATE_8051_DEMO:
      00076E                       2035 00254$:
                                   2036 ;	MagnetoZ-C8051F990-Simplicity_main.c:1052: if (!ZWaveOn)
      00076E 30 04 03         [24] 2037 	jnb	_ZWaveOn,00878$
      000771 02 08 72         [24] 2038 	ljmp	00301$
      000774                       2039 00878$:
                                   2040 ;	MagnetoZ-C8051F990-Simplicity_main.c:1055: if (Current_Include_MR_SW_Status!=Prev_Include_MR_SW_Status)
      000774 A2 01            [12] 2041 	mov	c,_Current_Include_MR_SW_Status
      000776 20 14 01         [24] 2042 	jb	_main_Prev_Include_MR_SW_Status_1_81,00879$
      000779 B3               [12] 2043 	cpl	c
      00077A                       2044 00879$:
      00077A 40 3C            [24] 2045 	jc	00265$
                                   2046 ;	MagnetoZ-C8051F990-Simplicity_main.c:1057: Prev_Include_MR_SW_Status = Current_Include_MR_SW_Status;
      00077C A2 01            [12] 2047 	mov	c,_Current_Include_MR_SW_Status
      00077E 92 14            [24] 2048 	mov	_main_Prev_Include_MR_SW_Status_1_81,c
                                   2049 ;	MagnetoZ-C8051F990-Simplicity_main.c:1060: if (!Pattern_Detection_flag)
      000780 20 02 16         [24] 2050 	jb	_Pattern_Detection_flag,00262$
                                   2051 ;	MagnetoZ-C8051F990-Simplicity_main.c:1062: Pattern_Detection_flag = 1;
      000783 D2 02            [12] 2052 	setb	_Pattern_Detection_flag
                                   2053 ;	MagnetoZ-C8051F990-Simplicity_main.c:1064: if (SW_PRESSED == Current_Include_MR_SW_Status)
      000785 20 01 30         [24] 2054 	jb	_Current_Include_MR_SW_Status,00265$
                                   2055 ;	MagnetoZ-C8051F990-Simplicity_main.c:1066: BlinkLED(DOOR_OPEN_BLINK);
      000788 75 82 01         [24] 2056 	mov	dpl,#0x01
      00078B C0 07            [24] 2057 	push	ar7
      00078D C0 05            [24] 2058 	push	ar5
      00078F 12 17 68         [24] 2059 	lcall	_BlinkLED
      000792 D0 05            [24] 2060 	pop	ar5
      000794 D0 07            [24] 2061 	pop	ar7
                                   2062 ;	MagnetoZ-C8051F990-Simplicity_main.c:1069: ++Include_count;
      000796 0D               [12] 2063 	inc	r5
      000797 80 1F            [24] 2064 	sjmp	00265$
      000799                       2065 00262$:
                                   2066 ;	MagnetoZ-C8051F990-Simplicity_main.c:1073: else if ( (SW_PRESSED == Current_Include_MR_SW_Status)
      000799 20 01 1C         [24] 2067 	jb	_Current_Include_MR_SW_Status,00265$
                                   2068 ;	MagnetoZ-C8051F990-Simplicity_main.c:1074: && (SW_NOT_PRESSED == Current_Door_Status)
      00079C A2 00            [12] 2069 	mov	c,_Current_Door_Status
      00079E E4               [12] 2070 	clr	a
      00079F 33               [12] 2071 	rlc	a
      0007A0 FE               [12] 2072 	mov	r6,a
      0007A1 BE 01 14         [24] 2073 	cjne	r6,#0x01,00265$
                                   2074 ;	MagnetoZ-C8051F990-Simplicity_main.c:1075: && (3 > Include_count) )
      0007A4 BD 03 00         [24] 2075 	cjne	r5,#0x03,00886$
      0007A7                       2076 00886$:
      0007A7 50 0F            [24] 2077 	jnc	00265$
                                   2078 ;	MagnetoZ-C8051F990-Simplicity_main.c:1078: ++Include_count;
      0007A9 0D               [12] 2079 	inc	r5
                                   2080 ;	MagnetoZ-C8051F990-Simplicity_main.c:1080: BlinkLED(DOOR_OPEN_BLINK);
      0007AA 75 82 01         [24] 2081 	mov	dpl,#0x01
      0007AD C0 07            [24] 2082 	push	ar7
      0007AF C0 05            [24] 2083 	push	ar5
      0007B1 12 17 68         [24] 2084 	lcall	_BlinkLED
      0007B4 D0 05            [24] 2085 	pop	ar5
      0007B6 D0 07            [24] 2086 	pop	ar7
      0007B8                       2087 00265$:
                                   2088 ;	MagnetoZ-C8051F990-Simplicity_main.c:1086: if (!Pattern_Detection_flag)
      0007B8 20 02 02         [24] 2089 	jb	_Pattern_Detection_flag,00267$
                                   2090 ;	MagnetoZ-C8051F990-Simplicity_main.c:1089: MR_CONTROL_INVERTED = 1;
      0007BB D2 83            [12] 2091 	setb	_MR_CONTROL_INVERTED
      0007BD                       2092 00267$:
                                   2093 ;	MagnetoZ-C8051F990-Simplicity_main.c:1092: if (Pattern_Detection_flag)
      0007BD 30 02 02         [24] 2094 	jnb	_Pattern_Detection_flag,00269$
                                   2095 ;	MagnetoZ-C8051F990-Simplicity_main.c:1093: ++MR_Control_On_count;
      0007C0 05 7A            [12] 2096 	inc	_main_MR_Control_On_count_1_81
      0007C2                       2097 00269$:
                                   2098 ;	MagnetoZ-C8051F990-Simplicity_main.c:1096: if ( (3 <= Include_count)
      0007C2 BD 03 00         [24] 2099 	cjne	r5,#0x03,00890$
      0007C5                       2100 00890$:
      0007C5 40 2E            [24] 2101 	jc	00271$
                                   2102 ;	MagnetoZ-C8051F990-Simplicity_main.c:1097: && (SW_NOT_PRESSED == Current_Door_Status)
      0007C7 A2 00            [12] 2103 	mov	c,_Current_Door_Status
      0007C9 E4               [12] 2104 	clr	a
      0007CA 33               [12] 2105 	rlc	a
      0007CB FE               [12] 2106 	mov	r6,a
      0007CC BE 01 26         [24] 2107 	cjne	r6,#0x01,00271$
                                   2108 ;	MagnetoZ-C8051F990-Simplicity_main.c:1098: && (SW_NOT_PRESSED == Current_Include_MR_SW_Status) )
      0007CF A2 01            [12] 2109 	mov	c,_Current_Include_MR_SW_Status
      0007D1 E4               [12] 2110 	clr	a
      0007D2 33               [12] 2111 	rlc	a
      0007D3 FE               [12] 2112 	mov	r6,a
      0007D4 BE 01 1E         [24] 2113 	cjne	r6,#0x01,00271$
                                   2114 ;	MagnetoZ-C8051F990-Simplicity_main.c:1102: MeasureBattVoltage();
      0007D7 C0 07            [24] 2115 	push	ar7
      0007D9 12 0D 4B         [24] 2116 	lcall	_MeasureBattVoltage
                                   2117 ;	MagnetoZ-C8051F990-Simplicity_main.c:1103: DetermineBattPercentage();
      0007DC 12 0D 4C         [24] 2118 	lcall	_DetermineBattPercentage
                                   2119 ;	MagnetoZ-C8051F990-Simplicity_main.c:1105: MagnetoZ_Info.Num_NIFs_InDemo++;
      0007DF E5 78            [12] 2120 	mov	a,(_MagnetoZ_Info + 0x0019)
      0007E1 04               [12] 2121 	inc	a
      0007E2 F5 78            [12] 2122 	mov	(_MagnetoZ_Info + 0x0019),a
                                   2123 ;	MagnetoZ-C8051F990-Simplicity_main.c:1108: MR_Control_On_count = 0;
      0007E4 75 7A 00         [24] 2124 	mov	_main_MR_Control_On_count_1_81,#0x00
                                   2125 ;	MagnetoZ-C8051F990-Simplicity_main.c:1109: Include_count = 0;
      0007E7 7D 00            [12] 2126 	mov	r5,#0x00
                                   2127 ;	MagnetoZ-C8051F990-Simplicity_main.c:1112: PatternDetected(COMMAND_8051_LEARN_MODE_INCLUDE);
      0007E9 75 82 0C         [24] 2128 	mov	dpl,#0x0C
      0007EC C0 05            [24] 2129 	push	ar5
      0007EE 12 0D 57         [24] 2130 	lcall	_PatternDetected
      0007F1 D0 05            [24] 2131 	pop	ar5
      0007F3 D0 07            [24] 2132 	pop	ar7
      0007F5                       2133 00271$:
                                   2134 ;	MagnetoZ-C8051F990-Simplicity_main.c:1117: if ( (SW_NOT_PRESSED == Current_Include_MR_SW_Status)
      0007F5 A2 01            [12] 2135 	mov	c,_Current_Include_MR_SW_Status
      0007F7 E4               [12] 2136 	clr	a
      0007F8 33               [12] 2137 	rlc	a
      0007F9 FE               [12] 2138 	mov	r6,a
      0007FA BE 01 07         [24] 2139 	cjne	r6,#0x01,00285$
                                   2140 ;	MagnetoZ-C8051F990-Simplicity_main.c:1118: && (!AutoInclusion) )
      0007FD 20 15 04         [24] 2141 	jb	_main_AutoInclusion_1_81,00285$
                                   2142 ;	MagnetoZ-C8051F990-Simplicity_main.c:1119: Reset_AI_Counter = 0;
      000800 7F 00            [12] 2143 	mov	r7,#0x00
      000802 80 44            [24] 2144 	sjmp	00286$
      000804                       2145 00285$:
                                   2146 ;	MagnetoZ-C8051F990-Simplicity_main.c:1121: else if ( (SW_PRESSED == Current_Include_MR_SW_Status)
      000804 20 01 0D         [24] 2147 	jb	_Current_Include_MR_SW_Status,00281$
                                   2148 ;	MagnetoZ-C8051F990-Simplicity_main.c:1122: && (!AutoInclusion) )
      000807 20 15 0A         [24] 2149 	jb	_main_AutoInclusion_1_81,00281$
                                   2150 ;	MagnetoZ-C8051F990-Simplicity_main.c:1124: ++Reset_AI_Counter;
      00080A 0F               [12] 2151 	inc	r7
                                   2152 ;	MagnetoZ-C8051F990-Simplicity_main.c:1126: if (40 == Reset_AI_Counter)
      00080B BF 28 3A         [24] 2153 	cjne	r7,#0x28,00286$
                                   2154 ;	MagnetoZ-C8051F990-Simplicity_main.c:1129: AutoInclusion = 1;
      00080E D2 15            [12] 2155 	setb	_main_AutoInclusion_1_81
                                   2156 ;	MagnetoZ-C8051F990-Simplicity_main.c:1131: Reset_AI_Counter = 0;
      000810 7F 00            [12] 2157 	mov	r7,#0x00
      000812 80 34            [24] 2158 	sjmp	00286$
      000814                       2159 00281$:
                                   2160 ;	MagnetoZ-C8051F990-Simplicity_main.c:1135: else if ( (SW_NOT_PRESSED == Current_Include_MR_SW_Status)
      000814 A2 01            [12] 2161 	mov	c,_Current_Include_MR_SW_Status
      000816 E4               [12] 2162 	clr	a
      000817 33               [12] 2163 	rlc	a
      000818 FE               [12] 2164 	mov	r6,a
      000819 BE 01 2C         [24] 2165 	cjne	r6,#0x01,00286$
                                   2166 ;	MagnetoZ-C8051F990-Simplicity_main.c:1136: && (SW_NOT_PRESSED == Current_Door_Status)
      00081C A2 00            [12] 2167 	mov	c,_Current_Door_Status
      00081E E4               [12] 2168 	clr	a
      00081F 33               [12] 2169 	rlc	a
      000820 FE               [12] 2170 	mov	r6,a
      000821 BE 01 24         [24] 2171 	cjne	r6,#0x01,00286$
                                   2172 ;	MagnetoZ-C8051F990-Simplicity_main.c:1137: && (AutoInclusion) )
                                   2173 ;	MagnetoZ-C8051F990-Simplicity_main.c:1139: AutoInclusion = 0;
      000824 10 15 02         [24] 2174 	jbc	_main_AutoInclusion_1_81,00907$
      000827 80 1F            [24] 2175 	sjmp	00286$
      000829                       2176 00907$:
                                   2177 ;	MagnetoZ-C8051F990-Simplicity_main.c:1142: MeasureBattVoltage();
      000829 C0 07            [24] 2178 	push	ar7
      00082B C0 05            [24] 2179 	push	ar5
      00082D 12 0D 4B         [24] 2180 	lcall	_MeasureBattVoltage
                                   2181 ;	MagnetoZ-C8051F990-Simplicity_main.c:1143: DetermineBattPercentage();
      000830 12 0D 4C         [24] 2182 	lcall	_DetermineBattPercentage
                                   2183 ;	MagnetoZ-C8051F990-Simplicity_main.c:1146: BlinkLED(DOOR_OPEN_BLINK);
      000833 75 82 01         [24] 2184 	mov	dpl,#0x01
      000836 12 17 68         [24] 2185 	lcall	_BlinkLED
                                   2186 ;	MagnetoZ-C8051F990-Simplicity_main.c:1148: MagnetoZ_Info.Num_NIFs_InDemo++;
      000839 E5 78            [12] 2187 	mov	a,(_MagnetoZ_Info + 0x0019)
      00083B 04               [12] 2188 	inc	a
      00083C F5 78            [12] 2189 	mov	(_MagnetoZ_Info + 0x0019),a
                                   2190 ;	MagnetoZ-C8051F990-Simplicity_main.c:1150: SetCommand(COMMAND_8051_LEARN_MODE_INCLUDE);
      00083E 75 82 0C         [24] 2191 	mov	dpl,#0x0C
      000841 12 0D 64         [24] 2192 	lcall	_SetCommand
      000844 D0 05            [24] 2193 	pop	ar5
      000846 D0 07            [24] 2194 	pop	ar7
      000848                       2195 00286$:
                                   2196 ;	MagnetoZ-C8051F990-Simplicity_main.c:1154: if (Current_Door_Status != Prev_Door_Status)
      000848 A2 00            [12] 2197 	mov	c,_Current_Door_Status
      00084A 20 13 01         [24] 2198 	jb	_main_Prev_Door_Status_1_81,00908$
      00084D B3               [12] 2199 	cpl	c
      00084E                       2200 00908$:
      00084E 50 03            [24] 2201 	jnc	00909$
      000850 02 08 E1         [24] 2202 	ljmp	00306$
      000853                       2203 00909$:
                                   2204 ;	MagnetoZ-C8051F990-Simplicity_main.c:1157: Prev_Door_Status = Current_Door_Status;
      000853 A2 00            [12] 2205 	mov	c,_Current_Door_Status
                                   2206 ;	MagnetoZ-C8051F990-Simplicity_main.c:1159: if (SW_NOT_PRESSED == Prev_Door_Status)
      000855 92 13            [24] 2207 	mov  _main_Prev_Door_Status_1_81,c
      000857 E4               [12] 2208 	clr	a
      000858 33               [12] 2209 	rlc	a
      000859 FE               [12] 2210 	mov	r6,a
      00085A BE 01 02         [24] 2211 	cjne	r6,#0x01,00910$
      00085D 80 03            [24] 2212 	sjmp	00911$
      00085F                       2213 00910$:
      00085F 02 08 E1         [24] 2214 	ljmp	00306$
      000862                       2215 00911$:
                                   2216 ;	MagnetoZ-C8051F990-Simplicity_main.c:1160: BlinkLED(DEMO_BLINK);	//Two blinks
      000862 75 82 02         [24] 2217 	mov	dpl,#0x02
      000865 C0 07            [24] 2218 	push	ar7
      000867 C0 05            [24] 2219 	push	ar5
      000869 12 17 68         [24] 2220 	lcall	_BlinkLED
      00086C D0 05            [24] 2221 	pop	ar5
      00086E D0 07            [24] 2222 	pop	ar7
      000870 80 6F            [24] 2223 	sjmp	00306$
      000872                       2224 00301$:
                                   2225 ;	MagnetoZ-C8051F990-Simplicity_main.c:1167: else if ( (ZWaveOn) && ( ( (ZW_On_Time > 0) && (T0_Tick_Counter == ZW_On_Time) )
      000872 30 04 6C         [24] 2226 	jnb	_ZWaveOn,00306$
      000875 E5 5A            [12] 2227 	mov	a,_ZW_On_Time
      000877 45 5B            [12] 2228 	orl	a,(_ZW_On_Time + 1)
      000879 60 0C            [24] 2229 	jz	00298$
      00087B E5 5A            [12] 2230 	mov	a,_ZW_On_Time
      00087D B5 5C 07         [24] 2231 	cjne	a,_T0_Tick_Counter,00914$
      000880 E5 5B            [12] 2232 	mov	a,(_ZW_On_Time + 1)
      000882 B5 5D 02         [24] 2233 	cjne	a,(_T0_Tick_Counter + 1),00914$
      000885 80 0B            [24] 2234 	sjmp	00295$
      000887                       2235 00914$:
      000887                       2236 00298$:
                                   2237 ;	MagnetoZ-C8051F990-Simplicity_main.c:1168: || (T0_Tick_Counter > 554) ) //Or if 'Z' not received for max 30 seconds.
      000887 C3               [12] 2238 	clr	c
      000888 74 2A            [12] 2239 	mov	a,#0x2A
      00088A 95 5C            [12] 2240 	subb	a,_T0_Tick_Counter
      00088C 74 02            [12] 2241 	mov	a,#0x02
      00088E 95 5D            [12] 2242 	subb	a,(_T0_Tick_Counter + 1)
      000890 50 4F            [24] 2243 	jnc	00306$
      000892                       2244 00295$:
                                   2245 ;	MagnetoZ-C8051F990-Simplicity_main.c:1171: T0_Tick_Counter = ZW_On_Time = 0;
      000892 E4               [12] 2246 	clr	a
      000893 F5 5A            [12] 2247 	mov	_ZW_On_Time,a
      000895 F5 5B            [12] 2248 	mov	(_ZW_On_Time + 1),a
      000897 F5 5C            [12] 2249 	mov	_T0_Tick_Counter,a
      000899 F5 5D            [12] 2250 	mov	(_T0_Tick_Counter + 1),a
                                   2251 ;	MagnetoZ-C8051F990-Simplicity_main.c:1174: TurnOffZWave();
      00089B C0 07            [24] 2252 	push	ar7
      00089D C0 05            [24] 2253 	push	ar5
      00089F 12 0D B3         [24] 2254 	lcall	_TurnOffZWave
      0008A2 D0 05            [24] 2255 	pop	ar5
      0008A4 D0 07            [24] 2256 	pop	ar7
                                   2257 ;	MagnetoZ-C8051F990-Simplicity_main.c:1177: UART_Actual_Size = UART_Input_First+1;
      0008A6 E5 47            [12] 2258 	mov	a,_UART_Input_First
      0008A8 04               [12] 2259 	inc	a
                                   2260 ;	MagnetoZ-C8051F990-Simplicity_main.c:1179: if (3 < UART_Actual_Size)
      0008A9 F5 48            [12] 2261 	mov  _UART_Actual_Size,a
      0008AB 24 FC            [12] 2262 	add	a,#0xff - 0x03
      0008AD 50 0D            [24] 2263 	jnc	00293$
                                   2264 ;	MagnetoZ-C8051F990-Simplicity_main.c:1181: InterpretUARTInfo();
      0008AF C0 07            [24] 2265 	push	ar7
      0008B1 C0 05            [24] 2266 	push	ar5
      0008B3 12 0F 1B         [24] 2267 	lcall	_InterpretUARTInfo
      0008B6 D0 05            [24] 2268 	pop	ar5
      0008B8 D0 07            [24] 2269 	pop	ar7
      0008BA 80 22            [24] 2270 	sjmp	00294$
      0008BC                       2271 00293$:
                                   2272 ;	MagnetoZ-C8051F990-Simplicity_main.c:1185: memset(UART_Buffer, 0x00, UART_BUFFERSIZE);
      0008BC 75 0E 00         [24] 2273 	mov	_memset_PARM_2,#0x00
      0008BF 75 0F 20         [24] 2274 	mov	_memset_PARM_3,#0x20
      0008C2 75 10 00         [24] 2275 	mov	(_memset_PARM_3 + 1),#0x00
      0008C5 90 00 26         [24] 2276 	mov	dptr,#_UART_Buffer
      0008C8 75 F0 40         [24] 2277 	mov	b,#0x40
      0008CB C0 07            [24] 2278 	push	ar7
      0008CD C0 05            [24] 2279 	push	ar5
      0008CF 12 1B 29         [24] 2280 	lcall	_memset
                                   2281 ;	MagnetoZ-C8051F990-Simplicity_main.c:1188: InterpretPacket = 0;
      0008D2 C2 05            [12] 2282 	clr	_InterpretPacket
                                   2283 ;	MagnetoZ-C8051F990-Simplicity_main.c:1191: UART_Actual_Size = 0;
      0008D4 75 48 00         [24] 2284 	mov	_UART_Actual_Size,#0x00
                                   2285 ;	MagnetoZ-C8051F990-Simplicity_main.c:1193: CommandFailed();
      0008D7 12 15 FC         [24] 2286 	lcall	_CommandFailed
      0008DA D0 05            [24] 2287 	pop	ar5
      0008DC D0 07            [24] 2288 	pop	ar7
      0008DE                       2289 00294$:
                                   2290 ;	MagnetoZ-C8051F990-Simplicity_main.c:1196: UART_Buffer_Size = 0;
      0008DE 75 46 00         [24] 2291 	mov	_UART_Buffer_Size,#0x00
                                   2292 ;	MagnetoZ-C8051F990-Simplicity_main.c:1324: }
      0008E1                       2293 00306$:
                                   2294 ;	MagnetoZ-C8051F990-Simplicity_main.c:1328: if ( (MeasureTemperature()) > (Temperature_ref + 2) )
      0008E1 C0 07            [24] 2295 	push	ar7
      0008E3 C0 05            [24] 2296 	push	ar5
      0008E5 12 0D 53         [24] 2297 	lcall	_MeasureTemperature
      0008E8 AC 82            [24] 2298 	mov	r4,dpl
      0008EA AE 83            [24] 2299 	mov	r6,dph
      0008EC D0 05            [24] 2300 	pop	ar5
      0008EE D0 07            [24] 2301 	pop	ar7
      0008F0 E5 58            [12] 2302 	mov	a,_Temperature_ref
      0008F2 FA               [12] 2303 	mov	r2,a
      0008F3 33               [12] 2304 	rlc	a
      0008F4 95 E0            [12] 2305 	subb	a,acc
      0008F6 FB               [12] 2306 	mov	r3,a
      0008F7 74 02            [12] 2307 	mov	a,#0x02
      0008F9 2A               [12] 2308 	add	a,r2
      0008FA FA               [12] 2309 	mov	r2,a
      0008FB E4               [12] 2310 	clr	a
      0008FC 3B               [12] 2311 	addc	a,r3
      0008FD FB               [12] 2312 	mov	r3,a
      0008FE C3               [12] 2313 	clr	c
      0008FF EA               [12] 2314 	mov	a,r2
      000900 9C               [12] 2315 	subb	a,r4
      000901 EB               [12] 2316 	mov	a,r3
      000902 64 80            [12] 2317 	xrl	a,#0x80
      000904 8E F0            [24] 2318 	mov	b,r6
      000906 63 F0 80         [24] 2319 	xrl	b,#0x80
      000909 95 F0            [12] 2320 	subb	a,b
      00090B 50 47            [24] 2321 	jnc	00320$
                                   2322 ;	MagnetoZ-C8051F990-Simplicity_main.c:1330: if (BattIsDead)
      00090D 30 09 39         [24] 2323 	jnb	_BattIsDead,00317$
                                   2324 ;	MagnetoZ-C8051F990-Simplicity_main.c:1332: if ( (COMMAND_8051_NONE == Command_Queue[0])
      000910 E5 4A            [12] 2325 	mov	a,_Command_Queue
      000912 70 2C            [24] 2326 	jnz	00311$
                                   2327 ;	MagnetoZ-C8051F990-Simplicity_main.c:1333: && (!ZWaveOn)
      000914 20 04 29         [24] 2328 	jb	_ZWaveOn,00311$
                                   2329 ;	MagnetoZ-C8051F990-Simplicity_main.c:1334: && (FirstTimeVR) )
      000917 30 0C 26         [24] 2330 	jnb	_FirstTimeVR,00311$
                                   2331 ;	MagnetoZ-C8051F990-Simplicity_main.c:1338: if (SW_NOT_PRESSED == Current_Door_Status)
      00091A A2 00            [12] 2332 	mov	c,_Current_Door_Status
      00091C E4               [12] 2333 	clr	a
      00091D 33               [12] 2334 	rlc	a
      00091E FE               [12] 2335 	mov	r6,a
      00091F BE 01 10         [24] 2336 	cjne	r6,#0x01,00308$
                                   2337 ;	MagnetoZ-C8051F990-Simplicity_main.c:1339: SetCommand(COMMAND_8051_DOOR_OPEN);
      000922 75 82 08         [24] 2338 	mov	dpl,#0x08
      000925 C0 07            [24] 2339 	push	ar7
      000927 C0 05            [24] 2340 	push	ar5
      000929 12 0D 64         [24] 2341 	lcall	_SetCommand
      00092C D0 05            [24] 2342 	pop	ar5
      00092E D0 07            [24] 2343 	pop	ar7
      000930 80 0E            [24] 2344 	sjmp	00311$
      000932                       2345 00308$:
                                   2346 ;	MagnetoZ-C8051F990-Simplicity_main.c:1341: SetCommand(COMMAND_8051_DOOR_CLOSE);
      000932 75 82 07         [24] 2347 	mov	dpl,#0x07
      000935 C0 07            [24] 2348 	push	ar7
      000937 C0 05            [24] 2349 	push	ar5
      000939 12 0D 64         [24] 2350 	lcall	_SetCommand
      00093C D0 05            [24] 2351 	pop	ar5
      00093E D0 07            [24] 2352 	pop	ar7
      000940                       2353 00311$:
                                   2354 ;	MagnetoZ-C8051F990-Simplicity_main.c:1344: FirstTimeVR = 0;
      000940 C2 0C            [12] 2355 	clr	_FirstTimeVR
                                   2356 ;	MagnetoZ-C8051F990-Simplicity_main.c:1345: BattIsDead = 0;
      000942 C2 09            [12] 2357 	clr	_BattIsDead
                                   2358 ;	MagnetoZ-C8051F990-Simplicity_main.c:1346: MagnetoZ_Info.FailZWCounter = 5;
      000944 75 6C 05         [24] 2359 	mov	(_MagnetoZ_Info + 0x000d),#0x05
      000947 80 0B            [24] 2360 	sjmp	00320$
      000949                       2361 00317$:
                                   2362 ;	MagnetoZ-C8051F990-Simplicity_main.c:1348: else if (5 < MagnetoZ_Info.FailZWCounter)
      000949 E5 6C            [12] 2363 	mov	a,(_MagnetoZ_Info + 0x000d)
      00094B 24 FA            [12] 2364 	add	a,#0xff - 0x05
      00094D 50 05            [24] 2365 	jnc	00320$
                                   2366 ;	MagnetoZ-C8051F990-Simplicity_main.c:1350: FirstTimeVR = 0;
      00094F C2 0C            [12] 2367 	clr	_FirstTimeVR
                                   2368 ;	MagnetoZ-C8051F990-Simplicity_main.c:1352: MagnetoZ_Info.FailZWCounter = 0;
      000951 75 6C 00         [24] 2369 	mov	(_MagnetoZ_Info + 0x000d),#0x00
      000954                       2370 00320$:
                                   2371 ;	MagnetoZ-C8051F990-Simplicity_main.c:1359: if ( (COMMAND_8051_NONE != Command_Queue[0])
      000954 E5 4A            [12] 2372 	mov	a,_Command_Queue
      000956 70 03            [24] 2373 	jnz	00925$
      000958 02 0A 35         [24] 2374 	ljmp	00335$
      00095B                       2375 00925$:
                                   2376 ;	MagnetoZ-C8051F990-Simplicity_main.c:1360: && (!ZWaveOn)
      00095B 30 04 03         [24] 2377 	jnb	_ZWaveOn,00926$
      00095E 02 0A 35         [24] 2378 	ljmp	00335$
      000961                       2379 00926$:
                                   2380 ;	MagnetoZ-C8051F990-Simplicity_main.c:1361: && (SendCmd_flag) )
      000961 20 07 03         [24] 2381 	jb	_SendCmd_flag,00927$
      000964 02 0A 35         [24] 2382 	ljmp	00335$
      000967                       2383 00927$:
                                   2384 ;	MagnetoZ-C8051F990-Simplicity_main.c:1364: MeasureBattVoltage();
      000967 C0 07            [24] 2385 	push	ar7
      000969 C0 05            [24] 2386 	push	ar5
      00096B 12 0D 4B         [24] 2387 	lcall	_MeasureBattVoltage
                                   2388 ;	MagnetoZ-C8051F990-Simplicity_main.c:1365: DetermineBattPercentage();
      00096E 12 0D 4C         [24] 2389 	lcall	_DetermineBattPercentage
      000971 D0 05            [24] 2390 	pop	ar5
      000973 D0 07            [24] 2391 	pop	ar7
                                   2392 ;	MagnetoZ-C8051F990-Simplicity_main.c:1368: if (FirstTimeVR)
      000975 30 0C 2E         [24] 2393 	jnb	_FirstTimeVR,00324$
                                   2394 ;	MagnetoZ-C8051F990-Simplicity_main.c:1370: if ( (MeasureTemperature()) > (Temperature_ref + 2) )
      000978 C0 07            [24] 2395 	push	ar7
      00097A C0 05            [24] 2396 	push	ar5
      00097C 12 0D 53         [24] 2397 	lcall	_MeasureTemperature
      00097F AC 82            [24] 2398 	mov	r4,dpl
      000981 AE 83            [24] 2399 	mov	r6,dph
      000983 D0 05            [24] 2400 	pop	ar5
      000985 D0 07            [24] 2401 	pop	ar7
      000987 E5 58            [12] 2402 	mov	a,_Temperature_ref
      000989 FA               [12] 2403 	mov	r2,a
      00098A 33               [12] 2404 	rlc	a
      00098B 95 E0            [12] 2405 	subb	a,acc
      00098D FB               [12] 2406 	mov	r3,a
      00098E 74 02            [12] 2407 	mov	a,#0x02
      000990 2A               [12] 2408 	add	a,r2
      000991 FA               [12] 2409 	mov	r2,a
      000992 E4               [12] 2410 	clr	a
      000993 3B               [12] 2411 	addc	a,r3
      000994 FB               [12] 2412 	mov	r3,a
      000995 C3               [12] 2413 	clr	c
      000996 EA               [12] 2414 	mov	a,r2
      000997 9C               [12] 2415 	subb	a,r4
      000998 EB               [12] 2416 	mov	a,r3
      000999 64 80            [12] 2417 	xrl	a,#0x80
      00099B 8E F0            [24] 2418 	mov	b,r6
      00099D 63 F0 80         [24] 2419 	xrl	b,#0x80
      0009A0 95 F0            [12] 2420 	subb	a,b
      0009A2 50 02            [24] 2421 	jnc	00324$
                                   2422 ;	MagnetoZ-C8051F990-Simplicity_main.c:1371: FirstTimeVR = 0;
      0009A4 C2 0C            [12] 2423 	clr	_FirstTimeVR
      0009A6                       2424 00324$:
                                   2425 ;	MagnetoZ-C8051F990-Simplicity_main.c:1375: P0MDOUT |=  0x10;
      0009A6 43 A4 10         [24] 2426 	orl	_P0MDOUT,#0x10
                                   2427 ;	MagnetoZ-C8051F990-Simplicity_main.c:1376: XBR0     = 0x01;
      0009A9 75 E1 01         [24] 2428 	mov	_XBR0,#0x01
                                   2429 ;	MagnetoZ-C8051F990-Simplicity_main.c:1377: ES0      = 1;
      0009AC D2 AC            [12] 2430 	setb	_ES0
                                   2431 ;	MagnetoZ-C8051F990-Simplicity_main.c:1379: ZWaveOn = 1;
      0009AE D2 04            [12] 2432 	setb	_ZWaveOn
                                   2433 ;	MagnetoZ-C8051F990-Simplicity_main.c:1381: if ( (BattIsDead) || ( (10 == MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) ) )		//Always use V.R.
      0009B0 20 09 08         [24] 2434 	jb	_BattIsDead,00329$
      0009B3 74 0A            [12] 2435 	mov	a,#0x0A
      0009B5 B5 6C 1E         [24] 2436 	cjne	a,(_MagnetoZ_Info + 0x000d),00330$
      0009B8 30 0C 1B         [24] 2437 	jnb	_FirstTimeVR,00330$
      0009BB                       2438 00329$:
                                   2439 ;	MagnetoZ-C8051F990-Simplicity_main.c:1383: VOLTAGE_REG_CONTROL = 1;
      0009BB D2 90            [12] 2440 	setb	_VOLTAGE_REG_CONTROL
                                   2441 ;	MagnetoZ-C8051F990-Simplicity_main.c:1385: Turn_ON_VR_Counter = 10;//for condition: ( (10 == MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) )
      0009BD 75 57 0A         [24] 2442 	mov	_Turn_ON_VR_Counter,#0x0A
                                   2443 ;	MagnetoZ-C8051F990-Simplicity_main.c:1388: UseTimer0(WAIT_TICKS, 2);
      0009C0 75 0E 02         [24] 2444 	mov	_UseTimer0_PARM_2,#0x02
      0009C3 75 0F 00         [24] 2445 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      0009C6 90 D0 26         [24] 2446 	mov	dptr,#0xD026
      0009C9 C0 07            [24] 2447 	push	ar7
      0009CB C0 05            [24] 2448 	push	ar5
      0009CD 12 0C F1         [24] 2449 	lcall	_UseTimer0
      0009D0 D0 05            [24] 2450 	pop	ar5
      0009D2 D0 07            [24] 2451 	pop	ar7
      0009D4 80 3C            [24] 2452 	sjmp	00331$
      0009D6                       2453 00330$:
                                   2454 ;	MagnetoZ-C8051F990-Simplicity_main.c:1390: else if ( (FirstTimeVR) && ( Turn_ON_VR_Counter < (MagnetoZ_Info.FailZWCounter*5) ) )
      0009D6 30 0C 36         [24] 2455 	jnb	_FirstTimeVR,00326$
      0009D9 E5 6C            [12] 2456 	mov	a,(_MagnetoZ_Info + 0x000d)
      0009DB 75 F0 05         [24] 2457 	mov	b,#0x05
      0009DE A4               [48] 2458 	mul	ab
      0009DF FC               [12] 2459 	mov	r4,a
      0009E0 AE F0            [24] 2460 	mov	r6,b
      0009E2 AA 57            [24] 2461 	mov	r2,_Turn_ON_VR_Counter
      0009E4 7B 00            [12] 2462 	mov	r3,#0x00
      0009E6 C3               [12] 2463 	clr	c
      0009E7 EA               [12] 2464 	mov	a,r2
      0009E8 9C               [12] 2465 	subb	a,r4
      0009E9 EB               [12] 2466 	mov	a,r3
      0009EA 64 80            [12] 2467 	xrl	a,#0x80
      0009EC 8E F0            [24] 2468 	mov	b,r6
      0009EE 63 F0 80         [24] 2469 	xrl	b,#0x80
      0009F1 95 F0            [12] 2470 	subb	a,b
      0009F3 50 1A            [24] 2471 	jnc	00326$
                                   2472 ;	MagnetoZ-C8051F990-Simplicity_main.c:1393: VOLTAGE_REG_CONTROL = 1;
      0009F5 D2 90            [12] 2473 	setb	_VOLTAGE_REG_CONTROL
                                   2474 ;	MagnetoZ-C8051F990-Simplicity_main.c:1395: ++Turn_ON_VR_Counter;
      0009F7 05 57            [12] 2475 	inc	_Turn_ON_VR_Counter
                                   2476 ;	MagnetoZ-C8051F990-Simplicity_main.c:1398: UseTimer0(WAIT_TICKS, 2);
      0009F9 75 0E 02         [24] 2477 	mov	_UseTimer0_PARM_2,#0x02
      0009FC 75 0F 00         [24] 2478 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      0009FF 90 D0 26         [24] 2479 	mov	dptr,#0xD026
      000A02 C0 07            [24] 2480 	push	ar7
      000A04 C0 05            [24] 2481 	push	ar5
      000A06 12 0C F1         [24] 2482 	lcall	_UseTimer0
      000A09 D0 05            [24] 2483 	pop	ar5
      000A0B D0 07            [24] 2484 	pop	ar7
      000A0D 80 03            [24] 2485 	sjmp	00331$
      000A0F                       2486 00326$:
                                   2487 ;	MagnetoZ-C8051F990-Simplicity_main.c:1401: Turn_ON_VR_Counter = 0;
      000A0F 75 57 00         [24] 2488 	mov	_Turn_ON_VR_Counter,#0x00
      000A12                       2489 00331$:
                                   2490 ;	MagnetoZ-C8051F990-Simplicity_main.c:1405: ZWAVE_MODULE_CONTROL = 0;
      000A12 C2 92            [12] 2491 	clr	_ZWAVE_MODULE_CONTROL
                                   2492 ;	MagnetoZ-C8051F990-Simplicity_main.c:1408: T0_Tick_Counter = 0;
      000A14 E4               [12] 2493 	clr	a
      000A15 F5 5C            [12] 2494 	mov	_T0_Tick_Counter,a
      000A17 F5 5D            [12] 2495 	mov	(_T0_Tick_Counter + 1),a
                                   2496 ;	MagnetoZ-C8051F990-Simplicity_main.c:1411: CKCON &= ~0x04;                       // Timer0 uses the system clock
      000A19 AE 8E            [24] 2497 	mov	r6,_CKCON
      000A1B 74 FB            [12] 2498 	mov	a,#0xFB
      000A1D 5E               [12] 2499 	anl	a,r6
      000A1E F5 8E            [12] 2500 	mov	_CKCON,a
                                   2501 ;	MagnetoZ-C8051F990-Simplicity_main.c:1412: TL0 = 0;
      000A20 75 8A 00         [24] 2502 	mov	_TL0,#0x00
                                   2503 ;	MagnetoZ-C8051F990-Simplicity_main.c:1413: TH0 = 0;
      000A23 75 8C 00         [24] 2504 	mov	_TH0,#0x00
                                   2505 ;	MagnetoZ-C8051F990-Simplicity_main.c:1414: TR0 = 1;      //{**                   // Timer0 ON
      000A26 D2 8C            [12] 2506 	setb	_TR0
                                   2507 ;	MagnetoZ-C8051F990-Simplicity_main.c:1415: PCA0CPH2 = 0x00;  //Reset WatchDog
      000A28 75 EC 00         [24] 2508 	mov	_PCA0CPH2,#0x00
                                   2509 ;	MagnetoZ-C8051F990-Simplicity_main.c:1416: FLSCL &= ~BYPASS;     // Clear the one-shot bypass bit
      000A2B AE B6            [24] 2510 	mov	r6,_FLSCL
      000A2D 74 BF            [12] 2511 	mov	a,#0xBF
      000A2F 5E               [12] 2512 	anl	a,r6
      000A30 F5 B6            [12] 2513 	mov	_FLSCL,a
                                   2514 ;	MagnetoZ-C8051F990-Simplicity_main.c:1417: PCON = 0x01; //Put the microcontroller in Idle mode.
      000A32 75 87 01         [24] 2515 	mov	_PCON,#0x01
      000A35                       2516 00335$:
                                   2517 ;	MagnetoZ-C8051F990-Simplicity_main.c:1423: if (InterpretPacket)
      000A35 30 05 0B         [24] 2518 	jnb	_InterpretPacket,00339$
                                   2519 ;	MagnetoZ-C8051F990-Simplicity_main.c:1424: InterpretUARTInfo();
      000A38 C0 07            [24] 2520 	push	ar7
      000A3A C0 05            [24] 2521 	push	ar5
      000A3C 12 0F 1B         [24] 2522 	lcall	_InterpretUARTInfo
      000A3F D0 05            [24] 2523 	pop	ar5
      000A41 D0 07            [24] 2524 	pop	ar7
      000A43                       2525 00339$:
                                   2526 ;	MagnetoZ-C8051F990-Simplicity_main.c:1429: if (ZWaveOn)
      000A43 20 04 03         [24] 2527 	jb	_ZWaveOn,00937$
      000A46 02 0B 7A         [24] 2528 	ljmp	00366$
      000A49                       2529 00937$:
                                   2530 ;	MagnetoZ-C8051F990-Simplicity_main.c:1431: if ( (1 == T0_Tick_Counter)
      000A49 74 01            [12] 2531 	mov	a,#0x01
      000A4B B5 5C 06         [24] 2532 	cjne	a,_T0_Tick_Counter,00938$
      000A4E E4               [12] 2533 	clr	a
      000A4F B5 5D 02         [24] 2534 	cjne	a,(_T0_Tick_Counter + 1),00938$
      000A52 80 03            [24] 2535 	sjmp	00939$
      000A54                       2536 00938$:
      000A54 02 0B 7A         [24] 2537 	ljmp	00366$
      000A57                       2538 00939$:
                                   2539 ;	MagnetoZ-C8051F990-Simplicity_main.c:1432: && (!Z_Received) )
      000A57 30 08 03         [24] 2540 	jnb	_Z_Received,00940$
      000A5A 02 0B 7A         [24] 2541 	ljmp	00366$
      000A5D                       2542 00940$:
                                   2543 ;	MagnetoZ-C8051F990-Simplicity_main.c:1434: ++ZW_TimeOut_Counter;
      000A5D 05 5E            [12] 2544 	inc	_ZW_TimeOut_Counter
                                   2545 ;	MagnetoZ-C8051F990-Simplicity_main.c:1436: if (3 > ZW_TimeOut_Counter)
      000A5F 74 FD            [12] 2546 	mov	a,#0x100 - 0x03
      000A61 25 5E            [12] 2547 	add	a,_ZW_TimeOut_Counter
      000A63 50 03            [24] 2548 	jnc	00941$
      000A65 02 0B 6A         [24] 2549 	ljmp	00359$
      000A68                       2550 00941$:
                                   2551 ;	MagnetoZ-C8051F990-Simplicity_main.c:1438: ZW_TimeOut_Flag = 1;
      000A68 D2 12            [12] 2552 	setb	_ZW_TimeOut_Flag
                                   2553 ;	MagnetoZ-C8051F990-Simplicity_main.c:1441: ZWAVE_MODULE_CONTROL = 1;
      000A6A D2 92            [12] 2554 	setb	_ZWAVE_MODULE_CONTROL
                                   2555 ;	MagnetoZ-C8051F990-Simplicity_main.c:1443: if (!BattIsDead)
      000A6C 20 09 02         [24] 2556 	jb	_BattIsDead,00341$
                                   2557 ;	MagnetoZ-C8051F990-Simplicity_main.c:1445: VOLTAGE_REG_CONTROL = 0;
      000A6F C2 90            [12] 2558 	clr	_VOLTAGE_REG_CONTROL
      000A71                       2559 00341$:
                                   2560 ;	MagnetoZ-C8051F990-Simplicity_main.c:1447: TR0 = 0;                            // Timer0 OFF
      000A71 C2 8C            [12] 2561 	clr	_TR0
                                   2562 ;	MagnetoZ-C8051F990-Simplicity_main.c:1448: CKCON |= 0x04;                       // Timer0 uses the system clock
      000A73 43 8E 04         [24] 2563 	orl	_CKCON,#0x04
                                   2564 ;	MagnetoZ-C8051F990-Simplicity_main.c:1451: UseTimer0(WAIT_TICKS, 100);
      000A76 75 0E 64         [24] 2565 	mov	_UseTimer0_PARM_2,#0x64
      000A79 75 0F 00         [24] 2566 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      000A7C 90 D0 26         [24] 2567 	mov	dptr,#0xD026
      000A7F C0 07            [24] 2568 	push	ar7
      000A81 C0 05            [24] 2569 	push	ar5
      000A83 12 0C F1         [24] 2570 	lcall	_UseTimer0
      000A86 D0 05            [24] 2571 	pop	ar5
      000A88 D0 07            [24] 2572 	pop	ar7
                                   2573 ;	MagnetoZ-C8051F990-Simplicity_main.c:1454: if ( (FirstTimeVR) && (10 > MagnetoZ_Info.FailZWCounter) )
      000A8A 30 0C 0B         [24] 2574 	jnb	_FirstTimeVR,00343$
      000A8D AE 6C            [24] 2575 	mov	r6,(_MagnetoZ_Info + 0x000d)
      000A8F BE 0A 00         [24] 2576 	cjne	r6,#0x0A,00944$
      000A92                       2577 00944$:
      000A92 50 04            [24] 2578 	jnc	00343$
                                   2579 ;	MagnetoZ-C8051F990-Simplicity_main.c:1455: ++MagnetoZ_Info.FailZWCounter;
      000A94 EE               [12] 2580 	mov	a,r6
      000A95 04               [12] 2581 	inc	a
      000A96 F5 6C            [12] 2582 	mov	(_MagnetoZ_Info + 0x000d),a
      000A98                       2583 00343$:
                                   2584 ;	MagnetoZ-C8051F990-Simplicity_main.c:1457: if ( (0x00 == MagnetoZ_Info.Day_VR_FirstTime)
      000A98 E5 6D            [12] 2585 	mov	a,(_MagnetoZ_Info + 0x000e)
      000A9A 45 6E            [12] 2586 	orl	a,((_MagnetoZ_Info + 0x000e) + 1)
      000A9C 70 19            [24] 2587 	jnz	00346$
                                   2588 ;	MagnetoZ-C8051F990-Simplicity_main.c:1458: && (0 < MagnetoZ_Info.FailZWCounter) )
      000A9E E5 6C            [12] 2589 	mov	a,(_MagnetoZ_Info + 0x000d)
      000AA0 24 FF            [12] 2590 	add	a,#0xff - 0x00
      000AA2 50 13            [24] 2591 	jnc	00346$
                                   2592 ;	MagnetoZ-C8051F990-Simplicity_main.c:1460: MagnetoZ_Info.Day_VR_FirstTime = MagnetoZ_Info.ActualHalfDays;
      000AA4 AC 65            [24] 2593 	mov	r4,((_MagnetoZ_Info + 0x0006) + 0)
      000AA6 AE 66            [24] 2594 	mov	r6,((_MagnetoZ_Info + 0x0006) + 1)
      000AA8 8C 6D            [24] 2595 	mov	((_MagnetoZ_Info + 0x000e) + 0),r4
      000AAA 8E 6E            [24] 2596 	mov	((_MagnetoZ_Info + 0x000e) + 1),r6
                                   2597 ;	MagnetoZ-C8051F990-Simplicity_main.c:1461: Flash_Write();
      000AAC C0 07            [24] 2598 	push	ar7
      000AAE C0 05            [24] 2599 	push	ar5
      000AB0 12 18 8E         [24] 2600 	lcall	_Flash_Write
      000AB3 D0 05            [24] 2601 	pop	ar5
      000AB5 D0 07            [24] 2602 	pop	ar7
      000AB7                       2603 00346$:
                                   2604 ;	MagnetoZ-C8051F990-Simplicity_main.c:1464: if (Temperature_ref	< MeasureTemperature())
      000AB7 C0 07            [24] 2605 	push	ar7
      000AB9 C0 05            [24] 2606 	push	ar5
      000ABB 12 0D 53         [24] 2607 	lcall	_MeasureTemperature
      000ABE AC 82            [24] 2608 	mov	r4,dpl
      000AC0 AE 83            [24] 2609 	mov	r6,dph
      000AC2 D0 05            [24] 2610 	pop	ar5
      000AC4 D0 07            [24] 2611 	pop	ar7
      000AC6 E5 58            [12] 2612 	mov	a,_Temperature_ref
      000AC8 FA               [12] 2613 	mov	r2,a
      000AC9 33               [12] 2614 	rlc	a
      000ACA 95 E0            [12] 2615 	subb	a,acc
      000ACC FB               [12] 2616 	mov	r3,a
      000ACD C3               [12] 2617 	clr	c
      000ACE EA               [12] 2618 	mov	a,r2
      000ACF 9C               [12] 2619 	subb	a,r4
      000AD0 EB               [12] 2620 	mov	a,r3
      000AD1 64 80            [12] 2621 	xrl	a,#0x80
      000AD3 8E F0            [24] 2622 	mov	b,r6
      000AD5 63 F0 80         [24] 2623 	xrl	b,#0x80
      000AD8 95 F0            [12] 2624 	subb	a,b
      000ADA 50 11            [24] 2625 	jnc	00349$
                                   2626 ;	MagnetoZ-C8051F990-Simplicity_main.c:1465: Temperature_ref	= MeasureTemperature();
      000ADC C0 07            [24] 2627 	push	ar7
      000ADE C0 05            [24] 2628 	push	ar5
      000AE0 12 0D 53         [24] 2629 	lcall	_MeasureTemperature
      000AE3 AC 82            [24] 2630 	mov	r4,dpl
      000AE5 AE 83            [24] 2631 	mov	r6,dph
      000AE7 D0 05            [24] 2632 	pop	ar5
      000AE9 D0 07            [24] 2633 	pop	ar7
      000AEB 8C 58            [24] 2634 	mov	_Temperature_ref,r4
      000AED                       2635 00349$:
                                   2636 ;	MagnetoZ-C8051F990-Simplicity_main.c:1466: DetermineBattPercentage();
      000AED C0 07            [24] 2637 	push	ar7
      000AEF C0 05            [24] 2638 	push	ar5
      000AF1 12 0D 4C         [24] 2639 	lcall	_DetermineBattPercentage
      000AF4 D0 05            [24] 2640 	pop	ar5
      000AF6 D0 07            [24] 2641 	pop	ar7
                                   2642 ;	MagnetoZ-C8051F990-Simplicity_main.c:1468: if ( (BattIsDead) || ( (10 == MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) ) )		//Always use V.R.
      000AF8 20 09 08         [24] 2643 	jb	_BattIsDead,00353$
      000AFB 74 0A            [12] 2644 	mov	a,#0x0A
      000AFD B5 6C 1E         [24] 2645 	cjne	a,(_MagnetoZ_Info + 0x000d),00354$
      000B00 30 0C 1B         [24] 2646 	jnb	_FirstTimeVR,00354$
      000B03                       2647 00353$:
                                   2648 ;	MagnetoZ-C8051F990-Simplicity_main.c:1470: VOLTAGE_REG_CONTROL = 1;
      000B03 D2 90            [12] 2649 	setb	_VOLTAGE_REG_CONTROL
                                   2650 ;	MagnetoZ-C8051F990-Simplicity_main.c:1472: Turn_ON_VR_Counter = 10;//for condition: ( (10 == MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) )
      000B05 75 57 0A         [24] 2651 	mov	_Turn_ON_VR_Counter,#0x0A
                                   2652 ;	MagnetoZ-C8051F990-Simplicity_main.c:1475: UseTimer0(WAIT_TICKS, 2);
      000B08 75 0E 02         [24] 2653 	mov	_UseTimer0_PARM_2,#0x02
      000B0B 75 0F 00         [24] 2654 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      000B0E 90 D0 26         [24] 2655 	mov	dptr,#0xD026
      000B11 C0 07            [24] 2656 	push	ar7
      000B13 C0 05            [24] 2657 	push	ar5
      000B15 12 0C F1         [24] 2658 	lcall	_UseTimer0
      000B18 D0 05            [24] 2659 	pop	ar5
      000B1A D0 07            [24] 2660 	pop	ar7
      000B1C 80 37            [24] 2661 	sjmp	00355$
      000B1E                       2662 00354$:
                                   2663 ;	MagnetoZ-C8051F990-Simplicity_main.c:1477: else if ( (FirstTimeVR) && ( Turn_ON_VR_Counter < (MagnetoZ_Info.FailZWCounter*5) ) )
      000B1E 30 0C 34         [24] 2664 	jnb	_FirstTimeVR,00355$
      000B21 E5 6C            [12] 2665 	mov	a,(_MagnetoZ_Info + 0x000d)
      000B23 75 F0 05         [24] 2666 	mov	b,#0x05
      000B26 A4               [48] 2667 	mul	ab
      000B27 FC               [12] 2668 	mov	r4,a
      000B28 AE F0            [24] 2669 	mov	r6,b
      000B2A AA 57            [24] 2670 	mov	r2,_Turn_ON_VR_Counter
      000B2C 7B 00            [12] 2671 	mov	r3,#0x00
      000B2E C3               [12] 2672 	clr	c
      000B2F EA               [12] 2673 	mov	a,r2
      000B30 9C               [12] 2674 	subb	a,r4
      000B31 EB               [12] 2675 	mov	a,r3
      000B32 64 80            [12] 2676 	xrl	a,#0x80
      000B34 8E F0            [24] 2677 	mov	b,r6
      000B36 63 F0 80         [24] 2678 	xrl	b,#0x80
      000B39 95 F0            [12] 2679 	subb	a,b
      000B3B 50 18            [24] 2680 	jnc	00355$
                                   2681 ;	MagnetoZ-C8051F990-Simplicity_main.c:1479: VOLTAGE_REG_CONTROL = 1;
      000B3D D2 90            [12] 2682 	setb	_VOLTAGE_REG_CONTROL
                                   2683 ;	MagnetoZ-C8051F990-Simplicity_main.c:1481: ++Turn_ON_VR_Counter;
      000B3F 05 57            [12] 2684 	inc	_Turn_ON_VR_Counter
                                   2685 ;	MagnetoZ-C8051F990-Simplicity_main.c:1484: UseTimer0(WAIT_TICKS, 2);
      000B41 75 0E 02         [24] 2686 	mov	_UseTimer0_PARM_2,#0x02
      000B44 75 0F 00         [24] 2687 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      000B47 90 D0 26         [24] 2688 	mov	dptr,#0xD026
      000B4A C0 07            [24] 2689 	push	ar7
      000B4C C0 05            [24] 2690 	push	ar5
      000B4E 12 0C F1         [24] 2691 	lcall	_UseTimer0
      000B51 D0 05            [24] 2692 	pop	ar5
      000B53 D0 07            [24] 2693 	pop	ar7
      000B55                       2694 00355$:
                                   2695 ;	MagnetoZ-C8051F990-Simplicity_main.c:1488: FirstTimeVR = 1;
      000B55 D2 0C            [12] 2696 	setb	_FirstTimeVR
                                   2697 ;	MagnetoZ-C8051F990-Simplicity_main.c:1492: ZWAVE_MODULE_CONTROL = 0;
      000B57 C2 92            [12] 2698 	clr	_ZWAVE_MODULE_CONTROL
                                   2699 ;	MagnetoZ-C8051F990-Simplicity_main.c:1495: CKCON &= ~0x04;                       // Timer0 uses the system clock
      000B59 AE 8E            [24] 2700 	mov	r6,_CKCON
      000B5B 74 FB            [12] 2701 	mov	a,#0xFB
      000B5D 5E               [12] 2702 	anl	a,r6
      000B5E F5 8E            [12] 2703 	mov	_CKCON,a
                                   2704 ;	MagnetoZ-C8051F990-Simplicity_main.c:1496: TL0 = 0;
      000B60 75 8A 00         [24] 2705 	mov	_TL0,#0x00
                                   2706 ;	MagnetoZ-C8051F990-Simplicity_main.c:1497: TH0 = 0;
      000B63 75 8C 00         [24] 2707 	mov	_TH0,#0x00
                                   2708 ;	MagnetoZ-C8051F990-Simplicity_main.c:1498: TR0 = 1;      //{**                   // Timer0 ON
      000B66 D2 8C            [12] 2709 	setb	_TR0
      000B68 80 10            [24] 2710 	sjmp	00366$
      000B6A                       2711 00359$:
                                   2712 ;	MagnetoZ-C8051F990-Simplicity_main.c:1502: ZW_TimeOut_Counter = 0; //Reset counter
      000B6A 75 5E 00         [24] 2713 	mov	_ZW_TimeOut_Counter,#0x00
                                   2714 ;	MagnetoZ-C8051F990-Simplicity_main.c:1504: ZW_TimeOut_Flag = 0; //Normal failure
      000B6D C2 12            [12] 2715 	clr	_ZW_TimeOut_Flag
                                   2716 ;	MagnetoZ-C8051F990-Simplicity_main.c:1506: CommandFailed();
      000B6F C0 07            [24] 2717 	push	ar7
      000B71 C0 05            [24] 2718 	push	ar5
      000B73 12 15 FC         [24] 2719 	lcall	_CommandFailed
      000B76 D0 05            [24] 2720 	pop	ar5
      000B78 D0 07            [24] 2721 	pop	ar7
                                   2722 ;	MagnetoZ-C8051F990-Simplicity_main.c:1515: exit:
      000B7A                       2723 00366$:
                                   2724 ;	MagnetoZ-C8051F990-Simplicity_main.c:1518: if (!ZWaveOn)
      000B7A 20 04 35         [24] 2725 	jb	_ZWaveOn,00370$
                                   2726 ;	MagnetoZ-C8051F990-Simplicity_main.c:1521: if (MAX_PATTERN_DETECTION_TIME < MR_Control_On_count)
      000B7D E5 7A            [12] 2727 	mov	a,_main_MR_Control_On_count_1_81
      000B7F 24 EE            [12] 2728 	add	a,#0xff - 0x11
      000B81 50 13            [24] 2729 	jnc	00368$
                                   2730 ;	MagnetoZ-C8051F990-Simplicity_main.c:1524: MR_Control_On_count = 0;
      000B83 75 7A 00         [24] 2731 	mov	_main_MR_Control_On_count_1_81,#0x00
                                   2732 ;	MagnetoZ-C8051F990-Simplicity_main.c:1525: Include_count = 0;
      000B86 7D 00            [12] 2733 	mov	r5,#0x00
                                   2734 ;	MagnetoZ-C8051F990-Simplicity_main.c:1527: PatternDetected(COMMAND_8051_NONE);
      000B88 75 82 00         [24] 2735 	mov	dpl,#0x00
      000B8B C0 07            [24] 2736 	push	ar7
      000B8D C0 05            [24] 2737 	push	ar5
      000B8F 12 0D 57         [24] 2738 	lcall	_PatternDetected
      000B92 D0 05            [24] 2739 	pop	ar5
      000B94 D0 07            [24] 2740 	pop	ar7
      000B96                       2741 00368$:
                                   2742 ;	MagnetoZ-C8051F990-Simplicity_main.c:1531: VOLTAGE_REG_CONTROL = 0;
      000B96 C2 90            [12] 2743 	clr	_VOLTAGE_REG_CONTROL
                                   2744 ;	MagnetoZ-C8051F990-Simplicity_main.c:1536: PCA0CPH2 = 0x00;
      000B98 75 EC 00         [24] 2745 	mov	_PCA0CPH2,#0x00
                                   2746 ;	MagnetoZ-C8051F990-Simplicity_main.c:1538: LPM(SLEEP);   // Enter Sleep Until Next Alarm
      000B9B 75 82 80         [24] 2747 	mov	dpl,#0x80
      000B9E C0 07            [24] 2748 	push	ar7
      000BA0 C0 05            [24] 2749 	push	ar5
      000BA2 12 1A A8         [24] 2750 	lcall	_LPM
                                   2751 ;	MagnetoZ-C8051F990-Simplicity_main.c:1541: TimeTrack();
      000BA5 12 19 73         [24] 2752 	lcall	_TimeTrack
      000BA8 D0 05            [24] 2753 	pop	ar5
      000BAA D0 07            [24] 2754 	pop	ar7
                                   2755 ;	MagnetoZ-C8051F990-Simplicity_main.c:1546: PCA0CPH2 = 0x00;
      000BAC 75 EC 00         [24] 2756 	mov	_PCA0CPH2,#0x00
      000BAF 02 02 98         [24] 2757 	ljmp	00373$
      000BB2                       2758 00370$:
                                   2759 ;	MagnetoZ-C8051F990-Simplicity_main.c:1549: RTC_Alarm = 1;
      000BB2 75 0A 01         [24] 2760 	mov	_RTC_Alarm,#0x01
      000BB5 02 02 98         [24] 2761 	ljmp	00373$
                                   2762 ;------------------------------------------------------------
                                   2763 ;Allocation info for local variables in function 'TIMER0_ISR'
                                   2764 ;------------------------------------------------------------
                                   2765 ;	MagnetoZ-C8051F990-Simplicity_main.c:1567: INTERRUPT (TIMER0_ISR, INTERRUPT_TIMER0)
                                   2766 ;	-----------------------------------------
                                   2767 ;	 function TIMER0_ISR
                                   2768 ;	-----------------------------------------
      000BB8                       2769 _TIMER0_ISR:
      000BB8 C0 E0            [24] 2770 	push	acc
      000BBA C0 D0            [24] 2771 	push	psw
                                   2772 ;	MagnetoZ-C8051F990-Simplicity_main.c:1572: PCA0CPH2 = 0x00;
      000BBC 75 EC 00         [24] 2773 	mov	_PCA0CPH2,#0x00
                                   2774 ;	MagnetoZ-C8051F990-Simplicity_main.c:1574: ++T0_Tick_Counter;
      000BBF 05 5C            [12] 2775 	inc	_T0_Tick_Counter
      000BC1 E4               [12] 2776 	clr	a
      000BC2 B5 5C 02         [24] 2777 	cjne	a,_T0_Tick_Counter,00103$
      000BC5 05 5D            [12] 2778 	inc	(_T0_Tick_Counter + 1)
      000BC7                       2779 00103$:
      000BC7 D0 D0            [24] 2780 	pop	psw
      000BC9 D0 E0            [24] 2781 	pop	acc
      000BCB 32               [24] 2782 	reti
                                   2783 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2784 ;	eliminated unneeded push/pop dpl
                                   2785 ;	eliminated unneeded push/pop dph
                                   2786 ;	eliminated unneeded push/pop b
                                   2787 ;------------------------------------------------------------
                                   2788 ;Allocation info for local variables in function 'TIMER2_ISR'
                                   2789 ;------------------------------------------------------------
                                   2790 ;	MagnetoZ-C8051F990-Simplicity_main.c:1584: INTERRUPT (TIMER2_ISR, INTERRUPT_TIMER2)
                                   2791 ;	-----------------------------------------
                                   2792 ;	 function TIMER2_ISR
                                   2793 ;	-----------------------------------------
      000BCC                       2794 _TIMER2_ISR:
                                   2795 ;	MagnetoZ-C8051F990-Simplicity_main.c:1589: PCA0CPH2 = 0x00;
      000BCC 75 EC 00         [24] 2796 	mov	_PCA0CPH2,#0x00
      000BCF 32               [24] 2797 	reti
                                   2798 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2799 ;	eliminated unneeded push/pop psw
                                   2800 ;	eliminated unneeded push/pop dpl
                                   2801 ;	eliminated unneeded push/pop dph
                                   2802 ;	eliminated unneeded push/pop b
                                   2803 ;	eliminated unneeded push/pop acc
                                   2804 ;------------------------------------------------------------
                                   2805 ;Allocation info for local variables in function 'UART0_ISR'
                                   2806 ;------------------------------------------------------------
                                   2807 ;	MagnetoZ-C8051F990-Simplicity_main.c:1600: INTERRUPT(UART0_ISR, INTERRUPT_UART0)
                                   2808 ;	-----------------------------------------
                                   2809 ;	 function UART0_ISR
                                   2810 ;	-----------------------------------------
      000BD0                       2811 _UART0_ISR:
      000BD0 C0 E0            [24] 2812 	push	acc
      000BD2 C0 07            [24] 2813 	push	ar7
      000BD4 C0 01            [24] 2814 	push	ar1
      000BD6 C0 00            [24] 2815 	push	ar0
      000BD8 C0 D0            [24] 2816 	push	psw
      000BDA 75 D0 00         [24] 2817 	mov	psw,#0x00
                                   2818 ;	MagnetoZ-C8051F990-Simplicity_main.c:1605: PCA0CPH2 = 0x00;
      000BDD 75 EC 00         [24] 2819 	mov	_PCA0CPH2,#0x00
                                   2820 ;	MagnetoZ-C8051F990-Simplicity_main.c:1608: if (TI0 == 1)                   // Check if transmit flag is set
                                   2821 ;	MagnetoZ-C8051F990-Simplicity_main.c:1610: TI0 = 0;                           // Clear interrupt flag
      000BE0 10 99 02         [24] 2822 	jbc	_TI0,00134$
      000BE3 80 02            [24] 2823 	sjmp	00102$
      000BE5                       2824 00134$:
                                   2825 ;	MagnetoZ-C8051F990-Simplicity_main.c:1612: ByteSent = 1;
      000BE5 D2 0F            [12] 2826 	setb	_ByteSent
      000BE7                       2827 00102$:
                                   2828 ;	MagnetoZ-C8051F990-Simplicity_main.c:1615: if (RI0 == 1)
      000BE7 30 98 41         [24] 2829 	jnb	_RI0,00114$
                                   2830 ;	MagnetoZ-C8051F990-Simplicity_main.c:1617: if (UART_Buffer_Size == 0)  {      // If new word is entered
      000BEA E5 46            [12] 2831 	mov	a,_UART_Buffer_Size
                                   2832 ;	MagnetoZ-C8051F990-Simplicity_main.c:1618: UART_Input_First = 0;    }
      000BEC 70 02            [24] 2833 	jnz	00104$
      000BEE F5 47            [12] 2834 	mov	_UART_Input_First,a
      000BF0                       2835 00104$:
                                   2836 ;	MagnetoZ-C8051F990-Simplicity_main.c:1620: RI0 = 0;                           // Clear interrupt flag
      000BF0 C2 98            [12] 2837 	clr	_RI0
                                   2838 ;	MagnetoZ-C8051F990-Simplicity_main.c:1622: Byte = SBUF0;                      // Read a character from UART
      000BF2 85 99 49         [24] 2839 	mov	_Byte,_SBUF0
                                   2840 ;	MagnetoZ-C8051F990-Simplicity_main.c:1624: if (UART_Buffer_Size < UART_BUFFERSIZE)
      000BF5 74 E0            [12] 2841 	mov	a,#0x100 - 0x20
      000BF7 25 46            [12] 2842 	add	a,_UART_Buffer_Size
      000BF9 40 2A            [24] 2843 	jc	00110$
                                   2844 ;	MagnetoZ-C8051F990-Simplicity_main.c:1626: UART_Buffer[UART_Input_First] = Byte; // Store in array
      000BFB E5 47            [12] 2845 	mov	a,_UART_Input_First
      000BFD 24 26            [12] 2846 	add	a,#_UART_Buffer
      000BFF F8               [12] 2847 	mov	r0,a
      000C00 A6 49            [24] 2848 	mov	@r0,_Byte
                                   2849 ;	MagnetoZ-C8051F990-Simplicity_main.c:1628: switch (UART_Buffer[UART_Input_First])
      000C02 E5 47            [12] 2850 	mov	a,_UART_Input_First
      000C04 24 26            [12] 2851 	add	a,#_UART_Buffer
      000C06 F9               [12] 2852 	mov	r1,a
      000C07 87 07            [24] 2853 	mov	ar7,@r1
      000C09 BF 54 02         [24] 2854 	cjne	r7,#0x54,00138$
      000C0C 80 05            [24] 2855 	sjmp	00106$
      000C0E                       2856 00138$:
      000C0E BF 5A 0E         [24] 2857 	cjne	r7,#0x5A,00107$
                                   2858 ;	MagnetoZ-C8051F990-Simplicity_main.c:1632: Z_Received = 1;
      000C11 D2 08            [12] 2859 	setb	_Z_Received
                                   2860 ;	MagnetoZ-C8051F990-Simplicity_main.c:1636: case 'T':
      000C13                       2861 00106$:
                                   2862 ;	MagnetoZ-C8051F990-Simplicity_main.c:1638: InterpretPacket = 1;
      000C13 D2 05            [12] 2863 	setb	_InterpretPacket
                                   2864 ;	MagnetoZ-C8051F990-Simplicity_main.c:1640: UART_Buffer_Size = 0;
      000C15 75 46 00         [24] 2865 	mov	_UART_Buffer_Size,#0x00
                                   2866 ;	MagnetoZ-C8051F990-Simplicity_main.c:1643: UART_Actual_Size = UART_Input_First+1;
      000C18 E5 47            [12] 2867 	mov	a,_UART_Input_First
      000C1A 04               [12] 2868 	inc	a
      000C1B F5 48            [12] 2869 	mov	_UART_Actual_Size,a
                                   2870 ;	MagnetoZ-C8051F990-Simplicity_main.c:1645: break;
                                   2871 ;	MagnetoZ-C8051F990-Simplicity_main.c:1651: default:
      000C1D 80 0C            [24] 2872 	sjmp	00114$
      000C1F                       2873 00107$:
                                   2874 ;	MagnetoZ-C8051F990-Simplicity_main.c:1652: ++UART_Buffer_Size;             // Update array's size
      000C1F 05 46            [12] 2875 	inc	_UART_Buffer_Size
                                   2876 ;	MagnetoZ-C8051F990-Simplicity_main.c:1653: ++UART_Input_First;             // Update counter
      000C21 05 47            [12] 2877 	inc	_UART_Input_First
                                   2878 ;	MagnetoZ-C8051F990-Simplicity_main.c:1655: }
      000C23 80 06            [24] 2879 	sjmp	00114$
      000C25                       2880 00110$:
                                   2881 ;	MagnetoZ-C8051F990-Simplicity_main.c:1659: UART_Buffer_Size = 0;
      000C25 75 46 00         [24] 2882 	mov	_UART_Buffer_Size,#0x00
                                   2883 ;	MagnetoZ-C8051F990-Simplicity_main.c:1660: UART_Input_First = 0;
      000C28 75 47 00         [24] 2884 	mov	_UART_Input_First,#0x00
      000C2B                       2885 00114$:
      000C2B D0 D0            [24] 2886 	pop	psw
      000C2D D0 00            [24] 2887 	pop	ar0
      000C2F D0 01            [24] 2888 	pop	ar1
      000C31 D0 07            [24] 2889 	pop	ar7
      000C33 D0 E0            [24] 2890 	pop	acc
      000C35 32               [24] 2891 	reti
                                   2892 ;	eliminated unneeded push/pop dpl
                                   2893 ;	eliminated unneeded push/pop dph
                                   2894 ;	eliminated unneeded push/pop b
                                   2895 ;------------------------------------------------------------
                                   2896 ;Allocation info for local variables in function 'Init'
                                   2897 ;------------------------------------------------------------
                                   2898 ;	MagnetoZ-C8051F990-Simplicity_main.c:1678: void Init (void)
                                   2899 ;	-----------------------------------------
                                   2900 ;	 function Init
                                   2901 ;	-----------------------------------------
      000C36                       2902 _Init:
                                   2903 ;	MagnetoZ-C8051F990-Simplicity_main.c:1682: P0MDIN  |=  0x8E;
      000C36 43 F1 8E         [24] 2904 	orl	_P0MDIN,#0x8E
                                   2905 ;	MagnetoZ-C8051F990-Simplicity_main.c:1687: P0MDIN  &= ~0x41;
      000C39 AF F1            [24] 2906 	mov	r7,_P0MDIN
      000C3B 74 BE            [12] 2907 	mov	a,#0xBE
      000C3D 5F               [12] 2908 	anl	a,r7
      000C3E F5 F1            [12] 2909 	mov	_P0MDIN,a
                                   2910 ;	MagnetoZ-C8051F990-Simplicity_main.c:1689: P0MDOUT |=  0x08;
      000C40 43 A4 08         [24] 2911 	orl	_P0MDOUT,#0x08
                                   2912 ;	MagnetoZ-C8051F990-Simplicity_main.c:1690: P0MDOUT &= ~0xF7;
      000C43 AF A4            [24] 2913 	mov	r7,_P0MDOUT
      000C45 74 08            [12] 2914 	mov	a,#0x08
      000C47 5F               [12] 2915 	anl	a,r7
      000C48 F5 A4            [12] 2916 	mov	_P0MDOUT,a
                                   2917 ;	MagnetoZ-C8051F990-Simplicity_main.c:1692: P0      |= 0xEF;
      000C4A 43 80 EF         [24] 2918 	orl	_P0,#0xEF
                                   2919 ;	MagnetoZ-C8051F990-Simplicity_main.c:1693: P0SKIP  |= 0xCF;
      000C4D 43 D4 CF         [24] 2920 	orl	_P0SKIP,#0xCF
                                   2921 ;	MagnetoZ-C8051F990-Simplicity_main.c:1696: P1MDIN  |=  0x65;
      000C50 43 F2 65         [24] 2922 	orl	_P1MDIN,#0x65
                                   2923 ;	MagnetoZ-C8051F990-Simplicity_main.c:1697: P1MDIN  &= ~0x8A;
      000C53 AF F2            [24] 2924 	mov	r7,_P1MDIN
      000C55 74 75            [12] 2925 	mov	a,#0x75
      000C57 5F               [12] 2926 	anl	a,r7
      000C58 F5 F2            [12] 2927 	mov	_P1MDIN,a
                                   2928 ;	MagnetoZ-C8051F990-Simplicity_main.c:1699: P1MDOUT |=  0x05;
      000C5A 43 A5 05         [24] 2929 	orl	_P1MDOUT,#0x05
                                   2930 ;	MagnetoZ-C8051F990-Simplicity_main.c:1700: P1MDOUT &= ~0xFA;
      000C5D AF A5            [24] 2931 	mov	r7,_P1MDOUT
      000C5F 74 05            [12] 2932 	mov	a,#0x05
      000C61 5F               [12] 2933 	anl	a,r7
      000C62 F5 A5            [12] 2934 	mov	_P1MDOUT,a
                                   2935 ;	MagnetoZ-C8051F990-Simplicity_main.c:1702: P1      |= 0xEE;
      000C64 43 90 EE         [24] 2936 	orl	_P1,#0xEE
                                   2937 ;	MagnetoZ-C8051F990-Simplicity_main.c:1703: P1SKIP  |= 0xFF;
      000C67 E5 D5            [12] 2938 	mov	a,_P1SKIP
      000C69 75 D5 FF         [24] 2939 	mov	_P1SKIP,#0xFF
                                   2940 ;	MagnetoZ-C8051F990-Simplicity_main.c:1707: XBR0    =  0x00;                     // Disable UART on P0.4(TX) and P0.5(RX)
      000C6C 75 E1 00         [24] 2941 	mov	_XBR0,#0x00
                                   2942 ;	MagnetoZ-C8051F990-Simplicity_main.c:1709: XBR2    =  0x40;                     // enable weak pull-ups and enable crossbar
      000C6F 75 E3 40         [24] 2943 	mov	_XBR2,#0x40
                                   2944 ;	MagnetoZ-C8051F990-Simplicity_main.c:1712: REG0CN |= 0x10;                     // Enable the precision osc. bias
      000C72 43 C9 10         [24] 2945 	orl	_REG0CN,#0x10
                                   2946 ;	MagnetoZ-C8051F990-Simplicity_main.c:1713: OSCICN |= 0x80;                     // Enable the precision internal osc.
      000C75 43 B2 80         [24] 2947 	orl	_OSCICN,#0x80
                                   2948 ;	MagnetoZ-C8051F990-Simplicity_main.c:1715: RSTSRC = 0x06;                      // Enable missing clock detector and
      000C78 75 EF 06         [24] 2949 	mov	_RSTSRC,#0x06
                                   2950 ;	MagnetoZ-C8051F990-Simplicity_main.c:1718: CLKSEL = 0x20;                      // Select precision internal osc.
      000C7B 75 A9 20         [24] 2951 	mov	_CLKSEL,#0x20
                                   2952 ;	MagnetoZ-C8051F990-Simplicity_main.c:1721: EX0 = 0;                            // Disable /INT0 interrupts
      000C7E C2 A8            [12] 2953 	clr	_EX0
                                   2954 ;	MagnetoZ-C8051F990-Simplicity_main.c:1722: EX1 = 0;                            // Disable /INT1 interrupts
      000C80 C2 AA            [12] 2955 	clr	_EX1
                                   2956 ;	MagnetoZ-C8051F990-Simplicity_main.c:1726: SCON0 = 0x10;                       // SCON0: 8-bit variable bit rate
      000C82 75 98 10         [24] 2957 	mov	_SCON0,#0x10
                                   2958 ;	MagnetoZ-C8051F990-Simplicity_main.c:1735: TH1 = (U8) -(UART_TIMER_HIGHER_BYTES);
      000C85 75 8D CB         [24] 2959 	mov	_TH1,#0xCB
                                   2960 ;	MagnetoZ-C8051F990-Simplicity_main.c:1737: CKCON &= ~0x0B;                  // T1M = 1; SCA1:0 = xx
      000C88 AF 8E            [24] 2961 	mov	r7,_CKCON
      000C8A 74 F4            [12] 2962 	mov	a,#0xF4
      000C8C 5F               [12] 2963 	anl	a,r7
      000C8D F5 8E            [12] 2964 	mov	_CKCON,a
                                   2965 ;	MagnetoZ-C8051F990-Simplicity_main.c:1738: CKCON |=  0x08;
      000C8F 43 8E 08         [24] 2966 	orl	_CKCON,#0x08
                                   2967 ;	MagnetoZ-C8051F990-Simplicity_main.c:1740: TL1 = TH1;                          // Init Timer1
      000C92 85 8D 8B         [24] 2968 	mov	_TL1,_TH1
                                   2969 ;	MagnetoZ-C8051F990-Simplicity_main.c:1741: TMOD &= ~0xf0;                      // TMOD: timer 1 in 8-bit autoreload
      000C95 AF 89            [24] 2970 	mov	r7,_TMOD
      000C97 74 0F            [12] 2971 	mov	a,#0x0F
      000C99 5F               [12] 2972 	anl	a,r7
      000C9A F5 89            [12] 2973 	mov	_TMOD,a
                                   2974 ;	MagnetoZ-C8051F990-Simplicity_main.c:1742: TMOD |=  0x20;
      000C9C 43 89 20         [24] 2975 	orl	_TMOD,#0x20
                                   2976 ;	MagnetoZ-C8051F990-Simplicity_main.c:1743: TR1 = 1;                            // START Timer1
      000C9F D2 8E            [12] 2977 	setb	_TR1
                                   2978 ;	MagnetoZ-C8051F990-Simplicity_main.c:1744: IP |= 0x10;                         // Make UART high priority
      000CA1 43 B8 10         [24] 2979 	orl	_IP,#0x10
                                   2980 ;	MagnetoZ-C8051F990-Simplicity_main.c:1745: ES0 = 0;                            // Disable UART0 interrupts
      000CA4 C2 AC            [12] 2981 	clr	_ES0
                                   2982 ;	MagnetoZ-C8051F990-Simplicity_main.c:1748: REF0CN = 0x18;        			   // The ADC0 voltage reference is the
      000CA6 75 D1 18         [24] 2983 	mov	_REF0CN,#0x18
                                   2984 ;	MagnetoZ-C8051F990-Simplicity_main.c:1752: ADC0CF = 0x09;
      000CA9 75 97 09         [24] 2985 	mov	_ADC0CF,#0x09
                                   2986 ;	MagnetoZ-C8051F990-Simplicity_main.c:1754: SFRPAGE = 0x0F;
      000CAC 75 A7 0F         [24] 2987 	mov	_SFRPAGE,#0x0F
                                   2988 ;	MagnetoZ-C8051F990-Simplicity_main.c:1755: ADC0PWR = 0x04;
      000CAF 75 BB 04         [24] 2989 	mov	_ADC0PWR,#0x04
                                   2990 ;	MagnetoZ-C8051F990-Simplicity_main.c:1756: SFRPAGE = 0x00;
      000CB2 75 A7 00         [24] 2991 	mov	_SFRPAGE,#0x00
                                   2992 ;	MagnetoZ-C8051F990-Simplicity_main.c:1760: ADC0AC = 0x00;                      // Right-justify results, shifted right
      000CB5 75 BA 00         [24] 2993 	mov	_ADC0AC,#0x00
                                   2994 ;	MagnetoZ-C8051F990-Simplicity_main.c:1765: TMOD |= 0x01;                        // Timer0 in 16-bit mode
      000CB8 43 89 01         [24] 2995 	orl	_TMOD,#0x01
                                   2996 ;	MagnetoZ-C8051F990-Simplicity_main.c:1766: CKCON |= 0x04;                       // Timer0 uses the system clock
      000CBB 43 8E 04         [24] 2997 	orl	_CKCON,#0x04
                                   2998 ;	MagnetoZ-C8051F990-Simplicity_main.c:1767: ET0=1;                              // Timer0 interrupt enabled
      000CBE D2 A9            [12] 2999 	setb	_ET0
                                   3000 ;	MagnetoZ-C8051F990-Simplicity_main.c:1769: CKCON |= 0x30;                     // Timer2 uses SYSCLK/12
      000CC0 43 8E 30         [24] 3001 	orl	_CKCON,#0x30
                                   3002 ;	MagnetoZ-C8051F990-Simplicity_main.c:1772: TMR2RL = 0x10BD;             			// Reload value to be used in Timer2
      000CC3 75 CA BD         [24] 3003 	mov	((_TMR2RL >> 0) & 0xFF),#0xBD
      000CC6 75 CB 10         [24] 3004 	mov	((_TMR2RL >> 8) & 0xFF),#0x10
                                   3005 ;	MagnetoZ-C8051F990-Simplicity_main.c:1773: TMR2 = 0x10BD;                      // Init the Timer2 register //0xFFFF-0x10BD = 61250, SYSCLK/61250=10 ms
      000CC9 75 CC BD         [24] 3006 	mov	((_TMR2 >> 0) & 0xFF),#0xBD
      000CCC 75 CD 10         [24] 3007 	mov	((_TMR2 >> 8) & 0xFF),#0x10
                                   3008 ;	MagnetoZ-C8051F990-Simplicity_main.c:1775: TMR2CN = 0x04;                      // Enable Timer2 in auto-reload mode
      000CCF 75 C8 04         [24] 3009 	mov	_TMR2CN,#0x04
                                   3010 ;	MagnetoZ-C8051F990-Simplicity_main.c:1777: TR2 = 1;
      000CD2 D2 CA            [12] 3011 	setb	_TR2
                                   3012 ;	MagnetoZ-C8051F990-Simplicity_main.c:1779: ET2 = 1;                            // Timer2 interrupt enabled
      000CD4 D2 AD            [12] 3013 	setb	_ET2
      000CD6 22               [24] 3014 	ret
                                   3015 ;------------------------------------------------------------
                                   3016 ;Allocation info for local variables in function 'PCA_Init'
                                   3017 ;------------------------------------------------------------
                                   3018 ;	MagnetoZ-C8051F990-Simplicity_main.c:1792: void PCA_Init()
                                   3019 ;	-----------------------------------------
                                   3020 ;	 function PCA_Init
                                   3021 ;	-----------------------------------------
      000CD7                       3022 _PCA_Init:
                                   3023 ;	MagnetoZ-C8051F990-Simplicity_main.c:1794: PCA0CN     =  0x40;                // PCA counter enable
      000CD7 75 D8 40         [24] 3024 	mov	_PCA0CN,#0x40
                                   3025 ;	MagnetoZ-C8051F990-Simplicity_main.c:1795: PCA0MD    &= ~0x40;               // Watchdog timer disabled-clearing bit 6
      000CDA AF D9            [24] 3026 	mov	r7,_PCA0MD
      000CDC 74 BF            [12] 3027 	mov	a,#0xBF
      000CDE 5F               [12] 3028 	anl	a,r7
      000CDF F5 D9            [12] 3029 	mov	_PCA0MD,a
                                   3030 ;	MagnetoZ-C8051F990-Simplicity_main.c:1796: PCA0MD    &=  0xF1;                // timebase selected - System clock / 12
      000CE1 53 D9 F1         [24] 3031 	anl	_PCA0MD,#0xF1
                                   3032 ;	MagnetoZ-C8051F990-Simplicity_main.c:1798: PCA0L    = 0x00;                    // Set lower byte of PCA counter to 0
      000CE4 75 F9 00         [24] 3033 	mov	_PCA0L,#0x00
                                   3034 ;	MagnetoZ-C8051F990-Simplicity_main.c:1799: PCA0H    = 0x00;                    // Set higher byte of PCA counter to 0
      000CE7 75 FA 00         [24] 3035 	mov	_PCA0H,#0x00
                                   3036 ;	MagnetoZ-C8051F990-Simplicity_main.c:1800: PCA0CPL2   =  0xFF;                 // Offset value
      000CEA 75 EB FF         [24] 3037 	mov	_PCA0CPL2,#0xFF
                                   3038 ;	MagnetoZ-C8051F990-Simplicity_main.c:1802: PCA0MD  |= 0x40;                    // enable the WDT
      000CED 43 D9 40         [24] 3039 	orl	_PCA0MD,#0x40
      000CF0 22               [24] 3040 	ret
                                   3041 ;------------------------------------------------------------
                                   3042 ;Allocation info for local variables in function 'UseTimer0'
                                   3043 ;------------------------------------------------------------
                                   3044 ;count                     Allocated with name '_UseTimer0_PARM_2'
                                   3045 ;delay                     Allocated to registers r6 r7 
                                   3046 ;i                         Allocated to registers 
                                   3047 ;------------------------------------------------------------
                                   3048 ;	MagnetoZ-C8051F990-Simplicity_main.c:1819: void UseTimer0(U16 delay, U16 count)
                                   3049 ;	-----------------------------------------
                                   3050 ;	 function UseTimer0
                                   3051 ;	-----------------------------------------
      000CF1                       3052 _UseTimer0:
      000CF1 AE 82            [24] 3053 	mov	r6,dpl
      000CF3 AF 83            [24] 3054 	mov	r7,dph
                                   3055 ;	MagnetoZ-C8051F990-Simplicity_main.c:1823: ET2 	 = 0; //Turn Off Timer 2 interrupt
      000CF5 C2 AD            [12] 3056 	clr	_ET2
                                   3057 ;	MagnetoZ-C8051F990-Simplicity_main.c:1825: for (i = count; i!=0; i--)
      000CF7 AD 0E            [24] 3058 	mov	r5,_UseTimer0_PARM_2
      000CF9 8E 03            [24] 3059 	mov	ar3,r6
      000CFB 7C 00            [12] 3060 	mov	r4,#0x00
      000CFD 7E 00            [12] 3061 	mov	r6,#0x00
      000CFF                       3062 00103$:
      000CFF BD 00 02         [24] 3063 	cjne	r5,#0x00,00114$
      000D02 80 1D            [24] 3064 	sjmp	00101$
      000D04                       3065 00114$:
                                   3066 ;	MagnetoZ-C8051F990-Simplicity_main.c:1827: TL0 = (delay & 0x00FF);
      000D04 8B 8A            [24] 3067 	mov	_TL0,r3
                                   3068 ;	MagnetoZ-C8051F990-Simplicity_main.c:1828: TH0 = ((delay & 0xFF00)>>8);
      000D06 8F 8C            [24] 3069 	mov	_TH0,r7
                                   3070 ;	MagnetoZ-C8051F990-Simplicity_main.c:1829: TR0 = 1;     //{**                   // Timer0 ON
      000D08 D2 8C            [12] 3071 	setb	_TR0
                                   3072 ;	MagnetoZ-C8051F990-Simplicity_main.c:1830: PCA0CPH2 = 0x00;  //Reset WatchDog
      000D0A 75 EC 00         [24] 3073 	mov	_PCA0CPH2,#0x00
                                   3074 ;	MagnetoZ-C8051F990-Simplicity_main.c:1831: FLSCL &= ~BYPASS;     // Clear the one-shot bypass bit
      000D0D AE B6            [24] 3075 	mov	r6,_FLSCL
      000D0F 74 BF            [12] 3076 	mov	a,#0xBF
      000D11 5E               [12] 3077 	anl	a,r6
      000D12 F5 B6            [12] 3078 	mov	_FLSCL,a
                                   3079 ;	MagnetoZ-C8051F990-Simplicity_main.c:1832: PCON = 0x01; //Put the microcontroller in Idle mode.
      000D14 75 87 01         [24] 3080 	mov	_PCON,#0x01
                                   3081 ;	MagnetoZ-C8051F990-Simplicity_main.c:1833: T0_Tick_Counter = 0;
      000D17 E4               [12] 3082 	clr	a
      000D18 F5 5C            [12] 3083 	mov	_T0_Tick_Counter,a
      000D1A F5 5D            [12] 3084 	mov	(_T0_Tick_Counter + 1),a
                                   3085 ;	MagnetoZ-C8051F990-Simplicity_main.c:1834: TR0 = 0;   //{**                     // Timer0 OFF
      000D1C C2 8C            [12] 3086 	clr	_TR0
                                   3087 ;	MagnetoZ-C8051F990-Simplicity_main.c:1825: for (i = count; i!=0; i--)
      000D1E 1D               [12] 3088 	dec	r5
      000D1F 80 DE            [24] 3089 	sjmp	00103$
      000D21                       3090 00101$:
                                   3091 ;	MagnetoZ-C8051F990-Simplicity_main.c:1837: ET2 	 = 1; //Turn On Timer 2 interrupt
      000D21 D2 AD            [12] 3092 	setb	_ET2
      000D23 22               [24] 3093 	ret
                                   3094 ;------------------------------------------------------------
                                   3095 ;Allocation info for local variables in function 'CheckMRsensorStatus'
                                   3096 ;------------------------------------------------------------
                                   3097 ;	MagnetoZ-C8051F990-Simplicity_main.c:1850: void CheckMRsensorStatus()
                                   3098 ;	-----------------------------------------
                                   3099 ;	 function CheckMRsensorStatus
                                   3100 ;	-----------------------------------------
      000D24                       3101 _CheckMRsensorStatus:
                                   3102 ;	MagnetoZ-C8051F990-Simplicity_main.c:1853: MR_CONTROL_INVERTED = 0;
      000D24 C2 83            [12] 3103 	clr	_MR_CONTROL_INVERTED
                                   3104 ;	MagnetoZ-C8051F990-Simplicity_main.c:1855: if (!Pattern_Detection_flag)
      000D26 20 02 0C         [24] 3105 	jb	_Pattern_Detection_flag,00102$
                                   3106 ;	MagnetoZ-C8051F990-Simplicity_main.c:1857: UseTimer0(MR_CONTROL_TIMER, 1);
      000D29 75 0E 01         [24] 3107 	mov	_UseTimer0_PARM_2,#0x01
      000D2C 75 0F 00         [24] 3108 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      000D2F 90 FE 16         [24] 3109 	mov	dptr,#0xFE16
      000D32 12 0C F1         [24] 3110 	lcall	_UseTimer0
      000D35                       3111 00102$:
                                   3112 ;	MagnetoZ-C8051F990-Simplicity_main.c:1859: P1MDIN  |=  0x20;                   // P1.5 Digital
      000D35 43 F2 20         [24] 3113 	orl	_P1MDIN,#0x20
                                   3114 ;	MagnetoZ-C8051F990-Simplicity_main.c:1860: P0MDIN  |=  0x80;                   // P0.7 Digital
      000D38 43 F1 80         [24] 3115 	orl	_P0MDIN,#0x80
                                   3116 ;	MagnetoZ-C8051F990-Simplicity_main.c:1863: Current_Door_Status 			= DOOR_MR_SW;
      000D3B A2 95            [12] 3117 	mov	c,_DOOR_MR_SW
      000D3D 92 00            [24] 3118 	mov	_Current_Door_Status,c
                                   3119 ;	MagnetoZ-C8051F990-Simplicity_main.c:1864: Current_Include_MR_SW_Status 	= INCLUDE_MR_SW;
      000D3F A2 87            [12] 3120 	mov	c,_INCLUDE_MR_SW
      000D41 92 01            [24] 3121 	mov	_Current_Include_MR_SW_Status,c
                                   3122 ;	MagnetoZ-C8051F990-Simplicity_main.c:1866: P1MDIN  &= ~0x20;                   // P1.5 Analog
      000D43 AF F2            [24] 3123 	mov	r7,_P1MDIN
      000D45 74 DF            [12] 3124 	mov	a,#0xDF
      000D47 5F               [12] 3125 	anl	a,r7
      000D48 F5 F2            [12] 3126 	mov	_P1MDIN,a
      000D4A 22               [24] 3127 	ret
                                   3128 ;------------------------------------------------------------
                                   3129 ;Allocation info for local variables in function 'MeasureBattVoltage'
                                   3130 ;------------------------------------------------------------
                                   3131 ;	MagnetoZ-C8051F990-Simplicity_main.c:1881: void MeasureBattVoltage()
                                   3132 ;	-----------------------------------------
                                   3133 ;	 function MeasureBattVoltage
                                   3134 ;	-----------------------------------------
      000D4B                       3135 _MeasureBattVoltage:
                                   3136 ;	MagnetoZ-C8051F990-Simplicity_main.c:1943: }
      000D4B 22               [24] 3137 	ret
                                   3138 ;------------------------------------------------------------
                                   3139 ;Allocation info for local variables in function 'DetermineBattPercentage'
                                   3140 ;------------------------------------------------------------
                                   3141 ;	MagnetoZ-C8051F990-Simplicity_main.c:1956: void DetermineBattPercentage()
                                   3142 ;	-----------------------------------------
                                   3143 ;	 function DetermineBattPercentage
                                   3144 ;	-----------------------------------------
      000D4C                       3145 _DetermineBattPercentage:
                                   3146 ;	MagnetoZ-C8051F990-Simplicity_main.c:2022: }
      000D4C 22               [24] 3147 	ret
                                   3148 ;------------------------------------------------------------
                                   3149 ;Allocation info for local variables in function 'SendBattReport'
                                   3150 ;------------------------------------------------------------
                                   3151 ;	MagnetoZ-C8051F990-Simplicity_main.c:2034: void SendBattReport()
                                   3152 ;	-----------------------------------------
                                   3153 ;	 function SendBattReport
                                   3154 ;	-----------------------------------------
      000D4D                       3155 _SendBattReport:
                                   3156 ;	MagnetoZ-C8051F990-Simplicity_main.c:2036: SetCommand(MagnetoZ_Info.prevBatteryLevel);
      000D4D 85 6B 82         [24] 3157 	mov	dpl,(_MagnetoZ_Info + 0x000c)
      000D50 02 0D 64         [24] 3158 	ljmp	_SetCommand
                                   3159 ;------------------------------------------------------------
                                   3160 ;Allocation info for local variables in function 'MeasureTemperature'
                                   3161 ;------------------------------------------------------------
                                   3162 ;Temperature               Allocated to registers 
                                   3163 ;------------------------------------------------------------
                                   3164 ;	MagnetoZ-C8051F990-Simplicity_main.c:2049: S16 MeasureTemperature()
                                   3165 ;	-----------------------------------------
                                   3166 ;	 function MeasureTemperature
                                   3167 ;	-----------------------------------------
      000D53                       3168 _MeasureTemperature:
                                   3169 ;	MagnetoZ-C8051F990-Simplicity_main.c:2089: return Temperature;
      000D53 90 00 00         [24] 3170 	mov	dptr,#0x0000
      000D56 22               [24] 3171 	ret
                                   3172 ;------------------------------------------------------------
                                   3173 ;Allocation info for local variables in function 'PatternDetected'
                                   3174 ;------------------------------------------------------------
                                   3175 ;cmd                       Allocated to registers r7 
                                   3176 ;------------------------------------------------------------
                                   3177 ;	MagnetoZ-C8051F990-Simplicity_main.c:2103: void PatternDetected(COMMAND cmd)
                                   3178 ;	-----------------------------------------
                                   3179 ;	 function PatternDetected
                                   3180 ;	-----------------------------------------
      000D57                       3181 _PatternDetected:
      000D57 AF 82            [24] 3182 	mov	r7,dpl
                                   3183 ;	MagnetoZ-C8051F990-Simplicity_main.c:2105: Pattern_Detection_flag = 0;
      000D59 C2 02            [12] 3184 	clr	_Pattern_Detection_flag
                                   3185 ;	MagnetoZ-C8051F990-Simplicity_main.c:2107: if (COMMAND_8051_NONE != cmd)
      000D5B EF               [12] 3186 	mov	a,r7
      000D5C 60 05            [24] 3187 	jz	00103$
                                   3188 ;	MagnetoZ-C8051F990-Simplicity_main.c:2108: SetCommand(cmd);
      000D5E 8F 82            [24] 3189 	mov	dpl,r7
      000D60 02 0D 64         [24] 3190 	ljmp	_SetCommand
      000D63                       3191 00103$:
      000D63 22               [24] 3192 	ret
                                   3193 ;------------------------------------------------------------
                                   3194 ;Allocation info for local variables in function 'SetCommand'
                                   3195 ;------------------------------------------------------------
                                   3196 ;cmd                       Allocated to registers r7 
                                   3197 ;Cmd_Temp                  Allocated to registers r6 
                                   3198 ;------------------------------------------------------------
                                   3199 ;	MagnetoZ-C8051F990-Simplicity_main.c:2122: void SetCommand(COMMAND cmd)
                                   3200 ;	-----------------------------------------
                                   3201 ;	 function SetCommand
                                   3202 ;	-----------------------------------------
      000D64                       3203 _SetCommand:
                                   3204 ;	MagnetoZ-C8051F990-Simplicity_main.c:2125: if ( (cmd != prevCommand) && ( (!ResendCmd_flag) && (!SuspendFlag) ) )
      000D64 E5 82            [12] 3205 	mov	a,dpl
      000D66 FF               [12] 3206 	mov	r7,a
      000D67 B5 52 02         [24] 3207 	cjne	a,_prevCommand,00147$
      000D6A 80 0D            [24] 3208 	sjmp	00114$
      000D6C                       3209 00147$:
      000D6C 20 06 0A         [24] 3210 	jb	_ResendCmd_flag,00114$
      000D6F 20 10 07         [24] 3211 	jb	_SuspendFlag,00114$
                                   3212 ;	MagnetoZ-C8051F990-Simplicity_main.c:2126: EnqueueCommand(cmd);
      000D72 8F 82            [24] 3213 	mov	dpl,r7
      000D74 12 18 53         [24] 3214 	lcall	_EnqueueCommand
      000D77 80 37            [24] 3215 	sjmp	00115$
      000D79                       3216 00114$:
                                   3217 ;	MagnetoZ-C8051F990-Simplicity_main.c:2127: else if (ZW_TimeOut_Flag)
      000D79 30 12 07         [24] 3218 	jnb	_ZW_TimeOut_Flag,00111$
                                   3219 ;	MagnetoZ-C8051F990-Simplicity_main.c:2128: EnqueueCommand(cmd);
      000D7C 8F 82            [24] 3220 	mov	dpl,r7
      000D7E 12 18 53         [24] 3221 	lcall	_EnqueueCommand
      000D81 80 2D            [24] 3222 	sjmp	00115$
      000D83                       3223 00111$:
                                   3224 ;	MagnetoZ-C8051F990-Simplicity_main.c:2129: else if ( (ResendCmd_flag) || (SuspendFlag) )	//New Open or Close Command. i.e. cmd == prevCommand
      000D83 20 06 03         [24] 3225 	jb	_ResendCmd_flag,00107$
      000D86 30 10 27         [24] 3226 	jnb	_SuspendFlag,00115$
      000D89                       3227 00107$:
                                   3228 ;	MagnetoZ-C8051F990-Simplicity_main.c:2131: switch (cmd)
      000D89 BF 06 02         [24] 3229 	cjne	r7,#0x06,00153$
      000D8C 80 15            [24] 3230 	sjmp	00104$
      000D8E                       3231 00153$:
      000D8E BF 07 02         [24] 3232 	cjne	r7,#0x07,00154$
      000D91 80 0A            [24] 3233 	sjmp	00102$
      000D93                       3234 00154$:
      000D93 BF 08 02         [24] 3235 	cjne	r7,#0x08,00155$
      000D96 80 05            [24] 3236 	sjmp	00102$
      000D98                       3237 00155$:
                                   3238 ;	MagnetoZ-C8051F990-Simplicity_main.c:2134: case COMMAND_8051_DOOR_OPEN:
      000D98 BF 0D 10         [24] 3239 	cjne	r7,#0x0D,00105$
      000D9B 80 06            [24] 3240 	sjmp	00104$
      000D9D                       3241 00102$:
                                   3242 ;	MagnetoZ-C8051F990-Simplicity_main.c:2136: Command_Queue[0] = cmd;
      000D9D 8F 4A            [24] 3243 	mov	_Command_Queue,r7
                                   3244 ;	MagnetoZ-C8051F990-Simplicity_main.c:2139: ResendCmd_flag 		= 0;
      000D9F C2 06            [12] 3245 	clr	_ResendCmd_flag
                                   3246 ;	MagnetoZ-C8051F990-Simplicity_main.c:2140: break;
                                   3247 ;	MagnetoZ-C8051F990-Simplicity_main.c:2143: case COMMAND_8051_DEVICE_RESET:
      000DA1 80 0D            [24] 3248 	sjmp	00115$
      000DA3                       3249 00104$:
                                   3250 ;	MagnetoZ-C8051F990-Simplicity_main.c:2147: Cmd_Temp = Command_Queue[1];
      000DA3 AE 4B            [24] 3251 	mov	r6,(_Command_Queue + 0x0001)
                                   3252 ;	MagnetoZ-C8051F990-Simplicity_main.c:2148: Command_Queue[1] = cmd;
      000DA5 8F 4B            [24] 3253 	mov	(_Command_Queue + 0x0001),r7
                                   3254 ;	MagnetoZ-C8051F990-Simplicity_main.c:2149: Command_Queue[2] = Cmd_Temp;
      000DA7 8E 4C            [24] 3255 	mov	(_Command_Queue + 0x0002),r6
                                   3256 ;	MagnetoZ-C8051F990-Simplicity_main.c:2151: break;
                                   3257 ;	MagnetoZ-C8051F990-Simplicity_main.c:2157: default:
      000DA9 80 05            [24] 3258 	sjmp	00115$
      000DAB                       3259 00105$:
                                   3260 ;	MagnetoZ-C8051F990-Simplicity_main.c:2158: Changequeue(cmd);
      000DAB 8F 82            [24] 3261 	mov	dpl,r7
      000DAD 12 18 85         [24] 3262 	lcall	_Changequeue
                                   3263 ;	MagnetoZ-C8051F990-Simplicity_main.c:2160: }
      000DB0                       3264 00115$:
                                   3265 ;	MagnetoZ-C8051F990-Simplicity_main.c:2163: SendCmd_flag = 1;
      000DB0 D2 07            [12] 3266 	setb	_SendCmd_flag
      000DB2 22               [24] 3267 	ret
                                   3268 ;------------------------------------------------------------
                                   3269 ;Allocation info for local variables in function 'TurnOffZWave'
                                   3270 ;------------------------------------------------------------
                                   3271 ;	MagnetoZ-C8051F990-Simplicity_main.c:2176: void TurnOffZWave()
                                   3272 ;	-----------------------------------------
                                   3273 ;	 function TurnOffZWave
                                   3274 ;	-----------------------------------------
      000DB3                       3275 _TurnOffZWave:
                                   3276 ;	MagnetoZ-C8051F990-Simplicity_main.c:2181: ES0 	= 0;
      000DB3 C2 AC            [12] 3277 	clr	_ES0
                                   3278 ;	MagnetoZ-C8051F990-Simplicity_main.c:2182: XBR0    = 0x00;
      000DB5 75 E1 00         [24] 3279 	mov	_XBR0,#0x00
                                   3280 ;	MagnetoZ-C8051F990-Simplicity_main.c:2183: P0MDOUT &= ~0x10;
      000DB8 AF A4            [24] 3281 	mov	r7,_P0MDOUT
      000DBA 74 EF            [12] 3282 	mov	a,#0xEF
      000DBC 5F               [12] 3283 	anl	a,r7
      000DBD F5 A4            [12] 3284 	mov	_P0MDOUT,a
                                   3285 ;	MagnetoZ-C8051F990-Simplicity_main.c:2186: ZWAVE_MODULE_CONTROL = 1;
      000DBF D2 92            [12] 3286 	setb	_ZWAVE_MODULE_CONTROL
                                   3287 ;	MagnetoZ-C8051F990-Simplicity_main.c:2188: TR0 = 0;                            // Timer0 OFF
      000DC1 C2 8C            [12] 3288 	clr	_TR0
                                   3289 ;	MagnetoZ-C8051F990-Simplicity_main.c:2189: CKCON |= 0x04;                       // Timer0 uses the system clock
      000DC3 43 8E 04         [24] 3290 	orl	_CKCON,#0x04
                                   3291 ;	MagnetoZ-C8051F990-Simplicity_main.c:2195: if ( ( 1 == Zs_Counter) && (0 == Turn_ON_VR_Counter) && (!BattIsDead) )
      000DC6 74 01            [12] 3292 	mov	a,#0x01
      000DC8 B5 59 23         [24] 3293 	cjne	a,_Zs_Counter,00108$
      000DCB E5 57            [12] 3294 	mov	a,_Turn_ON_VR_Counter
      000DCD 70 1F            [24] 3295 	jnz	00108$
      000DCF 20 09 1C         [24] 3296 	jb	_BattIsDead,00108$
                                   3297 ;	MagnetoZ-C8051F990-Simplicity_main.c:2197: if ( (10 < MagnetoZ_Info.FailZWCounter)
      000DD2 E5 6C            [12] 3298 	mov	a,(_MagnetoZ_Info + 0x000d)
      000DD4 FF               [12] 3299 	mov	r7,a
      000DD5 24 F5            [12] 3300 	add	a,#0xff - 0x0A
      000DD7 50 0A            [24] 3301 	jnc	00104$
                                   3302 ;	MagnetoZ-C8051F990-Simplicity_main.c:2198: && (13 > MagnetoZ_Info.FailZWCounter) )
      000DD9 BF 0D 00         [24] 3303 	cjne	r7,#0x0D,00141$
      000DDC                       3304 00141$:
      000DDC 50 05            [24] 3305 	jnc	00104$
                                   3306 ;	MagnetoZ-C8051F990-Simplicity_main.c:2203: MagnetoZ_Info.FailZWCounter = 10;
      000DDE 75 6C 0A         [24] 3307 	mov	(_MagnetoZ_Info + 0x000d),#0x0A
      000DE1 80 0B            [24] 3308 	sjmp	00108$
      000DE3                       3309 00104$:
                                   3310 ;	MagnetoZ-C8051F990-Simplicity_main.c:2205: else if ( 0 < MagnetoZ_Info.FailZWCounter )
      000DE3 EF               [12] 3311 	mov	a,r7
      000DE4 24 FF            [12] 3312 	add	a,#0xff - 0x00
      000DE6 50 06            [24] 3313 	jnc	00108$
                                   3314 ;	MagnetoZ-C8051F990-Simplicity_main.c:2207: --MagnetoZ_Info.FailZWCounter;
      000DE8 EF               [12] 3315 	mov	a,r7
      000DE9 14               [12] 3316 	dec	a
      000DEA F5 6C            [12] 3317 	mov	(_MagnetoZ_Info + 0x000d),a
                                   3318 ;	MagnetoZ-C8051F990-Simplicity_main.c:2209: FirstTimeVR = 0;
      000DEC C2 0C            [12] 3319 	clr	_FirstTimeVR
      000DEE                       3320 00108$:
                                   3321 ;	MagnetoZ-C8051F990-Simplicity_main.c:2217: Zs_Counter = 0;
      000DEE 75 59 00         [24] 3322 	mov	_Zs_Counter,#0x00
                                   3323 ;	MagnetoZ-C8051F990-Simplicity_main.c:2220: ZWaveOn = 0;
      000DF1 C2 04            [12] 3324 	clr	_ZWaveOn
                                   3325 ;	MagnetoZ-C8051F990-Simplicity_main.c:2221: Z_Received = 0;
      000DF3 C2 08            [12] 3326 	clr	_Z_Received
                                   3327 ;	MagnetoZ-C8051F990-Simplicity_main.c:2222: T0_Tick_Counter = ZW_On_Time = 0;
      000DF5 E4               [12] 3328 	clr	a
      000DF6 F5 5A            [12] 3329 	mov	_ZW_On_Time,a
      000DF8 F5 5B            [12] 3330 	mov	(_ZW_On_Time + 1),a
      000DFA F5 5C            [12] 3331 	mov	_T0_Tick_Counter,a
      000DFC F5 5D            [12] 3332 	mov	(_T0_Tick_Counter + 1),a
                                   3333 ;	MagnetoZ-C8051F990-Simplicity_main.c:2225: if (!BattIsDead)
      000DFE 20 09 02         [24] 3334 	jb	_BattIsDead,00113$
                                   3335 ;	MagnetoZ-C8051F990-Simplicity_main.c:2226: VOLTAGE_REG_CONTROL = 0;
      000E01 C2 90            [12] 3336 	clr	_VOLTAGE_REG_CONTROL
      000E03                       3337 00113$:
      000E03 22               [24] 3338 	ret
                                   3339 ;------------------------------------------------------------
                                   3340 ;Allocation info for local variables in function 'SendUARTCommand'
                                   3341 ;------------------------------------------------------------
                                   3342 ;cmd                       Allocated to registers r7 
                                   3343 ;------------------------------------------------------------
                                   3344 ;	MagnetoZ-C8051F990-Simplicity_main.c:2243: void SendUARTCommand(COMMAND cmd)
                                   3345 ;	-----------------------------------------
                                   3346 ;	 function SendUARTCommand
                                   3347 ;	-----------------------------------------
      000E04                       3348 _SendUARTCommand:
      000E04 AF 82            [24] 3349 	mov	r7,dpl
                                   3350 ;	MagnetoZ-C8051F990-Simplicity_main.c:2245: if (TI0)                  // Check if transmit flag is set
                                   3351 ;	MagnetoZ-C8051F990-Simplicity_main.c:2246: TI0 = 0;			  // Release the transmit interrupt flag
      000E06 10 99 02         [24] 3352 	jbc	_TI0,00187$
      000E09 80 00            [24] 3353 	sjmp	00102$
      000E0B                       3354 00187$:
      000E0B                       3355 00102$:
                                   3356 ;	MagnetoZ-C8051F990-Simplicity_main.c:2248: ByteSent = 0;
      000E0B C2 0F            [12] 3357 	clr	_ByteSent
                                   3358 ;	MagnetoZ-C8051F990-Simplicity_main.c:2250: ZW_On_Time = 50;
      000E0D 75 5A 32         [24] 3359 	mov	_ZW_On_Time,#0x32
      000E10 75 5B 00         [24] 3360 	mov	(_ZW_On_Time + 1),#0x00
                                   3361 ;	MagnetoZ-C8051F990-Simplicity_main.c:2252: switch (cmd)
      000E13 EF               [12] 3362 	mov	a,r7
      000E14 24 EF            [12] 3363 	add	a,#0xff - 0x10
      000E16 50 03            [24] 3364 	jnc	00188$
      000E18 02 0F 14         [24] 3365 	ljmp	00142$
      000E1B                       3366 00188$:
      000E1B EF               [12] 3367 	mov	a,r7
      000E1C 24 0A            [12] 3368 	add	a,#(00189$-3-.)
      000E1E 83               [24] 3369 	movc	a,@a+pc
      000E1F F5 82            [12] 3370 	mov	dpl,a
      000E21 EF               [12] 3371 	mov	a,r7
      000E22 24 15            [12] 3372 	add	a,#(00190$-3-.)
      000E24 83               [24] 3373 	movc	a,@a+pc
      000E25 F5 83            [12] 3374 	mov	dph,a
      000E27 E4               [12] 3375 	clr	a
      000E28 73               [24] 3376 	jmp	@a+dptr
      000E29                       3377 00189$:
      000E29 14                    3378 	.db	00142$
      000E2A DE                    3379 	.db	00131$
      000E2B CE                    3380 	.db	00127$
      000E2C D2                    3381 	.db	00128$
      000E2D DA                    3382 	.db	00130$
      000E2E D6                    3383 	.db	00129$
      000E2F E2                    3384 	.db	00132$
      000E30 55                    3385 	.db	00104$
      000E31 59                    3386 	.db	00105$
      000E32 AA                    3387 	.db	00116$
      000E33 10                    3388 	.db	00141$
      000E34 0C                    3389 	.db	00140$
      000E35 5D                    3390 	.db	00106$
      000E36 AE                    3391 	.db	00117$
      000E37 E6                    3392 	.db	00133$
      000E38 CA                    3393 	.db	00126$
      000E39 4B                    3394 	.db	00103$
      000E3A                       3395 00190$:
      000E3A 0F                    3396 	.db	00142$>>8
      000E3B 0E                    3397 	.db	00131$>>8
      000E3C 0E                    3398 	.db	00127$>>8
      000E3D 0E                    3399 	.db	00128$>>8
      000E3E 0E                    3400 	.db	00130$>>8
      000E3F 0E                    3401 	.db	00129$>>8
      000E40 0E                    3402 	.db	00132$>>8
      000E41 0E                    3403 	.db	00104$>>8
      000E42 0E                    3404 	.db	00105$>>8
      000E43 0E                    3405 	.db	00116$>>8
      000E44 0F                    3406 	.db	00141$>>8
      000E45 0F                    3407 	.db	00140$>>8
      000E46 0E                    3408 	.db	00106$>>8
      000E47 0E                    3409 	.db	00117$>>8
      000E48 0E                    3410 	.db	00133$>>8
      000E49 0E                    3411 	.db	00126$>>8
      000E4A 0E                    3412 	.db	00103$>>8
                                   3413 ;	MagnetoZ-C8051F990-Simplicity_main.c:2286: case COMMAND_8051_WAKE_UP_ZWAVE:
      000E4B                       3414 00103$:
                                   3415 ;	MagnetoZ-C8051F990-Simplicity_main.c:2287: SBUF0 = 'W';
      000E4B 75 99 57         [24] 3416 	mov	_SBUF0,#0x57
                                   3417 ;	MagnetoZ-C8051F990-Simplicity_main.c:2288: ZW_On_Time = 100;
      000E4E 75 5A 64         [24] 3418 	mov	_ZW_On_Time,#0x64
      000E51 75 5B 00         [24] 3419 	mov	(_ZW_On_Time + 1),#0x00
                                   3420 ;	MagnetoZ-C8051F990-Simplicity_main.c:2289: break;
      000E54 22               [24] 3421 	ret
                                   3422 ;	MagnetoZ-C8051F990-Simplicity_main.c:2291: case COMMAND_8051_DOOR_CLOSE:
      000E55                       3423 00104$:
                                   3424 ;	MagnetoZ-C8051F990-Simplicity_main.c:2292: SBUF0 = 'C';
      000E55 75 99 43         [24] 3425 	mov	_SBUF0,#0x43
                                   3426 ;	MagnetoZ-C8051F990-Simplicity_main.c:2294: break;
      000E58 22               [24] 3427 	ret
                                   3428 ;	MagnetoZ-C8051F990-Simplicity_main.c:2296: case COMMAND_8051_DOOR_OPEN:
      000E59                       3429 00105$:
                                   3430 ;	MagnetoZ-C8051F990-Simplicity_main.c:2297: SBUF0 = 'O';
      000E59 75 99 4F         [24] 3431 	mov	_SBUF0,#0x4F
                                   3432 ;	MagnetoZ-C8051F990-Simplicity_main.c:2299: break;
      000E5C 22               [24] 3433 	ret
                                   3434 ;	MagnetoZ-C8051F990-Simplicity_main.c:2301: case COMMAND_8051_LEARN_MODE_INCLUDE:
      000E5D                       3435 00106$:
                                   3436 ;	MagnetoZ-C8051F990-Simplicity_main.c:2304: SBUF0 = 'L';
      000E5D 75 99 4C         [24] 3437 	mov	_SBUF0,#0x4C
                                   3438 ;	MagnetoZ-C8051F990-Simplicity_main.c:2306: ByteSent = 0;
      000E60 C2 0F            [12] 3439 	clr	_ByteSent
                                   3440 ;	MagnetoZ-C8051F990-Simplicity_main.c:2309: while (!ByteSent)
      000E62                       3441 00107$:
      000E62 20 0F 05         [24] 3442 	jb	_ByteSent,00109$
                                   3443 ;	MagnetoZ-C8051F990-Simplicity_main.c:2311: PCA0CPH2 = 0x00;  //Reset WatchDog
      000E65 75 EC 00         [24] 3444 	mov	_PCA0CPH2,#0x00
      000E68 80 F8            [24] 3445 	sjmp	00107$
      000E6A                       3446 00109$:
                                   3447 ;	MagnetoZ-C8051F990-Simplicity_main.c:2314: TI0 = 0;
      000E6A C2 99            [12] 3448 	clr	_TI0
                                   3449 ;	MagnetoZ-C8051F990-Simplicity_main.c:2317: switch (MagnetoZ_Info.prevBatteryLevel)
      000E6C E5 6B            [12] 3450 	mov	a,(_MagnetoZ_Info + 0x000c)
      000E6E FF               [12] 3451 	mov	r7,a
      000E6F 24 FA            [12] 3452 	add	a,#0xff - 0x05
      000E71 40 30            [24] 3453 	jc	00115$
      000E73 EF               [12] 3454 	mov	a,r7
      000E74 2F               [12] 3455 	add	a,r7
      000E75 2F               [12] 3456 	add	a,r7
      000E76 90 0E 7A         [24] 3457 	mov	dptr,#00193$
      000E79 73               [24] 3458 	jmp	@a+dptr
      000E7A                       3459 00193$:
      000E7A 02 0E A3         [24] 3460 	ljmp	00115$
      000E7D 02 0E A0         [24] 3461 	ljmp	00114$
      000E80 02 0E 8C         [24] 3462 	ljmp	00110$
      000E83 02 0E 91         [24] 3463 	ljmp	00111$
      000E86 02 0E 9B         [24] 3464 	ljmp	00113$
      000E89 02 0E 96         [24] 3465 	ljmp	00112$
                                   3466 ;	MagnetoZ-C8051F990-Simplicity_main.c:2319: case COMMAND_8051_BATTERY_FULL:
      000E8C                       3467 00110$:
                                   3468 ;	MagnetoZ-C8051F990-Simplicity_main.c:2320: SBUF0 = 'F';
      000E8C 75 99 46         [24] 3469 	mov	_SBUF0,#0x46
                                   3470 ;	MagnetoZ-C8051F990-Simplicity_main.c:2321: break;
                                   3471 ;	MagnetoZ-C8051F990-Simplicity_main.c:2323: case COMMAND_8051_BATTERY_HIGH:
      000E8F 80 12            [24] 3472 	sjmp	00115$
      000E91                       3473 00111$:
                                   3474 ;	MagnetoZ-C8051F990-Simplicity_main.c:2324: SBUF0 = 'H';
      000E91 75 99 48         [24] 3475 	mov	_SBUF0,#0x48
                                   3476 ;	MagnetoZ-C8051F990-Simplicity_main.c:2325: break;
                                   3477 ;	MagnetoZ-C8051F990-Simplicity_main.c:2327: case COMMAND_8051_BATTERY_MEDIUM:
      000E94 80 0D            [24] 3478 	sjmp	00115$
      000E96                       3479 00112$:
                                   3480 ;	MagnetoZ-C8051F990-Simplicity_main.c:2328: SBUF0 = 'M';
      000E96 75 99 4D         [24] 3481 	mov	_SBUF0,#0x4D
                                   3482 ;	MagnetoZ-C8051F990-Simplicity_main.c:2329: break;
                                   3483 ;	MagnetoZ-C8051F990-Simplicity_main.c:2331: case COMMAND_8051_BATTERY_LOW:
      000E99 80 08            [24] 3484 	sjmp	00115$
      000E9B                       3485 00113$:
                                   3486 ;	MagnetoZ-C8051F990-Simplicity_main.c:2332: SBUF0 = 'P'; //Poor
      000E9B 75 99 50         [24] 3487 	mov	_SBUF0,#0x50
                                   3488 ;	MagnetoZ-C8051F990-Simplicity_main.c:2333: break;
                                   3489 ;	MagnetoZ-C8051F990-Simplicity_main.c:2335: case COMMAND_8051_BATTERY_DEAD:
      000E9E 80 03            [24] 3490 	sjmp	00115$
      000EA0                       3491 00114$:
                                   3492 ;	MagnetoZ-C8051F990-Simplicity_main.c:2336: SBUF0 = 'D';
      000EA0 75 99 44         [24] 3493 	mov	_SBUF0,#0x44
                                   3494 ;	MagnetoZ-C8051F990-Simplicity_main.c:2338: }
      000EA3                       3495 00115$:
                                   3496 ;	MagnetoZ-C8051F990-Simplicity_main.c:2340: ZW_On_Time = 554; //272; //Allow ZWave to be ON for cirka 30 seconds.
      000EA3 75 5A 2A         [24] 3497 	mov	_ZW_On_Time,#0x2A
      000EA6 75 5B 02         [24] 3498 	mov	(_ZW_On_Time + 1),#0x02
                                   3499 ;	MagnetoZ-C8051F990-Simplicity_main.c:2342: break;
      000EA9 22               [24] 3500 	ret
                                   3501 ;	MagnetoZ-C8051F990-Simplicity_main.c:2344: case COMMAND_8051_GET_IDS:
      000EAA                       3502 00116$:
                                   3503 ;	MagnetoZ-C8051F990-Simplicity_main.c:2345: SBUF0 = 'G'; //Fetch Node ID and Association ID
      000EAA 75 99 47         [24] 3504 	mov	_SBUF0,#0x47
                                   3505 ;	MagnetoZ-C8051F990-Simplicity_main.c:2347: break;
      000EAD 22               [24] 3506 	ret
                                   3507 ;	MagnetoZ-C8051F990-Simplicity_main.c:2349: case COMMAND_8051_LEARN_MODE_EXCLUDE:
      000EAE                       3508 00117$:
                                   3509 ;	MagnetoZ-C8051F990-Simplicity_main.c:2351: SBUF0 = 'E';
      000EAE 75 99 45         [24] 3510 	mov	_SBUF0,#0x45
                                   3511 ;	MagnetoZ-C8051F990-Simplicity_main.c:2353: if (!WakeUpNIFConfigFlag)
      000EB1 20 11 07         [24] 3512 	jb	_WakeUpNIFConfigFlag,00124$
                                   3513 ;	MagnetoZ-C8051F990-Simplicity_main.c:2354: ZW_On_Time = 100;
      000EB4 75 5A 64         [24] 3514 	mov	_ZW_On_Time,#0x64
      000EB7 75 5B 00         [24] 3515 	mov	(_ZW_On_Time + 1),#0x00
      000EBA 22               [24] 3516 	ret
      000EBB                       3517 00124$:
                                   3518 ;	MagnetoZ-C8051F990-Simplicity_main.c:2355: else if (WakeUpNIFConfigFlag)
      000EBB 30 11 5C         [24] 3519 	jnb	_WakeUpNIFConfigFlag,00146$
                                   3520 ;	MagnetoZ-C8051F990-Simplicity_main.c:2357: while (!ByteSent)
      000EBE                       3521 00118$:
      000EBE 20 0F 05         [24] 3522 	jb	_ByteSent,00120$
                                   3523 ;	MagnetoZ-C8051F990-Simplicity_main.c:2359: PCA0CPH2 = 0x00;  //Reset WatchDog
      000EC1 75 EC 00         [24] 3524 	mov	_PCA0CPH2,#0x00
      000EC4 80 F8            [24] 3525 	sjmp	00118$
      000EC6                       3526 00120$:
                                   3527 ;	MagnetoZ-C8051F990-Simplicity_main.c:2362: SBUF0 = 'W';
      000EC6 75 99 57         [24] 3528 	mov	_SBUF0,#0x57
                                   3529 ;	MagnetoZ-C8051F990-Simplicity_main.c:2365: break;
                                   3530 ;	MagnetoZ-C8051F990-Simplicity_main.c:2367: case COMMAND_8051_TAMPERING:
      000EC9 22               [24] 3531 	ret
      000ECA                       3532 00126$:
                                   3533 ;	MagnetoZ-C8051F990-Simplicity_main.c:2368: SBUF0 = 'A'; //Alarm Command
      000ECA 75 99 41         [24] 3534 	mov	_SBUF0,#0x41
                                   3535 ;	MagnetoZ-C8051F990-Simplicity_main.c:2370: break;
                                   3536 ;	MagnetoZ-C8051F990-Simplicity_main.c:2372: case COMMAND_8051_BATTERY_FULL:
      000ECD 22               [24] 3537 	ret
      000ECE                       3538 00127$:
                                   3539 ;	MagnetoZ-C8051F990-Simplicity_main.c:2374: SBUF0 = 'F';
      000ECE 75 99 46         [24] 3540 	mov	_SBUF0,#0x46
                                   3541 ;	MagnetoZ-C8051F990-Simplicity_main.c:2375: break;
                                   3542 ;	MagnetoZ-C8051F990-Simplicity_main.c:2377: case COMMAND_8051_BATTERY_HIGH:
      000ED1 22               [24] 3543 	ret
      000ED2                       3544 00128$:
                                   3545 ;	MagnetoZ-C8051F990-Simplicity_main.c:2379: SBUF0 = 'H';
      000ED2 75 99 48         [24] 3546 	mov	_SBUF0,#0x48
                                   3547 ;	MagnetoZ-C8051F990-Simplicity_main.c:2380: break;
                                   3548 ;	MagnetoZ-C8051F990-Simplicity_main.c:2382: case COMMAND_8051_BATTERY_MEDIUM:
      000ED5 22               [24] 3549 	ret
      000ED6                       3550 00129$:
                                   3551 ;	MagnetoZ-C8051F990-Simplicity_main.c:2384: SBUF0 = 'M';
      000ED6 75 99 4D         [24] 3552 	mov	_SBUF0,#0x4D
                                   3553 ;	MagnetoZ-C8051F990-Simplicity_main.c:2385: break;
                                   3554 ;	MagnetoZ-C8051F990-Simplicity_main.c:2387: case COMMAND_8051_BATTERY_LOW:
      000ED9 22               [24] 3555 	ret
      000EDA                       3556 00130$:
                                   3557 ;	MagnetoZ-C8051F990-Simplicity_main.c:2389: SBUF0 = 'P'; //Poor
      000EDA 75 99 50         [24] 3558 	mov	_SBUF0,#0x50
                                   3559 ;	MagnetoZ-C8051F990-Simplicity_main.c:2390: break;
                                   3560 ;	MagnetoZ-C8051F990-Simplicity_main.c:2392: case COMMAND_8051_BATTERY_DEAD:
      000EDD 22               [24] 3561 	ret
      000EDE                       3562 00131$:
                                   3563 ;	MagnetoZ-C8051F990-Simplicity_main.c:2394: SBUF0 = 'D';
      000EDE 75 99 44         [24] 3564 	mov	_SBUF0,#0x44
                                   3565 ;	MagnetoZ-C8051F990-Simplicity_main.c:2395: break;
                                   3566 ;	MagnetoZ-C8051F990-Simplicity_main.c:2397: case COMMAND_8051_DEVICE_RESET:
      000EE1 22               [24] 3567 	ret
      000EE2                       3568 00132$:
                                   3569 ;	MagnetoZ-C8051F990-Simplicity_main.c:2398: SBUF0 = 'R';
      000EE2 75 99 52         [24] 3570 	mov	_SBUF0,#0x52
                                   3571 ;	MagnetoZ-C8051F990-Simplicity_main.c:2400: break;
                                   3572 ;	MagnetoZ-C8051F990-Simplicity_main.c:2402: case COMMAND_8051_SET_IDS:
      000EE5 22               [24] 3573 	ret
      000EE6                       3574 00133$:
                                   3575 ;	MagnetoZ-C8051F990-Simplicity_main.c:2404: SBUF0 = 'S'; //Set Node ID and Association ID
      000EE6 75 99 53         [24] 3576 	mov	_SBUF0,#0x53
                                   3577 ;	MagnetoZ-C8051F990-Simplicity_main.c:2406: while (!ByteSent)
      000EE9                       3578 00134$:
      000EE9 20 0F 05         [24] 3579 	jb	_ByteSent,00136$
                                   3580 ;	MagnetoZ-C8051F990-Simplicity_main.c:2408: PCA0CPH2 = 0x00;  //Reset WatchDog
      000EEC 75 EC 00         [24] 3581 	mov	_PCA0CPH2,#0x00
      000EEF 80 F8            [24] 3582 	sjmp	00134$
      000EF1                       3583 00136$:
                                   3584 ;	MagnetoZ-C8051F990-Simplicity_main.c:2411: TI0 = 0;
      000EF1 C2 99            [12] 3585 	clr	_TI0
                                   3586 ;	MagnetoZ-C8051F990-Simplicity_main.c:2414: SBUF0 = MagnetoZ_Info.NodeID;
      000EF3 85 60 99         [24] 3587 	mov	_SBUF0,(_MagnetoZ_Info + 0x0001)
                                   3588 ;	MagnetoZ-C8051F990-Simplicity_main.c:2416: ByteSent = 0;
      000EF6 C2 0F            [12] 3589 	clr	_ByteSent
                                   3590 ;	MagnetoZ-C8051F990-Simplicity_main.c:2418: while (!ByteSent)
      000EF8                       3591 00137$:
      000EF8 20 0F 05         [24] 3592 	jb	_ByteSent,00139$
                                   3593 ;	MagnetoZ-C8051F990-Simplicity_main.c:2420: PCA0CPH2 = 0x00;  //Reset WatchDog
      000EFB 75 EC 00         [24] 3594 	mov	_PCA0CPH2,#0x00
      000EFE 80 F8            [24] 3595 	sjmp	00137$
      000F00                       3596 00139$:
                                   3597 ;	MagnetoZ-C8051F990-Simplicity_main.c:2423: TI0 = 0;
      000F00 C2 99            [12] 3598 	clr	_TI0
                                   3599 ;	MagnetoZ-C8051F990-Simplicity_main.c:2426: SBUF0 = MagnetoZ_Info.AssociationID;
      000F02 85 61 99         [24] 3600 	mov	_SBUF0,(_MagnetoZ_Info + 0x0002)
                                   3601 ;	MagnetoZ-C8051F990-Simplicity_main.c:2428: ZW_On_Time = 100;
      000F05 75 5A 64         [24] 3602 	mov	_ZW_On_Time,#0x64
      000F08 75 5B 00         [24] 3603 	mov	(_ZW_On_Time + 1),#0x00
                                   3604 ;	MagnetoZ-C8051F990-Simplicity_main.c:2430: break;
                                   3605 ;	MagnetoZ-C8051F990-Simplicity_main.c:2432: case COMMAND_8051_GET_WUI:
      000F0B 22               [24] 3606 	ret
      000F0C                       3607 00140$:
                                   3608 ;	MagnetoZ-C8051F990-Simplicity_main.c:2433: SBUF0 = 'B';
      000F0C 75 99 42         [24] 3609 	mov	_SBUF0,#0x42
                                   3610 ;	MagnetoZ-C8051F990-Simplicity_main.c:2435: break;
                                   3611 ;	MagnetoZ-C8051F990-Simplicity_main.c:2437: case COMMAND_8051_GET_LED_STATE:
      000F0F 22               [24] 3612 	ret
      000F10                       3613 00141$:
                                   3614 ;	MagnetoZ-C8051F990-Simplicity_main.c:2438: SBUF0 = 'I';
      000F10 75 99 49         [24] 3615 	mov	_SBUF0,#0x49
                                   3616 ;	MagnetoZ-C8051F990-Simplicity_main.c:2440: break;
                                   3617 ;	MagnetoZ-C8051F990-Simplicity_main.c:2442: default:
      000F13 22               [24] 3618 	ret
      000F14                       3619 00142$:
                                   3620 ;	MagnetoZ-C8051F990-Simplicity_main.c:2445: if (ZWaveOn)
      000F14 30 04 03         [24] 3621 	jnb	_ZWaveOn,00146$
                                   3622 ;	MagnetoZ-C8051F990-Simplicity_main.c:2446: TurnOffZWave();
                                   3623 ;	MagnetoZ-C8051F990-Simplicity_main.c:2449: }
      000F17 02 0D B3         [24] 3624 	ljmp	_TurnOffZWave
      000F1A                       3625 00146$:
      000F1A 22               [24] 3626 	ret
                                   3627 ;------------------------------------------------------------
                                   3628 ;Allocation info for local variables in function 'InterpretUARTInfo'
                                   3629 ;------------------------------------------------------------
                                   3630 ;BufferPointer             Allocated with name '_InterpretUARTInfo_BufferPointer_1_208'
                                   3631 ;------------------------------------------------------------
                                   3632 ;	MagnetoZ-C8051F990-Simplicity_main.c:2462: void InterpretUARTInfo()
                                   3633 ;	-----------------------------------------
                                   3634 ;	 function InterpretUARTInfo
                                   3635 ;	-----------------------------------------
      000F1B                       3636 _InterpretUARTInfo:
                                   3637 ;	MagnetoZ-C8051F990-Simplicity_main.c:2466: for (BufferPointer = 0; BufferPointer < UART_Actual_Size; BufferPointer++)
      000F1B E4               [12] 3638 	clr	a
      000F1C F5 7B            [12] 3639 	mov	_InterpretUARTInfo_BufferPointer_1_208,a
      000F1E F5 7C            [12] 3640 	mov	(_InterpretUARTInfo_BufferPointer_1_208 + 1),a
      000F20                       3641 00243$:
      000F20 AC 48            [24] 3642 	mov	r4,_UART_Actual_Size
      000F22 7D 00            [12] 3643 	mov	r5,#0x00
      000F24 C3               [12] 3644 	clr	c
      000F25 E5 7B            [12] 3645 	mov	a,_InterpretUARTInfo_BufferPointer_1_208
      000F27 9C               [12] 3646 	subb	a,r4
      000F28 E5 7C            [12] 3647 	mov	a,(_InterpretUARTInfo_BufferPointer_1_208 + 1)
      000F2A 9D               [12] 3648 	subb	a,r5
      000F2B 40 03            [24] 3649 	jc	00440$
      000F2D 02 15 E4         [24] 3650 	ljmp	00241$
      000F30                       3651 00440$:
                                   3652 ;	MagnetoZ-C8051F990-Simplicity_main.c:2469: PCA0CPH2 = 0x00;  //Reset WatchDog
      000F30 75 EC 00         [24] 3653 	mov	_PCA0CPH2,#0x00
                                   3654 ;	MagnetoZ-C8051F990-Simplicity_main.c:2471: switch (UART_Buffer[BufferPointer])
      000F33 E5 7B            [12] 3655 	mov	a,_InterpretUARTInfo_BufferPointer_1_208
      000F35 24 26            [12] 3656 	add	a,#_UART_Buffer
      000F37 F9               [12] 3657 	mov	r1,a
      000F38 87 05            [24] 3658 	mov	ar5,@r1
      000F3A BD 59 03         [24] 3659 	cjne	r5,#0x59,00441$
      000F3D 02 10 B9         [24] 3660 	ljmp	00143$
      000F40                       3661 00441$:
      000F40 BD 5A 02         [24] 3662 	cjne	r5,#0x5A,00442$
      000F43 80 03            [24] 3663 	sjmp	00443$
      000F45                       3664 00442$:
      000F45 02 15 D9         [24] 3665 	ljmp	00244$
      000F48                       3666 00443$:
                                   3667 ;	MagnetoZ-C8051F990-Simplicity_main.c:2476: ++Zs_Counter;
      000F48 05 59            [12] 3668 	inc	_Zs_Counter
                                   3669 ;	MagnetoZ-C8051F990-Simplicity_main.c:2478: if (3<Zs_Counter)
      000F4A E5 59            [12] 3670 	mov	a,_Zs_Counter
      000F4C 24 FC            [12] 3671 	add	a,#0xff - 0x03
      000F4E 50 6A            [24] 3672 	jnc	00115$
                                   3673 ;	MagnetoZ-C8051F990-Simplicity_main.c:2480: TurnOffZWave();
      000F50 12 0D B3         [24] 3674 	lcall	_TurnOffZWave
                                   3675 ;	MagnetoZ-C8051F990-Simplicity_main.c:2482: if (-400 < MeasureTemperature())
      000F53 12 0D 53         [24] 3676 	lcall	_MeasureTemperature
      000F56 AC 82            [24] 3677 	mov	r4,dpl
      000F58 AD 83            [24] 3678 	mov	r5,dph
      000F5A C3               [12] 3679 	clr	c
      000F5B 74 70            [12] 3680 	mov	a,#0x70
      000F5D 9C               [12] 3681 	subb	a,r4
      000F5E 74 7E            [12] 3682 	mov	a,#(0xFE ^ 0x80)
      000F60 8D F0            [24] 3683 	mov	b,r5
      000F62 63 F0 80         [24] 3684 	xrl	b,#0x80
      000F65 95 F0            [12] 3685 	subb	a,b
      000F67 50 4E            [24] 3686 	jnc	00113$
                                   3687 ;	MagnetoZ-C8051F990-Simplicity_main.c:2484: if (0x00 == MagnetoZ_Info.Day_VR_Fail)
      000F69 E5 6F            [12] 3688 	mov	a,(_MagnetoZ_Info + 0x0010)
      000F6B 45 70            [12] 3689 	orl	a,((_MagnetoZ_Info + 0x0010) + 1)
      000F6D 70 0B            [24] 3690 	jnz	00103$
                                   3691 ;	MagnetoZ-C8051F990-Simplicity_main.c:2486: MagnetoZ_Info.Day_VR_Fail = MagnetoZ_Info.ActualHalfDays;
      000F6F AC 65            [24] 3692 	mov	r4,((_MagnetoZ_Info + 0x0006) + 0)
      000F71 AD 66            [24] 3693 	mov	r5,((_MagnetoZ_Info + 0x0006) + 1)
      000F73 8C 6F            [24] 3694 	mov	((_MagnetoZ_Info + 0x0010) + 0),r4
      000F75 8D 70            [24] 3695 	mov	((_MagnetoZ_Info + 0x0010) + 1),r5
                                   3696 ;	MagnetoZ-C8051F990-Simplicity_main.c:2487: Flash_Write();
      000F77 12 18 8E         [24] 3697 	lcall	_Flash_Write
      000F7A                       3698 00103$:
                                   3699 ;	MagnetoZ-C8051F990-Simplicity_main.c:2490: if ( (FirstTimeVR) && (13 > MagnetoZ_Info.FailZWCounter) )
      000F7A 30 0C 33         [24] 3700 	jnb	_FirstTimeVR,00109$
      000F7D AD 6C            [24] 3701 	mov	r5,(_MagnetoZ_Info + 0x000d)
      000F7F BD 0D 00         [24] 3702 	cjne	r5,#0x0D,00448$
      000F82                       3703 00448$:
      000F82 50 2C            [24] 3704 	jnc	00109$
                                   3705 ;	MagnetoZ-C8051F990-Simplicity_main.c:2492: ++MagnetoZ_Info.FailZWCounter;
      000F84 ED               [12] 3706 	mov	a,r5
      000F85 04               [12] 3707 	inc	a
      000F86 F5 6C            [12] 3708 	mov	(_MagnetoZ_Info + 0x000d),a
                                   3709 ;	MagnetoZ-C8051F990-Simplicity_main.c:2494: if (Temperature_ref	< MeasureTemperature())
      000F88 12 0D 53         [24] 3710 	lcall	_MeasureTemperature
      000F8B AC 82            [24] 3711 	mov	r4,dpl
      000F8D AD 83            [24] 3712 	mov	r5,dph
      000F8F E5 58            [12] 3713 	mov	a,_Temperature_ref
      000F91 FA               [12] 3714 	mov	r2,a
      000F92 33               [12] 3715 	rlc	a
      000F93 95 E0            [12] 3716 	subb	a,acc
      000F95 FB               [12] 3717 	mov	r3,a
      000F96 C3               [12] 3718 	clr	c
      000F97 EA               [12] 3719 	mov	a,r2
      000F98 9C               [12] 3720 	subb	a,r4
      000F99 EB               [12] 3721 	mov	a,r3
      000F9A 64 80            [12] 3722 	xrl	a,#0x80
      000F9C 8D F0            [24] 3723 	mov	b,r5
      000F9E 63 F0 80         [24] 3724 	xrl	b,#0x80
      000FA1 95 F0            [12] 3725 	subb	a,b
      000FA3 50 12            [24] 3726 	jnc	00113$
                                   3727 ;	MagnetoZ-C8051F990-Simplicity_main.c:2495: Temperature_ref	= MeasureTemperature();
      000FA5 12 0D 53         [24] 3728 	lcall	_MeasureTemperature
      000FA8 AC 82            [24] 3729 	mov	r4,dpl
      000FAA AD 83            [24] 3730 	mov	r5,dph
      000FAC 8C 58            [24] 3731 	mov	_Temperature_ref,r4
      000FAE 80 07            [24] 3732 	sjmp	00113$
      000FB0                       3733 00109$:
                                   3734 ;	MagnetoZ-C8051F990-Simplicity_main.c:2497: else if (13 == MagnetoZ_Info.FailZWCounter)
      000FB0 74 0D            [12] 3735 	mov	a,#0x0D
      000FB2 B5 6C 02         [24] 3736 	cjne	a,(_MagnetoZ_Info + 0x000d),00113$
                                   3737 ;	MagnetoZ-C8051F990-Simplicity_main.c:2498: BattIsDead = 1;
      000FB5 D2 09            [12] 3738 	setb	_BattIsDead
      000FB7                       3739 00113$:
                                   3740 ;	MagnetoZ-C8051F990-Simplicity_main.c:2501: CommandFailed();
      000FB7 12 15 FC         [24] 3741 	lcall	_CommandFailed
      000FBA                       3742 00115$:
                                   3743 ;	MagnetoZ-C8051F990-Simplicity_main.c:2504: if ( (2 == Zs_Counter) && (!BattIsDead) )
      000FBA 74 02            [12] 3744 	mov	a,#0x02
      000FBC B5 59 02         [24] 3745 	cjne	a,_Zs_Counter,00453$
      000FBF 80 03            [24] 3746 	sjmp	00454$
      000FC1                       3747 00453$:
      000FC1 02 10 95         [24] 3748 	ljmp	00140$
      000FC4                       3749 00454$:
      000FC4 30 09 03         [24] 3750 	jnb	_BattIsDead,00455$
      000FC7 02 10 95         [24] 3751 	ljmp	00140$
      000FCA                       3752 00455$:
                                   3753 ;	MagnetoZ-C8051F990-Simplicity_main.c:2507: ZWAVE_MODULE_CONTROL = 1;
      000FCA D2 92            [12] 3754 	setb	_ZWAVE_MODULE_CONTROL
                                   3755 ;	MagnetoZ-C8051F990-Simplicity_main.c:2509: if (!BattIsDead)
      000FCC 20 09 02         [24] 3756 	jb	_BattIsDead,00117$
                                   3757 ;	MagnetoZ-C8051F990-Simplicity_main.c:2511: VOLTAGE_REG_CONTROL = 0;
      000FCF C2 90            [12] 3758 	clr	_VOLTAGE_REG_CONTROL
      000FD1                       3759 00117$:
                                   3760 ;	MagnetoZ-C8051F990-Simplicity_main.c:2513: if (!FirstTimeVR)
      000FD1 20 0C 03         [24] 3761 	jb	_FirstTimeVR,00119$
                                   3762 ;	MagnetoZ-C8051F990-Simplicity_main.c:2514: Zs_Counter = 0;
      000FD4 75 59 00         [24] 3763 	mov	_Zs_Counter,#0x00
      000FD7                       3764 00119$:
                                   3765 ;	MagnetoZ-C8051F990-Simplicity_main.c:2516: TR0 = 0;                            // Timer0 OFF
      000FD7 C2 8C            [12] 3766 	clr	_TR0
                                   3767 ;	MagnetoZ-C8051F990-Simplicity_main.c:2517: CKCON |= 0x04;                       // Timer0 uses the system clock
      000FD9 43 8E 04         [24] 3768 	orl	_CKCON,#0x04
                                   3769 ;	MagnetoZ-C8051F990-Simplicity_main.c:2520: UseTimer0(WAIT_TICKS, 100);
      000FDC 75 0E 64         [24] 3770 	mov	_UseTimer0_PARM_2,#0x64
      000FDF 75 0F 00         [24] 3771 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      000FE2 90 D0 26         [24] 3772 	mov	dptr,#0xD026
      000FE5 12 0C F1         [24] 3773 	lcall	_UseTimer0
                                   3774 ;	MagnetoZ-C8051F990-Simplicity_main.c:2522: if ( (FirstTimeVR) && (10 > MagnetoZ_Info.FailZWCounter) )
      000FE8 30 0C 0B         [24] 3775 	jnb	_FirstTimeVR,00121$
      000FEB AD 6C            [24] 3776 	mov	r5,(_MagnetoZ_Info + 0x000d)
      000FED BD 0A 00         [24] 3777 	cjne	r5,#0x0A,00459$
      000FF0                       3778 00459$:
      000FF0 50 04            [24] 3779 	jnc	00121$
                                   3780 ;	MagnetoZ-C8051F990-Simplicity_main.c:2523: ++MagnetoZ_Info.FailZWCounter;
      000FF2 ED               [12] 3781 	mov	a,r5
      000FF3 04               [12] 3782 	inc	a
      000FF4 F5 6C            [12] 3783 	mov	(_MagnetoZ_Info + 0x000d),a
      000FF6                       3784 00121$:
                                   3785 ;	MagnetoZ-C8051F990-Simplicity_main.c:2525: if ( (0x00 == MagnetoZ_Info.Day_VR_FirstTime)
      000FF6 E5 6D            [12] 3786 	mov	a,(_MagnetoZ_Info + 0x000e)
      000FF8 45 6E            [12] 3787 	orl	a,((_MagnetoZ_Info + 0x000e) + 1)
      000FFA 70 11            [24] 3788 	jnz	00124$
                                   3789 ;	MagnetoZ-C8051F990-Simplicity_main.c:2526: && (0 < MagnetoZ_Info.FailZWCounter) )
      000FFC E5 6C            [12] 3790 	mov	a,(_MagnetoZ_Info + 0x000d)
      000FFE 24 FF            [12] 3791 	add	a,#0xff - 0x00
      001000 50 0B            [24] 3792 	jnc	00124$
                                   3793 ;	MagnetoZ-C8051F990-Simplicity_main.c:2528: MagnetoZ_Info.Day_VR_FirstTime = MagnetoZ_Info.ActualHalfDays;
      001002 AC 65            [24] 3794 	mov	r4,((_MagnetoZ_Info + 0x0006) + 0)
      001004 AD 66            [24] 3795 	mov	r5,((_MagnetoZ_Info + 0x0006) + 1)
      001006 8C 6D            [24] 3796 	mov	((_MagnetoZ_Info + 0x000e) + 0),r4
      001008 8D 6E            [24] 3797 	mov	((_MagnetoZ_Info + 0x000e) + 1),r5
                                   3798 ;	MagnetoZ-C8051F990-Simplicity_main.c:2529: Flash_Write();
      00100A 12 18 8E         [24] 3799 	lcall	_Flash_Write
      00100D                       3800 00124$:
                                   3801 ;	MagnetoZ-C8051F990-Simplicity_main.c:2532: if (Temperature_ref	< MeasureTemperature())
      00100D 12 0D 53         [24] 3802 	lcall	_MeasureTemperature
      001010 AC 82            [24] 3803 	mov	r4,dpl
      001012 AD 83            [24] 3804 	mov	r5,dph
      001014 E5 58            [12] 3805 	mov	a,_Temperature_ref
      001016 FA               [12] 3806 	mov	r2,a
      001017 33               [12] 3807 	rlc	a
      001018 95 E0            [12] 3808 	subb	a,acc
      00101A FB               [12] 3809 	mov	r3,a
      00101B C3               [12] 3810 	clr	c
      00101C EA               [12] 3811 	mov	a,r2
      00101D 9C               [12] 3812 	subb	a,r4
      00101E EB               [12] 3813 	mov	a,r3
      00101F 64 80            [12] 3814 	xrl	a,#0x80
      001021 8D F0            [24] 3815 	mov	b,r5
      001023 63 F0 80         [24] 3816 	xrl	b,#0x80
      001026 95 F0            [12] 3817 	subb	a,b
      001028 50 09            [24] 3818 	jnc	00127$
                                   3819 ;	MagnetoZ-C8051F990-Simplicity_main.c:2533: Temperature_ref	= MeasureTemperature();
      00102A 12 0D 53         [24] 3820 	lcall	_MeasureTemperature
      00102D AC 82            [24] 3821 	mov	r4,dpl
      00102F AD 83            [24] 3822 	mov	r5,dph
      001031 8C 58            [24] 3823 	mov	_Temperature_ref,r4
      001033                       3824 00127$:
                                   3825 ;	MagnetoZ-C8051F990-Simplicity_main.c:2534: DetermineBattPercentage();
      001033 12 0D 4C         [24] 3826 	lcall	_DetermineBattPercentage
                                   3827 ;	MagnetoZ-C8051F990-Simplicity_main.c:2536: if ( (BattIsDead) || ( (10 == MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) ) )		//Always use V.R.
      001036 20 09 08         [24] 3828 	jb	_BattIsDead,00131$
      001039 74 0A            [12] 3829 	mov	a,#0x0A
      00103B B5 6C 13         [24] 3830 	cjne	a,(_MagnetoZ_Info + 0x000d),00132$
      00103E 30 0C 10         [24] 3831 	jnb	_FirstTimeVR,00132$
      001041                       3832 00131$:
                                   3833 ;	MagnetoZ-C8051F990-Simplicity_main.c:2538: VOLTAGE_REG_CONTROL = 1;
      001041 D2 90            [12] 3834 	setb	_VOLTAGE_REG_CONTROL
                                   3835 ;	MagnetoZ-C8051F990-Simplicity_main.c:2541: UseTimer0(WAIT_TICKS, 2);
      001043 75 0E 02         [24] 3836 	mov	_UseTimer0_PARM_2,#0x02
      001046 75 0F 00         [24] 3837 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      001049 90 D0 26         [24] 3838 	mov	dptr,#0xD026
      00104C 12 0C F1         [24] 3839 	lcall	_UseTimer0
      00104F 80 2F            [24] 3840 	sjmp	00133$
      001051                       3841 00132$:
                                   3842 ;	MagnetoZ-C8051F990-Simplicity_main.c:2543: else if ( (FirstTimeVR) && ( Turn_ON_VR_Counter < (MagnetoZ_Info.FailZWCounter*5) ) )
      001051 30 0C 2C         [24] 3843 	jnb	_FirstTimeVR,00133$
      001054 E5 6C            [12] 3844 	mov	a,(_MagnetoZ_Info + 0x000d)
      001056 75 F0 05         [24] 3845 	mov	b,#0x05
      001059 A4               [48] 3846 	mul	ab
      00105A FC               [12] 3847 	mov	r4,a
      00105B AD F0            [24] 3848 	mov	r5,b
      00105D AA 57            [24] 3849 	mov	r2,_Turn_ON_VR_Counter
      00105F 7B 00            [12] 3850 	mov	r3,#0x00
      001061 C3               [12] 3851 	clr	c
      001062 EA               [12] 3852 	mov	a,r2
      001063 9C               [12] 3853 	subb	a,r4
      001064 EB               [12] 3854 	mov	a,r3
      001065 64 80            [12] 3855 	xrl	a,#0x80
      001067 8D F0            [24] 3856 	mov	b,r5
      001069 63 F0 80         [24] 3857 	xrl	b,#0x80
      00106C 95 F0            [12] 3858 	subb	a,b
      00106E 50 10            [24] 3859 	jnc	00133$
                                   3860 ;	MagnetoZ-C8051F990-Simplicity_main.c:2545: VOLTAGE_REG_CONTROL = 1;
      001070 D2 90            [12] 3861 	setb	_VOLTAGE_REG_CONTROL
                                   3862 ;	MagnetoZ-C8051F990-Simplicity_main.c:2547: ++Turn_ON_VR_Counter;
      001072 05 57            [12] 3863 	inc	_Turn_ON_VR_Counter
                                   3864 ;	MagnetoZ-C8051F990-Simplicity_main.c:2550: UseTimer0(WAIT_TICKS, 2);
      001074 75 0E 02         [24] 3865 	mov	_UseTimer0_PARM_2,#0x02
      001077 75 0F 00         [24] 3866 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      00107A 90 D0 26         [24] 3867 	mov	dptr,#0xD026
      00107D 12 0C F1         [24] 3868 	lcall	_UseTimer0
      001080                       3869 00133$:
                                   3870 ;	MagnetoZ-C8051F990-Simplicity_main.c:2554: FirstTimeVR = 1;
      001080 D2 0C            [12] 3871 	setb	_FirstTimeVR
                                   3872 ;	MagnetoZ-C8051F990-Simplicity_main.c:2558: ZWAVE_MODULE_CONTROL = 0;
      001082 C2 92            [12] 3873 	clr	_ZWAVE_MODULE_CONTROL
                                   3874 ;	MagnetoZ-C8051F990-Simplicity_main.c:2561: CKCON &= ~0x04;                       // Timer0 uses the system clock
      001084 AD 8E            [24] 3875 	mov	r5,_CKCON
      001086 74 FB            [12] 3876 	mov	a,#0xFB
      001088 5D               [12] 3877 	anl	a,r5
      001089 F5 8E            [12] 3878 	mov	_CKCON,a
                                   3879 ;	MagnetoZ-C8051F990-Simplicity_main.c:2562: TL0 = 0;
      00108B 75 8A 00         [24] 3880 	mov	_TL0,#0x00
                                   3881 ;	MagnetoZ-C8051F990-Simplicity_main.c:2563: TH0 = 0;
      00108E 75 8C 00         [24] 3882 	mov	_TH0,#0x00
                                   3883 ;	MagnetoZ-C8051F990-Simplicity_main.c:2564: TR0 = 1;      //{**                   // Timer0 ON
      001091 D2 8C            [12] 3884 	setb	_TR0
      001093 80 0E            [24] 3885 	sjmp	00141$
      001095                       3886 00140$:
                                   3887 ;	MagnetoZ-C8051F990-Simplicity_main.c:2566: else if ( (2 == Zs_Counter) && (BattIsDead) )
      001095 74 02            [12] 3888 	mov	a,#0x02
      001097 B5 59 09         [24] 3889 	cjne	a,_Zs_Counter,00141$
      00109A 30 09 06         [24] 3890 	jnb	_BattIsDead,00141$
                                   3891 ;	MagnetoZ-C8051F990-Simplicity_main.c:2568: TurnOffZWave();
      00109D 12 0D B3         [24] 3892 	lcall	_TurnOffZWave
                                   3893 ;	MagnetoZ-C8051F990-Simplicity_main.c:2570: CommandFailed();
      0010A0 12 15 FC         [24] 3894 	lcall	_CommandFailed
      0010A3                       3895 00141$:
                                   3896 ;	MagnetoZ-C8051F990-Simplicity_main.c:2574: PCA0CPH2 = 0x00;
      0010A3 75 EC 00         [24] 3897 	mov	_PCA0CPH2,#0x00
                                   3898 ;	MagnetoZ-C8051F990-Simplicity_main.c:2576: SendUARTCommand(Command_Queue[0]);
      0010A6 85 4A 82         [24] 3899 	mov	dpl,_Command_Queue
      0010A9 12 0E 04         [24] 3900 	lcall	_SendUARTCommand
                                   3901 ;	MagnetoZ-C8051F990-Simplicity_main.c:2577: FLSCL &= ~BYPASS;     // Clear the one-shot bypass bit
      0010AC AD B6            [24] 3902 	mov	r5,_FLSCL
      0010AE 74 BF            [12] 3903 	mov	a,#0xBF
      0010B0 5D               [12] 3904 	anl	a,r5
      0010B1 F5 B6            [12] 3905 	mov	_FLSCL,a
                                   3906 ;	MagnetoZ-C8051F990-Simplicity_main.c:2578: PCON = 0x01; //Put the microcontroller in Idle mode.
      0010B3 75 87 01         [24] 3907 	mov	_PCON,#0x01
                                   3908 ;	MagnetoZ-C8051F990-Simplicity_main.c:2580: break;
      0010B6 02 15 D9         [24] 3909 	ljmp	00244$
                                   3910 ;	MagnetoZ-C8051F990-Simplicity_main.c:2583: case 'Y':
      0010B9                       3911 00143$:
                                   3912 ;	MagnetoZ-C8051F990-Simplicity_main.c:2586: if (ZWaveOn)
      0010B9 30 04 03         [24] 3913 	jnb	_ZWaveOn,00145$
                                   3914 ;	MagnetoZ-C8051F990-Simplicity_main.c:2587: TurnOffZWave();
      0010BC 12 0D B3         [24] 3915 	lcall	_TurnOffZWave
      0010BF                       3916 00145$:
                                   3917 ;	MagnetoZ-C8051F990-Simplicity_main.c:2589: if ( ('A' <= UART_Buffer[BufferPointer+1])
      0010BF E5 7B            [12] 3918 	mov	a,_InterpretUARTInfo_BufferPointer_1_208
      0010C1 FD               [12] 3919 	mov	r5,a
      0010C2 04               [12] 3920 	inc	a
      0010C3 24 26            [12] 3921 	add	a,#_UART_Buffer
      0010C5 F9               [12] 3922 	mov	r1,a
      0010C6 87 04            [24] 3923 	mov	ar4,@r1
      0010C8 BC 41 00         [24] 3924 	cjne	r4,#0x41,00474$
      0010CB                       3925 00474$:
      0010CB 50 03            [24] 3926 	jnc	00475$
      0010CD 02 15 D9         [24] 3927 	ljmp	00244$
      0010D0                       3928 00475$:
                                   3929 ;	MagnetoZ-C8051F990-Simplicity_main.c:2590: && ('Y' > UART_Buffer[BufferPointer+1]) )
      0010D0 ED               [12] 3930 	mov	a,r5
      0010D1 04               [12] 3931 	inc	a
      0010D2 24 26            [12] 3932 	add	a,#_UART_Buffer
      0010D4 F9               [12] 3933 	mov	r1,a
      0010D5 87 04            [24] 3934 	mov	ar4,@r1
      0010D7 BC 59 00         [24] 3935 	cjne	r4,#0x59,00476$
      0010DA                       3936 00476$:
      0010DA 40 03            [24] 3937 	jc	00477$
      0010DC 02 15 D9         [24] 3938 	ljmp	00244$
      0010DF                       3939 00477$:
                                   3940 ;	MagnetoZ-C8051F990-Simplicity_main.c:2592: switch (UART_Buffer[BufferPointer+1])
      0010DF ED               [12] 3941 	mov	a,r5
      0010E0 04               [12] 3942 	inc	a
      0010E1 24 26            [12] 3943 	add	a,#_UART_Buffer
      0010E3 F9               [12] 3944 	mov	r1,a
      0010E4 87 04            [24] 3945 	mov	ar4,@r1
      0010E6 BC 41 00         [24] 3946 	cjne	r4,#0x41,00478$
      0010E9                       3947 00478$:
      0010E9 50 03            [24] 3948 	jnc	00479$
      0010EB 02 15 D9         [24] 3949 	ljmp	00244$
      0010EE                       3950 00479$:
      0010EE EC               [12] 3951 	mov	a,r4
      0010EF 24 A7            [12] 3952 	add	a,#0xff - 0x58
      0010F1 50 03            [24] 3953 	jnc	00480$
      0010F3 02 15 D9         [24] 3954 	ljmp	00244$
      0010F6                       3955 00480$:
      0010F6 EC               [12] 3956 	mov	a,r4
      0010F7 24 BF            [12] 3957 	add	a,#0xBF
      0010F9 FC               [12] 3958 	mov	r4,a
      0010FA 24 0A            [12] 3959 	add	a,#(00481$-3-.)
      0010FC 83               [24] 3960 	movc	a,@a+pc
      0010FD F5 82            [12] 3961 	mov	dpl,a
      0010FF EC               [12] 3962 	mov	a,r4
      001100 24 1C            [12] 3963 	add	a,#(00482$-3-.)
      001102 83               [24] 3964 	movc	a,@a+pc
      001103 F5 83            [12] 3965 	mov	dph,a
      001105 E4               [12] 3966 	clr	a
      001106 73               [24] 3967 	jmp	@a+dptr
      001107                       3968 00481$:
      001107 AC                    3969 	.db	00173$
      001108 6E                    3970 	.db	00168$
      001109 0A                    3971 	.db	00178$
      00110A C1                    3972 	.db	00229$
      00110B 85                    3973 	.db	00208$
      00110C AE                    3974 	.db	00211$
      00110D A6                    3975 	.db	00195$
      00110E 37                    3976 	.db	00146$
      00110F 6A                    3977 	.db	00192$
      001110 D9                    3978 	.db	00234$
      001111 2C                    3979 	.db	00219$
      001112 56                    3980 	.db	00222$
      001113 D9                    3981 	.db	00234$
      001114 ED                    3982 	.db	00215$
      001115 A5                    3983 	.db	00156$
      001116 D9                    3984 	.db	00234$
      001117 D9                    3985 	.db	00234$
      001118 7A                    3986 	.db	00225$
      001119 0F                    3987 	.db	00163$
      00111A B7                    3988 	.db	00228$
      00111B D9                    3989 	.db	00234$
      00111C D9                    3990 	.db	00234$
      00111D 85                    3991 	.db	00207$
      00111E 47                    3992 	.db	00204$
      00111F                       3993 00482$:
      00111F 12                    3994 	.db	00173$>>8
      001120 12                    3995 	.db	00168$>>8
      001121 13                    3996 	.db	00178$>>8
      001122 15                    3997 	.db	00229$>>8
      001123 14                    3998 	.db	00208$>>8
      001124 14                    3999 	.db	00211$>>8
      001125 13                    4000 	.db	00195$>>8
      001126 11                    4001 	.db	00146$>>8
      001127 13                    4002 	.db	00192$>>8
      001128 15                    4003 	.db	00234$>>8
      001129 15                    4004 	.db	00219$>>8
      00112A 15                    4005 	.db	00222$>>8
      00112B 15                    4006 	.db	00234$>>8
      00112C 14                    4007 	.db	00215$>>8
      00112D 11                    4008 	.db	00156$>>8
      00112E 15                    4009 	.db	00234$>>8
      00112F 15                    4010 	.db	00234$>>8
      001130 15                    4011 	.db	00225$>>8
      001131 12                    4012 	.db	00163$>>8
      001132 15                    4013 	.db	00228$>>8
      001133 15                    4014 	.db	00234$>>8
      001134 15                    4015 	.db	00234$>>8
      001135 14                    4016 	.db	00207$>>8
      001136 14                    4017 	.db	00204$>>8
                                   4018 ;	MagnetoZ-C8051F990-Simplicity_main.c:2597: case 'H':
      001137                       4019 00146$:
                                   4020 ;	MagnetoZ-C8051F990-Simplicity_main.c:2601: MagnetoZ_Info.Num_Successful_Tx++;
      001137 AA 71            [24] 4021 	mov	r2,((_MagnetoZ_Info + 0x0012) + 0)
      001139 AB 72            [24] 4022 	mov	r3,((_MagnetoZ_Info + 0x0012) + 1)
      00113B AC 73            [24] 4023 	mov	r4,((_MagnetoZ_Info + 0x0012) + 2)
      00113D AF 74            [24] 4024 	mov	r7,((_MagnetoZ_Info + 0x0012) + 3)
      00113F 0A               [12] 4025 	inc	r2
      001140 BA 00 09         [24] 4026 	cjne	r2,#0x00,00483$
      001143 0B               [12] 4027 	inc	r3
      001144 BB 00 05         [24] 4028 	cjne	r3,#0x00,00483$
      001147 0C               [12] 4029 	inc	r4
      001148 BC 00 01         [24] 4030 	cjne	r4,#0x00,00483$
      00114B 0F               [12] 4031 	inc	r7
      00114C                       4032 00483$:
      00114C 8A 71            [24] 4033 	mov	((_MagnetoZ_Info + 0x0012) + 0),r2
      00114E 8B 72            [24] 4034 	mov	((_MagnetoZ_Info + 0x0012) + 1),r3
      001150 8C 73            [24] 4035 	mov	((_MagnetoZ_Info + 0x0012) + 2),r4
      001152 8F 74            [24] 4036 	mov	((_MagnetoZ_Info + 0x0012) + 3),r7
                                   4037 ;	MagnetoZ-C8051F990-Simplicity_main.c:2604: if ( (COMMAND_8051_WAKE_UP_ZWAVE == Command_Queue[0]) || ((COMMAND_8051_LEARN_MODE_EXCLUDE == Command_Queue[0]) ) )
      001154 AF 4A            [24] 4038 	mov	r7,_Command_Queue
      001156 BF 10 02         [24] 4039 	cjne	r7,#0x10,00484$
      001159 80 03            [24] 4040 	sjmp	00147$
      00115B                       4041 00484$:
      00115B BF 0D 07         [24] 4042 	cjne	r7,#0x0D,00148$
      00115E                       4043 00147$:
                                   4044 ;	MagnetoZ-C8051F990-Simplicity_main.c:2605: DequeueCommand();
      00115E C0 05            [24] 4045 	push	ar5
      001160 12 18 67         [24] 4046 	lcall	_DequeueCommand
      001163 D0 05            [24] 4047 	pop	ar5
      001165                       4048 00148$:
                                   4049 ;	MagnetoZ-C8051F990-Simplicity_main.c:2607: if (SuspendFlag)
      001165 30 10 13         [24] 4050 	jnb	_SuspendFlag,00153$
                                   4051 ;	MagnetoZ-C8051F990-Simplicity_main.c:2609: if (0 < WakeupCount)
      001168 C3               [12] 4052 	clr	c
      001169 E4               [12] 4053 	clr	a
      00116A 95 53            [12] 4054 	subb	a,_WakeupCount
      00116C E4               [12] 4055 	clr	a
      00116D 95 54            [12] 4056 	subb	a,(_WakeupCount + 1)
      00116F E4               [12] 4057 	clr	a
      001170 95 55            [12] 4058 	subb	a,(_WakeupCount + 2)
      001172 E4               [12] 4059 	clr	a
      001173 95 56            [12] 4060 	subb	a,(_WakeupCount + 3)
      001175 50 02            [24] 4061 	jnc	00151$
                                   4062 ;	MagnetoZ-C8051F990-Simplicity_main.c:2610: WakeUpTime_Set_flag = 1; // Turn ON Wake up notification, new CR #13 on BitBucket issue list
      001177 D2 03            [12] 4063 	setb	_WakeUpTime_Set_flag
      001179                       4064 00151$:
                                   4065 ;	MagnetoZ-C8051F990-Simplicity_main.c:2612: SuspendFlag = 0; //Success, Reset Suspend Flag if it was set
      001179 C2 10            [12] 4066 	clr	_SuspendFlag
      00117B                       4067 00153$:
                                   4068 ;	MagnetoZ-C8051F990-Simplicity_main.c:2615: ZW_TimeOut_Counter = 0; //Reset counter
      00117B 75 5E 00         [24] 4069 	mov	_ZW_TimeOut_Counter,#0x00
                                   4070 ;	MagnetoZ-C8051F990-Simplicity_main.c:2617: ZW_TimeOut_Flag = 0; //Normal failure
      00117E C2 12            [12] 4071 	clr	_ZW_TimeOut_Flag
                                   4072 ;	MagnetoZ-C8051F990-Simplicity_main.c:2619: if ('T' == UART_Buffer[BufferPointer+3])
      001180 74 03            [12] 4073 	mov	a,#0x03
      001182 2D               [12] 4074 	add	a,r5
      001183 24 26            [12] 4075 	add	a,#_UART_Buffer
      001185 F9               [12] 4076 	mov	r1,a
      001186 87 07            [24] 4077 	mov	ar7,@r1
      001188 BF 54 02         [24] 4078 	cjne	r7,#0x54,00489$
      00118B 80 03            [24] 4079 	sjmp	00490$
      00118D                       4080 00489$:
      00118D 02 15 D9         [24] 4081 	ljmp	00244$
      001190                       4082 00490$:
                                   4083 ;	MagnetoZ-C8051F990-Simplicity_main.c:2621: memset(UART_Buffer, 0x00, UART_BUFFERSIZE);
      001190 75 0E 00         [24] 4084 	mov	_memset_PARM_2,#0x00
      001193 75 0F 20         [24] 4085 	mov	_memset_PARM_3,#0x20
      001196 75 10 00         [24] 4086 	mov	(_memset_PARM_3 + 1),#0x00
      001199 90 00 26         [24] 4087 	mov	dptr,#_UART_Buffer
      00119C 75 F0 40         [24] 4088 	mov	b,#0x40
      00119F 12 1B 29         [24] 4089 	lcall	_memset
                                   4090 ;	MagnetoZ-C8051F990-Simplicity_main.c:2623: break;
      0011A2 02 15 D9         [24] 4091 	ljmp	00244$
                                   4092 ;	MagnetoZ-C8051F990-Simplicity_main.c:2626: case 'O':
      0011A5                       4093 00156$:
                                   4094 ;	MagnetoZ-C8051F990-Simplicity_main.c:2628: MagnetoZ_Info.Num_Successful_Tx++;
      0011A5 AB 71            [24] 4095 	mov	r3,((_MagnetoZ_Info + 0x0012) + 0)
      0011A7 AC 72            [24] 4096 	mov	r4,((_MagnetoZ_Info + 0x0012) + 1)
      0011A9 AE 73            [24] 4097 	mov	r6,((_MagnetoZ_Info + 0x0012) + 2)
      0011AB AF 74            [24] 4098 	mov	r7,((_MagnetoZ_Info + 0x0012) + 3)
      0011AD 0B               [12] 4099 	inc	r3
      0011AE BB 00 09         [24] 4100 	cjne	r3,#0x00,00491$
      0011B1 0C               [12] 4101 	inc	r4
      0011B2 BC 00 05         [24] 4102 	cjne	r4,#0x00,00491$
      0011B5 0E               [12] 4103 	inc	r6
      0011B6 BE 00 01         [24] 4104 	cjne	r6,#0x00,00491$
      0011B9 0F               [12] 4105 	inc	r7
      0011BA                       4106 00491$:
      0011BA 8B 71            [24] 4107 	mov	((_MagnetoZ_Info + 0x0012) + 0),r3
      0011BC 8C 72            [24] 4108 	mov	((_MagnetoZ_Info + 0x0012) + 1),r4
      0011BE 8E 73            [24] 4109 	mov	((_MagnetoZ_Info + 0x0012) + 2),r6
      0011C0 8F 74            [24] 4110 	mov	((_MagnetoZ_Info + 0x0012) + 3),r7
                                   4111 ;	MagnetoZ-C8051F990-Simplicity_main.c:2631: prevCommand = Command_Queue[0];
      0011C2 85 4A 52         [24] 4112 	mov	_prevCommand,_Command_Queue
                                   4113 ;	MagnetoZ-C8051F990-Simplicity_main.c:2634: DequeueCommand();
      0011C5 12 18 67         [24] 4114 	lcall	_DequeueCommand
                                   4115 ;	MagnetoZ-C8051F990-Simplicity_main.c:2636: if (1 == MagnetoZ_Info.LEDConfigFlag)
      0011C8 74 01            [12] 4116 	mov	a,#0x01
      0011CA B5 62 06         [24] 4117 	cjne	a,(_MagnetoZ_Info + 0x0003),00158$
                                   4118 ;	MagnetoZ-C8051F990-Simplicity_main.c:2638: BlinkLED(DOOR_OPEN_BLINK);
      0011CD 75 82 01         [24] 4119 	mov	dpl,#0x01
      0011D0 12 17 68         [24] 4120 	lcall	_BlinkLED
      0011D3                       4121 00158$:
                                   4122 ;	MagnetoZ-C8051F990-Simplicity_main.c:2641: First_Hour_Counter 			= 0;
      0011D3 90 00 01         [24] 4123 	mov	dptr,#_First_Hour_Counter
      0011D6 E4               [12] 4124 	clr	a
      0011D7 F0               [24] 4125 	movx	@dptr,a
                                   4126 ;	MagnetoZ-C8051F990-Simplicity_main.c:2642: Hour_Counter 				= 24;
      0011D8 90 00 02         [24] 4127 	mov	dptr,#_Hour_Counter
      0011DB 74 18            [12] 4128 	mov	a,#0x18
      0011DD F0               [24] 4129 	movx	@dptr,a
                                   4130 ;	MagnetoZ-C8051F990-Simplicity_main.c:2643: Seconds_Counter 	    	= 0;
      0011DE 90 00 03         [24] 4131 	mov	dptr,#_Seconds_Counter
      0011E1 E4               [12] 4132 	clr	a
      0011E2 F0               [24] 4133 	movx	@dptr,a
      0011E3 A3               [24] 4134 	inc	dptr
      0011E4 F0               [24] 4135 	movx	@dptr,a
                                   4136 ;	MagnetoZ-C8051F990-Simplicity_main.c:2644: First_Hour_Seconds_Counter 	= HOURLY_SECONDS_COUNTER_VAL;
      0011E5 90 00 05         [24] 4137 	mov	dptr,#_First_Hour_Seconds_Counter
      0011E8 74 10            [12] 4138 	mov	a,#0x10
      0011EA F0               [24] 4139 	movx	@dptr,a
      0011EB 74 0E            [12] 4140 	mov	a,#0x0E
      0011ED A3               [24] 4141 	inc	dptr
      0011EE F0               [24] 4142 	movx	@dptr,a
                                   4143 ;	MagnetoZ-C8051F990-Simplicity_main.c:2645: ResendCmd_flag 				= 0;
      0011EF C2 06            [12] 4144 	clr	_ResendCmd_flag
                                   4145 ;	MagnetoZ-C8051F990-Simplicity_main.c:2647: if (SuspendFlag)
      0011F1 30 10 13         [24] 4146 	jnb	_SuspendFlag,00162$
                                   4147 ;	MagnetoZ-C8051F990-Simplicity_main.c:2649: if (0 < WakeupCount)
      0011F4 C3               [12] 4148 	clr	c
      0011F5 E4               [12] 4149 	clr	a
      0011F6 95 53            [12] 4150 	subb	a,_WakeupCount
      0011F8 E4               [12] 4151 	clr	a
      0011F9 95 54            [12] 4152 	subb	a,(_WakeupCount + 1)
      0011FB E4               [12] 4153 	clr	a
      0011FC 95 55            [12] 4154 	subb	a,(_WakeupCount + 2)
      0011FE E4               [12] 4155 	clr	a
      0011FF 95 56            [12] 4156 	subb	a,(_WakeupCount + 3)
      001201 50 02            [24] 4157 	jnc	00160$
                                   4158 ;	MagnetoZ-C8051F990-Simplicity_main.c:2650: WakeUpTime_Set_flag = 1; // Turn ON Wake up notification, new CR #13 on BitBucket issue list
      001203 D2 03            [12] 4159 	setb	_WakeUpTime_Set_flag
      001205                       4160 00160$:
                                   4161 ;	MagnetoZ-C8051F990-Simplicity_main.c:2652: SuspendFlag = 0; //Success, Reset Suspend Flag if it was set
      001205 C2 10            [12] 4162 	clr	_SuspendFlag
      001207                       4163 00162$:
                                   4164 ;	MagnetoZ-C8051F990-Simplicity_main.c:2655: ZW_TimeOut_Counter = 0; //Reset counter
      001207 75 5E 00         [24] 4165 	mov	_ZW_TimeOut_Counter,#0x00
                                   4166 ;	MagnetoZ-C8051F990-Simplicity_main.c:2657: ZW_TimeOut_Flag = 0; //Normal failure
      00120A C2 12            [12] 4167 	clr	_ZW_TimeOut_Flag
                                   4168 ;	MagnetoZ-C8051F990-Simplicity_main.c:2659: break;
      00120C 02 15 D9         [24] 4169 	ljmp	00244$
                                   4170 ;	MagnetoZ-C8051F990-Simplicity_main.c:2662: case 'S':
      00120F                       4171 00163$:
                                   4172 ;	MagnetoZ-C8051F990-Simplicity_main.c:2664: MagnetoZ_Info.Num_Successful_Tx++;
      00120F AB 71            [24] 4173 	mov	r3,((_MagnetoZ_Info + 0x0012) + 0)
      001211 AC 72            [24] 4174 	mov	r4,((_MagnetoZ_Info + 0x0012) + 1)
      001213 AE 73            [24] 4175 	mov	r6,((_MagnetoZ_Info + 0x0012) + 2)
      001215 AF 74            [24] 4176 	mov	r7,((_MagnetoZ_Info + 0x0012) + 3)
      001217 0B               [12] 4177 	inc	r3
      001218 BB 00 09         [24] 4178 	cjne	r3,#0x00,00496$
      00121B 0C               [12] 4179 	inc	r4
      00121C BC 00 05         [24] 4180 	cjne	r4,#0x00,00496$
      00121F 0E               [12] 4181 	inc	r6
      001220 BE 00 01         [24] 4182 	cjne	r6,#0x00,00496$
      001223 0F               [12] 4183 	inc	r7
      001224                       4184 00496$:
      001224 8B 71            [24] 4185 	mov	((_MagnetoZ_Info + 0x0012) + 0),r3
      001226 8C 72            [24] 4186 	mov	((_MagnetoZ_Info + 0x0012) + 1),r4
      001228 8E 73            [24] 4187 	mov	((_MagnetoZ_Info + 0x0012) + 2),r6
      00122A 8F 74            [24] 4188 	mov	((_MagnetoZ_Info + 0x0012) + 3),r7
                                   4189 ;	MagnetoZ-C8051F990-Simplicity_main.c:2667: prevCommand = Command_Queue[0];
      00122C 85 4A 52         [24] 4190 	mov	_prevCommand,_Command_Queue
                                   4191 ;	MagnetoZ-C8051F990-Simplicity_main.c:2670: DequeueCommand();
      00122F 12 18 67         [24] 4192 	lcall	_DequeueCommand
                                   4193 ;	MagnetoZ-C8051F990-Simplicity_main.c:2673: First_Hour_Counter 			= 0;
      001232 90 00 01         [24] 4194 	mov	dptr,#_First_Hour_Counter
      001235 E4               [12] 4195 	clr	a
      001236 F0               [24] 4196 	movx	@dptr,a
                                   4197 ;	MagnetoZ-C8051F990-Simplicity_main.c:2674: Hour_Counter 				= 24;
      001237 90 00 02         [24] 4198 	mov	dptr,#_Hour_Counter
      00123A 74 18            [12] 4199 	mov	a,#0x18
      00123C F0               [24] 4200 	movx	@dptr,a
                                   4201 ;	MagnetoZ-C8051F990-Simplicity_main.c:2675: Seconds_Counter 	    	= 0;
      00123D 90 00 03         [24] 4202 	mov	dptr,#_Seconds_Counter
      001240 E4               [12] 4203 	clr	a
      001241 F0               [24] 4204 	movx	@dptr,a
      001242 A3               [24] 4205 	inc	dptr
      001243 F0               [24] 4206 	movx	@dptr,a
                                   4207 ;	MagnetoZ-C8051F990-Simplicity_main.c:2676: First_Hour_Seconds_Counter 	= HOURLY_SECONDS_COUNTER_VAL;
      001244 90 00 05         [24] 4208 	mov	dptr,#_First_Hour_Seconds_Counter
      001247 74 10            [12] 4209 	mov	a,#0x10
      001249 F0               [24] 4210 	movx	@dptr,a
      00124A 74 0E            [12] 4211 	mov	a,#0x0E
      00124C A3               [24] 4212 	inc	dptr
      00124D F0               [24] 4213 	movx	@dptr,a
                                   4214 ;	MagnetoZ-C8051F990-Simplicity_main.c:2677: ResendCmd_flag 				= 0;
      00124E C2 06            [12] 4215 	clr	_ResendCmd_flag
                                   4216 ;	MagnetoZ-C8051F990-Simplicity_main.c:2679: if (SuspendFlag)
      001250 30 10 13         [24] 4217 	jnb	_SuspendFlag,00167$
                                   4218 ;	MagnetoZ-C8051F990-Simplicity_main.c:2681: if (0 < WakeupCount)
      001253 C3               [12] 4219 	clr	c
      001254 E4               [12] 4220 	clr	a
      001255 95 53            [12] 4221 	subb	a,_WakeupCount
      001257 E4               [12] 4222 	clr	a
      001258 95 54            [12] 4223 	subb	a,(_WakeupCount + 1)
      00125A E4               [12] 4224 	clr	a
      00125B 95 55            [12] 4225 	subb	a,(_WakeupCount + 2)
      00125D E4               [12] 4226 	clr	a
      00125E 95 56            [12] 4227 	subb	a,(_WakeupCount + 3)
      001260 50 02            [24] 4228 	jnc	00165$
                                   4229 ;	MagnetoZ-C8051F990-Simplicity_main.c:2682: WakeUpTime_Set_flag = 1; // Turn ON Wake up notification, new CR #13 on BitBucket issue list
      001262 D2 03            [12] 4230 	setb	_WakeUpTime_Set_flag
      001264                       4231 00165$:
                                   4232 ;	MagnetoZ-C8051F990-Simplicity_main.c:2684: SuspendFlag = 0; //Success, Reset Suspend Flag if it was set
      001264 C2 10            [12] 4233 	clr	_SuspendFlag
      001266                       4234 00167$:
                                   4235 ;	MagnetoZ-C8051F990-Simplicity_main.c:2687: ZW_TimeOut_Counter = 0; //Reset counter
      001266 75 5E 00         [24] 4236 	mov	_ZW_TimeOut_Counter,#0x00
                                   4237 ;	MagnetoZ-C8051F990-Simplicity_main.c:2689: ZW_TimeOut_Flag = 0; //Normal failure
      001269 C2 12            [12] 4238 	clr	_ZW_TimeOut_Flag
                                   4239 ;	MagnetoZ-C8051F990-Simplicity_main.c:2691: break;
      00126B 02 15 D9         [24] 4240 	ljmp	00244$
                                   4241 ;	MagnetoZ-C8051F990-Simplicity_main.c:2694: case 'B':
      00126E                       4242 00168$:
                                   4243 ;	MagnetoZ-C8051F990-Simplicity_main.c:2696: MagnetoZ_Info.Num_Successful_Tx++;
      00126E AB 71            [24] 4244 	mov	r3,((_MagnetoZ_Info + 0x0012) + 0)
      001270 AC 72            [24] 4245 	mov	r4,((_MagnetoZ_Info + 0x0012) + 1)
      001272 AE 73            [24] 4246 	mov	r6,((_MagnetoZ_Info + 0x0012) + 2)
      001274 AF 74            [24] 4247 	mov	r7,((_MagnetoZ_Info + 0x0012) + 3)
      001276 0B               [12] 4248 	inc	r3
      001277 BB 00 09         [24] 4249 	cjne	r3,#0x00,00499$
      00127A 0C               [12] 4250 	inc	r4
      00127B BC 00 05         [24] 4251 	cjne	r4,#0x00,00499$
      00127E 0E               [12] 4252 	inc	r6
      00127F BE 00 01         [24] 4253 	cjne	r6,#0x00,00499$
      001282 0F               [12] 4254 	inc	r7
      001283                       4255 00499$:
      001283 8B 71            [24] 4256 	mov	((_MagnetoZ_Info + 0x0012) + 0),r3
      001285 8C 72            [24] 4257 	mov	((_MagnetoZ_Info + 0x0012) + 1),r4
      001287 8E 73            [24] 4258 	mov	((_MagnetoZ_Info + 0x0012) + 2),r6
      001289 8F 74            [24] 4259 	mov	((_MagnetoZ_Info + 0x0012) + 3),r7
                                   4260 ;	MagnetoZ-C8051F990-Simplicity_main.c:2699: DequeueCommand();
      00128B 12 18 67         [24] 4261 	lcall	_DequeueCommand
                                   4262 ;	MagnetoZ-C8051F990-Simplicity_main.c:2701: if (SuspendFlag)
      00128E 30 10 13         [24] 4263 	jnb	_SuspendFlag,00172$
                                   4264 ;	MagnetoZ-C8051F990-Simplicity_main.c:2703: if (0 < WakeupCount)
      001291 C3               [12] 4265 	clr	c
      001292 E4               [12] 4266 	clr	a
      001293 95 53            [12] 4267 	subb	a,_WakeupCount
      001295 E4               [12] 4268 	clr	a
      001296 95 54            [12] 4269 	subb	a,(_WakeupCount + 1)
      001298 E4               [12] 4270 	clr	a
      001299 95 55            [12] 4271 	subb	a,(_WakeupCount + 2)
      00129B E4               [12] 4272 	clr	a
      00129C 95 56            [12] 4273 	subb	a,(_WakeupCount + 3)
      00129E 50 02            [24] 4274 	jnc	00170$
                                   4275 ;	MagnetoZ-C8051F990-Simplicity_main.c:2704: WakeUpTime_Set_flag = 1; // Turn ON Wake up notification, new CR #13 on BitBucket issue list
      0012A0 D2 03            [12] 4276 	setb	_WakeUpTime_Set_flag
      0012A2                       4277 00170$:
                                   4278 ;	MagnetoZ-C8051F990-Simplicity_main.c:2706: SuspendFlag = 0; //Success, Reset Suspend Flag if it was set
      0012A2 C2 10            [12] 4279 	clr	_SuspendFlag
      0012A4                       4280 00172$:
                                   4281 ;	MagnetoZ-C8051F990-Simplicity_main.c:2709: ZW_TimeOut_Counter = 0; //Reset counter
      0012A4 75 5E 00         [24] 4282 	mov	_ZW_TimeOut_Counter,#0x00
                                   4283 ;	MagnetoZ-C8051F990-Simplicity_main.c:2711: ZW_TimeOut_Flag = 0; //Normal failure
      0012A7 C2 12            [12] 4284 	clr	_ZW_TimeOut_Flag
                                   4285 ;	MagnetoZ-C8051F990-Simplicity_main.c:2713: break;
      0012A9 02 15 D9         [24] 4286 	ljmp	00244$
                                   4287 ;	MagnetoZ-C8051F990-Simplicity_main.c:2716: case 'A':
      0012AC                       4288 00173$:
                                   4289 ;	MagnetoZ-C8051F990-Simplicity_main.c:2718: MagnetoZ_Info.Num_Successful_Tx++;
      0012AC AB 71            [24] 4290 	mov	r3,((_MagnetoZ_Info + 0x0012) + 0)
      0012AE AC 72            [24] 4291 	mov	r4,((_MagnetoZ_Info + 0x0012) + 1)
      0012B0 AE 73            [24] 4292 	mov	r6,((_MagnetoZ_Info + 0x0012) + 2)
      0012B2 AF 74            [24] 4293 	mov	r7,((_MagnetoZ_Info + 0x0012) + 3)
      0012B4 0B               [12] 4294 	inc	r3
      0012B5 BB 00 09         [24] 4295 	cjne	r3,#0x00,00502$
      0012B8 0C               [12] 4296 	inc	r4
      0012B9 BC 00 05         [24] 4297 	cjne	r4,#0x00,00502$
      0012BC 0E               [12] 4298 	inc	r6
      0012BD BE 00 01         [24] 4299 	cjne	r6,#0x00,00502$
      0012C0 0F               [12] 4300 	inc	r7
      0012C1                       4301 00502$:
      0012C1 8B 71            [24] 4302 	mov	((_MagnetoZ_Info + 0x0012) + 0),r3
      0012C3 8C 72            [24] 4303 	mov	((_MagnetoZ_Info + 0x0012) + 1),r4
      0012C5 8E 73            [24] 4304 	mov	((_MagnetoZ_Info + 0x0012) + 2),r6
      0012C7 8F 74            [24] 4305 	mov	((_MagnetoZ_Info + 0x0012) + 3),r7
                                   4306 ;	MagnetoZ-C8051F990-Simplicity_main.c:2720: TamperCmdSent = 1;
      0012C9 D2 0A            [12] 4307 	setb	_TamperCmdSent
                                   4308 ;	MagnetoZ-C8051F990-Simplicity_main.c:2723: DequeueCommand();
      0012CB 12 18 67         [24] 4309 	lcall	_DequeueCommand
                                   4310 ;	MagnetoZ-C8051F990-Simplicity_main.c:2726: First_Hour_Counter 			= 0;
      0012CE 90 00 01         [24] 4311 	mov	dptr,#_First_Hour_Counter
      0012D1 E4               [12] 4312 	clr	a
      0012D2 F0               [24] 4313 	movx	@dptr,a
                                   4314 ;	MagnetoZ-C8051F990-Simplicity_main.c:2727: Hour_Counter 				= 24;
      0012D3 90 00 02         [24] 4315 	mov	dptr,#_Hour_Counter
      0012D6 74 18            [12] 4316 	mov	a,#0x18
      0012D8 F0               [24] 4317 	movx	@dptr,a
                                   4318 ;	MagnetoZ-C8051F990-Simplicity_main.c:2728: Seconds_Counter 	    	= 0;
      0012D9 90 00 03         [24] 4319 	mov	dptr,#_Seconds_Counter
      0012DC E4               [12] 4320 	clr	a
      0012DD F0               [24] 4321 	movx	@dptr,a
      0012DE A3               [24] 4322 	inc	dptr
      0012DF F0               [24] 4323 	movx	@dptr,a
                                   4324 ;	MagnetoZ-C8051F990-Simplicity_main.c:2729: First_Hour_Seconds_Counter 	= HOURLY_SECONDS_COUNTER_VAL;
      0012E0 90 00 05         [24] 4325 	mov	dptr,#_First_Hour_Seconds_Counter
      0012E3 74 10            [12] 4326 	mov	a,#0x10
      0012E5 F0               [24] 4327 	movx	@dptr,a
      0012E6 74 0E            [12] 4328 	mov	a,#0x0E
      0012E8 A3               [24] 4329 	inc	dptr
      0012E9 F0               [24] 4330 	movx	@dptr,a
                                   4331 ;	MagnetoZ-C8051F990-Simplicity_main.c:2730: ResendCmd_flag 				= 0;
      0012EA C2 06            [12] 4332 	clr	_ResendCmd_flag
                                   4333 ;	MagnetoZ-C8051F990-Simplicity_main.c:2732: if (SuspendFlag)
      0012EC 30 10 13         [24] 4334 	jnb	_SuspendFlag,00177$
                                   4335 ;	MagnetoZ-C8051F990-Simplicity_main.c:2734: if (0 < WakeupCount)
      0012EF C3               [12] 4336 	clr	c
      0012F0 E4               [12] 4337 	clr	a
      0012F1 95 53            [12] 4338 	subb	a,_WakeupCount
      0012F3 E4               [12] 4339 	clr	a
      0012F4 95 54            [12] 4340 	subb	a,(_WakeupCount + 1)
      0012F6 E4               [12] 4341 	clr	a
      0012F7 95 55            [12] 4342 	subb	a,(_WakeupCount + 2)
      0012F9 E4               [12] 4343 	clr	a
      0012FA 95 56            [12] 4344 	subb	a,(_WakeupCount + 3)
      0012FC 50 02            [24] 4345 	jnc	00175$
                                   4346 ;	MagnetoZ-C8051F990-Simplicity_main.c:2735: WakeUpTime_Set_flag = 1; // Turn ON Wake up notification, new CR #13 on BitBucket issue list
      0012FE D2 03            [12] 4347 	setb	_WakeUpTime_Set_flag
      001300                       4348 00175$:
                                   4349 ;	MagnetoZ-C8051F990-Simplicity_main.c:2737: SuspendFlag = 0; //Success, Reset Suspend Flag if it was set
      001300 C2 10            [12] 4350 	clr	_SuspendFlag
      001302                       4351 00177$:
                                   4352 ;	MagnetoZ-C8051F990-Simplicity_main.c:2740: ZW_TimeOut_Counter = 0; //Reset counter
      001302 75 5E 00         [24] 4353 	mov	_ZW_TimeOut_Counter,#0x00
                                   4354 ;	MagnetoZ-C8051F990-Simplicity_main.c:2742: ZW_TimeOut_Flag = 0; //Normal failure
      001305 C2 12            [12] 4355 	clr	_ZW_TimeOut_Flag
                                   4356 ;	MagnetoZ-C8051F990-Simplicity_main.c:2744: break;
      001307 02 15 D9         [24] 4357 	ljmp	00244$
                                   4358 ;	MagnetoZ-C8051F990-Simplicity_main.c:2747: case 'C':
      00130A                       4359 00178$:
                                   4360 ;	MagnetoZ-C8051F990-Simplicity_main.c:2749: MagnetoZ_Info.Num_Failed_Tx++;
      00130A AE 75            [24] 4361 	mov	r6,((_MagnetoZ_Info + 0x0016) + 0)
      00130C AF 76            [24] 4362 	mov	r7,((_MagnetoZ_Info + 0x0016) + 1)
      00130E 0E               [12] 4363 	inc	r6
      00130F BE 00 01         [24] 4364 	cjne	r6,#0x00,00505$
      001312 0F               [12] 4365 	inc	r7
      001313                       4366 00505$:
      001313 8E 75            [24] 4367 	mov	((_MagnetoZ_Info + 0x0016) + 0),r6
      001315 8F 76            [24] 4368 	mov	((_MagnetoZ_Info + 0x0016) + 1),r7
                                   4369 ;	MagnetoZ-C8051F990-Simplicity_main.c:2752: if (COMMAND_8051_DOOR_OPEN == Command_Queue[0])
      001317 74 08            [12] 4370 	mov	a,#0x08
      001319 B5 4A 08         [24] 4371 	cjne	a,_Command_Queue,00182$
                                   4372 ;	MagnetoZ-C8051F990-Simplicity_main.c:2753: BlinkLED(FAILURE_BLINK);
      00131C 75 82 05         [24] 4373 	mov	dpl,#0x05
      00131F 12 17 68         [24] 4374 	lcall	_BlinkLED
      001322 80 0B            [24] 4375 	sjmp	00183$
      001324                       4376 00182$:
                                   4377 ;	MagnetoZ-C8051F990-Simplicity_main.c:2754: else if (TamperCmdFailed)
      001324 30 0E 08         [24] 4378 	jnb	_TamperCmdFailed,00183$
                                   4379 ;	MagnetoZ-C8051F990-Simplicity_main.c:2756: BlinkLED(FAILURE_BLINK);
      001327 75 82 05         [24] 4380 	mov	dpl,#0x05
      00132A 12 17 68         [24] 4381 	lcall	_BlinkLED
                                   4382 ;	MagnetoZ-C8051F990-Simplicity_main.c:2758: ExcludeFailed = 1;
      00132D D2 0D            [12] 4383 	setb	_ExcludeFailed
      00132F                       4384 00183$:
                                   4385 ;	MagnetoZ-C8051F990-Simplicity_main.c:2762: prevCommand = Command_Queue[0];
      00132F 85 4A 52         [24] 4386 	mov	_prevCommand,_Command_Queue
                                   4387 ;	MagnetoZ-C8051F990-Simplicity_main.c:2764: DequeueCommand();
      001332 12 18 67         [24] 4388 	lcall	_DequeueCommand
                                   4389 ;	MagnetoZ-C8051F990-Simplicity_main.c:2767: if (SuspendFlag)
      001335 30 10 13         [24] 4390 	jnb	_SuspendFlag,00187$
                                   4391 ;	MagnetoZ-C8051F990-Simplicity_main.c:2769: if (0 < WakeupCount)
      001338 C3               [12] 4392 	clr	c
      001339 E4               [12] 4393 	clr	a
      00133A 95 53            [12] 4394 	subb	a,_WakeupCount
      00133C E4               [12] 4395 	clr	a
      00133D 95 54            [12] 4396 	subb	a,(_WakeupCount + 1)
      00133F E4               [12] 4397 	clr	a
      001340 95 55            [12] 4398 	subb	a,(_WakeupCount + 2)
      001342 E4               [12] 4399 	clr	a
      001343 95 56            [12] 4400 	subb	a,(_WakeupCount + 3)
      001345 50 02            [24] 4401 	jnc	00185$
                                   4402 ;	MagnetoZ-C8051F990-Simplicity_main.c:2770: WakeUpTime_Set_flag = 1; // Turn ON Wake up notification, new CR #13 on BitBucket issue list
      001347 D2 03            [12] 4403 	setb	_WakeUpTime_Set_flag
      001349                       4404 00185$:
                                   4405 ;	MagnetoZ-C8051F990-Simplicity_main.c:2772: SuspendFlag = 0; //Success, Reset Suspend Flag if it was set
      001349 C2 10            [12] 4406 	clr	_SuspendFlag
      00134B                       4407 00187$:
                                   4408 ;	MagnetoZ-C8051F990-Simplicity_main.c:2775: ZW_TimeOut_Counter = 0; //Reset counter
      00134B 75 5E 00         [24] 4409 	mov	_ZW_TimeOut_Counter,#0x00
                                   4410 ;	MagnetoZ-C8051F990-Simplicity_main.c:2777: ZW_TimeOut_Flag = 0; //Normal failure
      00134E C2 12            [12] 4411 	clr	_ZW_TimeOut_Flag
                                   4412 ;	MagnetoZ-C8051F990-Simplicity_main.c:2779: if ((0x00 != MagnetoZ_Info.NodeID) || (0xFF != MagnetoZ_Info.AssociationID))
      001350 E5 60            [12] 4413 	mov	a,(_MagnetoZ_Info + 0x0001)
      001352 70 07            [24] 4414 	jnz	00188$
      001354 74 FF            [12] 4415 	mov	a,#0xFF
      001356 B5 61 02         [24] 4416 	cjne	a,(_MagnetoZ_Info + 0x0002),00512$
      001359 80 09            [24] 4417 	sjmp	00189$
      00135B                       4418 00512$:
      00135B                       4419 00188$:
                                   4420 ;	MagnetoZ-C8051F990-Simplicity_main.c:2781: SetCommand(COMMAND_8051_SET_IDS);
      00135B 75 82 0E         [24] 4421 	mov	dpl,#0x0E
      00135E 12 0D 64         [24] 4422 	lcall	_SetCommand
      001361 02 15 D9         [24] 4423 	ljmp	00244$
      001364                       4424 00189$:
                                   4425 ;	MagnetoZ-C8051F990-Simplicity_main.c:2783: DequeueCommand();
      001364 12 18 67         [24] 4426 	lcall	_DequeueCommand
                                   4427 ;	MagnetoZ-C8051F990-Simplicity_main.c:2785: break;
      001367 02 15 D9         [24] 4428 	ljmp	00244$
                                   4429 ;	MagnetoZ-C8051F990-Simplicity_main.c:2788: case 'I':
      00136A                       4430 00192$:
                                   4431 ;	MagnetoZ-C8051F990-Simplicity_main.c:2790: MagnetoZ_Info.Num_Successful_Tx++;
      00136A AB 71            [24] 4432 	mov	r3,((_MagnetoZ_Info + 0x0012) + 0)
      00136C AC 72            [24] 4433 	mov	r4,((_MagnetoZ_Info + 0x0012) + 1)
      00136E AE 73            [24] 4434 	mov	r6,((_MagnetoZ_Info + 0x0012) + 2)
      001370 AF 74            [24] 4435 	mov	r7,((_MagnetoZ_Info + 0x0012) + 3)
      001372 0B               [12] 4436 	inc	r3
      001373 BB 00 09         [24] 4437 	cjne	r3,#0x00,00513$
      001376 0C               [12] 4438 	inc	r4
      001377 BC 00 05         [24] 4439 	cjne	r4,#0x00,00513$
      00137A 0E               [12] 4440 	inc	r6
      00137B BE 00 01         [24] 4441 	cjne	r6,#0x00,00513$
      00137E 0F               [12] 4442 	inc	r7
      00137F                       4443 00513$:
      00137F 8B 71            [24] 4444 	mov	((_MagnetoZ_Info + 0x0012) + 0),r3
      001381 8C 72            [24] 4445 	mov	((_MagnetoZ_Info + 0x0012) + 1),r4
      001383 8E 73            [24] 4446 	mov	((_MagnetoZ_Info + 0x0012) + 2),r6
      001385 8F 74            [24] 4447 	mov	((_MagnetoZ_Info + 0x0012) + 3),r7
                                   4448 ;	MagnetoZ-C8051F990-Simplicity_main.c:2793: DequeueCommand();
      001387 12 18 67         [24] 4449 	lcall	_DequeueCommand
                                   4450 ;	MagnetoZ-C8051F990-Simplicity_main.c:2796: BlinkLEDLonger();
      00138A 12 17 B7         [24] 4451 	lcall	_BlinkLEDLonger
                                   4452 ;	MagnetoZ-C8051F990-Simplicity_main.c:2799: MagnetoZ_Info.CurrentState = STATE_8051_ACTIVE;
      00138D 75 5F 01         [24] 4453 	mov	_MagnetoZ_Info,#0x01
                                   4454 ;	MagnetoZ-C8051F990-Simplicity_main.c:2802: Flash_Write();
      001390 12 18 8E         [24] 4455 	lcall	_Flash_Write
                                   4456 ;	MagnetoZ-C8051F990-Simplicity_main.c:2805: IsIncluded = 1;
      001393 D2 0B            [12] 4457 	setb	_IsIncluded
                                   4458 ;	MagnetoZ-C8051F990-Simplicity_main.c:2807: SetCommand(COMMAND_8051_GET_IDS);
      001395 75 82 09         [24] 4459 	mov	dpl,#0x09
      001398 12 0D 64         [24] 4460 	lcall	_SetCommand
                                   4461 ;	MagnetoZ-C8051F990-Simplicity_main.c:2809: if (SuspendFlag)
                                   4462 ;	MagnetoZ-C8051F990-Simplicity_main.c:2810: SuspendFlag = 0; //Success, Reset Suspend Flag if it was set
      00139B 10 10 00         [24] 4463 	jbc	_SuspendFlag,00514$
      00139E                       4464 00514$:
                                   4465 ;	MagnetoZ-C8051F990-Simplicity_main.c:2812: ZW_TimeOut_Counter = 0; //Reset counter
      00139E 75 5E 00         [24] 4466 	mov	_ZW_TimeOut_Counter,#0x00
                                   4467 ;	MagnetoZ-C8051F990-Simplicity_main.c:2814: ZW_TimeOut_Flag = 0; //Normal failure
      0013A1 C2 12            [12] 4468 	clr	_ZW_TimeOut_Flag
                                   4469 ;	MagnetoZ-C8051F990-Simplicity_main.c:2816: break;
      0013A3 02 15 D9         [24] 4470 	ljmp	00244$
                                   4471 ;	MagnetoZ-C8051F990-Simplicity_main.c:2819: case 'G':
      0013A6                       4472 00195$:
                                   4473 ;	MagnetoZ-C8051F990-Simplicity_main.c:2822: if(UART_Buffer[BufferPointer+2] > '9') UART_Buffer[BufferPointer+2] -= 7; //MSB
      0013A6 74 02            [12] 4474 	mov	a,#0x02
      0013A8 2D               [12] 4475 	add	a,r5
      0013A9 24 26            [12] 4476 	add	a,#_UART_Buffer
      0013AB F9               [12] 4477 	mov	r1,a
      0013AC E7               [12] 4478 	mov	a,@r1
      0013AD FF               [12] 4479 	mov	r7,a
      0013AE 24 C6            [12] 4480 	add	a,#0xff - 0x39
      0013B0 50 0B            [24] 4481 	jnc	00197$
      0013B2 74 02            [12] 4482 	mov	a,#0x02
      0013B4 2D               [12] 4483 	add	a,r5
      0013B5 24 26            [12] 4484 	add	a,#_UART_Buffer
      0013B7 F9               [12] 4485 	mov	r1,a
      0013B8 E7               [12] 4486 	mov	a,@r1
      0013B9 FF               [12] 4487 	mov	r7,a
      0013BA 24 F9            [12] 4488 	add	a,#0xF9
      0013BC F7               [12] 4489 	mov	@r1,a
      0013BD                       4490 00197$:
                                   4491 ;	MagnetoZ-C8051F990-Simplicity_main.c:2823: if(UART_Buffer[BufferPointer+3] > '9') UART_Buffer[BufferPointer+3] -= 7; //LSB
      0013BD 74 03            [12] 4492 	mov	a,#0x03
      0013BF 2D               [12] 4493 	add	a,r5
      0013C0 24 26            [12] 4494 	add	a,#_UART_Buffer
      0013C2 F9               [12] 4495 	mov	r1,a
      0013C3 E7               [12] 4496 	mov	a,@r1
      0013C4 FF               [12] 4497 	mov	r7,a
      0013C5 24 C6            [12] 4498 	add	a,#0xff - 0x39
      0013C7 50 0B            [24] 4499 	jnc	00199$
      0013C9 74 03            [12] 4500 	mov	a,#0x03
      0013CB 2D               [12] 4501 	add	a,r5
      0013CC 24 26            [12] 4502 	add	a,#_UART_Buffer
      0013CE F9               [12] 4503 	mov	r1,a
      0013CF E7               [12] 4504 	mov	a,@r1
      0013D0 FF               [12] 4505 	mov	r7,a
      0013D1 24 F9            [12] 4506 	add	a,#0xF9
      0013D3 F7               [12] 4507 	mov	@r1,a
      0013D4                       4508 00199$:
                                   4509 ;	MagnetoZ-C8051F990-Simplicity_main.c:2824: MagnetoZ_Info.NodeID = (( UART_Buffer[BufferPointer+2] & 0x0F ) << 4 ) | ( UART_Buffer[BufferPointer+3] & 0x0F );
      0013D4 74 02            [12] 4510 	mov	a,#0x02
      0013D6 2D               [12] 4511 	add	a,r5
      0013D7 24 26            [12] 4512 	add	a,#_UART_Buffer
      0013D9 F9               [12] 4513 	mov	r1,a
      0013DA 87 07            [24] 4514 	mov	ar7,@r1
      0013DC 53 07 0F         [24] 4515 	anl	ar7,#0x0F
      0013DF EF               [12] 4516 	mov	a,r7
      0013E0 C4               [12] 4517 	swap	a
      0013E1 54 F0            [12] 4518 	anl	a,#0xF0
      0013E3 FF               [12] 4519 	mov	r7,a
      0013E4 74 03            [12] 4520 	mov	a,#0x03
      0013E6 2D               [12] 4521 	add	a,r5
      0013E7 24 26            [12] 4522 	add	a,#_UART_Buffer
      0013E9 F9               [12] 4523 	mov	r1,a
      0013EA 87 06            [24] 4524 	mov	ar6,@r1
      0013EC 74 0F            [12] 4525 	mov	a,#0x0F
      0013EE 5E               [12] 4526 	anl	a,r6
      0013EF 4F               [12] 4527 	orl	a,r7
      0013F0 F5 60            [12] 4528 	mov	(_MagnetoZ_Info + 0x0001),a
                                   4529 ;	MagnetoZ-C8051F990-Simplicity_main.c:2827: if(UART_Buffer[BufferPointer+4] > '9') UART_Buffer[BufferPointer+4] -= 7; //MSB
      0013F2 74 04            [12] 4530 	mov	a,#0x04
      0013F4 2D               [12] 4531 	add	a,r5
      0013F5 24 26            [12] 4532 	add	a,#_UART_Buffer
      0013F7 F9               [12] 4533 	mov	r1,a
      0013F8 E7               [12] 4534 	mov	a,@r1
      0013F9 FF               [12] 4535 	mov	r7,a
      0013FA 24 C6            [12] 4536 	add	a,#0xff - 0x39
      0013FC 50 0B            [24] 4537 	jnc	00201$
      0013FE 74 04            [12] 4538 	mov	a,#0x04
      001400 2D               [12] 4539 	add	a,r5
      001401 24 26            [12] 4540 	add	a,#_UART_Buffer
      001403 F9               [12] 4541 	mov	r1,a
      001404 E7               [12] 4542 	mov	a,@r1
      001405 FF               [12] 4543 	mov	r7,a
      001406 24 F9            [12] 4544 	add	a,#0xF9
      001408 F7               [12] 4545 	mov	@r1,a
      001409                       4546 00201$:
                                   4547 ;	MagnetoZ-C8051F990-Simplicity_main.c:2828: if(UART_Buffer[BufferPointer+5] > '9') UART_Buffer[BufferPointer+5] -= 7; //LSB
      001409 74 05            [12] 4548 	mov	a,#0x05
      00140B 2D               [12] 4549 	add	a,r5
      00140C 24 26            [12] 4550 	add	a,#_UART_Buffer
      00140E F9               [12] 4551 	mov	r1,a
      00140F E7               [12] 4552 	mov	a,@r1
      001410 FF               [12] 4553 	mov	r7,a
      001411 24 C6            [12] 4554 	add	a,#0xff - 0x39
      001413 50 0B            [24] 4555 	jnc	00203$
      001415 74 05            [12] 4556 	mov	a,#0x05
      001417 2D               [12] 4557 	add	a,r5
      001418 24 26            [12] 4558 	add	a,#_UART_Buffer
      00141A F9               [12] 4559 	mov	r1,a
      00141B E7               [12] 4560 	mov	a,@r1
      00141C FF               [12] 4561 	mov	r7,a
      00141D 24 F9            [12] 4562 	add	a,#0xF9
      00141F F7               [12] 4563 	mov	@r1,a
      001420                       4564 00203$:
                                   4565 ;	MagnetoZ-C8051F990-Simplicity_main.c:2829: MagnetoZ_Info.AssociationID = (( UART_Buffer[BufferPointer+4] & 0x0F ) << 4 ) | ( UART_Buffer[BufferPointer+5] & 0x0F );
      001420 74 04            [12] 4566 	mov	a,#0x04
      001422 2D               [12] 4567 	add	a,r5
      001423 24 26            [12] 4568 	add	a,#_UART_Buffer
      001425 F9               [12] 4569 	mov	r1,a
      001426 87 07            [24] 4570 	mov	ar7,@r1
      001428 53 07 0F         [24] 4571 	anl	ar7,#0x0F
      00142B EF               [12] 4572 	mov	a,r7
      00142C C4               [12] 4573 	swap	a
      00142D 54 F0            [12] 4574 	anl	a,#0xF0
      00142F FF               [12] 4575 	mov	r7,a
      001430 74 05            [12] 4576 	mov	a,#0x05
      001432 2D               [12] 4577 	add	a,r5
      001433 24 26            [12] 4578 	add	a,#_UART_Buffer
      001435 F9               [12] 4579 	mov	r1,a
      001436 87 06            [24] 4580 	mov	ar6,@r1
      001438 74 0F            [12] 4581 	mov	a,#0x0F
      00143A 5E               [12] 4582 	anl	a,r6
      00143B 4F               [12] 4583 	orl	a,r7
      00143C F5 61            [12] 4584 	mov	(_MagnetoZ_Info + 0x0002),a
                                   4585 ;	MagnetoZ-C8051F990-Simplicity_main.c:2831: Flash_Write();
      00143E 12 18 8E         [24] 4586 	lcall	_Flash_Write
                                   4587 ;	MagnetoZ-C8051F990-Simplicity_main.c:2834: DequeueCommand();
      001441 12 18 67         [24] 4588 	lcall	_DequeueCommand
                                   4589 ;	MagnetoZ-C8051F990-Simplicity_main.c:2836: break;
      001444 02 15 D9         [24] 4590 	ljmp	00244$
                                   4591 ;	MagnetoZ-C8051F990-Simplicity_main.c:2839: case 'X':
      001447                       4592 00204$:
                                   4593 ;	MagnetoZ-C8051F990-Simplicity_main.c:2841: MagnetoZ_Info.Num_Successful_Tx++;
      001447 AB 71            [24] 4594 	mov	r3,((_MagnetoZ_Info + 0x0012) + 0)
      001449 AC 72            [24] 4595 	mov	r4,((_MagnetoZ_Info + 0x0012) + 1)
      00144B AE 73            [24] 4596 	mov	r6,((_MagnetoZ_Info + 0x0012) + 2)
      00144D AF 74            [24] 4597 	mov	r7,((_MagnetoZ_Info + 0x0012) + 3)
      00144F 0B               [12] 4598 	inc	r3
      001450 BB 00 09         [24] 4599 	cjne	r3,#0x00,00519$
      001453 0C               [12] 4600 	inc	r4
      001454 BC 00 05         [24] 4601 	cjne	r4,#0x00,00519$
      001457 0E               [12] 4602 	inc	r6
      001458 BE 00 01         [24] 4603 	cjne	r6,#0x00,00519$
      00145B 0F               [12] 4604 	inc	r7
      00145C                       4605 00519$:
      00145C 8B 71            [24] 4606 	mov	((_MagnetoZ_Info + 0x0012) + 0),r3
      00145E 8C 72            [24] 4607 	mov	((_MagnetoZ_Info + 0x0012) + 1),r4
      001460 8E 73            [24] 4608 	mov	((_MagnetoZ_Info + 0x0012) + 2),r6
      001462 8F 74            [24] 4609 	mov	((_MagnetoZ_Info + 0x0012) + 3),r7
                                   4610 ;	MagnetoZ-C8051F990-Simplicity_main.c:2844: DequeueCommand();
      001464 12 18 67         [24] 4611 	lcall	_DequeueCommand
                                   4612 ;	MagnetoZ-C8051F990-Simplicity_main.c:2847: BlinkLEDLonger();
      001467 12 17 B7         [24] 4613 	lcall	_BlinkLEDLonger
                                   4614 ;	MagnetoZ-C8051F990-Simplicity_main.c:2850: MagnetoZ_Info.CurrentState = STATE_8051_DEMO;
      00146A 75 5F 00         [24] 4615 	mov	_MagnetoZ_Info,#0x00
                                   4616 ;	MagnetoZ-C8051F990-Simplicity_main.c:2851: MagnetoZ_Info.SleepStepTime	= DEFAULT_WAKE_UP_INTERVAL / 2;
      00146D 75 63 C0         [24] 4617 	mov	((_MagnetoZ_Info + 0x0004) + 0),#0xC0
      001470 75 64 A8         [24] 4618 	mov	((_MagnetoZ_Info + 0x0004) + 1),#0xA8
                                   4619 ;	MagnetoZ-C8051F990-Simplicity_main.c:2852: MagnetoZ_Info.NodeID = 0;
      001473 75 60 00         [24] 4620 	mov	(_MagnetoZ_Info + 0x0001),#0x00
                                   4621 ;	MagnetoZ-C8051F990-Simplicity_main.c:2853: MagnetoZ_Info.AssociationID = 0xFF;
      001476 75 61 FF         [24] 4622 	mov	(_MagnetoZ_Info + 0x0002),#0xFF
                                   4623 ;	MagnetoZ-C8051F990-Simplicity_main.c:2855: if (SuspendFlag)
                                   4624 ;	MagnetoZ-C8051F990-Simplicity_main.c:2856: SuspendFlag = 0; //Success, Reset Suspend Flag if it was set
      001479 10 10 00         [24] 4625 	jbc	_SuspendFlag,00520$
      00147C                       4626 00520$:
                                   4627 ;	MagnetoZ-C8051F990-Simplicity_main.c:2859: Flash_Write();
      00147C 12 18 8E         [24] 4628 	lcall	_Flash_Write
                                   4629 ;	MagnetoZ-C8051F990-Simplicity_main.c:2862: RSTSRC = 0x10;
      00147F 75 EF 10         [24] 4630 	mov	_RSTSRC,#0x10
                                   4631 ;	MagnetoZ-C8051F990-Simplicity_main.c:2864: break;
      001482 02 15 D9         [24] 4632 	ljmp	00244$
                                   4633 ;	MagnetoZ-C8051F990-Simplicity_main.c:2867: case 'W':
      001485                       4634 00207$:
                                   4635 ;	MagnetoZ-C8051F990-Simplicity_main.c:2868: case 'E':
      001485                       4636 00208$:
                                   4637 ;	MagnetoZ-C8051F990-Simplicity_main.c:2872: WUTCalculator(strtol(&UART_Buffer[BufferPointer+2], 4));
      001485 74 02            [12] 4638 	mov	a,#0x02
      001487 2D               [12] 4639 	add	a,r5
      001488 24 26            [12] 4640 	add	a,#_UART_Buffer
      00148A F5 82            [12] 4641 	mov	dpl,a
      00148C 75 0E 04         [24] 4642 	mov	_strtol_PARM_2,#0x04
      00148F C0 05            [24] 4643 	push	ar5
      001491 12 00 DF         [24] 4644 	lcall	_strtol
      001494 12 18 1D         [24] 4645 	lcall	_WUTCalculator
      001497 D0 05            [24] 4646 	pop	ar5
                                   4647 ;	MagnetoZ-C8051F990-Simplicity_main.c:2874: if ('E' == UART_Buffer[BufferPointer+1])
      001499 ED               [12] 4648 	mov	a,r5
      00149A 04               [12] 4649 	inc	a
      00149B 24 26            [12] 4650 	add	a,#_UART_Buffer
      00149D F9               [12] 4651 	mov	r1,a
      00149E 87 07            [24] 4652 	mov	ar7,@r1
      0014A0 BF 45 02         [24] 4653 	cjne	r7,#0x45,00521$
      0014A3 80 03            [24] 4654 	sjmp	00522$
      0014A5                       4655 00521$:
      0014A5 02 15 D9         [24] 4656 	ljmp	00244$
      0014A8                       4657 00522$:
                                   4658 ;	MagnetoZ-C8051F990-Simplicity_main.c:2875: DequeueCommand();
      0014A8 12 18 67         [24] 4659 	lcall	_DequeueCommand
                                   4660 ;	MagnetoZ-C8051F990-Simplicity_main.c:2877: break;
      0014AB 02 15 D9         [24] 4661 	ljmp	00244$
                                   4662 ;	MagnetoZ-C8051F990-Simplicity_main.c:2880: case 'F':
      0014AE                       4663 00211$:
                                   4664 ;	MagnetoZ-C8051F990-Simplicity_main.c:2882: MagnetoZ_Info.LEDConfigFlag = 0;
      0014AE 75 62 00         [24] 4665 	mov	(_MagnetoZ_Info + 0x0003),#0x00
                                   4666 ;	MagnetoZ-C8051F990-Simplicity_main.c:2885: Flash_Write();
      0014B1 C0 05            [24] 4667 	push	ar5
      0014B3 12 18 8E         [24] 4668 	lcall	_Flash_Write
      0014B6 D0 05            [24] 4669 	pop	ar5
                                   4670 ;	MagnetoZ-C8051F990-Simplicity_main.c:2887: if ( ('T' == UART_Buffer[BufferPointer+3]) || ('T' == UART_Buffer[BufferPointer+2]) ) //Second condition if IDD corrupted and data being fetched from ZW.
      0014B8 74 03            [12] 4671 	mov	a,#0x03
      0014BA 2D               [12] 4672 	add	a,r5
      0014BB 24 26            [12] 4673 	add	a,#_UART_Buffer
      0014BD F9               [12] 4674 	mov	r1,a
      0014BE 87 07            [24] 4675 	mov	ar7,@r1
      0014C0 BF 54 02         [24] 4676 	cjne	r7,#0x54,00523$
      0014C3 80 10            [24] 4677 	sjmp	00212$
      0014C5                       4678 00523$:
      0014C5 74 02            [12] 4679 	mov	a,#0x02
      0014C7 2D               [12] 4680 	add	a,r5
      0014C8 24 26            [12] 4681 	add	a,#_UART_Buffer
      0014CA F9               [12] 4682 	mov	r1,a
      0014CB 87 07            [24] 4683 	mov	ar7,@r1
      0014CD BF 54 02         [24] 4684 	cjne	r7,#0x54,00524$
      0014D0 80 03            [24] 4685 	sjmp	00525$
      0014D2                       4686 00524$:
      0014D2 02 15 D9         [24] 4687 	ljmp	00244$
      0014D5                       4688 00525$:
      0014D5                       4689 00212$:
                                   4690 ;	MagnetoZ-C8051F990-Simplicity_main.c:2890: DequeueCommand();
      0014D5 12 18 67         [24] 4691 	lcall	_DequeueCommand
                                   4692 ;	MagnetoZ-C8051F990-Simplicity_main.c:2893: memset(UART_Buffer, 0x00, UART_BUFFERSIZE);
      0014D8 75 0E 00         [24] 4693 	mov	_memset_PARM_2,#0x00
      0014DB 75 0F 20         [24] 4694 	mov	_memset_PARM_3,#0x20
      0014DE 75 10 00         [24] 4695 	mov	(_memset_PARM_3 + 1),#0x00
      0014E1 90 00 26         [24] 4696 	mov	dptr,#_UART_Buffer
      0014E4 75 F0 40         [24] 4697 	mov	b,#0x40
      0014E7 12 1B 29         [24] 4698 	lcall	_memset
                                   4699 ;	MagnetoZ-C8051F990-Simplicity_main.c:2896: break;
      0014EA 02 15 D9         [24] 4700 	ljmp	00244$
                                   4701 ;	MagnetoZ-C8051F990-Simplicity_main.c:2899: case 'N':
      0014ED                       4702 00215$:
                                   4703 ;	MagnetoZ-C8051F990-Simplicity_main.c:2901: MagnetoZ_Info.LEDConfigFlag = 1;
      0014ED 75 62 01         [24] 4704 	mov	(_MagnetoZ_Info + 0x0003),#0x01
                                   4705 ;	MagnetoZ-C8051F990-Simplicity_main.c:2904: Flash_Write();
      0014F0 C0 05            [24] 4706 	push	ar5
      0014F2 12 18 8E         [24] 4707 	lcall	_Flash_Write
      0014F5 D0 05            [24] 4708 	pop	ar5
                                   4709 ;	MagnetoZ-C8051F990-Simplicity_main.c:2906: if ( ('T' == UART_Buffer[BufferPointer+3]) || ('T' == UART_Buffer[BufferPointer+2]) ) //Second condition if IDD corrupted and data being fetched from ZW.
      0014F7 74 03            [12] 4710 	mov	a,#0x03
      0014F9 2D               [12] 4711 	add	a,r5
      0014FA 24 26            [12] 4712 	add	a,#_UART_Buffer
      0014FC F9               [12] 4713 	mov	r1,a
      0014FD 87 07            [24] 4714 	mov	ar7,@r1
      0014FF BF 54 02         [24] 4715 	cjne	r7,#0x54,00526$
      001502 80 10            [24] 4716 	sjmp	00216$
      001504                       4717 00526$:
      001504 74 02            [12] 4718 	mov	a,#0x02
      001506 2D               [12] 4719 	add	a,r5
      001507 24 26            [12] 4720 	add	a,#_UART_Buffer
      001509 F9               [12] 4721 	mov	r1,a
      00150A 87 07            [24] 4722 	mov	ar7,@r1
      00150C BF 54 02         [24] 4723 	cjne	r7,#0x54,00527$
      00150F 80 03            [24] 4724 	sjmp	00528$
      001511                       4725 00527$:
      001511 02 15 D9         [24] 4726 	ljmp	00244$
      001514                       4727 00528$:
      001514                       4728 00216$:
                                   4729 ;	MagnetoZ-C8051F990-Simplicity_main.c:2909: DequeueCommand();
      001514 12 18 67         [24] 4730 	lcall	_DequeueCommand
                                   4731 ;	MagnetoZ-C8051F990-Simplicity_main.c:2912: memset(UART_Buffer, 0x00, UART_BUFFERSIZE);
      001517 75 0E 00         [24] 4732 	mov	_memset_PARM_2,#0x00
      00151A 75 0F 20         [24] 4733 	mov	_memset_PARM_3,#0x20
      00151D 75 10 00         [24] 4734 	mov	(_memset_PARM_3 + 1),#0x00
      001520 90 00 26         [24] 4735 	mov	dptr,#_UART_Buffer
      001523 75 F0 40         [24] 4736 	mov	b,#0x40
      001526 12 1B 29         [24] 4737 	lcall	_memset
                                   4738 ;	MagnetoZ-C8051F990-Simplicity_main.c:2915: break;
      001529 02 15 D9         [24] 4739 	ljmp	00244$
                                   4740 ;	MagnetoZ-C8051F990-Simplicity_main.c:2918: case 'K':
      00152C                       4741 00219$:
                                   4742 ;	MagnetoZ-C8051F990-Simplicity_main.c:2920: WakeUpNIFConfigFlag = 1;
      00152C D2 11            [12] 4743 	setb	_WakeUpNIFConfigFlag
                                   4744 ;	MagnetoZ-C8051F990-Simplicity_main.c:2922: if ('T' == UART_Buffer[BufferPointer+3])
      00152E 74 03            [12] 4745 	mov	a,#0x03
      001530 2D               [12] 4746 	add	a,r5
      001531 24 26            [12] 4747 	add	a,#_UART_Buffer
      001533 F9               [12] 4748 	mov	r1,a
      001534 87 07            [24] 4749 	mov	ar7,@r1
      001536 BF 54 02         [24] 4750 	cjne	r7,#0x54,00529$
      001539 80 03            [24] 4751 	sjmp	00530$
      00153B                       4752 00529$:
      00153B 02 15 D9         [24] 4753 	ljmp	00244$
      00153E                       4754 00530$:
                                   4755 ;	MagnetoZ-C8051F990-Simplicity_main.c:2925: DequeueCommand();
      00153E 12 18 67         [24] 4756 	lcall	_DequeueCommand
                                   4757 ;	MagnetoZ-C8051F990-Simplicity_main.c:2928: memset(UART_Buffer, 0x00, UART_BUFFERSIZE);
      001541 75 0E 00         [24] 4758 	mov	_memset_PARM_2,#0x00
      001544 75 0F 20         [24] 4759 	mov	_memset_PARM_3,#0x20
      001547 75 10 00         [24] 4760 	mov	(_memset_PARM_3 + 1),#0x00
      00154A 90 00 26         [24] 4761 	mov	dptr,#_UART_Buffer
      00154D 75 F0 40         [24] 4762 	mov	b,#0x40
      001550 12 1B 29         [24] 4763 	lcall	_memset
                                   4764 ;	MagnetoZ-C8051F990-Simplicity_main.c:2931: break;
      001553 02 15 D9         [24] 4765 	ljmp	00244$
                                   4766 ;	MagnetoZ-C8051F990-Simplicity_main.c:2934: case 'L':
      001556                       4767 00222$:
                                   4768 ;	MagnetoZ-C8051F990-Simplicity_main.c:2936: WakeUpNIFConfigFlag = 0;
      001556 C2 11            [12] 4769 	clr	_WakeUpNIFConfigFlag
                                   4770 ;	MagnetoZ-C8051F990-Simplicity_main.c:2938: if ('T' == UART_Buffer[BufferPointer+3])
      001558 74 03            [12] 4771 	mov	a,#0x03
      00155A 2D               [12] 4772 	add	a,r5
      00155B 24 26            [12] 4773 	add	a,#_UART_Buffer
      00155D F9               [12] 4774 	mov	r1,a
      00155E 87 07            [24] 4775 	mov	ar7,@r1
      001560 BF 54 76         [24] 4776 	cjne	r7,#0x54,00244$
                                   4777 ;	MagnetoZ-C8051F990-Simplicity_main.c:2941: DequeueCommand();
      001563 12 18 67         [24] 4778 	lcall	_DequeueCommand
                                   4779 ;	MagnetoZ-C8051F990-Simplicity_main.c:2944: memset(UART_Buffer, 0x00, UART_BUFFERSIZE);
      001566 75 0E 00         [24] 4780 	mov	_memset_PARM_2,#0x00
      001569 75 0F 20         [24] 4781 	mov	_memset_PARM_3,#0x20
      00156C 75 10 00         [24] 4782 	mov	(_memset_PARM_3 + 1),#0x00
      00156F 90 00 26         [24] 4783 	mov	dptr,#_UART_Buffer
      001572 75 F0 40         [24] 4784 	mov	b,#0x40
      001575 12 1B 29         [24] 4785 	lcall	_memset
                                   4786 ;	MagnetoZ-C8051F990-Simplicity_main.c:2947: break;
                                   4787 ;	MagnetoZ-C8051F990-Simplicity_main.c:2950: case 'R':
      001578 80 5F            [24] 4788 	sjmp	00244$
      00157A                       4789 00225$:
                                   4790 ;	MagnetoZ-C8051F990-Simplicity_main.c:2952: MagnetoZ_Info.Num_Successful_Tx++;
      00157A AC 71            [24] 4791 	mov	r4,((_MagnetoZ_Info + 0x0012) + 0)
      00157C AD 72            [24] 4792 	mov	r5,((_MagnetoZ_Info + 0x0012) + 1)
      00157E AE 73            [24] 4793 	mov	r6,((_MagnetoZ_Info + 0x0012) + 2)
      001580 AF 74            [24] 4794 	mov	r7,((_MagnetoZ_Info + 0x0012) + 3)
      001582 0C               [12] 4795 	inc	r4
      001583 BC 00 09         [24] 4796 	cjne	r4,#0x00,00533$
      001586 0D               [12] 4797 	inc	r5
      001587 BD 00 05         [24] 4798 	cjne	r5,#0x00,00533$
      00158A 0E               [12] 4799 	inc	r6
      00158B BE 00 01         [24] 4800 	cjne	r6,#0x00,00533$
      00158E 0F               [12] 4801 	inc	r7
      00158F                       4802 00533$:
      00158F 8C 71            [24] 4803 	mov	((_MagnetoZ_Info + 0x0012) + 0),r4
      001591 8D 72            [24] 4804 	mov	((_MagnetoZ_Info + 0x0012) + 1),r5
      001593 8E 73            [24] 4805 	mov	((_MagnetoZ_Info + 0x0012) + 2),r6
      001595 8F 74            [24] 4806 	mov	((_MagnetoZ_Info + 0x0012) + 3),r7
                                   4807 ;	MagnetoZ-C8051F990-Simplicity_main.c:2955: DequeueCommand();
      001597 12 18 67         [24] 4808 	lcall	_DequeueCommand
                                   4809 ;	MagnetoZ-C8051F990-Simplicity_main.c:2958: BlinkLEDLonger();
      00159A 12 17 B7         [24] 4810 	lcall	_BlinkLEDLonger
                                   4811 ;	MagnetoZ-C8051F990-Simplicity_main.c:2961: MagnetoZ_Info.CurrentState = STATE_8051_DEMO;
      00159D 75 5F 00         [24] 4812 	mov	_MagnetoZ_Info,#0x00
                                   4813 ;	MagnetoZ-C8051F990-Simplicity_main.c:2962: MagnetoZ_Info.SleepStepTime	= DEFAULT_WAKE_UP_INTERVAL / 2;
      0015A0 75 63 C0         [24] 4814 	mov	((_MagnetoZ_Info + 0x0004) + 0),#0xC0
      0015A3 75 64 A8         [24] 4815 	mov	((_MagnetoZ_Info + 0x0004) + 1),#0xA8
                                   4816 ;	MagnetoZ-C8051F990-Simplicity_main.c:2963: MagnetoZ_Info.NodeID = 0;
      0015A6 75 60 00         [24] 4817 	mov	(_MagnetoZ_Info + 0x0001),#0x00
                                   4818 ;	MagnetoZ-C8051F990-Simplicity_main.c:2964: MagnetoZ_Info.AssociationID = 0xFF;
      0015A9 75 61 FF         [24] 4819 	mov	(_MagnetoZ_Info + 0x0002),#0xFF
                                   4820 ;	MagnetoZ-C8051F990-Simplicity_main.c:2966: if (SuspendFlag)
                                   4821 ;	MagnetoZ-C8051F990-Simplicity_main.c:2967: SuspendFlag = 0; //Success, Reset Suspend Flag if it was set
      0015AC 10 10 00         [24] 4822 	jbc	_SuspendFlag,00534$
      0015AF                       4823 00534$:
                                   4824 ;	MagnetoZ-C8051F990-Simplicity_main.c:2970: Flash_Write();
      0015AF 12 18 8E         [24] 4825 	lcall	_Flash_Write
                                   4826 ;	MagnetoZ-C8051F990-Simplicity_main.c:2973: RSTSRC = 0x10;
      0015B2 75 EF 10         [24] 4827 	mov	_RSTSRC,#0x10
                                   4828 ;	MagnetoZ-C8051F990-Simplicity_main.c:2975: break;
                                   4829 ;	MagnetoZ-C8051F990-Simplicity_main.c:2979: case 'T':
      0015B5 80 22            [24] 4830 	sjmp	00244$
      0015B7                       4831 00228$:
                                   4832 ;	MagnetoZ-C8051F990-Simplicity_main.c:2981: ZW_TimeOut_Counter = 0; //Reset counter
      0015B7 75 5E 00         [24] 4833 	mov	_ZW_TimeOut_Counter,#0x00
                                   4834 ;	MagnetoZ-C8051F990-Simplicity_main.c:2983: ZW_TimeOut_Flag = 0; //Normal failure
      0015BA C2 12            [12] 4835 	clr	_ZW_TimeOut_Flag
                                   4836 ;	MagnetoZ-C8051F990-Simplicity_main.c:2985: CommandFailed();
      0015BC 12 15 FC         [24] 4837 	lcall	_CommandFailed
                                   4838 ;	MagnetoZ-C8051F990-Simplicity_main.c:2987: break;
                                   4839 ;	MagnetoZ-C8051F990-Simplicity_main.c:2990: case 'D':
      0015BF 80 18            [24] 4840 	sjmp	00244$
      0015C1                       4841 00229$:
                                   4842 ;	MagnetoZ-C8051F990-Simplicity_main.c:2993: DequeueCommand();
      0015C1 12 18 67         [24] 4843 	lcall	_DequeueCommand
                                   4844 ;	MagnetoZ-C8051F990-Simplicity_main.c:2996: if ( (0x00 != MagnetoZ_Info.NodeID)
      0015C4 E5 60            [12] 4845 	mov	a,(_MagnetoZ_Info + 0x0001)
      0015C6 60 11            [24] 4846 	jz	00244$
                                   4847 ;	MagnetoZ-C8051F990-Simplicity_main.c:2997: && (0xFF != MagnetoZ_Info.AssociationID)
      0015C8 74 FF            [12] 4848 	mov	a,#0xFF
      0015CA B5 61 02         [24] 4849 	cjne	a,(_MagnetoZ_Info + 0x0002),00536$
      0015CD 80 0A            [24] 4850 	sjmp	00244$
      0015CF                       4851 00536$:
                                   4852 ;	MagnetoZ-C8051F990-Simplicity_main.c:2998: && (COMMAND_8051_NONE == Command_Queue[0]) )
      0015CF E5 4A            [12] 4853 	mov	a,_Command_Queue
      0015D1 70 06            [24] 4854 	jnz	00244$
                                   4855 ;	MagnetoZ-C8051F990-Simplicity_main.c:2999: EnqueueCommand(prevCommand);
      0015D3 85 52 82         [24] 4856 	mov	dpl,_prevCommand
      0015D6 12 18 53         [24] 4857 	lcall	_EnqueueCommand
                                   4858 ;	MagnetoZ-C8051F990-Simplicity_main.c:3001: break;
                                   4859 ;	MagnetoZ-C8051F990-Simplicity_main.c:3003: default:
                                   4860 ;	MagnetoZ-C8051F990-Simplicity_main.c:3012: }
      0015D9                       4861 00234$:
      0015D9                       4862 00244$:
                                   4863 ;	MagnetoZ-C8051F990-Simplicity_main.c:2466: for (BufferPointer = 0; BufferPointer < UART_Actual_Size; BufferPointer++)
      0015D9 05 7B            [12] 4864 	inc	_InterpretUARTInfo_BufferPointer_1_208
      0015DB E4               [12] 4865 	clr	a
      0015DC B5 7B 02         [24] 4866 	cjne	a,_InterpretUARTInfo_BufferPointer_1_208,00538$
      0015DF 05 7C            [12] 4867 	inc	(_InterpretUARTInfo_BufferPointer_1_208 + 1)
      0015E1                       4868 00538$:
      0015E1 02 0F 20         [24] 4869 	ljmp	00243$
      0015E4                       4870 00241$:
                                   4871 ;	MagnetoZ-C8051F990-Simplicity_main.c:3016: memset(UART_Buffer, 0x00, UART_BUFFERSIZE);
      0015E4 75 0E 00         [24] 4872 	mov	_memset_PARM_2,#0x00
      0015E7 75 0F 20         [24] 4873 	mov	_memset_PARM_3,#0x20
      0015EA 75 10 00         [24] 4874 	mov	(_memset_PARM_3 + 1),#0x00
      0015ED 90 00 26         [24] 4875 	mov	dptr,#_UART_Buffer
      0015F0 75 F0 40         [24] 4876 	mov	b,#0x40
      0015F3 12 1B 29         [24] 4877 	lcall	_memset
                                   4878 ;	MagnetoZ-C8051F990-Simplicity_main.c:3019: InterpretPacket = 0;
      0015F6 C2 05            [12] 4879 	clr	_InterpretPacket
                                   4880 ;	MagnetoZ-C8051F990-Simplicity_main.c:3022: UART_Actual_Size = 0;
      0015F8 75 48 00         [24] 4881 	mov	_UART_Actual_Size,#0x00
      0015FB 22               [24] 4882 	ret
                                   4883 ;------------------------------------------------------------
                                   4884 ;Allocation info for local variables in function 'CommandFailed'
                                   4885 ;------------------------------------------------------------
                                   4886 ;	MagnetoZ-C8051F990-Simplicity_main.c:3035: void CommandFailed()
                                   4887 ;	-----------------------------------------
                                   4888 ;	 function CommandFailed
                                   4889 ;	-----------------------------------------
      0015FC                       4890 _CommandFailed:
                                   4891 ;	MagnetoZ-C8051F990-Simplicity_main.c:3038: MagnetoZ_Info.Num_Failed_Tx++;
      0015FC AE 75            [24] 4892 	mov	r6,((_MagnetoZ_Info + 0x0016) + 0)
      0015FE AF 76            [24] 4893 	mov	r7,((_MagnetoZ_Info + 0x0016) + 1)
      001600 0E               [12] 4894 	inc	r6
      001601 BE 00 01         [24] 4895 	cjne	r6,#0x00,00254$
      001604 0F               [12] 4896 	inc	r7
      001605                       4897 00254$:
      001605 8E 75            [24] 4898 	mov	((_MagnetoZ_Info + 0x0016) + 0),r6
      001607 8F 76            [24] 4899 	mov	((_MagnetoZ_Info + 0x0016) + 1),r7
                                   4900 ;	MagnetoZ-C8051F990-Simplicity_main.c:3041: switch (Command_Queue[0])
      001609 E5 4A            [12] 4901 	mov	a,_Command_Queue
      00160B FF               [12] 4902 	mov	r7,a
      00160C 24 EF            [12] 4903 	add	a,#0xff - 0x10
      00160E 50 01            [24] 4904 	jnc	00255$
      001610 22               [24] 4905 	ret
      001611                       4906 00255$:
      001611 EF               [12] 4907 	mov	a,r7
      001612 24 0A            [12] 4908 	add	a,#(00256$-3-.)
      001614 83               [24] 4909 	movc	a,@a+pc
      001615 F5 82            [12] 4910 	mov	dpl,a
      001617 EF               [12] 4911 	mov	a,r7
      001618 24 15            [12] 4912 	add	a,#(00257$-3-.)
      00161A 83               [24] 4913 	movc	a,@a+pc
      00161B F5 83            [12] 4914 	mov	dph,a
      00161D E4               [12] 4915 	clr	a
      00161E 73               [24] 4916 	jmp	@a+dptr
      00161F                       4917 00256$:
      00161F 67                    4918 	.db	00173$
      001620 27                    4919 	.db	00160$
      001621 F2                    4920 	.db	00144$
      001622 00                    4921 	.db	00148$
      001623 1A                    4922 	.db	00156$
      001624 0D                    4923 	.db	00152$
      001625 5E                    4924 	.db	00172$
      001626 41                    4925 	.db	00101$
      001627 8D                    4926 	.db	00119$
      001628 67                    4927 	.db	00173$
      001629 67                    4928 	.db	00173$
      00162A 67                    4929 	.db	00173$
      00162B 5E                    4930 	.db	00171$
      00162C 40                    4931 	.db	00168$
      00162D 67                    4932 	.db	00173$
      00162E 34                    4933 	.db	00164$
      00162F DF                    4934 	.db	00137$
      001630                       4935 00257$:
      001630 17                    4936 	.db	00173$>>8
      001631 17                    4937 	.db	00160$>>8
      001632 16                    4938 	.db	00144$>>8
      001633 17                    4939 	.db	00148$>>8
      001634 17                    4940 	.db	00156$>>8
      001635 17                    4941 	.db	00152$>>8
      001636 17                    4942 	.db	00172$>>8
      001637 16                    4943 	.db	00101$>>8
      001638 16                    4944 	.db	00119$>>8
      001639 17                    4945 	.db	00173$>>8
      00163A 17                    4946 	.db	00173$>>8
      00163B 17                    4947 	.db	00173$>>8
      00163C 17                    4948 	.db	00171$>>8
      00163D 17                    4949 	.db	00168$>>8
      00163E 17                    4950 	.db	00173$>>8
      00163F 17                    4951 	.db	00164$>>8
      001640 16                    4952 	.db	00137$>>8
                                   4953 ;	MagnetoZ-C8051F990-Simplicity_main.c:3044: case COMMAND_8051_DOOR_CLOSE:
      001641                       4954 00101$:
                                   4955 ;	MagnetoZ-C8051F990-Simplicity_main.c:3045: if (!IsIncluded) //PATCH: Sensor is recently included, ignore 'T'
      001641 30 0B 01         [24] 4956 	jnb	_IsIncluded,00258$
      001644 22               [24] 4957 	ret
      001645                       4958 00258$:
                                   4959 ;	MagnetoZ-C8051F990-Simplicity_main.c:3055: if ( (!ZW_TimeOut_Flag) && (!BattIsDead) )
      001645 20 12 37         [24] 4960 	jb	_ZW_TimeOut_Flag,00114$
      001648 20 09 34         [24] 4961 	jb	_BattIsDead,00114$
                                   4962 ;	MagnetoZ-C8051F990-Simplicity_main.c:3059: if ( (!SuspendFlag) && (!ResendCmd_flag) )
      00164B 20 10 2E         [24] 4963 	jb	_SuspendFlag,00109$
      00164E 20 06 2B         [24] 4964 	jb	_ResendCmd_flag,00109$
                                   4965 ;	MagnetoZ-C8051F990-Simplicity_main.c:3061: ResendCmd_flag = 1;
      001651 D2 06            [12] 4966 	setb	_ResendCmd_flag
                                   4967 ;	MagnetoZ-C8051F990-Simplicity_main.c:3062: if (0 != First_Hour_Seconds_Counter)
      001653 90 00 05         [24] 4968 	mov	dptr,#_First_Hour_Seconds_Counter
      001656 E0               [24] 4969 	movx	a,@dptr
      001657 F5 F0            [12] 4970 	mov	b,a
      001659 A3               [24] 4971 	inc	dptr
      00165A E0               [24] 4972 	movx	a,@dptr
      00165B 45 F0            [12] 4973 	orl	a,b
      00165D 60 12            [24] 4974 	jz	00106$
                                   4975 ;	MagnetoZ-C8051F990-Simplicity_main.c:3064: First_Hour_Counter = 3600/FIRST_HOUR_CLOSE_CMD_RESEND_SECONDS_COUNTER;
      00165F 90 00 01         [24] 4976 	mov	dptr,#_First_Hour_Counter
      001662 74 04            [12] 4977 	mov	a,#0x04
      001664 F0               [24] 4978 	movx	@dptr,a
                                   4979 ;	MagnetoZ-C8051F990-Simplicity_main.c:3067: Seconds_Counter = FIRST_HOUR_CLOSE_CMD_RESEND_SECONDS_COUNTER;
      001665 90 00 03         [24] 4980 	mov	dptr,#_Seconds_Counter
      001668 74 84            [12] 4981 	mov	a,#0x84
      00166A F0               [24] 4982 	movx	@dptr,a
      00166B 74 03            [12] 4983 	mov	a,#0x03
      00166D A3               [24] 4984 	inc	dptr
      00166E F0               [24] 4985 	movx	@dptr,a
                                   4986 ;	MagnetoZ-C8051F990-Simplicity_main.c:3069: Seconds_Counter = 0;
      00166F 80 0B            [24] 4987 	sjmp	00109$
      001671                       4988 00106$:
                                   4989 ;	MagnetoZ-C8051F990-Simplicity_main.c:3073: First_Hour_Counter = 0;
      001671 90 00 01         [24] 4990 	mov	dptr,#_First_Hour_Counter
      001674 E4               [12] 4991 	clr	a
      001675 F0               [24] 4992 	movx	@dptr,a
                                   4993 ;	MagnetoZ-C8051F990-Simplicity_main.c:3074: Seconds_Counter = 0;
      001676 90 00 03         [24] 4994 	mov	dptr,#_Seconds_Counter
      001679 F0               [24] 4995 	movx	@dptr,a
      00167A A3               [24] 4996 	inc	dptr
      00167B F0               [24] 4997 	movx	@dptr,a
      00167C                       4998 00109$:
                                   4999 ;	MagnetoZ-C8051F990-Simplicity_main.c:3079: SendCmd_flag = 0;
      00167C C2 07            [12] 5000 	clr	_SendCmd_flag
      00167E 22               [24] 5001 	ret
      00167F                       5002 00114$:
                                   5003 ;	MagnetoZ-C8051F990-Simplicity_main.c:3081: else if (BattIsDead)
      00167F 20 09 01         [24] 5004 	jb	_BattIsDead,00264$
      001682 22               [24] 5005 	ret
      001683                       5006 00264$:
                                   5007 ;	MagnetoZ-C8051F990-Simplicity_main.c:3084: prevCommand = Command_Queue[0];
      001683 8F 52            [24] 5008 	mov	_prevCommand,r7
                                   5009 ;	MagnetoZ-C8051F990-Simplicity_main.c:3086: DequeueCommand();
      001685 12 18 67         [24] 5010 	lcall	_DequeueCommand
                                   5011 ;	MagnetoZ-C8051F990-Simplicity_main.c:3087: ZW_TimeOut_Flag = 0;
      001688 C2 12            [12] 5012 	clr	_ZW_TimeOut_Flag
                                   5013 ;	MagnetoZ-C8051F990-Simplicity_main.c:3090: SendCmd_flag = 1;
      00168A D2 07            [12] 5014 	setb	_SendCmd_flag
                                   5015 ;	MagnetoZ-C8051F990-Simplicity_main.c:3093: break;
      00168C 22               [24] 5016 	ret
                                   5017 ;	MagnetoZ-C8051F990-Simplicity_main.c:3095: case COMMAND_8051_DOOR_OPEN:
      00168D                       5018 00119$:
                                   5019 ;	MagnetoZ-C8051F990-Simplicity_main.c:3096: if (!IsIncluded) //PATCH: Sensor is recently included, ignore 'T'
      00168D 30 0B 01         [24] 5020 	jnb	_IsIncluded,00265$
      001690 22               [24] 5021 	ret
      001691                       5022 00265$:
                                   5023 ;	MagnetoZ-C8051F990-Simplicity_main.c:3098: if ( (!ZW_TimeOut_Flag) && (!BattIsDead) )
      001691 20 12 3D         [24] 5024 	jb	_ZW_TimeOut_Flag,00132$
      001694 20 09 3A         [24] 5025 	jb	_BattIsDead,00132$
                                   5026 ;	MagnetoZ-C8051F990-Simplicity_main.c:3101: BlinkLED(FAILURE_BLINK);
      001697 75 82 05         [24] 5027 	mov	dpl,#0x05
      00169A 12 17 68         [24] 5028 	lcall	_BlinkLED
                                   5029 ;	MagnetoZ-C8051F990-Simplicity_main.c:3110: if ( (!SuspendFlag) && (!ResendCmd_flag) )
      00169D 20 10 2E         [24] 5030 	jb	_SuspendFlag,00127$
      0016A0 20 06 2B         [24] 5031 	jb	_ResendCmd_flag,00127$
                                   5032 ;	MagnetoZ-C8051F990-Simplicity_main.c:3112: ResendCmd_flag = 1;
      0016A3 D2 06            [12] 5033 	setb	_ResendCmd_flag
                                   5034 ;	MagnetoZ-C8051F990-Simplicity_main.c:3113: if (0 != First_Hour_Seconds_Counter)
      0016A5 90 00 05         [24] 5035 	mov	dptr,#_First_Hour_Seconds_Counter
      0016A8 E0               [24] 5036 	movx	a,@dptr
      0016A9 F5 F0            [12] 5037 	mov	b,a
      0016AB A3               [24] 5038 	inc	dptr
      0016AC E0               [24] 5039 	movx	a,@dptr
      0016AD 45 F0            [12] 5040 	orl	a,b
      0016AF 60 12            [24] 5041 	jz	00124$
                                   5042 ;	MagnetoZ-C8051F990-Simplicity_main.c:3115: First_Hour_Counter = 3600/FIRST_HOUR_OPEN_CMD_RESEND_SECONDS_COUNTER;
      0016B1 90 00 01         [24] 5043 	mov	dptr,#_First_Hour_Counter
      0016B4 74 0C            [12] 5044 	mov	a,#0x0C
      0016B6 F0               [24] 5045 	movx	@dptr,a
                                   5046 ;	MagnetoZ-C8051F990-Simplicity_main.c:3118: Seconds_Counter = FIRST_HOUR_OPEN_CMD_RESEND_SECONDS_COUNTER;
      0016B7 90 00 03         [24] 5047 	mov	dptr,#_Seconds_Counter
      0016BA 74 2C            [12] 5048 	mov	a,#0x2C
      0016BC F0               [24] 5049 	movx	@dptr,a
      0016BD 74 01            [12] 5050 	mov	a,#0x01
      0016BF A3               [24] 5051 	inc	dptr
      0016C0 F0               [24] 5052 	movx	@dptr,a
                                   5053 ;	MagnetoZ-C8051F990-Simplicity_main.c:3120: Seconds_Counter = 0;
      0016C1 80 0B            [24] 5054 	sjmp	00127$
      0016C3                       5055 00124$:
                                   5056 ;	MagnetoZ-C8051F990-Simplicity_main.c:3124: First_Hour_Counter = 0;
      0016C3 90 00 01         [24] 5057 	mov	dptr,#_First_Hour_Counter
      0016C6 E4               [12] 5058 	clr	a
      0016C7 F0               [24] 5059 	movx	@dptr,a
                                   5060 ;	MagnetoZ-C8051F990-Simplicity_main.c:3125: Seconds_Counter = 0;
      0016C8 90 00 03         [24] 5061 	mov	dptr,#_Seconds_Counter
      0016CB F0               [24] 5062 	movx	@dptr,a
      0016CC A3               [24] 5063 	inc	dptr
      0016CD F0               [24] 5064 	movx	@dptr,a
      0016CE                       5065 00127$:
                                   5066 ;	MagnetoZ-C8051F990-Simplicity_main.c:3130: SendCmd_flag = 0;
      0016CE C2 07            [12] 5067 	clr	_SendCmd_flag
      0016D0 22               [24] 5068 	ret
      0016D1                       5069 00132$:
                                   5070 ;	MagnetoZ-C8051F990-Simplicity_main.c:3132: else if (BattIsDead)
      0016D1 20 09 01         [24] 5071 	jb	_BattIsDead,00271$
      0016D4 22               [24] 5072 	ret
      0016D5                       5073 00271$:
                                   5074 ;	MagnetoZ-C8051F990-Simplicity_main.c:3135: prevCommand = Command_Queue[0];
      0016D5 8F 52            [24] 5075 	mov	_prevCommand,r7
                                   5076 ;	MagnetoZ-C8051F990-Simplicity_main.c:3137: DequeueCommand();
      0016D7 12 18 67         [24] 5077 	lcall	_DequeueCommand
                                   5078 ;	MagnetoZ-C8051F990-Simplicity_main.c:3138: ZW_TimeOut_Flag = 0;
      0016DA C2 12            [12] 5079 	clr	_ZW_TimeOut_Flag
                                   5080 ;	MagnetoZ-C8051F990-Simplicity_main.c:3141: SendCmd_flag = 1;
      0016DC D2 07            [12] 5081 	setb	_SendCmd_flag
                                   5082 ;	MagnetoZ-C8051F990-Simplicity_main.c:3144: break;
      0016DE 22               [24] 5083 	ret
                                   5084 ;	MagnetoZ-C8051F990-Simplicity_main.c:3148: case COMMAND_8051_WAKE_UP_ZWAVE:
      0016DF                       5085 00137$:
                                   5086 ;	MagnetoZ-C8051F990-Simplicity_main.c:3151: if ( (!ZW_TimeOut_Flag) && (!BattIsDead) )
      0016DF 20 12 06         [24] 5087 	jb	_ZW_TimeOut_Flag,00141$
      0016E2 20 09 03         [24] 5088 	jb	_BattIsDead,00141$
                                   5089 ;	MagnetoZ-C8051F990-Simplicity_main.c:3153: DequeueCommand();
      0016E5 02 18 67         [24] 5090 	ljmp	_DequeueCommand
      0016E8                       5091 00141$:
                                   5092 ;	MagnetoZ-C8051F990-Simplicity_main.c:3155: else if (BattIsDead)
      0016E8 20 09 01         [24] 5093 	jb	_BattIsDead,00274$
      0016EB 22               [24] 5094 	ret
      0016EC                       5095 00274$:
                                   5096 ;	MagnetoZ-C8051F990-Simplicity_main.c:3157: DequeueCommand();
      0016EC 12 18 67         [24] 5097 	lcall	_DequeueCommand
                                   5098 ;	MagnetoZ-C8051F990-Simplicity_main.c:3158: ZW_TimeOut_Flag = 0;
      0016EF C2 12            [12] 5099 	clr	_ZW_TimeOut_Flag
                                   5100 ;	MagnetoZ-C8051F990-Simplicity_main.c:3160: break;
      0016F1 22               [24] 5101 	ret
                                   5102 ;	MagnetoZ-C8051F990-Simplicity_main.c:3162: case COMMAND_8051_BATTERY_FULL:
      0016F2                       5103 00144$:
                                   5104 ;	MagnetoZ-C8051F990-Simplicity_main.c:3163: if( (!ZW_TimeOut_Flag) || (BattIsDead) )
      0016F2 30 12 04         [24] 5105 	jnb	_ZW_TimeOut_Flag,00145$
      0016F5 20 09 01         [24] 5106 	jb	_BattIsDead,00276$
      0016F8 22               [24] 5107 	ret
      0016F9                       5108 00276$:
      0016F9                       5109 00145$:
                                   5110 ;	MagnetoZ-C8051F990-Simplicity_main.c:3165: DequeueCommand();
      0016F9 12 18 67         [24] 5111 	lcall	_DequeueCommand
                                   5112 ;	MagnetoZ-C8051F990-Simplicity_main.c:3168: MagnetoZ_Info.prevBatteryLevel = COMMAND_8051_NONE;
      0016FC 75 6B 00         [24] 5113 	mov	(_MagnetoZ_Info + 0x000c),#0x00
                                   5114 ;	MagnetoZ-C8051F990-Simplicity_main.c:3170: break;
                                   5115 ;	MagnetoZ-C8051F990-Simplicity_main.c:3172: case COMMAND_8051_BATTERY_HIGH:
      0016FF 22               [24] 5116 	ret
      001700                       5117 00148$:
                                   5118 ;	MagnetoZ-C8051F990-Simplicity_main.c:3173: if( (!ZW_TimeOut_Flag) || (BattIsDead) )
      001700 30 12 03         [24] 5119 	jnb	_ZW_TimeOut_Flag,00149$
      001703 30 09 61         [24] 5120 	jnb	_BattIsDead,00175$
      001706                       5121 00149$:
                                   5122 ;	MagnetoZ-C8051F990-Simplicity_main.c:3175: DequeueCommand();
      001706 12 18 67         [24] 5123 	lcall	_DequeueCommand
                                   5124 ;	MagnetoZ-C8051F990-Simplicity_main.c:3178: MagnetoZ_Info.prevBatteryLevel = COMMAND_8051_BATTERY_FULL;
      001709 75 6B 02         [24] 5125 	mov	(_MagnetoZ_Info + 0x000c),#0x02
                                   5126 ;	MagnetoZ-C8051F990-Simplicity_main.c:3180: break;
                                   5127 ;	MagnetoZ-C8051F990-Simplicity_main.c:3182: case COMMAND_8051_BATTERY_MEDIUM:
      00170C 22               [24] 5128 	ret
      00170D                       5129 00152$:
                                   5130 ;	MagnetoZ-C8051F990-Simplicity_main.c:3183: if( (!ZW_TimeOut_Flag) || (BattIsDead) )
      00170D 30 12 03         [24] 5131 	jnb	_ZW_TimeOut_Flag,00153$
      001710 30 09 54         [24] 5132 	jnb	_BattIsDead,00175$
      001713                       5133 00153$:
                                   5134 ;	MagnetoZ-C8051F990-Simplicity_main.c:3185: DequeueCommand();
      001713 12 18 67         [24] 5135 	lcall	_DequeueCommand
                                   5136 ;	MagnetoZ-C8051F990-Simplicity_main.c:3188: MagnetoZ_Info.prevBatteryLevel = COMMAND_8051_BATTERY_HIGH;
      001716 75 6B 03         [24] 5137 	mov	(_MagnetoZ_Info + 0x000c),#0x03
                                   5138 ;	MagnetoZ-C8051F990-Simplicity_main.c:3190: break;
                                   5139 ;	MagnetoZ-C8051F990-Simplicity_main.c:3192: case COMMAND_8051_BATTERY_LOW:
      001719 22               [24] 5140 	ret
      00171A                       5141 00156$:
                                   5142 ;	MagnetoZ-C8051F990-Simplicity_main.c:3193: if( (!ZW_TimeOut_Flag) || (BattIsDead) )
      00171A 30 12 03         [24] 5143 	jnb	_ZW_TimeOut_Flag,00157$
      00171D 30 09 47         [24] 5144 	jnb	_BattIsDead,00175$
      001720                       5145 00157$:
                                   5146 ;	MagnetoZ-C8051F990-Simplicity_main.c:3195: DequeueCommand();
      001720 12 18 67         [24] 5147 	lcall	_DequeueCommand
                                   5148 ;	MagnetoZ-C8051F990-Simplicity_main.c:3199: MagnetoZ_Info.prevBatteryLevel = COMMAND_8051_NONE;
      001723 75 6B 00         [24] 5149 	mov	(_MagnetoZ_Info + 0x000c),#0x00
                                   5150 ;	MagnetoZ-C8051F990-Simplicity_main.c:3201: break;
                                   5151 ;	MagnetoZ-C8051F990-Simplicity_main.c:3205: case COMMAND_8051_BATTERY_DEAD:
      001726 22               [24] 5152 	ret
      001727                       5153 00160$:
                                   5154 ;	MagnetoZ-C8051F990-Simplicity_main.c:3206: if( (!ZW_TimeOut_Flag) || (BattIsDead) )
      001727 30 12 03         [24] 5155 	jnb	_ZW_TimeOut_Flag,00161$
      00172A 30 09 3A         [24] 5156 	jnb	_BattIsDead,00175$
      00172D                       5157 00161$:
                                   5158 ;	MagnetoZ-C8051F990-Simplicity_main.c:3208: DequeueCommand();
      00172D 12 18 67         [24] 5159 	lcall	_DequeueCommand
                                   5160 ;	MagnetoZ-C8051F990-Simplicity_main.c:3211: MagnetoZ_Info.prevBatteryLevel = COMMAND_8051_BATTERY_LOW;
      001730 75 6B 04         [24] 5161 	mov	(_MagnetoZ_Info + 0x000c),#0x04
                                   5162 ;	MagnetoZ-C8051F990-Simplicity_main.c:3213: break;
                                   5163 ;	MagnetoZ-C8051F990-Simplicity_main.c:3215: case COMMAND_8051_TAMPERING:
      001733 22               [24] 5164 	ret
      001734                       5165 00164$:
                                   5166 ;	MagnetoZ-C8051F990-Simplicity_main.c:3219: if( (!ZW_TimeOut_Flag) || (BattIsDead) )
      001734 30 12 03         [24] 5167 	jnb	_ZW_TimeOut_Flag,00165$
      001737 30 09 2D         [24] 5168 	jnb	_BattIsDead,00175$
      00173A                       5169 00165$:
                                   5170 ;	MagnetoZ-C8051F990-Simplicity_main.c:3221: DequeueCommand();
      00173A 12 18 67         [24] 5171 	lcall	_DequeueCommand
                                   5172 ;	MagnetoZ-C8051F990-Simplicity_main.c:3223: TamperCmdFailed = 1;
      00173D D2 0E            [12] 5173 	setb	_TamperCmdFailed
                                   5174 ;	MagnetoZ-C8051F990-Simplicity_main.c:3225: break;
                                   5175 ;	MagnetoZ-C8051F990-Simplicity_main.c:3227: case COMMAND_8051_LEARN_MODE_EXCLUDE:
      00173F 22               [24] 5176 	ret
      001740                       5177 00168$:
                                   5178 ;	MagnetoZ-C8051F990-Simplicity_main.c:3230: if (TamperCmdFailed)
      001740 30 0E 06         [24] 5179 	jnb	_TamperCmdFailed,00170$
                                   5180 ;	MagnetoZ-C8051F990-Simplicity_main.c:3231: BlinkLED(FAILURE_BLINK);
      001743 75 82 05         [24] 5181 	mov	dpl,#0x05
      001746 12 17 68         [24] 5182 	lcall	_BlinkLED
      001749                       5183 00170$:
                                   5184 ;	MagnetoZ-C8051F990-Simplicity_main.c:3234: memset(Command_Queue, COMMAND_8051_NONE, COMMAND_QUEUE_SIZE);
      001749 75 0E 00         [24] 5185 	mov	_memset_PARM_2,#0x00
      00174C 75 0F 08         [24] 5186 	mov	_memset_PARM_3,#0x08
      00174F 75 10 00         [24] 5187 	mov	(_memset_PARM_3 + 1),#0x00
      001752 90 00 4A         [24] 5188 	mov	dptr,#_Command_Queue
      001755 75 F0 40         [24] 5189 	mov	b,#0x40
      001758 12 1B 29         [24] 5190 	lcall	_memset
                                   5191 ;	MagnetoZ-C8051F990-Simplicity_main.c:3236: ExcludeFailed = 1;
      00175B D2 0D            [12] 5192 	setb	_ExcludeFailed
                                   5193 ;	MagnetoZ-C8051F990-Simplicity_main.c:3238: break;
                                   5194 ;	MagnetoZ-C8051F990-Simplicity_main.c:3242: case COMMAND_8051_LEARN_MODE_INCLUDE:
      00175D 22               [24] 5195 	ret
      00175E                       5196 00171$:
                                   5197 ;	MagnetoZ-C8051F990-Simplicity_main.c:3243: case COMMAND_8051_DEVICE_RESET:
      00175E                       5198 00172$:
                                   5199 ;	MagnetoZ-C8051F990-Simplicity_main.c:3246: BlinkLED(FAILURE_BLINK);
      00175E 75 82 05         [24] 5200 	mov	dpl,#0x05
      001761 12 17 68         [24] 5201 	lcall	_BlinkLED
                                   5202 ;	MagnetoZ-C8051F990-Simplicity_main.c:3248: DequeueCommand();
      001764 12 18 67         [24] 5203 	lcall	_DequeueCommand
                                   5204 ;	MagnetoZ-C8051F990-Simplicity_main.c:3250: break;
                                   5205 ;	MagnetoZ-C8051F990-Simplicity_main.c:3252: default:
                                   5206 ;	MagnetoZ-C8051F990-Simplicity_main.c:3254: }
      001767                       5207 00173$:
      001767                       5208 00175$:
      001767 22               [24] 5209 	ret
                                   5210 ;------------------------------------------------------------
                                   5211 ;Allocation info for local variables in function 'BlinkLED'
                                   5212 ;------------------------------------------------------------
                                   5213 ;count                     Allocated to registers r7 
                                   5214 ;i                         Allocated to registers r6 
                                   5215 ;j                         Allocated to registers r5 
                                   5216 ;------------------------------------------------------------
                                   5217 ;	MagnetoZ-C8051F990-Simplicity_main.c:3271: void BlinkLED(U8 count)
                                   5218 ;	-----------------------------------------
                                   5219 ;	 function BlinkLED
                                   5220 ;	-----------------------------------------
      001768                       5221 _BlinkLED:
      001768 AF 82            [24] 5222 	mov	r7,dpl
                                   5223 ;	MagnetoZ-C8051F990-Simplicity_main.c:3275: if ( (BattIsDead) || ( (5 < MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) ) )		//Always use V.R.
      00176A 20 09 09         [24] 5224 	jb	_BattIsDead,00101$
      00176D E5 6C            [12] 5225 	mov	a,(_MagnetoZ_Info + 0x000d)
      00176F 24 FA            [12] 5226 	add	a,#0xff - 0x05
      001771 50 05            [24] 5227 	jnc	00124$
      001773 30 0C 02         [24] 5228 	jnb	_FirstTimeVR,00124$
      001776                       5229 00101$:
                                   5230 ;	MagnetoZ-C8051F990-Simplicity_main.c:3276: VOLTAGE_REG_CONTROL = 1;
      001776 D2 90            [12] 5231 	setb	_VOLTAGE_REG_CONTROL
                                   5232 ;	MagnetoZ-C8051F990-Simplicity_main.c:3278: for (i=0;i<count;i++)
      001778                       5233 00124$:
      001778 7E 00            [12] 5234 	mov	r6,#0x00
      00177A                       5235 00113$:
      00177A C3               [12] 5236 	clr	c
      00177B EE               [12] 5237 	mov	a,r6
      00177C 9F               [12] 5238 	subb	a,r7
      00177D 50 35            [24] 5239 	jnc	00107$
                                   5240 ;	MagnetoZ-C8051F990-Simplicity_main.c:3282: for (j=0;j<15;j++)
      00177F 7D 00            [12] 5241 	mov	r5,#0x00
      001781                       5242 00108$:
                                   5243 ;	MagnetoZ-C8051F990-Simplicity_main.c:3283: LED_Pattern(1);
      001781 D2 16            [12] 5244 	setb	_LED_Pattern_PARM_1
      001783 C0 07            [24] 5245 	push	ar7
      001785 C0 06            [24] 5246 	push	ar6
      001787 C0 05            [24] 5247 	push	ar5
      001789 12 17 E9         [24] 5248 	lcall	_LED_Pattern
      00178C D0 05            [24] 5249 	pop	ar5
      00178E D0 06            [24] 5250 	pop	ar6
      001790 D0 07            [24] 5251 	pop	ar7
                                   5252 ;	MagnetoZ-C8051F990-Simplicity_main.c:3282: for (j=0;j<15;j++)
      001792 0D               [12] 5253 	inc	r5
      001793 BD 0F 00         [24] 5254 	cjne	r5,#0x0F,00148$
      001796                       5255 00148$:
      001796 40 E9            [24] 5256 	jc	00108$
                                   5257 ;	MagnetoZ-C8051F990-Simplicity_main.c:3285: for (j=0;j<255;j++)
      001798 7D 00            [12] 5258 	mov	r5,#0x00
      00179A                       5259 00110$:
                                   5260 ;	MagnetoZ-C8051F990-Simplicity_main.c:3286: LED_Pattern(0);
      00179A C2 16            [12] 5261 	clr	_LED_Pattern_PARM_1
      00179C C0 07            [24] 5262 	push	ar7
      00179E C0 06            [24] 5263 	push	ar6
      0017A0 C0 05            [24] 5264 	push	ar5
      0017A2 12 17 E9         [24] 5265 	lcall	_LED_Pattern
      0017A5 D0 05            [24] 5266 	pop	ar5
      0017A7 D0 06            [24] 5267 	pop	ar6
      0017A9 D0 07            [24] 5268 	pop	ar7
                                   5269 ;	MagnetoZ-C8051F990-Simplicity_main.c:3285: for (j=0;j<255;j++)
      0017AB 0D               [12] 5270 	inc	r5
      0017AC BD FF 00         [24] 5271 	cjne	r5,#0xFF,00150$
      0017AF                       5272 00150$:
      0017AF 40 E9            [24] 5273 	jc	00110$
                                   5274 ;	MagnetoZ-C8051F990-Simplicity_main.c:3278: for (i=0;i<count;i++)
      0017B1 0E               [12] 5275 	inc	r6
      0017B2 80 C6            [24] 5276 	sjmp	00113$
      0017B4                       5277 00107$:
                                   5278 ;	MagnetoZ-C8051F990-Simplicity_main.c:3289: VOLTAGE_REG_CONTROL = 0;
      0017B4 C2 90            [12] 5279 	clr	_VOLTAGE_REG_CONTROL
      0017B6 22               [24] 5280 	ret
                                   5281 ;------------------------------------------------------------
                                   5282 ;Allocation info for local variables in function 'BlinkLEDLonger'
                                   5283 ;------------------------------------------------------------
                                   5284 ;j                         Allocated to registers r6 r7 
                                   5285 ;------------------------------------------------------------
                                   5286 ;	MagnetoZ-C8051F990-Simplicity_main.c:3302: void BlinkLEDLonger()
                                   5287 ;	-----------------------------------------
                                   5288 ;	 function BlinkLEDLonger
                                   5289 ;	-----------------------------------------
      0017B7                       5290 _BlinkLEDLonger:
                                   5291 ;	MagnetoZ-C8051F990-Simplicity_main.c:3306: if ( (BattIsDead) || ( (5 < MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) ) )		//Always use V.R.
      0017B7 20 09 09         [24] 5292 	jb	_BattIsDead,00101$
      0017BA E5 6C            [12] 5293 	mov	a,(_MagnetoZ_Info + 0x000d)
      0017BC 24 FA            [12] 5294 	add	a,#0xff - 0x05
      0017BE 50 05            [24] 5295 	jnc	00112$
      0017C0 30 0C 02         [24] 5296 	jnb	_FirstTimeVR,00112$
      0017C3                       5297 00101$:
                                   5298 ;	MagnetoZ-C8051F990-Simplicity_main.c:3307: VOLTAGE_REG_CONTROL = 1;
      0017C3 D2 90            [12] 5299 	setb	_VOLTAGE_REG_CONTROL
                                   5300 ;	MagnetoZ-C8051F990-Simplicity_main.c:3310: for (j=0;j<1000;j++)
      0017C5                       5301 00112$:
      0017C5 7E 00            [12] 5302 	mov	r6,#0x00
      0017C7 7F 00            [12] 5303 	mov	r7,#0x00
      0017C9                       5304 00106$:
                                   5305 ;	MagnetoZ-C8051F990-Simplicity_main.c:3311: LED_Pattern(1);
      0017C9 D2 16            [12] 5306 	setb	_LED_Pattern_PARM_1
      0017CB C0 07            [24] 5307 	push	ar7
      0017CD C0 06            [24] 5308 	push	ar6
      0017CF 12 17 E9         [24] 5309 	lcall	_LED_Pattern
      0017D2 D0 06            [24] 5310 	pop	ar6
      0017D4 D0 07            [24] 5311 	pop	ar7
                                   5312 ;	MagnetoZ-C8051F990-Simplicity_main.c:3310: for (j=0;j<1000;j++)
      0017D6 0E               [12] 5313 	inc	r6
      0017D7 BE 00 01         [24] 5314 	cjne	r6,#0x00,00126$
      0017DA 0F               [12] 5315 	inc	r7
      0017DB                       5316 00126$:
      0017DB C3               [12] 5317 	clr	c
      0017DC EE               [12] 5318 	mov	a,r6
      0017DD 94 E8            [12] 5319 	subb	a,#0xE8
      0017DF EF               [12] 5320 	mov	a,r7
      0017E0 94 03            [12] 5321 	subb	a,#0x03
      0017E2 40 E5            [24] 5322 	jc	00106$
                                   5323 ;	MagnetoZ-C8051F990-Simplicity_main.c:3313: GREEN_LED = 1; //LED OFF
      0017E4 D2 97            [12] 5324 	setb	_GREEN_LED
                                   5325 ;	MagnetoZ-C8051F990-Simplicity_main.c:3315: VOLTAGE_REG_CONTROL = 0;
      0017E6 C2 90            [12] 5326 	clr	_VOLTAGE_REG_CONTROL
      0017E8 22               [24] 5327 	ret
                                   5328 ;------------------------------------------------------------
                                   5329 ;Allocation info for local variables in function 'LED_Pattern'
                                   5330 ;------------------------------------------------------------
                                   5331 ;	MagnetoZ-C8051F990-Simplicity_main.c:3328: void LED_Pattern(bit LED_ON_flag)
                                   5332 ;	-----------------------------------------
                                   5333 ;	 function LED_Pattern
                                   5334 ;	-----------------------------------------
      0017E9                       5335 _LED_Pattern:
                                   5336 ;	MagnetoZ-C8051F990-Simplicity_main.c:3330: P1MDIN  |=  0x80;	//P1.7 - LED Digital
      0017E9 43 F2 80         [24] 5337 	orl	_P1MDIN,#0x80
                                   5338 ;	MagnetoZ-C8051F990-Simplicity_main.c:3332: if (1 == LED_ON_flag)
      0017EC A2 16            [12] 5339 	mov	c,_LED_Pattern_PARM_1
      0017EE E4               [12] 5340 	clr	a
      0017EF 33               [12] 5341 	rlc	a
      0017F0 FF               [12] 5342 	mov	r7,a
      0017F1 BF 01 10         [24] 5343 	cjne	r7,#0x01,00104$
                                   5344 ;	MagnetoZ-C8051F990-Simplicity_main.c:3334: GREEN_LED = 0;
      0017F4 C2 97            [12] 5345 	clr	_GREEN_LED
                                   5346 ;	MagnetoZ-C8051F990-Simplicity_main.c:3337: UseTimer0(WAIT_TICKS, 1);
      0017F6 75 0E 01         [24] 5347 	mov	_UseTimer0_PARM_2,#0x01
      0017F9 75 0F 00         [24] 5348 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      0017FC 90 D0 26         [24] 5349 	mov	dptr,#0xD026
      0017FF 12 0C F1         [24] 5350 	lcall	_UseTimer0
      001802 80 11            [24] 5351 	sjmp	00105$
      001804                       5352 00104$:
                                   5353 ;	MagnetoZ-C8051F990-Simplicity_main.c:3339: else if (0 == LED_ON_flag)
      001804 20 16 0E         [24] 5354 	jb	_LED_Pattern_PARM_1,00105$
                                   5355 ;	MagnetoZ-C8051F990-Simplicity_main.c:3341: GREEN_LED = 1; //LED OFF
      001807 D2 97            [12] 5356 	setb	_GREEN_LED
                                   5357 ;	MagnetoZ-C8051F990-Simplicity_main.c:3344: UseTimer0(WAIT_TICKS, 1);
      001809 75 0E 01         [24] 5358 	mov	_UseTimer0_PARM_2,#0x01
      00180C 75 0F 00         [24] 5359 	mov	(_UseTimer0_PARM_2 + 1),#0x00
      00180F 90 D0 26         [24] 5360 	mov	dptr,#0xD026
      001812 12 0C F1         [24] 5361 	lcall	_UseTimer0
      001815                       5362 00105$:
                                   5363 ;	MagnetoZ-C8051F990-Simplicity_main.c:3346: P1MDIN  &= ~0x80; //P1.7 - LED Analog
      001815 AF F2            [24] 5364 	mov	r7,_P1MDIN
      001817 74 7F            [12] 5365 	mov	a,#0x7F
      001819 5F               [12] 5366 	anl	a,r7
      00181A F5 F2            [12] 5367 	mov	_P1MDIN,a
      00181C 22               [24] 5368 	ret
                                   5369 ;------------------------------------------------------------
                                   5370 ;Allocation info for local variables in function 'WUTCalculator'
                                   5371 ;------------------------------------------------------------
                                   5372 ;SleepPeriod               Allocated to registers r6 r7 
                                   5373 ;------------------------------------------------------------
                                   5374 ;	MagnetoZ-C8051F990-Simplicity_main.c:3359: void WUTCalculator(U16 SleepPeriod)
                                   5375 ;	-----------------------------------------
                                   5376 ;	 function WUTCalculator
                                   5377 ;	-----------------------------------------
      00181D                       5378 _WUTCalculator:
      00181D AE 82            [24] 5379 	mov	r6,dpl
      00181F AF 83            [24] 5380 	mov	r7,dph
                                   5381 ;	MagnetoZ-C8051F990-Simplicity_main.c:3363: if ( 0 == SleepPeriod)
      001821 EE               [12] 5382 	mov	a,r6
      001822 4F               [12] 5383 	orl	a,r7
      001823 70 04            [24] 5384 	jnz	00102$
                                   5385 ;	MagnetoZ-C8051F990-Simplicity_main.c:3364: WakeUpTime_Set_flag = 0; //In case user wants to turn off wake up notifications
      001825 C2 03            [12] 5386 	clr	_WakeUpTime_Set_flag
      001827 80 02            [24] 5387 	sjmp	00103$
      001829                       5388 00102$:
                                   5389 ;	MagnetoZ-C8051F990-Simplicity_main.c:3366: WakeUpTime_Set_flag = 1;
      001829 D2 03            [12] 5390 	setb	_WakeUpTime_Set_flag
      00182B                       5391 00103$:
                                   5392 ;	MagnetoZ-C8051F990-Simplicity_main.c:3368: MagnetoZ_Info.SleepStepTime = SleepPeriod;
      00182B 8E 63            [24] 5393 	mov	((_MagnetoZ_Info + 0x0004) + 0),r6
      00182D 8F 64            [24] 5394 	mov	((_MagnetoZ_Info + 0x0004) + 1),r7
                                   5395 ;	MagnetoZ-C8051F990-Simplicity_main.c:3371: Flash_Write();
      00182F 12 18 8E         [24] 5396 	lcall	_Flash_Write
                                   5397 ;	MagnetoZ-C8051F990-Simplicity_main.c:3373: WakeupCount = MagnetoZ_Info.SleepStepTime;
      001832 85 63 53         [24] 5398 	mov	_WakeupCount,(_MagnetoZ_Info + 0x0004)
      001835 85 64 54         [24] 5399 	mov	(_WakeupCount + 1),((_MagnetoZ_Info + 0x0004) + 1)
                                   5400 ;	MagnetoZ-C8051F990-Simplicity_main.c:3374: WakeupCount = WakeupCount << 1;
      001838 E4               [12] 5401 	clr	a
      001839 F5 55            [12] 5402 	mov	(_WakeupCount + 2),a
      00183B F5 56            [12] 5403 	mov	(_WakeupCount + 3),a
      00183D E5 53            [12] 5404 	mov	a,_WakeupCount
      00183F 25 53            [12] 5405 	add	a,_WakeupCount
      001841 F5 53            [12] 5406 	mov	_WakeupCount,a
      001843 E5 54            [12] 5407 	mov	a,(_WakeupCount + 1)
      001845 33               [12] 5408 	rlc	a
      001846 F5 54            [12] 5409 	mov	(_WakeupCount + 1),a
      001848 E5 55            [12] 5410 	mov	a,(_WakeupCount + 2)
      00184A 33               [12] 5411 	rlc	a
      00184B F5 55            [12] 5412 	mov	(_WakeupCount + 2),a
      00184D E5 56            [12] 5413 	mov	a,(_WakeupCount + 3)
      00184F 33               [12] 5414 	rlc	a
      001850 F5 56            [12] 5415 	mov	(_WakeupCount + 3),a
      001852 22               [24] 5416 	ret
                                   5417 ;------------------------------------------------------------
                                   5418 ;Allocation info for local variables in function 'EnqueueCommand'
                                   5419 ;------------------------------------------------------------
                                   5420 ;Cmd                       Allocated to registers r7 
                                   5421 ;i                         Allocated to registers r6 
                                   5422 ;------------------------------------------------------------
                                   5423 ;	MagnetoZ-C8051F990-Simplicity_main.c:3391: void EnqueueCommand(COMMAND Cmd)
                                   5424 ;	-----------------------------------------
                                   5425 ;	 function EnqueueCommand
                                   5426 ;	-----------------------------------------
      001853                       5427 _EnqueueCommand:
      001853 AF 82            [24] 5428 	mov	r7,dpl
                                   5429 ;	MagnetoZ-C8051F990-Simplicity_main.c:3395: while (COMMAND_8051_NONE != Command_Queue[i])
      001855 7E 00            [12] 5430 	mov	r6,#0x00
      001857                       5431 00101$:
      001857 EE               [12] 5432 	mov	a,r6
      001858 24 4A            [12] 5433 	add	a,#_Command_Queue
      00185A F9               [12] 5434 	mov	r1,a
      00185B E7               [12] 5435 	mov	a,@r1
      00185C 60 06            [24] 5436 	jz	00103$
                                   5437 ;	MagnetoZ-C8051F990-Simplicity_main.c:3397: PCA0CPH2 = 0x00;  //Reset WatchDog
      00185E 75 EC 00         [24] 5438 	mov	_PCA0CPH2,#0x00
                                   5439 ;	MagnetoZ-C8051F990-Simplicity_main.c:3398: i++;
      001861 0E               [12] 5440 	inc	r6
      001862 80 F3            [24] 5441 	sjmp	00101$
      001864                       5442 00103$:
                                   5443 ;	MagnetoZ-C8051F990-Simplicity_main.c:3401: Command_Queue[i] = Cmd;
      001864 A7 07            [24] 5444 	mov	@r1,ar7
      001866 22               [24] 5445 	ret
                                   5446 ;------------------------------------------------------------
                                   5447 ;Allocation info for local variables in function 'DequeueCommand'
                                   5448 ;------------------------------------------------------------
                                   5449 ;i                         Allocated to registers r7 
                                   5450 ;------------------------------------------------------------
                                   5451 ;	MagnetoZ-C8051F990-Simplicity_main.c:3414: void DequeueCommand()
                                   5452 ;	-----------------------------------------
                                   5453 ;	 function DequeueCommand
                                   5454 ;	-----------------------------------------
      001867                       5455 _DequeueCommand:
                                   5456 ;	MagnetoZ-C8051F990-Simplicity_main.c:3418: for (i = 0; i < COMMAND_QUEUE_SIZE-1; i++)
      001867 7F 00            [12] 5457 	mov	r7,#0x00
      001869                       5458 00102$:
                                   5459 ;	MagnetoZ-C8051F990-Simplicity_main.c:3419: Command_Queue[i] = Command_Queue[i+1];
      001869 EF               [12] 5460 	mov	a,r7
      00186A 24 4A            [12] 5461 	add	a,#_Command_Queue
      00186C F9               [12] 5462 	mov	r1,a
      00186D EF               [12] 5463 	mov	a,r7
      00186E 04               [12] 5464 	inc	a
      00186F FE               [12] 5465 	mov	r6,a
      001870 24 4A            [12] 5466 	add	a,#_Command_Queue
      001872 F8               [12] 5467 	mov	r0,a
      001873 86 05            [24] 5468 	mov	ar5,@r0
      001875 A7 05            [24] 5469 	mov	@r1,ar5
                                   5470 ;	MagnetoZ-C8051F990-Simplicity_main.c:3418: for (i = 0; i < COMMAND_QUEUE_SIZE-1; i++)
      001877 8E 07            [24] 5471 	mov	ar7,r6
      001879 BF 07 00         [24] 5472 	cjne	r7,#0x07,00112$
      00187C                       5473 00112$:
      00187C 40 EB            [24] 5474 	jc	00102$
                                   5475 ;	MagnetoZ-C8051F990-Simplicity_main.c:3421: Command_Queue[i] = COMMAND_8051_NONE;
      00187E EF               [12] 5476 	mov	a,r7
      00187F 24 4A            [12] 5477 	add	a,#_Command_Queue
      001881 F8               [12] 5478 	mov	r0,a
      001882 76 00            [12] 5479 	mov	@r0,#0x00
      001884 22               [24] 5480 	ret
                                   5481 ;------------------------------------------------------------
                                   5482 ;Allocation info for local variables in function 'Changequeue'
                                   5483 ;------------------------------------------------------------
                                   5484 ;cmd                       Allocated to registers r7 
                                   5485 ;Cmd_Temp                  Allocated to registers r6 
                                   5486 ;------------------------------------------------------------
                                   5487 ;	MagnetoZ-C8051F990-Simplicity_main.c:3432: void Changequeue(COMMAND cmd)
                                   5488 ;	-----------------------------------------
                                   5489 ;	 function Changequeue
                                   5490 ;	-----------------------------------------
      001885                       5491 _Changequeue:
      001885 AF 82            [24] 5492 	mov	r7,dpl
                                   5493 ;	MagnetoZ-C8051F990-Simplicity_main.c:3436: Cmd_Temp = Command_Queue[0];
      001887 AE 4A            [24] 5494 	mov	r6,_Command_Queue
                                   5495 ;	MagnetoZ-C8051F990-Simplicity_main.c:3437: Command_Queue[0] = cmd;
      001889 8F 4A            [24] 5496 	mov	_Command_Queue,r7
                                   5497 ;	MagnetoZ-C8051F990-Simplicity_main.c:3438: Command_Queue[1] = Cmd_Temp;
      00188B 8E 4B            [24] 5498 	mov	(_Command_Queue + 0x0001),r6
      00188D 22               [24] 5499 	ret
                                   5500 ;------------------------------------------------------------
                                   5501 ;Allocation info for local variables in function 'Flash_Write'
                                   5502 ;------------------------------------------------------------
                                   5503 ;pWrite                    Allocated to registers r6 r7 
                                   5504 ;i                         Allocated to registers r5 
                                   5505 ;pMagnetoZ_Info            Allocated to registers 
                                   5506 ;------------------------------------------------------------
                                   5507 ;	MagnetoZ-C8051F990-Simplicity_main.c:3456: void Flash_Write(void)
                                   5508 ;	-----------------------------------------
                                   5509 ;	 function Flash_Write
                                   5510 ;	-----------------------------------------
      00188E                       5511 _Flash_Write:
                                   5512 ;	MagnetoZ-C8051F990-Simplicity_main.c:3458: bit EA_SAVE = EA;					// Preserve IE_EA
      00188E A2 AF            [12] 5513 	mov	c,_EA
      001890 92 17            [24] 5514 	mov	_Flash_Write_EA_SAVE_1_293,c
                                   5515 ;	MagnetoZ-C8051F990-Simplicity_main.c:3508: SEG_NEAR U8 * pMagnetoZ_Info = &(MagnetoZ_Info.CurrentState);
                                   5516 ;	MagnetoZ-C8051F990-Simplicity_main.c:3510: EA = 0;								// Disable interrupts
      001892 C2 AF            [12] 5517 	clr	_EA
                                   5518 ;	MagnetoZ-C8051F990-Simplicity_main.c:3512: if ( (BattIsDead) || ( (10 == MagnetoZ_Info.FailZWCounter) && (FirstTimeVR) ) )		//Always use V.R.
      001894 20 09 08         [24] 5519 	jb	_BattIsDead,00104$
      001897 AF 6C            [24] 5520 	mov	r7,(_MagnetoZ_Info + 0x000d)
      001899 BF 0A 07         [24] 5521 	cjne	r7,#0x0A,00105$
      00189C 30 0C 04         [24] 5522 	jnb	_FirstTimeVR,00105$
      00189F                       5523 00104$:
                                   5524 ;	MagnetoZ-C8051F990-Simplicity_main.c:3513: VOLTAGE_REG_CONTROL = 1;
      00189F D2 90            [12] 5525 	setb	_VOLTAGE_REG_CONTROL
      0018A1 80 20            [24] 5526 	sjmp	00106$
      0018A3                       5527 00105$:
                                   5528 ;	MagnetoZ-C8051F990-Simplicity_main.c:3514: else if ( (FirstTimeVR) && ( Turn_ON_VR_Counter < (MagnetoZ_Info.FailZWCounter*5) ) )
      0018A3 30 0C 1D         [24] 5529 	jnb	_FirstTimeVR,00106$
      0018A6 EF               [12] 5530 	mov	a,r7
      0018A7 75 F0 05         [24] 5531 	mov	b,#0x05
      0018AA A4               [48] 5532 	mul	ab
      0018AB FF               [12] 5533 	mov	r7,a
      0018AC AE F0            [24] 5534 	mov	r6,b
      0018AE AC 57            [24] 5535 	mov	r4,_Turn_ON_VR_Counter
      0018B0 7D 00            [12] 5536 	mov	r5,#0x00
      0018B2 C3               [12] 5537 	clr	c
      0018B3 EC               [12] 5538 	mov	a,r4
      0018B4 9F               [12] 5539 	subb	a,r7
      0018B5 ED               [12] 5540 	mov	a,r5
      0018B6 64 80            [12] 5541 	xrl	a,#0x80
      0018B8 8E F0            [24] 5542 	mov	b,r6
      0018BA 63 F0 80         [24] 5543 	xrl	b,#0x80
      0018BD 95 F0            [12] 5544 	subb	a,b
      0018BF 50 02            [24] 5545 	jnc	00106$
                                   5546 ;	MagnetoZ-C8051F990-Simplicity_main.c:3515: VOLTAGE_REG_CONTROL = 1;
      0018C1 D2 90            [12] 5547 	setb	_VOLTAGE_REG_CONTROL
      0018C3                       5548 00106$:
                                   5549 ;	MagnetoZ-C8051F990-Simplicity_main.c:3517: VDM0CN = 0x80;						// Enable VDD monitor
      0018C3 75 FF 80         [24] 5550 	mov	_VDM0CN,#0x80
                                   5551 ;	MagnetoZ-C8051F990-Simplicity_main.c:3519: PCA0MD    &= ~0x40;               // Watchdog timer disabled-clearing bit 6
      0018C6 AF D9            [24] 5552 	mov	r7,_PCA0MD
      0018C8 74 BF            [12] 5553 	mov	a,#0xBF
      0018CA 5F               [12] 5554 	anl	a,r7
      0018CB F5 D9            [12] 5555 	mov	_PCA0MD,a
                                   5556 ;	MagnetoZ-C8051F990-Simplicity_main.c:3543: PSCTL |= 0x03;                  	// PSWE = 1; PSEE = 1
      0018CD 43 8F 03         [24] 5557 	orl	_PSCTL,#0x03
                                   5558 ;	MagnetoZ-C8051F990-Simplicity_main.c:3544: FLKEY  = 0xA5;                  	// Key Sequence 1
      0018D0 75 B7 A5         [24] 5559 	mov	_FLKEY,#0xA5
                                   5560 ;	MagnetoZ-C8051F990-Simplicity_main.c:3545: FLKEY  = 0xF1;                  	// Key Sequence 2
      0018D3 75 B7 F1         [24] 5561 	mov	_FLKEY,#0xF1
                                   5562 ;	MagnetoZ-C8051F990-Simplicity_main.c:3547: *pWrite = 0;                    	// Initiate page erase
      0018D6 90 1C 00         [24] 5563 	mov	dptr,#0x1C00
      0018D9 E4               [12] 5564 	clr	a
      0018DA F0               [24] 5565 	movx	@dptr,a
                                   5566 ;	MagnetoZ-C8051F990-Simplicity_main.c:3549: PSCTL &= ~0x03;                 	// PSWE = 0; PSEE = 0
      0018DB AF 8F            [24] 5567 	mov	r7,_PSCTL
      0018DD 74 FC            [12] 5568 	mov	a,#0xFC
      0018DF 5F               [12] 5569 	anl	a,r7
      0018E0 F5 8F            [12] 5570 	mov	_PSCTL,a
                                   5571 ;	MagnetoZ-C8051F990-Simplicity_main.c:3552: for (i = 0; i < NUM_OF_SW_VERSIONS_BYTES; i++)
      0018E2 7E 00            [12] 5572 	mov	r6,#0x00
      0018E4 7F 1C            [12] 5573 	mov	r7,#0x1C
      0018E6 7D 00            [12] 5574 	mov	r5,#0x00
      0018E8                       5575 00115$:
                                   5576 ;	MagnetoZ-C8051F990-Simplicity_main.c:3554: PSCTL |= 0x01;		// PSWE = 1 which enables writes
      0018E8 43 8F 01         [24] 5577 	orl	_PSCTL,#0x01
                                   5578 ;	MagnetoZ-C8051F990-Simplicity_main.c:3555: FLKEY  = 0xA5;		// Key Sequence 1
      0018EB 75 B7 A5         [24] 5579 	mov	_FLKEY,#0xA5
                                   5580 ;	MagnetoZ-C8051F990-Simplicity_main.c:3556: FLKEY  = 0xF1;		// Key Sequence 2
      0018EE 75 B7 F1         [24] 5581 	mov	_FLKEY,#0xF1
                                   5582 ;	MagnetoZ-C8051F990-Simplicity_main.c:3558: *pWrite = SWversion[i];		// Write the byte
      0018F1 ED               [12] 5583 	mov	a,r5
      0018F2 90 1B 67         [24] 5584 	mov	dptr,#_Flash_Write_SWversion_1_293
      0018F5 93               [24] 5585 	movc	a,@a+dptr
      0018F6 FC               [12] 5586 	mov	r4,a
      0018F7 8E 82            [24] 5587 	mov	dpl,r6
      0018F9 8F 83            [24] 5588 	mov	dph,r7
      0018FB F0               [24] 5589 	movx	@dptr,a
      0018FC A3               [24] 5590 	inc	dptr
      0018FD AE 82            [24] 5591 	mov	r6,dpl
      0018FF AF 83            [24] 5592 	mov	r7,dph
                                   5593 ;	MagnetoZ-C8051F990-Simplicity_main.c:3560: pWrite++;
                                   5594 ;	MagnetoZ-C8051F990-Simplicity_main.c:3552: for (i = 0; i < NUM_OF_SW_VERSIONS_BYTES; i++)
      001901 0D               [12] 5595 	inc	r5
      001902 BD 0E 00         [24] 5596 	cjne	r5,#0x0E,00159$
      001905                       5597 00159$:
      001905 40 E1            [24] 5598 	jc	00115$
                                   5599 ;	MagnetoZ-C8051F990-Simplicity_main.c:3564: for (i = 0; i < NUM_OF_IDD_PARAMETERS_BYTES; i++)
      001907 7D 00            [12] 5600 	mov	r5,#0x00
      001909                       5601 00117$:
                                   5602 ;	MagnetoZ-C8051F990-Simplicity_main.c:3566: PSCTL |= 0x01;		// PSWE = 1 which enables writes
      001909 43 8F 01         [24] 5603 	orl	_PSCTL,#0x01
                                   5604 ;	MagnetoZ-C8051F990-Simplicity_main.c:3567: FLKEY  = 0xA5;		// Key Sequence 1
      00190C 75 B7 A5         [24] 5605 	mov	_FLKEY,#0xA5
                                   5606 ;	MagnetoZ-C8051F990-Simplicity_main.c:3568: FLKEY  = 0xF1;		// Key Sequence 2
      00190F 75 B7 F1         [24] 5607 	mov	_FLKEY,#0xF1
                                   5608 ;	MagnetoZ-C8051F990-Simplicity_main.c:3570: *pWrite = pMagnetoZ_Info[i];		// Write the byte
      001912 ED               [12] 5609 	mov	a,r5
      001913 24 5F            [12] 5610 	add	a,#_MagnetoZ_Info
      001915 F9               [12] 5611 	mov	r1,a
      001916 87 04            [24] 5612 	mov	ar4,@r1
      001918 8E 82            [24] 5613 	mov	dpl,r6
      00191A 8F 83            [24] 5614 	mov	dph,r7
      00191C EC               [12] 5615 	mov	a,r4
      00191D F0               [24] 5616 	movx	@dptr,a
      00191E A3               [24] 5617 	inc	dptr
      00191F AE 82            [24] 5618 	mov	r6,dpl
      001921 AF 83            [24] 5619 	mov	r7,dph
                                   5620 ;	MagnetoZ-C8051F990-Simplicity_main.c:3572: pWrite++;
                                   5621 ;	MagnetoZ-C8051F990-Simplicity_main.c:3564: for (i = 0; i < NUM_OF_IDD_PARAMETERS_BYTES; i++)
      001923 0D               [12] 5622 	inc	r5
      001924 BD 1B 00         [24] 5623 	cjne	r5,#0x1B,00161$
      001927                       5624 00161$:
      001927 40 E0            [24] 5625 	jc	00117$
                                   5626 ;	MagnetoZ-C8051F990-Simplicity_main.c:3575: PSCTL &= ~0x01;						// PSWE = 0 which disable writes
      001929 AF 8F            [24] 5627 	mov	r7,_PSCTL
      00192B 74 FE            [12] 5628 	mov	a,#0xFE
      00192D 5F               [12] 5629 	anl	a,r7
      00192E F5 8F            [12] 5630 	mov	_PSCTL,a
                                   5631 ;	MagnetoZ-C8051F990-Simplicity_main.c:3577: if (!BattIsDead)
      001930 20 09 02         [24] 5632 	jb	_BattIsDead,00112$
                                   5633 ;	MagnetoZ-C8051F990-Simplicity_main.c:3579: VOLTAGE_REG_CONTROL = 0;
      001933 C2 90            [12] 5634 	clr	_VOLTAGE_REG_CONTROL
      001935                       5635 00112$:
                                   5636 ;	MagnetoZ-C8051F990-Simplicity_main.c:3581: PCA0CPH2 = 0x00;   //Reset WatchDog
      001935 75 EC 00         [24] 5637 	mov	_PCA0CPH2,#0x00
                                   5638 ;	MagnetoZ-C8051F990-Simplicity_main.c:3583: if (UART_Buffer[0] != 'q') //Do not use Watchdog during Production
      001938 74 71            [12] 5639 	mov	a,#0x71
      00193A B5 26 02         [24] 5640 	cjne	a,_UART_Buffer,00164$
      00193D 80 03            [24] 5641 	sjmp	00114$
      00193F                       5642 00164$:
                                   5643 ;	MagnetoZ-C8051F990-Simplicity_main.c:3584: PCA0MD  |= 0x40;                    // enable the WDT
      00193F 43 D9 40         [24] 5644 	orl	_PCA0MD,#0x40
      001942                       5645 00114$:
                                   5646 ;	MagnetoZ-C8051F990-Simplicity_main.c:3586: EA = EA_SAVE;						// Restore interrupts
      001942 A2 17            [12] 5647 	mov	c,_Flash_Write_EA_SAVE_1_293
      001944 92 AF            [24] 5648 	mov	_EA,c
      001946 22               [24] 5649 	ret
                                   5650 ;------------------------------------------------------------
                                   5651 ;Allocation info for local variables in function 'Flash_Read'
                                   5652 ;------------------------------------------------------------
                                   5653 ;pRead                     Allocated to registers r6 r7 
                                   5654 ;i                         Allocated to registers r5 
                                   5655 ;pMagnetoZ_Info            Allocated to registers 
                                   5656 ;------------------------------------------------------------
                                   5657 ;	MagnetoZ-C8051F990-Simplicity_main.c:3596: void Flash_Read()
                                   5658 ;	-----------------------------------------
                                   5659 ;	 function Flash_Read
                                   5660 ;	-----------------------------------------
      001947                       5661 _Flash_Read:
                                   5662 ;	MagnetoZ-C8051F990-Simplicity_main.c:3598: bit EA_SAVE = EA;					// Preserve EA
      001947 A2 AF            [12] 5663 	mov	c,_EA
      001949 92 18            [24] 5664 	mov	_Flash_Read_EA_SAVE_1_296,c
                                   5665 ;	MagnetoZ-C8051F990-Simplicity_main.c:3601: SEG_NEAR U8 * pMagnetoZ_Info = &(MagnetoZ_Info.CurrentState);
                                   5666 ;	MagnetoZ-C8051F990-Simplicity_main.c:3603: EA = 0;								// Disable interrupts
      00194B C2 AF            [12] 5667 	clr	_EA
                                   5668 ;	MagnetoZ-C8051F990-Simplicity_main.c:3607: for (i = 0; i < NUM_OF_IDD_PARAMETERS_BYTES; i++)
      00194D 7E 0E            [12] 5669 	mov	r6,#0x0E
      00194F 7F 1C            [12] 5670 	mov	r7,#0x1C
      001951 7D 00            [12] 5671 	mov	r5,#0x00
      001953                       5672 00102$:
                                   5673 ;	MagnetoZ-C8051F990-Simplicity_main.c:3609: PCA0CPH2 = 0x00; //Reset WatchDog
      001953 75 EC 00         [24] 5674 	mov	_PCA0CPH2,#0x00
                                   5675 ;	MagnetoZ-C8051F990-Simplicity_main.c:3610: pMagnetoZ_Info[i] = *pRead;
      001956 ED               [12] 5676 	mov	a,r5
      001957 24 5F            [12] 5677 	add	a,#_MagnetoZ_Info
      001959 F9               [12] 5678 	mov	r1,a
      00195A 8E 82            [24] 5679 	mov	dpl,r6
      00195C 8F 83            [24] 5680 	mov	dph,r7
      00195E E4               [12] 5681 	clr	a
      00195F 93               [24] 5682 	movc	a,@a+dptr
      001960 FC               [12] 5683 	mov	r4,a
      001961 A3               [24] 5684 	inc	dptr
      001962 AE 82            [24] 5685 	mov	r6,dpl
      001964 AF 83            [24] 5686 	mov	r7,dph
      001966 A7 04            [24] 5687 	mov	@r1,ar4
                                   5688 ;	MagnetoZ-C8051F990-Simplicity_main.c:3611: pRead++;
                                   5689 ;	MagnetoZ-C8051F990-Simplicity_main.c:3607: for (i = 0; i < NUM_OF_IDD_PARAMETERS_BYTES; i++)
      001968 0D               [12] 5690 	inc	r5
      001969 BD 1B 00         [24] 5691 	cjne	r5,#0x1B,00113$
      00196C                       5692 00113$:
      00196C 40 E5            [24] 5693 	jc	00102$
                                   5694 ;	MagnetoZ-C8051F990-Simplicity_main.c:3614: EA = EA_SAVE;						// Restore interrupts
      00196E A2 18            [12] 5695 	mov	c,_Flash_Read_EA_SAVE_1_296
      001970 92 AF            [24] 5696 	mov	_EA,c
      001972 22               [24] 5697 	ret
                                   5698 ;------------------------------------------------------------
                                   5699 ;Allocation info for local variables in function 'TimeTrack'
                                   5700 ;------------------------------------------------------------
                                   5701 ;	MagnetoZ-C8051F990-Simplicity_main.c:3627: void TimeTrack()
                                   5702 ;	-----------------------------------------
                                   5703 ;	 function TimeTrack
                                   5704 ;	-----------------------------------------
      001973                       5705 _TimeTrack:
                                   5706 ;	MagnetoZ-C8051F990-Simplicity_main.c:3629: interval++;
      001973 05 24            [12] 5707 	inc	_interval
      001975 E4               [12] 5708 	clr	a
      001976 B5 24 02         [24] 5709 	cjne	a,_interval,00122$
      001979 05 25            [12] 5710 	inc	(_interval + 1)
      00197B                       5711 00122$:
                                   5712 ;	MagnetoZ-C8051F990-Simplicity_main.c:3631: if ( interval > 43200 ) //12hrs
      00197B AC 24            [24] 5713 	mov	r4,_interval
      00197D AD 25            [24] 5714 	mov	r5,(_interval + 1)
      00197F 7E 00            [12] 5715 	mov	r6,#0x00
      001981 7F 00            [12] 5716 	mov	r7,#0x00
      001983 C3               [12] 5717 	clr	c
      001984 74 C0            [12] 5718 	mov	a,#0xC0
      001986 9C               [12] 5719 	subb	a,r4
      001987 74 A8            [12] 5720 	mov	a,#0xA8
      001989 9D               [12] 5721 	subb	a,r5
      00198A E4               [12] 5722 	clr	a
      00198B 9E               [12] 5723 	subb	a,r6
      00198C 74 80            [12] 5724 	mov	a,#(0x00 ^ 0x80)
      00198E 8F F0            [24] 5725 	mov	b,r7
      001990 63 F0 80         [24] 5726 	xrl	b,#0x80
      001993 95 F0            [12] 5727 	subb	a,b
      001995 50 2F            [24] 5728 	jnc	00108$
                                   5729 ;	MagnetoZ-C8051F990-Simplicity_main.c:3633: MagnetoZ_Info.ActualHalfDays++;
      001997 AE 65            [24] 5730 	mov	r6,((_MagnetoZ_Info + 0x0006) + 0)
      001999 AF 66            [24] 5731 	mov	r7,((_MagnetoZ_Info + 0x0006) + 1)
      00199B 0E               [12] 5732 	inc	r6
      00199C BE 00 01         [24] 5733 	cjne	r6,#0x00,00124$
      00199F 0F               [12] 5734 	inc	r7
      0019A0                       5735 00124$:
      0019A0 8E 65            [24] 5736 	mov	((_MagnetoZ_Info + 0x0006) + 0),r6
      0019A2 8F 66            [24] 5737 	mov	((_MagnetoZ_Info + 0x0006) + 1),r7
                                   5738 ;	MagnetoZ-C8051F990-Simplicity_main.c:3635: if (STATE_8051_ACTIVE == MagnetoZ_Info.CurrentState)
      0019A4 74 01            [12] 5739 	mov	a,#0x01
      0019A6 B5 5F 0D         [24] 5740 	cjne	a,_MagnetoZ_Info,00102$
                                   5741 ;	MagnetoZ-C8051F990-Simplicity_main.c:3636: MagnetoZ_Info.ActiveHalfDays++;
      0019A9 AE 67            [24] 5742 	mov	r6,((_MagnetoZ_Info + 0x0008) + 0)
      0019AB AF 68            [24] 5743 	mov	r7,((_MagnetoZ_Info + 0x0008) + 1)
      0019AD 0E               [12] 5744 	inc	r6
      0019AE BE 00 01         [24] 5745 	cjne	r6,#0x00,00127$
      0019B1 0F               [12] 5746 	inc	r7
      0019B2                       5747 00127$:
      0019B2 8E 67            [24] 5748 	mov	((_MagnetoZ_Info + 0x0008) + 0),r6
      0019B4 8F 68            [24] 5749 	mov	((_MagnetoZ_Info + 0x0008) + 1),r7
      0019B6                       5750 00102$:
                                   5751 ;	MagnetoZ-C8051F990-Simplicity_main.c:3638: interval = 0;
      0019B6 E4               [12] 5752 	clr	a
      0019B7 F5 24            [12] 5753 	mov	_interval,a
      0019B9 F5 25            [12] 5754 	mov	(_interval + 1),a
                                   5755 ;	MagnetoZ-C8051F990-Simplicity_main.c:3641: if ( (!BattIsDead) && (STATE_8051_ACTIVE == MagnetoZ_Info.CurrentState) )
      0019BB 20 09 08         [24] 5756 	jb	_BattIsDead,00108$
      0019BE 74 01            [12] 5757 	mov	a,#0x01
      0019C0 B5 5F 03         [24] 5758 	cjne	a,_MagnetoZ_Info,00108$
                                   5759 ;	MagnetoZ-C8051F990-Simplicity_main.c:3642: Flash_Write();
      0019C3 02 18 8E         [24] 5760 	ljmp	_Flash_Write
      0019C6                       5761 00108$:
      0019C6 22               [24] 5762 	ret
                                   5763 	.area CSEG    (CODE)
                                   5764 	.area CONST   (CODE)
      001B67                       5765 _Flash_Write_SWversion_1_293:
      001B67 30 31 30 31 31 30 32  5766 	.ascii "01011020000605"
             30 30 30 30 36 30 35
                                   5767 	.area XINIT   (CODE)
      001B75                       5768 __xinit__First_Hour_Counter:
      001B75 00                    5769 	.db #0x00	; 0
      001B76                       5770 __xinit__Hour_Counter:
      001B76 18                    5771 	.db #0x18	; 24
      001B77                       5772 __xinit__Seconds_Counter:
      001B77 00 00                 5773 	.byte #0x00,#0x00	; 0
      001B79                       5774 __xinit__First_Hour_Seconds_Counter:
      001B79 10 0E                 5775 	.byte #0x10,#0x0E	; 3600
      001B7B                       5776 __xinit__OFFSET_CALIBRATION_VAL:
      001B7B 00 00                 5777 	.byte #0x00,#0x00	; 0
                                   5778 	.area CABS    (ABS,CODE)
