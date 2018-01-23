/*
 * name:        S2-LP
 * description: Ultra-low power, high performance, sub-1GHz transceiver
 * manuf:       ST Microelectronics
 * version:     Version 0.1
 * url:         http://www.st.com/resource/en/datasheet/s2-lp.pdf
 * date:        2018-01-15
 * author       https://chisl.io/
 * file:        S2-LP.hpp
 */

/*                                                                                                       *
 *                                   THIS FILE IS AUTOMATICALLY CREATED                                  *
 *                                    D O     N O T     M O D I F Y  !                                   *
 *                                                                                                       */

#include <cinttypes>

/* Derive from class S2_LP_Base and implement the read and write functions! */

/* S2-LP: Ultra-low power, high performance, sub-1GHz transceiver */
class S2_LP_Base
{
public:
	/* Pure virtual functions that need to be implemented in derived class: */
	virtual uint8_t read8(uint16_t address, uint16_t n=8) = 0;  // 8 bit read
	virtual void write(uint16_t address, uint8_t value, uint16_t n=8) = 0;  // 8 bit write
	virtual uint16_t read16(uint16_t address, uint16_t n=16) = 0;  // 16 bit read
	virtual void write(uint16_t address, uint16_t value, uint16_t n=16) = 0;  // 16 bit write
	virtual uint32_t read32(uint16_t address, uint16_t n=32) = 0;  // 32 bit read
	virtual void write(uint16_t address, uint32_t value, uint16_t n=32) = 0;  // 32 bit write
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG GPIO0_CONF                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG GPIO0_CONF:
	 */
	struct GPIO0_CONF
	{
		static const uint16_t __address = 0;
		
		/* Bits GPIO_SELECT: */
		/* Specify the GPIO0 I/O signal, default setting POR (see Table 57).  */
		struct GPIO_SELECT
		{
			static const uint8_t dflt = 0b00001; // 5'b1
			static const uint8_t mask = 0b11111000; // [3,4,5,6,7]
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits GPIO_MODE: */
		struct GPIO_MODE
		{
			static const uint8_t dflt = 0b10; // 2'b10
			static const uint8_t mask = 0b00000011; // [0,1]
			static const uint8_t INPUT = 0b01; // Digital Input
			static const uint8_t OUTPUT_LOW_POWER = 0b10; // Digital Output Low Power
			static const uint8_t OUTPUT_HIGH_POWER = 0b11; // Digital Output High Power
		};
	};
	
	/* Set register GPIO0_CONF */
	void setGPIO0_CONF(uint8_t value)
	{
		write(GPIO0_CONF::__address, value, 8);
	}
	
	/* Get register GPIO0_CONF */
	uint8_t getGPIO0_CONF()
	{
		return read8(GPIO0_CONF::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG GPIO1_CONF                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG GPIO1_CONF:
	 */
	struct GPIO1_CONF
	{
		static const uint16_t __address = 1;
		
		/* Bits GPIO_SELECT: */
		/* Specify the GPIO1 I/O signal, default setting digital GND (see Table 57).  */
		struct GPIO_SELECT
		{
			static const uint8_t dflt = 0b10100; // 5'b10100
			static const uint8_t mask = 0b11111000; // [3,4,5,6,7]
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits GPIO1_MODE: */
		struct GPIO1_MODE
		{
			static const uint8_t dflt = 0b10; // 2'b10
			static const uint8_t mask = 0b00000011; // [0,1]
			static const uint8_t INPUT = 0b01; // Digital Input
			static const uint8_t OUTPUT_LOW_POWER = 0b10; // Digital Output Low Power
			static const uint8_t OUTPUT_HIGH_POWER = 0b11; // Digital Output High Power
		};
	};
	
	/* Set register GPIO1_CONF */
	void setGPIO1_CONF(uint8_t value)
	{
		write(GPIO1_CONF::__address, value, 8);
	}
	
	/* Get register GPIO1_CONF */
	uint8_t getGPIO1_CONF()
	{
		return read8(GPIO1_CONF::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG GPIO2_CONF                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG GPIO2_CONF:
	 */
	struct GPIO2_CONF
	{
		static const uint16_t __address = 2;
		
		/* Bits GPIO_SELECT: */
		/* Specify the GPIO2 I/O signal, default setting digital GND (see Table 57).  */
		struct GPIO_SELECT
		{
			static const uint8_t dflt = 0b10100; // 5'b10100
			static const uint8_t mask = 0b11111000; // [3,4,5,6,7]
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits GPIO2_MODE: */
		struct GPIO2_MODE
		{
			static const uint8_t dflt = 0b10; // 2'b10
			static const uint8_t mask = 0b00000011; // [0,1]
			static const uint8_t INPUT = 0b01; // Digital Input
			static const uint8_t OUTPUT_LOW_POWER = 0b10; // Digital Output Low Power
			static const uint8_t OUTPUT_HIGH_POWER = 0b11; // Digital Output High Power
		};
	};
	
	/* Set register GPIO2_CONF */
	void setGPIO2_CONF(uint8_t value)
	{
		write(GPIO2_CONF::__address, value, 8);
	}
	
	/* Get register GPIO2_CONF */
	uint8_t getGPIO2_CONF()
	{
		return read8(GPIO2_CONF::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG GPIO3_CONF                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG GPIO3_CONF:
	 */
	struct GPIO3_CONF
	{
		static const uint16_t __address = 3;
		
		/* Bits GPIO_SELECT: */
		/* Specify the GPIO3 I/O signal, default setting digital GND (see Table 57).  */
		struct GPIO_SELECT
		{
			static const uint8_t dflt = 0b10100; // 5'b10100
			static const uint8_t mask = 0b11111000; // [3,4,5,6,7]
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits GPIO_MODE: */
		struct GPIO_MODE
		{
			static const uint8_t dflt = 0b10; // 2'b10
			static const uint8_t mask = 0b00000011; // [0,1]
			static const uint8_t ANALOG = 0b00; // Analog
			static const uint8_t INPUT = 0b01; // Digital Input
			static const uint8_t OUTPUT_LOW_POWER = 0b10; // Digital Output Low Power
			static const uint8_t OUTPUT_HIGH_POWER = 0b11; // Digital Output High Power
		};
	};
	
	/* Set register GPIO3_CONF */
	void setGPIO3_CONF(uint8_t value)
	{
		write(GPIO3_CONF::__address, value, 8);
	}
	
	/* Get register GPIO3_CONF */
	uint8_t getGPIO3_CONF()
	{
		return read8(GPIO3_CONF::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG SYNT3                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SYNT3:
	 */
	struct SYNT3
	{
		static const uint16_t __address = 5;
		
		/* Bits PLL_CP_ISEL: */
		/* Set the charge pump current according to the XTAL frequency (see Table 34).  */
		struct PLL_CP_ISEL
		{
			static const uint8_t dflt = 0b010; // 3'b10
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits BS: */
		/*
		 * Synthesizer band select. This parameter selects the out-of loop divide factor of
		 * the synthesizer (see Section 5.3.1):
		 */
		struct BS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t HIGH_BAND = 0b0; // band select factor for high band
			static const uint8_t LOW_BAND = 0b1; // band select factor for middle band
		};
		/* Bits SYNT: */
		/* MSB bits of the PLL programmable divider (see Section 5.3.1).  */
		struct SYNT
		{
			static const uint8_t dflt = 0b0010; // 4'b10
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register SYNT3 */
	void setSYNT3(uint8_t value)
	{
		write(SYNT3::__address, value, 8);
	}
	
	/* Get register SYNT3 */
	uint8_t getSYNT3()
	{
		return read8(SYNT3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG SYNT2                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG SYNT2:
	 * Intermediate bits of the PLL programmable divider (see Section 5.3.1).
	 */
	struct SYNT2
	{
		static const uint16_t __address = 6;
		
		/* Bits SYNT2: */
		struct SYNT2_
		{
			/* MODE - */
			static const uint8_t dflt = 0b00010110; // 8'h16
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register SYNT2 */
	void setSYNT2(uint8_t value)
	{
		write(SYNT2::__address, value, 8);
	}
	
	/* Get register SYNT2 */
	uint8_t getSYNT2()
	{
		return read8(SYNT2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG SYNT1                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG SYNT1:
	 * Intermediate bits of the PLL programmable divider (see Section 5.3.1).
	 */
	struct SYNT1
	{
		static const uint16_t __address = 7;
		
		/* Bits SYNT1: */
		struct SYNT1_
		{
			/* MODE - */
			static const uint8_t dflt = 0b00100111; // 8'h27
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register SYNT1 */
	void setSYNT1(uint8_t value)
	{
		write(SYNT1::__address, value, 8);
	}
	
	/* Get register SYNT1 */
	uint8_t getSYNT1()
	{
		return read8(SYNT1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG SYNT0                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG SYNT0:
	 * LSB bits of the PLL programmable divider (see Section 5.3.1).
	 */
	struct SYNT0
	{
		static const uint16_t __address = 8;
		
		/* Bits SYNT0: */
		struct SYNT0_
		{
			/* MODE - */
			static const uint8_t dflt = 0b01100010; // 8'h62
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register SYNT0 */
	void setSYNT0(uint8_t value)
	{
		write(SYNT0::__address, value, 8);
	}
	
	/* Get register SYNT0 */
	uint8_t getSYNT0()
	{
		return read8(SYNT0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG IF_OFFSET_ANA                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG IF_OFFSET_ANA:
	 * Intermediate frequency setting for the analog RF synthesizer, default: 300 kHz (see Equation 11).
	 */
	struct IF_OFFSET_ANA
	{
		static const uint16_t __address = 9;
		
		/* Bits IF_OFFSET_ANA: */
		struct IF_OFFSET_ANA_
		{
			/* MODE - */
			static const uint8_t dflt = 0b00101010; // 8'h2a
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register IF_OFFSET_ANA */
	void setIF_OFFSET_ANA(uint8_t value)
	{
		write(IF_OFFSET_ANA::__address, value, 8);
	}
	
	/* Get register IF_OFFSET_ANA */
	uint8_t getIF_OFFSET_ANA()
	{
		return read8(IF_OFFSET_ANA::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG IF_OFFSET_DIG                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG IF_OFFSET_DIG:
	 */
	struct IF_OFFSET_DIG
	{
		static const uint16_t __address = 10;
		
		/* Bits IF_OFFSET_DIG: */
		/* Intermediate frequency setting for the digital shift-to-baseband circuits, default: 300 kHz (see Equation 11).  */
		struct IF_OFFSET_DIG_
		{
			static const uint8_t dflt = 0b10111000; // 8'b10111000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register IF_OFFSET_DIG */
	void setIF_OFFSET_DIG(uint8_t value)
	{
		write(IF_OFFSET_DIG::__address, value, 8);
	}
	
	/* Get register IF_OFFSET_DIG */
	uint8_t getIF_OFFSET_DIG()
	{
		return read8(IF_OFFSET_DIG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG CHSPACE                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG CHSPACE:
	 */
	struct CHSPACE
	{
		static const uint16_t __address = 12;
		
		/* Bits CH_SPACE: */
		/* Channel spacing setting (see Equation 3).  */
		struct CH_SPACE
		{
			static const uint8_t dflt = 0b00111111; // 8'b111111
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register CHSPACE */
	void setCHSPACE(uint8_t value)
	{
		write(CHSPACE::__address, value, 8);
	}
	
	/* Get register CHSPACE */
	uint8_t getCHSPACE()
	{
		return read8(CHSPACE::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG CHNUM                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG CHNUM:
	 */
	struct CHNUM
	{
		static const uint16_t __address = 13;
		
		/* Bits CH_NUM: */
		/*
		 * Channel number. This value is multiplied by the channel spacing and added to the synthesizer base
		 * frequency to generate the actual RF carrier frequency (see Equation 3).
		 */
		struct CH_NUM
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register CHNUM */
	void setCHNUM(uint8_t value)
	{
		write(CHNUM::__address, value, 8);
	}
	
	/* Get register CHNUM */
	uint8_t getCHNUM()
	{
		return read8(CHNUM::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG MOD4                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG MOD4:
	 */
	struct MOD4
	{
		static const uint16_t __address = 14;
		
		/* Bits DATARATE_M: */
		/* The MSB of the mantissa value of the data rate equation (see Equation 10).  */
		struct DATARATE_M
		{
			static const uint8_t dflt = 0b10000011; // 8'b10000011
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register MOD4 */
	void setMOD4(uint8_t value)
	{
		write(MOD4::__address, value, 8);
	}
	
	/* Get register MOD4 */
	uint8_t getMOD4()
	{
		return read8(MOD4::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG MOD3                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG MOD3:
	 */
	struct MOD3
	{
		static const uint16_t __address = 15;
		
		/* Bits DATARATE_M: */
		/* The LSB of the mantissa value of the data rate equation (see Equation 10).  */
		struct DATARATE_M
		{
			static const uint8_t dflt = 0b00101011; // 8'b101011
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register MOD3 */
	void setMOD3(uint8_t value)
	{
		write(MOD3::__address, value, 8);
	}
	
	/* Get register MOD3 */
	uint8_t getMOD3()
	{
		return read8(MOD3::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG MOD2                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG MOD2:
	 */
	struct MOD2
	{
		static const uint16_t __address = 16;
		
		/* Bits MOD_TYPE: */
		/* Modulation type:  */
		struct MOD_TYPE
		{
			static const uint8_t dflt = 0b0111; // 4'b111
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
			static const uint8_t MOD_2_FSK = 0; // 2-FSK
			static const uint8_t MOD_4_FSK = 1; // 4-FSK
			static const uint8_t MOD_2_GFSK_BT_1 = 2; // 2-GFSK BT=1
			static const uint8_t MOD_4_GFSK_BT_1 = 3; // 4-GFSK BT=1
			static const uint8_t MOD_ASK_OOK = 5; // ASK/OOK
			static const uint8_t UNMODULATED = 7; // unmodulated
			static const uint8_t MOD_2_FSK_BT_0_5 = 10; // 2-GFSK BT=0.5
			static const uint8_t MOD_4_FSK_BT_0_5 = 12; // 4-GFSK BT=0.5 §
		};
		/* Bits DATARATE_E: */
		/* The exponent value of the data rate equation (see Equation 10).  */
		struct DATARATE_E
		{
			static const uint8_t dflt = 0b0111; // 4'b111
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register MOD2 */
	void setMOD2(uint8_t value)
	{
		write(MOD2::__address, value, 8);
	}
	
	/* Get register MOD2 */
	uint8_t getMOD2()
	{
		return read8(MOD2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG MOD1                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG MOD1:
	 */
	struct MOD1
	{
		static const uint16_t __address = 17;
		
		/* Bits PA_INTERP_EN: */
		/* 1: enable the PA power interpolator (see Section 5.6.1).  */
		struct PA_INTERP_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits MOD_INTERP_EN: */
		/* 1: enable frequency interpolator for the GFSK shaping (see Section 5.4.1.1).  */
		struct MOD_INTERP_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits CONST_MAP: */
		/* Select the constellation map for 4-(G)FSK or 2-(G)FSK modulations (see Table 38 and Table 39).  */
		struct CONST_MAP
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00110000; // [4,5]
		};
		/* Bits FDEV_E: */
		/* The exponent value of the frequency deviation equation (see Equation 7).  */
		struct FDEV_E
		{
			static const uint8_t dflt = 0b0011; // 4'b11
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register MOD1 */
	void setMOD1(uint8_t value)
	{
		write(MOD1::__address, value, 8);
	}
	
	/* Get register MOD1 */
	uint8_t getMOD1()
	{
		return read8(MOD1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG MOD0                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG MOD0:
	 */
	struct MOD0
	{
		static const uint16_t __address = 18;
		
		/* Bits FDEV_M: */
		/* The mantissa value of the frequency deviation equation (see Equation 7).  */
		struct FDEV_M
		{
			static const uint8_t dflt = 0b10010011; // 8'b10010011
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register MOD0 */
	void setMOD0(uint8_t value)
	{
		write(MOD0::__address, value, 8);
	}
	
	/* Get register MOD0 */
	uint8_t getMOD0()
	{
		return read8(MOD0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG CHFLT                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG CHFLT:
	 */
	struct CHFLT
	{
		static const uint16_t __address = 19;
		
		/* Bits CHFLT_M: */
		/* The mantissa value of the receiver channel filter (see Table 41).  */
		struct CHFLT_M
		{
			static const uint8_t dflt = 0b0010; // 4'b10
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits CHFLT_E: */
		/* The exponent value of the receiver channel filter (see Table 41).  */
		struct CHFLT_E
		{
			static const uint8_t dflt = 0b0011; // 4'b11
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register CHFLT */
	void setCHFLT(uint8_t value)
	{
		write(CHFLT::__address, value, 8);
	}
	
	/* Get register CHFLT */
	uint8_t getCHFLT()
	{
		return read8(CHFLT::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG AFC2                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG AFC2:
	 */
	struct AFC2
	{
		static const uint16_t __address = 20;
		
		/* Bits AFC_FREEZE_ON_SYNC: */
		struct AFC_FREEZE_ON_SYNC
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t ENABLE_FREEZE = 0b1; // enable the freeze AFC correction upon sync word detection. §
		};
		/* Bits AFC_ENABLED: */
		struct AFC_ENABLED
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t ENABLE_AFC_CORR = 0b1; // enable the AFC correction. §
		};
		/* Bits AFC_MODE: */
		/* Select AFC mode:  */
		struct AFC_MODE
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t CLOSED_ON_SLICER = 0b0; // AFC loop closed on slicer 
			static const uint8_t CLOSED_ON_2ND = 0b1; // AFC loop closed on second conversion stage.
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b01000; // 5'b1000
			static const uint8_t mask = 0b00011111; // [0,1,2,3,4]
		};
	};
	
	/* Set register AFC2 */
	void setAFC2(uint8_t value)
	{
		write(AFC2::__address, value, 8);
	}
	
	/* Get register AFC2 */
	uint8_t getAFC2()
	{
		return read8(AFC2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG AFC1                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG AFC1:
	 */
	struct AFC1
	{
		static const uint16_t __address = 21;
		
		/* Bits AFC_FAST_PERIOD: */
		/* The length of the AFC fast period.  */
		struct AFC_FAST_PERIOD
		{
			static const uint8_t dflt = 0b00011000; // 8'b11000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register AFC1 */
	void setAFC1(uint8_t value)
	{
		write(AFC1::__address, value, 8);
	}
	
	/* Get register AFC1 */
	uint8_t getAFC1()
	{
		return read8(AFC1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                             REG AFC0                                              *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG AFC0:
	 */
	struct AFC0
	{
		static const uint16_t __address = 22;
		
		/* Bits AFC_FAST_GAIN: */
		/* The AFC loop gain in fast mode (2's log).  */
		struct AFC_FAST_GAIN
		{
			static const uint8_t dflt = 0b0010; // 4'b10
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits AFC_SLOW_GAIN: */
		/* The AFC loop gain in slow mode (2's log).  */
		struct AFC_SLOW_GAIN
		{
			static const uint8_t dflt = 0b0101; // 4'b101
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register AFC0 */
	void setAFC0(uint8_t value)
	{
		write(AFC0::__address, value, 8);
	}
	
	/* Get register AFC0 */
	uint8_t getAFC0()
	{
		return read8(AFC0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG RSSI_FLT                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG RSSI_FLT:
	 */
	struct RSSI_FLT
	{
		static const uint16_t __address = 23;
		
		/* Bits RSSI_FLT: */
		/* Gain of the RSSI filter.  */
		struct RSSI_FLT_
		{
			static const uint8_t dflt = 0b1110; // 4'b1110
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits CS_MODE: */
		/* Carrier sense mode (see Section 5.5.8.2):  */
		struct CS_MODE
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00001100; // [2,3]
			static const uint8_t STATIC = 0b00; // Static CS
			static const uint8_t DYNAMIC_6_DB = 0b01; // Dynamic CS with 6dB dynamic threshold
			static const uint8_t DYNAMIC_12_DB = 0b10; // Dynamic CS with 12dB dynamic threshold
			static const uint8_t DYNAMIC_18_DB = 0b11; // Dynamic CS with 18dB dynamic threshold.
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b11; // 2'b11
			static const uint8_t mask = 0b00000011; // [0,1]
		};
	};
	
	/* Set register RSSI_FLT */
	void setRSSI_FLT(uint8_t value)
	{
		write(RSSI_FLT::__address, value, 8);
	}
	
	/* Get register RSSI_FLT */
	uint8_t getRSSI_FLT()
	{
		return read8(RSSI_FLT::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG RSSI_TH                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG RSSI_TH:
	 */
	struct RSSI_TH
	{
		static const uint16_t __address = 24;
		
		/* Bits RSSI_TH: */
		/*
		 * Signal detect threshold in 1 dB steps. The RSSI_TH can be converted in dBm using the
		 * formula RSSI_TH-146.
		 */
		struct RSSI_TH_
		{
			static const uint8_t dflt = 0b00101000; // 8'b101000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register RSSI_TH */
	void setRSSI_TH(uint8_t value)
	{
		write(RSSI_TH::__address, value, 8);
	}
	
	/* Get register RSSI_TH */
	uint8_t getRSSI_TH()
	{
		return read8(RSSI_TH::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG AGCCTRL4                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG AGCCTRL4:
	 */
	struct AGCCTRL4
	{
		static const uint16_t __address = 26;
		
		/* Bits LOW_THRESHOLD_0: */
		/* Low threshold 0 for the AGC  */
		struct LOW_THRESHOLD_0
		{
			static const uint8_t dflt = 0b0101; // 4'b101
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits LOW_THRESHOLD_1: */
		/* Low threshold 0 for the AGC  */
		struct LOW_THRESHOLD_1
		{
			static const uint8_t dflt = 0b0100; // 4'b100
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register AGCCTRL4 */
	void setAGCCTRL4(uint8_t value)
	{
		write(AGCCTRL4::__address, value, 8);
	}
	
	/* Get register AGCCTRL4 */
	uint8_t getAGCCTRL4()
	{
		return read8(AGCCTRL4::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG AGCCTRL3                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG AGCCTRL3:
	 */
	struct AGCCTRL3
	{
		static const uint16_t __address = 27;
		
		/* Bits LOW_THRESHOLD_SEL: */
		/* Low threshold selection (defined in the AGCCTRL4). Bitmask for each attenuation step.  */
		struct LOW_THRESHOLD_SEL
		{
			static const uint8_t dflt = 0b00010000; // 8'b10000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register AGCCTRL3 */
	void setAGCCTRL3(uint8_t value)
	{
		write(AGCCTRL3::__address, value, 8);
	}
	
	/* Get register AGCCTRL3 */
	uint8_t getAGCCTRL3()
	{
		return read8(AGCCTRL3::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG AGCCTRL2                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG AGCCTRL2:
	 */
	struct AGCCTRL2
	{
		static const uint16_t __address = 28;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits FREEZE_ON_SYNC: */
		/* Enable the AGC algorithm to be frozen on SYNC  */
		struct FREEZE_ON_SYNC
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits MEAS_TIME: */
		/* AGC measurement time  */
		struct MEAS_TIME
		{
			static const uint8_t dflt = 0b0010; // 4'b10
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register AGCCTRL2 */
	void setAGCCTRL2(uint8_t value)
	{
		write(AGCCTRL2::__address, value, 8);
	}
	
	/* Get register AGCCTRL2 */
	uint8_t getAGCCTRL2()
	{
		return read8(AGCCTRL2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG AGCCTRL1                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG AGCCTRL1:
	 */
	struct AGCCTRL1
	{
		static const uint16_t __address = 29;
		
		/* Bits HIGH_THRESHOLD: */
		/* High threshold for the AGC  */
		struct HIGH_THRESHOLD
		{
			static const uint8_t dflt = 0b0101; // 4'b101
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b1001; // 4'b1001
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register AGCCTRL1 */
	void setAGCCTRL1(uint8_t value)
	{
		write(AGCCTRL1::__address, value, 8);
	}
	
	/* Get register AGCCTRL1 */
	uint8_t getAGCCTRL1()
	{
		return read8(AGCCTRL1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG AGCCTRL0                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG AGCCTRL0:
	 */
	struct AGCCTRL0
	{
		static const uint16_t __address = 30;
		
		/* Bits AGC_ENABLE: */
		struct AGC_ENABLE
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t DISABLED = 0b0; // 
			static const uint8_t ENABLED = 0b1; // 
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits HOLD_TIME: */
		/* Hold time for after gain adjustment for the AGC.  */
		struct HOLD_TIME
		{
			static const uint8_t dflt = 0b001100; // 6'b1100
			static const uint8_t mask = 0b00111111; // [0,1,2,3,4,5]
		};
	};
	
	/* Set register AGCCTRL0 */
	void setAGCCTRL0(uint8_t value)
	{
		write(AGCCTRL0::__address, value, 8);
	}
	
	/* Get register AGCCTRL0 */
	uint8_t getAGCCTRL0()
	{
		return read8(AGCCTRL0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG ANT_SELECT_CONF                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG ANT_SELECT_CONF:
	 */
	struct ANT_SELECT_CONF
	{
		static const uint16_t __address = 31;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits EQU_CTRL: */
		/* ISI cancellation equalizer (see Section 5.4.1.2):  */
		struct EQU_CTRL
		{
			static const uint8_t dflt = 0b10; // 2'b10
			static const uint8_t mask = 0b01100000; // [5,6]
			static const uint8_t DISABLED = 0b00; // equalization disabled
			static const uint8_t SINGLE_PASS = 0b01; // single pass equalization
			static const uint8_t DUAL_PASS = 0b10; // dual pass equalization.
		};
		/* Bits CS_BLANKING: */
		/* Do not fill the RX FIFO with data if the CS is above threshold (see Section 5.5.9).  */
		struct CS_BLANKING
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits AS_ENABLE: */
		/* 1: enable the antenna switching (see Section 5.5.10).  */
		struct AS_ENABLE
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits AS_MEAS_TIME: */
		/* Set the measurement time.  */
		struct AS_MEAS_TIME
		{
			static const uint8_t dflt = 0b101; // 3'b101
			static const uint8_t mask = 0b00000111; // [0,1,2]
		};
	};
	
	/* Set register ANT_SELECT_CONF */
	void setANT_SELECT_CONF(uint8_t value)
	{
		write(ANT_SELECT_CONF::__address, value, 8);
	}
	
	/* Get register ANT_SELECT_CONF */
	uint8_t getANT_SELECT_CONF()
	{
		return read8(ANT_SELECT_CONF::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CLOCKREC2                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG CLOCKREC2:
	 */
	struct CLOCKREC2
	{
		static const uint16_t __address = 32;
		
		/* Bits CLK_REC_P_GAIN_SLOW: */
		/* Clock recovery slow loop gain (log2).  */
		struct CLK_REC_P_GAIN_SLOW
		{
			static const uint8_t dflt = 0b110; // 3'b110
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits CLK_REC_ALGO_SEL: */
		/* Select the symbol timing recovery algorithm:  */
		struct CLK_REC_ALGO_SEL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t DLL = 0b0; // 
			static const uint8_t PLL = 0b1; // 
		};
		/* Bits CLK_REC_I_GAIN_SLOW: */
		/* Set the integral slow gain for symbol timing recovery (PLL mode only).  */
		struct CLK_REC_I_GAIN_SLOW
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register CLOCKREC2 */
	void setCLOCKREC2(uint8_t value)
	{
		write(CLOCKREC2::__address, value, 8);
	}
	
	/* Get register CLOCKREC2 */
	uint8_t getCLOCKREC2()
	{
		return read8(CLOCKREC2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG CLOCKREC1                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG CLOCKREC1:
	 */
	struct CLOCKREC1
	{
		static const uint16_t __address = 33;
		
		/* Bits CLK_REC_P_GAIN_FAST: */
		/* Clock recovery fast loop gain (log2).  */
		struct CLK_REC_P_GAIN_FAST
		{
			static const uint8_t dflt = 0b010; // 3'b10
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits PSTFLT_LEN: */
		/* Select the post filter length:  */
		struct PSTFLT_LEN
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t LEN_8_SYMBOLS = 0b0; // 8 symbols
			static const uint8_t LEN_16_SYMBOLS = 0b1; // 16 symbols
		};
		/* Bits CLK_REC_I_GAIN_FAST: */
		/* Set the integral fast gain for symbol timing recovery (PLL mode only).  */
		struct CLK_REC_I_GAIN_FAST
		{
			static const uint8_t dflt = 0b1000; // 4'b1000
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register CLOCKREC1 */
	void setCLOCKREC1(uint8_t value)
	{
		write(CLOCKREC1::__address, value, 8);
	}
	
	/* Get register CLOCKREC1 */
	uint8_t getCLOCKREC1()
	{
		return read8(CLOCKREC1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PCKTCTRL6                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKTCTRL6:
	 */
	struct PCKTCTRL6
	{
		static const uint16_t __address = 43;
		
		/* Bits SYNC_LEN: */
		/* The number of bits used for the SYNC field in the packet.  */
		struct SYNC_LEN
		{
			static const uint8_t dflt = 0b100000; // 6'b100000
			static const uint8_t mask = 0b11111100; // [2,3,4,5,6,7]
		};
		/* Bits PREAMBLE_LEN: */
		/* The MSB of the number of '01 or '10' of the preamble of the packet.  */
		struct PREAMBLE_LEN
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000011; // [0,1]
		};
	};
	
	/* Set register PCKTCTRL6 */
	void setPCKTCTRL6(uint8_t value)
	{
		write(PCKTCTRL6::__address, value, 8);
	}
	
	/* Get register PCKTCTRL6 */
	uint8_t getPCKTCTRL6()
	{
		return read8(PCKTCTRL6::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PCKTCTRL5                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKTCTRL5:
	 */
	struct PCKTCTRL5
	{
		static const uint16_t __address = 44;
		
		/* Bits PREAMBLE_LEN: */
		/* The LSB of the number of '01 or '10' of the preamble of the packet.  */
		struct PREAMBLE_LEN
		{
			static const uint8_t dflt = 0b00010000; // 8'b10000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PCKTCTRL5 */
	void setPCKTCTRL5(uint8_t value)
	{
		write(PCKTCTRL5::__address, value, 8);
	}
	
	/* Get register PCKTCTRL5 */
	uint8_t getPCKTCTRL5()
	{
		return read8(PCKTCTRL5::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PCKTCTRL4                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKTCTRL4:
	 */
	struct PCKTCTRL4
	{
		static const uint16_t __address = 45;
		
		/* Bits LEN_WID: */
		/* The number of bytes used for the length field  */
		struct LEN_WID
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t NUM_1_BYTE = 0b0; // 1 byte
			static const uint8_t NUM_2_BYTES = 0b1; // 2 bytes
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b01110000; // [4,5,6]
		};
		/* Bits ADDRESS_LEN: */
		/* 1: include the ADDRESS field in the packet.  */
		struct ADDRESS_LEN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t INCLUDE_ADDRESS_FIELD = 0b1; // 
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b00000111; // [0,1,2]
		};
	};
	
	/* Set register PCKTCTRL4 */
	void setPCKTCTRL4(uint8_t value)
	{
		write(PCKTCTRL4::__address, value, 8);
	}
	
	/* Get register PCKTCTRL4 */
	uint8_t getPCKTCTRL4()
	{
		return read8(PCKTCTRL4::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PCKTCTRL3                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKTCTRL3:
	 */
	struct PCKTCTRL3
	{
		static const uint16_t __address = 46;
		
		/* Bits PCKT_FRMT: */
		/* Format of packet (see section 6)  */
		struct PCKT_FRMT
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
			static const uint8_t BASIC = 0; // 0: Basic
			static const uint8_t FMT_802_15_4g = 1; // 1: 802.15.4g
			static const uint8_t OTA = 2; // 2: UART OTA
			static const uint8_t STACK = 3; // 3: Stack
		};
		/* Bits RX_MODE: */
		/* RX mode  */
		struct RX_MODE
		{
			static const uint8_t dflt = 0b10; // 2'b10
			static const uint8_t mask = 0b00110000; // [4,5]
			static const uint8_t NORMAL = 0; // 0: normal mode
			static const uint8_t DIRECT_FIFO = 1; // 1: direct through FIFO
			static const uint8_t DIRECT_GPIO = 2; // 2: direct through GPIO §
		};
		/* Bits FSK4_SYM_SWAP: */
		/* Select the symbol mapping for 4(G)FSK.  */
		struct FSK4_SYM_SWAP
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits BYTE_SWAP: */
		/* Select the transmission order between MSB and LSB.  */
		struct BYTE_SWAP
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits PREAMBLE_SEL: */
		/* Select the preamble pattern.  */
		struct PREAMBLE_SEL
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000011; // [0,1]
		};
	};
	
	/* Set register PCKTCTRL3 */
	void setPCKTCTRL3(uint8_t value)
	{
		write(PCKTCTRL3::__address, value, 8);
	}
	
	/* Get register PCKTCTRL3 */
	uint8_t getPCKTCTRL3()
	{
		return read8(PCKTCTRL3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PCKTCTRL2                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKTCTRL2:
	 */
	struct PCKTCTRL2
	{
		static const uint16_t __address = 47;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits FCS_TYPE_4G: */
		/* This is the FCS type in header field of 802.15.4g packet.  */
		struct FCS_TYPE_4G
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits FEC_TYPE_4G_STOP_BIT: */
		/*
		 * - If the 802.15.4 mode is enabled, this is the FCS type in header field of 802.15.4g
		 * packet. Select the FEC type of 802.15.4g packet:
		 */
		struct FEC_TYPE_4G_STOP_BIT
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t NRNSC = 0b0; // 
			static const uint8_t RSC = 0b1; // If the UART packet is enabled, this is the value of the STOP_BIT.
		};
		/* Bits INT_EN_4G_START_BIT: */
		/*
		 * - If the 802.15.4 mode is enabled, 1: enable the
		 * interleaving of 802.15.4g packet.
		 * If the UART packet is enabled, this is the value
		 * of the START_BIT.
		 */
		struct INT_EN_4G_START_BIT
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t ENABLE = 0b1; // Enable the interleaving of 802.15.4g packet. If the UART packet is enabled, this is the value of the START_BIT. §
		};
		/* Bits MBUS_3OF6_EN: */
		struct MBUS_3OF6_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t ENABLE = 0b1; // enable the 3-out-of-6 encoding/decoding.
		};
		/* Bits MANCHESTER_EN: */
		struct MANCHESTER_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t ENABLE = 0b1; // enable the Manchester encoding/decoding. §
		};
		/* Bits FIX_VAR_LEN: */
		/* Packet length mode:  */
		struct FIX_VAR_LEN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t FIXED = 0b0; // 
			static const uint8_t VARIABLE = 0b1; // in variable mode the field LEN_WID of PCKTCTRL3 register must be configured §
		};
	};
	
	/* Set register PCKTCTRL2 */
	void setPCKTCTRL2(uint8_t value)
	{
		write(PCKTCTRL2::__address, value, 8);
	}
	
	/* Get register PCKTCTRL2 */
	uint8_t getPCKTCTRL2()
	{
		return read8(PCKTCTRL2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PCKTCTRL1                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKTCTRL1:
	 */
	struct PCKTCTRL1
	{
		static const uint16_t __address = 48;
		
		/* Bits CRC_MODE: */
		/* CRC field:  */
		struct CRC_MODE
		{
			static const uint8_t dflt = 0b001; // 3'b1
			static const uint8_t mask = 0b11100000; // [5,6,7]
			static const uint8_t NO_CRC = 0; // no CRC field
			static const uint8_t CRC_07 = 1; // CRC using poly 0x07
			static const uint8_t CRC_8005 = 2; // CRC using poly 0x8005
			static const uint8_t CRC_1021 = 3; // CRC using poly 0x1021
			static const uint8_t CRC_864CBF = 4; // CRC using poly 0x864CBF
			static const uint8_t CRC_04C011BB7 = 5; // CRC using poly 0x04C011BB7 §
		};
		/* Bits WHIT_EN: */
		struct WHIT_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t ENABLE = 0b1; // enable the whitening mode
		};
		/* Bits TXSOURCE: */
		/* Tx source data:  */
		struct TXSOURCE
		{
			static const uint8_t dflt = 0b11; // 2'b11
			static const uint8_t mask = 0b00001100; // [2,3]
			static const uint8_t NORMAL = 0; // normal mode
			static const uint8_t DIRECT_FIFO = 1; // direct through FIFO
			static const uint8_t DIRECT_GPIO = 2; // direct through GPIO
			static const uint8_t PN9 = 3; // PN9
		};
		/* Bits SECOND_SYNC_SEL: */
		/*
		 * In TX mode:
		 * 1'b0 = PRIMARY    -select the primary SYNC word
		 * 1'b0 = SECONDARY  -select the secondary SYNC word.
		 * In RX mode, if 1 enable the dual SYNC word detection mode.
		 */
		struct SECOND_SYNC_SEL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits FEC_EN: */
		struct FEC_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t ENABLE = 0b1; // Enable the FEC encoding in TX or the Viterbi decoding in RX. §
		};
	};
	
	/* Set register PCKTCTRL1 */
	void setPCKTCTRL1(uint8_t value)
	{
		write(PCKTCTRL1::__address, value, 8);
	}
	
	/* Get register PCKTCTRL1 */
	uint8_t getPCKTCTRL1()
	{
		return read8(PCKTCTRL1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG PCKTLEN1                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PCKTLEN1:
	 */
	struct PCKTLEN1
	{
		static const uint16_t __address = 49;
		
		/* Bits PCKTLEN1: */
		/* MSB of length of packet in bytes.  */
		struct PCKTLEN1_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PCKTLEN1 */
	void setPCKTLEN1(uint8_t value)
	{
		write(PCKTLEN1::__address, value, 8);
	}
	
	/* Get register PCKTLEN1 */
	uint8_t getPCKTLEN1()
	{
		return read8(PCKTLEN1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG PCKTLEN0                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PCKTLEN0:
	 */
	struct PCKTLEN0
	{
		static const uint16_t __address = 50;
		
		/* Bits PCKTLEN0: */
		/* LSB of length of packet in bytes.  */
		struct PCKTLEN0_
		{
			static const uint8_t dflt = 0b00010100; // 8'b10100
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PCKTLEN0 */
	void setPCKTLEN0(uint8_t value)
	{
		write(PCKTLEN0::__address, value, 8);
	}
	
	/* Get register PCKTLEN0 */
	uint8_t getPCKTLEN0()
	{
		return read8(PCKTLEN0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG SYNC3                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SYNC3:
	 */
	struct SYNC3
	{
		static const uint16_t __address = 51;
		
		/* Bits SYNC3: */
		/* SYNC word byte 3.  */
		struct SYNC3_
		{
			static const uint8_t dflt = 0b10001000; // 8'b10001000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register SYNC3 */
	void setSYNC3(uint8_t value)
	{
		write(SYNC3::__address, value, 8);
	}
	
	/* Get register SYNC3 */
	uint8_t getSYNC3()
	{
		return read8(SYNC3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG SYNC2                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SYNC2:
	 */
	struct SYNC2
	{
		static const uint16_t __address = 52;
		
		/* Bits SYNC2: */
		/* SYNC word byte 2.  */
		struct SYNC2_
		{
			static const uint8_t dflt = 0b10001000; // 8'b10001000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register SYNC2 */
	void setSYNC2(uint8_t value)
	{
		write(SYNC2::__address, value, 8);
	}
	
	/* Get register SYNC2 */
	uint8_t getSYNC2()
	{
		return read8(SYNC2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG SYNC1                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SYNC1:
	 */
	struct SYNC1
	{
		static const uint16_t __address = 53;
		
		/* Bits SYNC1: */
		/* SYNC word byte 1.  */
		struct SYNC1_
		{
			static const uint8_t dflt = 0b10001000; // 8'b10001000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register SYNC1 */
	void setSYNC1(uint8_t value)
	{
		write(SYNC1::__address, value, 8);
	}
	
	/* Get register SYNC1 */
	uint8_t getSYNC1()
	{
		return read8(SYNC1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                            REG SYNC0                                             *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SYNC0:
	 */
	struct SYNC0
	{
		static const uint16_t __address = 54;
		
		/* Bits SYNC0: */
		/* SYNC word byte 0.  */
		struct SYNC0_
		{
			static const uint8_t dflt = 0b10001000; // 8'b10001000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register SYNC0 */
	void setSYNC0(uint8_t value)
	{
		write(SYNC0::__address, value, 8);
	}
	
	/* Get register SYNC0 */
	uint8_t getSYNC0()
	{
		return read8(SYNC0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                              REG QI                                               *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG QI:
	 */
	struct QI
	{
		static const uint16_t __address = 55;
		
		/* Bits SQI_TH: */
		/* SQI threshold.  */
		struct SQI_TH
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits PQI_TH: */
		/* PQI threshold.  */
		struct PQI_TH
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00011110; // [1,2,3,4]
		};
		/* Bits SQI_EN: */
		struct SQI_EN
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t ENABLE = 0b1; // Enable the SQI check. §
		};
	};
	
	/* Set register QI */
	void setQI(uint8_t value)
	{
		write(QI::__address, value, 8);
	}
	
	/* Get register QI */
	uint8_t getQI()
	{
		return read8(QI::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG PCKT_PSTMBL                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKT_PSTMBL:
	 */
	struct PCKT_PSTMBL
	{
		static const uint16_t __address = 56;
		
		/* Bits PCKT_PSTMBL: */
		/* Set the packet postamble length.  */
		struct PCKT_PSTMBL_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PCKT_PSTMBL */
	void setPCKT_PSTMBL(uint8_t value)
	{
		write(PCKT_PSTMBL::__address, value, 8);
	}
	
	/* Get register PCKT_PSTMBL */
	uint8_t getPCKT_PSTMBL()
	{
		return read8(PCKT_PSTMBL::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PROTOCOL2                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PROTOCOL2:
	 */
	struct PROTOCOL2
	{
		static const uint16_t __address = 57;
		
		/* Bits CS_TIMEOUT_MASK: */
		struct CS_TIMEOUT_MASK
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t ENABLE = 0b1; // Enable the CS value contributes to timeout disabling.
		};
		/* Bits SQI_TIMEOUT_MASK: */
		struct SQI_TIMEOUT_MASK
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t ENABLE = 0b1; // Enable the SQI value contributes to timeout disabling.
		};
		/* Bits PQI_TIMEOUT_MASK: */
		struct PQI_TIMEOUT_MASK
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t ENABLE = 0b1; // Enable the PQI value contributes to timeout disabling.
		};
		/* Bits TX_SEQ_NUM_RELOAD: */
		/* TX sequence number to be used when counting reset is required using the related command.  */
		struct TX_SEQ_NUM_RELOAD
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00011000; // [3,4]
		};
		/* Bits FIFO_GPIO_OUT_MUX_SEL: */
		struct FIFO_GPIO_OUT_MUX_SEL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t TX_FIFO = 0b1; // select the almost empty/full control for TX FIFO. 
			static const uint8_t RX_FIFO = 0b0; // select the almost empty/full control for RX FIFO.
		};
		/* Bits LDC_TIMER_MULT: */
		/* Set the LDC timer multiplier factor:  */
		struct LDC_TIMER_MULT
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000011; // [0,1]
			static const uint8_t X1 = 0b00; // 
			static const uint8_t X2 = 0b01; // 
			static const uint8_t X4 = 0b10; // 
			static const uint8_t X8 = 0b11; // 
		};
	};
	
	/* Set register PROTOCOL2 */
	void setPROTOCOL2(uint8_t value)
	{
		write(PROTOCOL2::__address, value, 8);
	}
	
	/* Get register PROTOCOL2 */
	uint8_t getPROTOCOL2()
	{
		return read8(PROTOCOL2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PROTOCOL1                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PROTOCOL1:
	 */
	struct PROTOCOL1
	{
		static const uint16_t __address = 58;
		
		/* Bits LDC_MODE: */
		struct LDC_MODE
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t ENABLE = 0b1; // 1: enable the Low Duty Cycle mode.
		};
		/* Bits LDC_RELOAD_ON_SYNC: */
		struct LDC_RELOAD_ON_SYNC
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t ENABLE = 0b1; // 1: enable the LDC timer reload mode.
		};
		/* Bits PIGGYBACKING: */
		struct PIGGYBACKING
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t ENABLE = 0b1; // 1: enable the piggybacking.
		};
		/* Bits FAST_CS_TERM_EN: */
		struct FAST_CS_TERM_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t ENABLE = 0b1; // 1: enable the RX sniff timer.
		};
		/* Bits SEED_RELOAD: */
		struct SEED_RELOAD
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t ENABLE = 0b1; // 1: enable the reload of the back-off random generator seed using the value written in the BU_COUNTER_SEED. §
		};
		/* Bits CSMA_ON: */
		struct CSMA_ON
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t ENABLE = 0b1; // 1: enable the CSMA channel access mode. §
		};
		/* Bits CSMA_PERS_ON: */
		struct CSMA_PERS_ON
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t ENABLE = 0b1; // 1: enable the CSMA persistent mode (no backoff cycles). §
		};
		/* Bits AUTO_PCKT_FLT: */
		struct AUTO_PCKT_FLT
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t ENABLE = 0b1; // 1: enable the automatic packet filtering control. §
		};
	};
	
	/* Set register PROTOCOL1 */
	void setPROTOCOL1(uint8_t value)
	{
		write(PROTOCOL1::__address, value, 8);
	}
	
	/* Get register PROTOCOL1 */
	uint8_t getPROTOCOL1()
	{
		return read8(PROTOCOL1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PROTOCOL0                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PROTOCOL0:
	 */
	struct PROTOCOL0
	{
		static const uint16_t __address = 59;
		
		/* Bits NMAX_RETX: */
		/* Max. number of re-TX (from 0 to 15)(0: re-transmission is not performed).  */
		struct NMAX_RETX
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits NACK_TX: */
		/* 1: field NO_ACK=1 on transmitted packet.  */
		struct NACK_TX
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits AUTO_ACK: */
		struct AUTO_ACK
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t ENABLE = 0b1; // 1: enable the automatic acknowledgment if packet received request. §
		};
		/* Bits PERS_RX: */
		struct PERS_RX
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t ENABLE = 0b1; // 1: enable the persistent RX mode. §
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register PROTOCOL0 */
	void setPROTOCOL0(uint8_t value)
	{
		write(PROTOCOL0::__address, value, 8);
	}
	
	/* Get register PROTOCOL0 */
	uint8_t getPROTOCOL0()
	{
		return read8(PROTOCOL0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG FIFO_CONFIG3                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG FIFO_CONFIG3:
	 */
	struct FIFO_CONFIG3
	{
		static const uint16_t __address = 60;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits RX_AFTHR: */
		/* Set the RX FIFO almost full threshold.  */
		struct RX_AFTHR
		{
			static const uint8_t dflt = 0b0110000; // 7'b110000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register FIFO_CONFIG3 */
	void setFIFO_CONFIG3(uint8_t value)
	{
		write(FIFO_CONFIG3::__address, value, 8);
	}
	
	/* Get register FIFO_CONFIG3 */
	uint8_t getFIFO_CONFIG3()
	{
		return read8(FIFO_CONFIG3::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG FIFO_CONFIG2                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG FIFO_CONFIG2:
	 */
	struct FIFO_CONFIG2
	{
		static const uint16_t __address = 61;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits RX_AETHR: */
		/* Set the RX FIFO almost empty threshold.  */
		struct RX_AETHR
		{
			static const uint8_t dflt = 0b0110000; // 7'b110000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register FIFO_CONFIG2 */
	void setFIFO_CONFIG2(uint8_t value)
	{
		write(FIFO_CONFIG2::__address, value, 8);
	}
	
	/* Get register FIFO_CONFIG2 */
	uint8_t getFIFO_CONFIG2()
	{
		return read8(FIFO_CONFIG2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG FIFO_CONFIG1                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG FIFO_CONFIG1:
	 */
	struct FIFO_CONFIG1
	{
		static const uint16_t __address = 62;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits TX_AFTHR: */
		/* Set the TX FIFO almost full threshold.  */
		struct TX_AFTHR
		{
			static const uint8_t dflt = 0b0110000; // 7'b110000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register FIFO_CONFIG1 */
	void setFIFO_CONFIG1(uint8_t value)
	{
		write(FIFO_CONFIG1::__address, value, 8);
	}
	
	/* Get register FIFO_CONFIG1 */
	uint8_t getFIFO_CONFIG1()
	{
		return read8(FIFO_CONFIG1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG FIFO_CONFIG0                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG FIFO_CONFIG0:
	 */
	struct FIFO_CONFIG0
	{
		static const uint16_t __address = 63;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits TX_AETHR: */
		/* Set the TX FIFO almost empty threshold.  */
		struct TX_AETHR
		{
			static const uint8_t dflt = 0b0110000; // 7'b110000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register FIFO_CONFIG0 */
	void setFIFO_CONFIG0(uint8_t value)
	{
		write(FIFO_CONFIG0::__address, value, 8);
	}
	
	/* Get register FIFO_CONFIG0 */
	uint8_t getFIFO_CONFIG0()
	{
		return read8(FIFO_CONFIG0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG PCKT_FLT_OPTIONS                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PCKT_FLT_OPTIONS:
	 */
	struct PCKT_FLT_OPTIONS
	{
		static const uint16_t __address = 64;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits RX_TIMEOUT_AND_OR_SEL: */
		/* Logical Boolean function applied to CS/SQI/PQI values: 1: OR, 0: AND.  */
		struct RX_TIMEOUT_AND_OR_SEL
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t APPLY_OR = 0b1; // 
			static const uint8_t APPLY_AND = 0b0; // 
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits SOURCE_ADDR_FLT: */
		/* 1: RX packet accepted if its source field matches with RX_SOURCE_ADDR register  */
		struct SOURCE_ADDR_FLT
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits DEST_VS_BROADCAST_ADDR: */
		/* 1: RX packet accepted if its source field matches with BROADCAST_ADDR register.  */
		struct DEST_VS_BROADCAST_ADDR
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits DEST_VS_MULTICAST_ADDR: */
		/* 1: RX packet accepted if its destination address matches with MULTICAST_ADDR register.  */
		struct DEST_VS_MULTICAST_ADDR
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits DEST_VS_SOURCE_ADDR: */
		/* 1: RX packet accepted if its destination address matches with RX_SOURCE_ADDR register.  */
		struct DEST_VS_SOURCE_ADDR
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits CRC_FLT: */
		/* 1: packet discarded if CRC is not valid.  */
		struct CRC_FLT
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register PCKT_FLT_OPTIONS */
	void setPCKT_FLT_OPTIONS(uint8_t value)
	{
		write(PCKT_FLT_OPTIONS::__address, value, 8);
	}
	
	/* Get register PCKT_FLT_OPTIONS */
	uint8_t getPCKT_FLT_OPTIONS()
	{
		return read8(PCKT_FLT_OPTIONS::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG PCKT_FLT_GOALS4                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKT_FLT_GOALS4:
	 */
	struct PCKT_FLT_GOALS4
	{
		static const uint16_t __address = 65;
		
		/* Bits RX_SOURCE_MASK: */
		/* Mask register for source address filtering.  */
		struct RX_SOURCE_MASK
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PCKT_FLT_GOALS4 */
	void setPCKT_FLT_GOALS4(uint8_t value)
	{
		write(PCKT_FLT_GOALS4::__address, value, 8);
	}
	
	/* Get register PCKT_FLT_GOALS4 */
	uint8_t getPCKT_FLT_GOALS4()
	{
		return read8(PCKT_FLT_GOALS4::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG PCKT_FLT_GOALS3                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKT_FLT_GOALS3:
	 */
	struct PCKT_FLT_GOALS3
	{
		static const uint16_t __address = 66;
		
		/* Bits RX_SOURCE_ADDR_DUAL_SYNC3: */
		/* If dual sync mode enabled: dual SYNC word byte 3, Otherwise RX packet source or TX packet destination field.  */
		struct RX_SOURCE_ADDR_DUAL_SYNC3
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PCKT_FLT_GOALS3 */
	void setPCKT_FLT_GOALS3(uint8_t value)
	{
		write(PCKT_FLT_GOALS3::__address, value, 8);
	}
	
	/* Get register PCKT_FLT_GOALS3 */
	uint8_t getPCKT_FLT_GOALS3()
	{
		return read8(PCKT_FLT_GOALS3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG PCKT_FLT_GOALS2                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKT_FLT_GOALS2:
	 */
	struct PCKT_FLT_GOALS2
	{
		static const uint16_t __address = 67;
		
		/* Bits BROADCAST_ADDR_DUAL_SYNC2: */
		/* If dual sync mode enabled: dual SYNC word byte 2, Broadcast address.  */
		struct BROADCAST_ADDR_DUAL_SYNC2
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PCKT_FLT_GOALS2 */
	void setPCKT_FLT_GOALS2(uint8_t value)
	{
		write(PCKT_FLT_GOALS2::__address, value, 8);
	}
	
	/* Get register PCKT_FLT_GOALS2 */
	uint8_t getPCKT_FLT_GOALS2()
	{
		return read8(PCKT_FLT_GOALS2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG PCKT_FLT_GOALS1                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKT_FLT_GOALS1:
	 */
	struct PCKT_FLT_GOALS1
	{
		static const uint16_t __address = 68;
		
		/* Bits MULTICAST_ADDR_DUAL_SYNC1: */
		/* If dual sync mode enabled: dual SYNC word byte 1, Multicast address.  */
		struct MULTICAST_ADDR_DUAL_SYNC1
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PCKT_FLT_GOALS1 */
	void setPCKT_FLT_GOALS1(uint8_t value)
	{
		write(PCKT_FLT_GOALS1::__address, value, 8);
	}
	
	/* Get register PCKT_FLT_GOALS1 */
	uint8_t getPCKT_FLT_GOALS1()
	{
		return read8(PCKT_FLT_GOALS1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG PCKT_FLT_GOALS0                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PCKT_FLT_GOALS0:
	 */
	struct PCKT_FLT_GOALS0
	{
		static const uint16_t __address = 69;
		
		/* Bits TX_SOURCE_ADDR_DUAL_SYNC0: */
		/* If dual sync mode enabled: dual SYNC word byte 0, Tx packet source or RX packet destination field.  */
		struct TX_SOURCE_ADDR_DUAL_SYNC0
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PCKT_FLT_GOALS0 */
	void setPCKT_FLT_GOALS0(uint8_t value)
	{
		write(PCKT_FLT_GOALS0::__address, value, 8);
	}
	
	/* Get register PCKT_FLT_GOALS0 */
	uint8_t getPCKT_FLT_GOALS0()
	{
		return read8(PCKT_FLT_GOALS0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG TIMERS5                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG TIMERS5:
	 */
	struct TIMERS5
	{
		static const uint16_t __address = 70;
		
		/* Bits RX_TIMER_CNTR: */
		/* Counter for RX timer.  */
		struct RX_TIMER_CNTR
		{
			static const uint8_t dflt = 0b00000001; // 8'b1
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register TIMERS5 */
	void setTIMERS5(uint8_t value)
	{
		write(TIMERS5::__address, value, 8);
	}
	
	/* Get register TIMERS5 */
	uint8_t getTIMERS5()
	{
		return read8(TIMERS5::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG TIMERS4                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG TIMERS4:
	 */
	struct TIMERS4
	{
		static const uint16_t __address = 71;
		
		/* Bits RX_TIMER_PRESC: */
		/* Prescaler for RX timer.  */
		struct RX_TIMER_PRESC
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register TIMERS4 */
	void setTIMERS4(uint8_t value)
	{
		write(TIMERS4::__address, value, 8);
	}
	
	/* Get register TIMERS4 */
	uint8_t getTIMERS4()
	{
		return read8(TIMERS4::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG TIMERS3                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG TIMERS3:
	 */
	struct TIMERS3
	{
		static const uint16_t __address = 72;
		
		/* Bits LDC_TIMER_PRESC: */
		/* Prescaler for wake up timer.  */
		struct LDC_TIMER_PRESC
		{
			static const uint8_t dflt = 0b00000001; // 8'b1
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register TIMERS3 */
	void setTIMERS3(uint8_t value)
	{
		write(TIMERS3::__address, value, 8);
	}
	
	/* Get register TIMERS3 */
	uint8_t getTIMERS3()
	{
		return read8(TIMERS3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG TIMERS2                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG TIMERS2:
	 */
	struct TIMERS2
	{
		static const uint16_t __address = 73;
		
		/* Bits LDC_TIMER_CNTR: */
		/* Counter for wake up timer.  */
		struct LDC_TIMER_CNTR
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register TIMERS2 */
	void setTIMERS2(uint8_t value)
	{
		write(TIMERS2::__address, value, 8);
	}
	
	/* Get register TIMERS2 */
	uint8_t getTIMERS2()
	{
		return read8(TIMERS2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG TIMERS1                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG TIMERS1:
	 */
	struct TIMERS1
	{
		static const uint16_t __address = 74;
		
		/* Bits LDC_RELOAD_PRSC: */
		/* Prescaler value for reload operation of wake up timer.  */
		struct LDC_RELOAD_PRSC
		{
			static const uint8_t dflt = 0b00000001; // 8'b1
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register TIMERS1 */
	void setTIMERS1(uint8_t value)
	{
		write(TIMERS1::__address, value, 8);
	}
	
	/* Get register TIMERS1 */
	uint8_t getTIMERS1()
	{
		return read8(TIMERS1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG TIMERS0                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG TIMERS0:
	 */
	struct TIMERS0
	{
		static const uint16_t __address = 75;
		
		/* Bits LDC_RELOAD_CNTR: */
		/* Counter value for reload operation of wake up timer.  */
		struct LDC_RELOAD_CNTR
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register TIMERS0 */
	void setTIMERS0(uint8_t value)
	{
		write(TIMERS0::__address, value, 8);
	}
	
	/* Get register TIMERS0 */
	uint8_t getTIMERS0()
	{
		return read8(TIMERS0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG CSMA_CONF3                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG CSMA_CONF3:
	 */
	struct CSMA_CONF3
	{
		static const uint16_t __address = 76;
		
		/* Bits BU_CNTR_SEED: */
		/* MSB part of the seed for the random generator used to apply the CSMA algorithm.  */
		struct BU_CNTR_SEED
		{
			static const uint8_t dflt = 0b01001100; // 8'b1001100
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register CSMA_CONF3 */
	void setCSMA_CONF3(uint8_t value)
	{
		write(CSMA_CONF3::__address, value, 8);
	}
	
	/* Get register CSMA_CONF3 */
	uint8_t getCSMA_CONF3()
	{
		return read8(CSMA_CONF3::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG CSMA_CONF2                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG CSMA_CONF2:
	 */
	struct CSMA_CONF2
	{
		static const uint16_t __address = 77;
		
		/* Bits BU_CNTR_SEED: */
		/* LSB part of the seed for the random generator used to apply the CSMA algorithm.  */
		struct BU_CNTR_SEED
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register CSMA_CONF2 */
	void setCSMA_CONF2(uint8_t value)
	{
		write(CSMA_CONF2::__address, value, 8);
	}
	
	/* Get register CSMA_CONF2 */
	uint8_t getCSMA_CONF2()
	{
		return read8(CSMA_CONF2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG CSMA_CONF1                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG CSMA_CONF1:
	 */
	struct CSMA_CONF1
	{
		static const uint16_t __address = 78;
		
		/* Bits BU_PRSC: */
		/* Prescaler value for the back-off unit BU.  */
		struct BU_PRSC
		{
			static const uint8_t dflt = 0b000001; // 6'b1
			static const uint8_t mask = 0b11111100; // [2,3,4,5,6,7]
		};
		/* Bits CCA_PERIOD: */
		/* Multiplier for the Tcca timer.  */
		struct CCA_PERIOD
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000011; // [0,1]
		};
	};
	
	/* Set register CSMA_CONF1 */
	void setCSMA_CONF1(uint8_t value)
	{
		write(CSMA_CONF1::__address, value, 8);
	}
	
	/* Get register CSMA_CONF1 */
	uint8_t getCSMA_CONF1()
	{
		return read8(CSMA_CONF1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG CSMA_CONF0                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG CSMA_CONF0:
	 */
	struct CSMA_CONF0
	{
		static const uint16_t __address = 79;
		
		/* Bits CCA_LEN: */
		/* The number of time in which the listen operation is performed.  */
		struct CCA_LEN
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits NBACKOFF_MAX: */
		/* Max number of back-off cycles.  */
		struct NBACKOFF_MAX
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b00000111; // [0,1,2]
		};
	};
	
	/* Set register CSMA_CONF0 */
	void setCSMA_CONF0(uint8_t value)
	{
		write(CSMA_CONF0::__address, value, 8);
	}
	
	/* Get register CSMA_CONF0 */
	uint8_t getCSMA_CONF0()
	{
		return read8(CSMA_CONF0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG IRQ_MASK3                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG IRQ_MASK3:
	 */
	struct IRQ_MASK3
	{
		static const uint16_t __address = 80;
		
		/* Bits INT_MASK: */
		/* Enable the routing of the interrupt flag on the configured IRQ GPIO.  */
		struct INT_MASK
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register IRQ_MASK3 */
	void setIRQ_MASK3(uint8_t value)
	{
		write(IRQ_MASK3::__address, value, 8);
	}
	
	/* Get register IRQ_MASK3 */
	uint8_t getIRQ_MASK3()
	{
		return read8(IRQ_MASK3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG IRQ_MASK2                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG IRQ_MASK2:
	 */
	struct IRQ_MASK2
	{
		static const uint16_t __address = 81;
		
		/* Bits INT_MASK: */
		/* Enable the routing of the interrupt flag on the configured IRQ GPIO.  */
		struct INT_MASK
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register IRQ_MASK2 */
	void setIRQ_MASK2(uint8_t value)
	{
		write(IRQ_MASK2::__address, value, 8);
	}
	
	/* Get register IRQ_MASK2 */
	uint8_t getIRQ_MASK2()
	{
		return read8(IRQ_MASK2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG IRQ_MASK1                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG IRQ_MASK1:
	 */
	struct IRQ_MASK1
	{
		static const uint16_t __address = 82;
		
		/* Bits INT_MASK: */
		/* Enable the routing of the interrupt flag on the configured IRQ GPIO.  */
		struct INT_MASK
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register IRQ_MASK1 */
	void setIRQ_MASK1(uint8_t value)
	{
		write(IRQ_MASK1::__address, value, 8);
	}
	
	/* Get register IRQ_MASK1 */
	uint8_t getIRQ_MASK1()
	{
		return read8(IRQ_MASK1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG IRQ_MASK0                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG IRQ_MASK0:
	 */
	struct IRQ_MASK0
	{
		static const uint16_t __address = 83;
		
		/* Bits INT_MASK: */
		/* Enable the routing of the interrupt flag on the configured IRQ GPIO.  */
		struct INT_MASK
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register IRQ_MASK0 */
	void setIRQ_MASK0(uint8_t value)
	{
		write(IRQ_MASK0::__address, value, 8);
	}
	
	/* Get register IRQ_MASK0 */
	uint8_t getIRQ_MASK0()
	{
		return read8(IRQ_MASK0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG FAST_RX_TIMER                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG FAST_RX_TIMER:
	 */
	struct FAST_RX_TIMER
	{
		static const uint16_t __address = 84;
		
		/* Bits RSSI_SETTLING_LIMIT: */
		/* Sniff timer configuration.  */
		struct RSSI_SETTLING_LIMIT
		{
			static const uint8_t dflt = 0b00101000; // 8'b101000
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register FAST_RX_TIMER */
	void setFAST_RX_TIMER(uint8_t value)
	{
		write(FAST_RX_TIMER::__address, value, 8);
	}
	
	/* Get register FAST_RX_TIMER */
	uint8_t getFAST_RX_TIMER()
	{
		return read8(FAST_RX_TIMER::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PA_POWER8                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PA_POWER8:
	 */
	struct PA_POWER8
	{
		static const uint16_t __address = 90;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits PA_LEVEL8: */
		/* Output power level for 8th slot.  */
		struct PA_LEVEL8
		{
			static const uint8_t dflt = 0b0000001; // 7'b1
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register PA_POWER8 */
	void setPA_POWER8(uint8_t value)
	{
		write(PA_POWER8::__address, value, 8);
	}
	
	/* Get register PA_POWER8 */
	uint8_t getPA_POWER8()
	{
		return read8(PA_POWER8::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PA_POWER7                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PA_POWER7:
	 */
	struct PA_POWER7
	{
		static const uint16_t __address = 91;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits PA_LEVEL_7: */
		/* Output power level for 7th slot.  */
		struct PA_LEVEL_7
		{
			static const uint8_t dflt = 0b0001100; // 7'b1100
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register PA_POWER7 */
	void setPA_POWER7(uint8_t value)
	{
		write(PA_POWER7::__address, value, 8);
	}
	
	/* Get register PA_POWER7 */
	uint8_t getPA_POWER7()
	{
		return read8(PA_POWER7::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PA_POWER6                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PA_POWER6:
	 */
	struct PA_POWER6
	{
		static const uint16_t __address = 92;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits PA_LEVEL_6: */
		/* Output power level for 6th slot.  */
		struct PA_LEVEL_6
		{
			static const uint8_t dflt = 0b0011000; // 7'b11000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register PA_POWER6 */
	void setPA_POWER6(uint8_t value)
	{
		write(PA_POWER6::__address, value, 8);
	}
	
	/* Get register PA_POWER6 */
	uint8_t getPA_POWER6()
	{
		return read8(PA_POWER6::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PA_POWER5                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PA_POWER5:
	 */
	struct PA_POWER5
	{
		static const uint16_t __address = 93;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits PA_LEVEL_5: */
		/* Output power level for 5th slot.  */
		struct PA_LEVEL_5
		{
			static const uint8_t dflt = 0b0100100; // 7'b100100
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register PA_POWER5 */
	void setPA_POWER5(uint8_t value)
	{
		write(PA_POWER5::__address, value, 8);
	}
	
	/* Get register PA_POWER5 */
	uint8_t getPA_POWER5()
	{
		return read8(PA_POWER5::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PA_POWER4                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PA_POWER4:
	 */
	struct PA_POWER4
	{
		static const uint16_t __address = 94;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits PA_LEVEL_4: */
		/* Output power level for 4th slot.  */
		struct PA_LEVEL_4
		{
			static const uint8_t dflt = 0b0110000; // 7'b110000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register PA_POWER4 */
	void setPA_POWER4(uint8_t value)
	{
		write(PA_POWER4::__address, value, 8);
	}
	
	/* Get register PA_POWER4 */
	uint8_t getPA_POWER4()
	{
		return read8(PA_POWER4::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PA_POWER3                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PA_POWER3:
	 */
	struct PA_POWER3
	{
		static const uint16_t __address = 95;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits PA_LEVEL_3: */
		/* Output power level for 3rd slot.  */
		struct PA_LEVEL_3
		{
			static const uint8_t dflt = 0b1001000; // 7'b1001000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register PA_POWER3 */
	void setPA_POWER3(uint8_t value)
	{
		write(PA_POWER3::__address, value, 8);
	}
	
	/* Get register PA_POWER3 */
	uint8_t getPA_POWER3()
	{
		return read8(PA_POWER3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PA_POWER2                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PA_POWER2:
	 */
	struct PA_POWER2
	{
		static const uint16_t __address = 96;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits PA_LEVEL_2: */
		/* Output power level for 2nd slot.  */
		struct PA_LEVEL_2
		{
			static const uint8_t dflt = 0b1100000; // 7'b1100000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register PA_POWER2 */
	void setPA_POWER2(uint8_t value)
	{
		write(PA_POWER2::__address, value, 8);
	}
	
	/* Get register PA_POWER2 */
	uint8_t getPA_POWER2()
	{
		return read8(PA_POWER2::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PA_POWER1                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PA_POWER1:
	 */
	struct PA_POWER1
	{
		static const uint16_t __address = 97;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits PA_LEVEL_1: */
		/* Output power level for 1st slot.  */
		struct PA_LEVEL_1
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register PA_POWER1 */
	void setPA_POWER1(uint8_t value)
	{
		write(PA_POWER1::__address, value, 8);
	}
	
	/* Get register PA_POWER1 */
	uint8_t getPA_POWER1()
	{
		return read8(PA_POWER1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG PA_POWER0                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG PA_POWER0:
	 */
	struct PA_POWER0
	{
		static const uint16_t __address = 98;
		
		/* Bits DIG_SMOOTH_EN: */
		struct DIG_SMOOTH_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t ENABLE = 0b1; // 1: enable the generation of the internal signal TX_DATA which is the input of the FIR. Needed when FIR_EN=1.
		};
		/* Bits PA_MAXDBM: */
		struct PA_MAXDBM
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t MAX_POWER = 0b1; // 1: configure the PA to send maximum output power.
		};
		/* Bits PA_RAMP_EN: */
		struct PA_RAMP_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t ENABLE = 0b1; // 1: enable the power ramping §
		};
		/* Bits PA_RAMP_STEP_LEN: */
		/* Set the step width (unit: 1/8 of bit period).  */
		struct PA_RAMP_STEP_LEN
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00011000; // [3,4]
		};
		/* Bits PA_LEVEL_MAX_IDX: */
		/* Final level for power ramping or selected output power index.  */
		struct PA_LEVEL_MAX_IDX
		{
			static const uint8_t dflt = 0b111; // 3'b111
			static const uint8_t mask = 0b00000111; // [0,1,2]
		};
	};
	
	/* Set register PA_POWER0 */
	void setPA_POWER0(uint8_t value)
	{
		write(PA_POWER0::__address, value, 8);
	}
	
	/* Get register PA_POWER0 */
	uint8_t getPA_POWER0()
	{
		return read8(PA_POWER0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG PA_CONFIG1                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PA_CONFIG1:
	 */
	struct PA_CONFIG1
	{
		static const uint16_t __address = 99;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits FIR_CFG: */
		/* FIR configuration:  */
		struct FIR_CFG
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00001100; // [2,3]
			static const uint8_t filtering = 0b00; // 
			static const uint8_t ramping = 0b01; // 
			static const uint8_t switching = 0b10; // (see Section 5.4.2.1)
		};
		/* Bits FIR_EN: */
		struct FIR_EN
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t ENABLE = 0b1; // enable FIR (see  Section 5.4.2.1)
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register PA_CONFIG1 */
	void setPA_CONFIG1(uint8_t value)
	{
		write(PA_CONFIG1::__address, value, 8);
	}
	
	/* Get register PA_CONFIG1 */
	uint8_t getPA_CONFIG1()
	{
		return read8(PA_CONFIG1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG PA_CONFIG0                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PA_CONFIG0:
	 */
	struct PA_CONFIG0
	{
		static const uint16_t __address = 100;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b100010; // 6'b100010
			static const uint8_t mask = 0b11111100; // [2,3,4,5,6,7]
		};
		/* Bits PA_FC: */
		/* PA Bessel filter bandwidth:  */
		struct PA_FC
		{
			static const uint8_t dflt = 0b10; // 2'b10
			static const uint8_t mask = 0b00000011; // [0,1]
			static const uint8_t BW_12_5 = 0b00; // 12.5kHz (data rate 16.2kbps)
			static const uint8_t BW_25 = 0b01; // 25kHz (data rate 32kbps)
			static const uint8_t BW_50 = 0b10; // 50kHz (data rate 62.5kbps)
			static const uint8_t BW_100 = 0b11; // 100kHz (data rate 125kbps) see ection 5.4.2.1 §
		};
	};
	
	/* Set register PA_CONFIG0 */
	void setPA_CONFIG0(uint8_t value)
	{
		write(PA_CONFIG0::__address, value, 8);
	}
	
	/* Get register PA_CONFIG0 */
	uint8_t getPA_CONFIG0()
	{
		return read8(PA_CONFIG0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG SYNTH_CONFIG2                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SYNTH_CONFIG2:
	 */
	struct SYNTH_CONFIG2
	{
		static const uint16_t __address = 101;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b11010; // 5'b11010
			static const uint8_t mask = 0b11111000; // [3,4,5,6,7]
		};
		/* Bits PLL_PFD_SPLIT_EN: */
		/* Enables increased DN current pulses to improve linearization of CP/PFD (see Table 34).  */
		struct PLL_PFD_SPLIT_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000011; // [0,1]
		};
	};
	
	/* Set register SYNTH_CONFIG2 */
	void setSYNTH_CONFIG2(uint8_t value)
	{
		write(SYNTH_CONFIG2::__address, value, 8);
	}
	
	/* Get register SYNTH_CONFIG2 */
	uint8_t getSYNTH_CONFIG2()
	{
		return read8(SYNTH_CONFIG2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG VCO_CONFIG                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG VCO_CONFIG:
	 */
	struct VCO_CONFIG
	{
		static const uint16_t __address = 104;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits VCO_CALAMP_EXT_SEL: */
		struct VCO_CALAMP_EXT_SEL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t SKIP = 0b1; // 1 → VCO amplitude calibration will be skipped (external amplitude word forced on VCO).
		};
		/* Bits VCO_CALFREQ_EXT_SEL: */
		struct VCO_CALFREQ_EXT_SEL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t SKIP = 0b1; // 1 → VCO frequency calibration will be skipped (external amplitude word forced on VCO).
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b0011; // 4'b11
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register VCO_CONFIG */
	void setVCO_CONFIG(uint8_t value)
	{
		write(VCO_CONFIG::__address, value, 8);
	}
	
	/* Get register VCO_CONFIG */
	uint8_t getVCO_CONFIG()
	{
		return read8(VCO_CONFIG::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                        REG VCO_CALIBR_IN2                                         *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG VCO_CALIBR_IN2:
	 */
	struct VCO_CALIBR_IN2
	{
		static const uint16_t __address = 105;
		
		/* Bits VCO_CALAMP_TX: */
		/* VCO magnitude calibration word (binary coding to be internally converted in thermometric code) used in TX.  */
		struct VCO_CALAMP_TX
		{
			static const uint8_t dflt = 0b1000; // 4'b1000
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits VCO_CALAMP_RX: */
		/* VCO magnitude calibration word (binary coding to be internally converted in thermometric code) used in RX.  */
		struct VCO_CALAMP_RX
		{
			static const uint8_t dflt = 0b1000; // 4'b1000
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register VCO_CALIBR_IN2 */
	void setVCO_CALIBR_IN2(uint8_t value)
	{
		write(VCO_CALIBR_IN2::__address, value, 8);
	}
	
	/* Get register VCO_CALIBR_IN2 */
	uint8_t getVCO_CALIBR_IN2()
	{
		return read8(VCO_CALIBR_IN2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                        REG VCO_CALIBR_IN1                                         *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG VCO_CALIBR_IN1:
	 */
	struct VCO_CALIBR_IN1
	{
		static const uint16_t __address = 106;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits VCO_CALFREQ_TX: */
		/* VCO Cbank frequency calibration word to be used in TX.  */
		struct VCO_CALFREQ_TX
		{
			static const uint8_t dflt = 0b1000000; // 7'b1000000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register VCO_CALIBR_IN1 */
	void setVCO_CALIBR_IN1(uint8_t value)
	{
		write(VCO_CALIBR_IN1::__address, value, 8);
	}
	
	/* Get register VCO_CALIBR_IN1 */
	uint8_t getVCO_CALIBR_IN1()
	{
		return read8(VCO_CALIBR_IN1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                        REG VCO_CALIBR_IN0                                         *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG VCO_CALIBR_IN0:
	 */
	struct VCO_CALIBR_IN0
	{
		static const uint16_t __address = 107;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits VCO_CALFREQ_RX: */
		/* VCO Cbank frequency calibration word to be used in RX.  */
		struct VCO_CALFREQ_RX
		{
			static const uint8_t dflt = 0b1000000; // 7'b1000000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register VCO_CALIBR_IN0 */
	void setVCO_CALIBR_IN0(uint8_t value)
	{
		write(VCO_CALIBR_IN0::__address, value, 8);
	}
	
	/* Get register VCO_CALIBR_IN0 */
	uint8_t getVCO_CALIBR_IN0()
	{
		return read8(VCO_CALIBR_IN0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG XO_RCO_CONF1                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG XO_RCO_CONF1:
	 */
	struct XO_RCO_CONF1
	{
		static const uint16_t __address = 108;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b010; // 3'b10
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits PD_CLKDIV: */
		struct PD_CLKDIV
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
			static const uint8_t DISABLE = 0b1; // 1: disable both dividers of digital clock (and reference clock for the SMPS) and IF-ADC clock.
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b0101; // 4'b101
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register XO_RCO_CONF1 */
	void setXO_RCO_CONF1(uint8_t value)
	{
		write(XO_RCO_CONF1::__address, value, 8);
	}
	
	/* Get register XO_RCO_CONF1 */
	uint8_t getXO_RCO_CONF1()
	{
		return read8(XO_RCO_CONF1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG XO_RCO_CONF0                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG XO_RCO_CONF0:
	 */
	struct XO_RCO_CONF0
	{
		static const uint16_t __address = 109;
		
		/* Bits EXT_REF: */
		struct EXT_REF
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t FROM_XO = 0b0; // reference signal from XO circuit
			static const uint8_t FROM_XIN = 0b1; // reference signal from XIN pin.
		};
		/* Bits GM_CONF: */
		/* Set the driver gm of the XO at start up.  */
		struct GM_CONF
		{
			static const uint8_t dflt = 0b11; // 2'b11
			static const uint8_t mask = 0b00110000; // [4,5]
		};
		/* Bits REFDIV: */
		struct REFDIV
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
			static const uint8_t ENABLE = 0b1; // 1: enable the the reference clock divider.
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits EXT_RCO_OSC: */
		/* 1: the 34.7 kHz signal must be supplied from any GPIO.  */
		struct EXT_RCO_OSC
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits RCO_CALIBRATION: */
		struct RCO_CALIBRATION
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t ENABLE = 0b1; // 1: enable the automatic RCO calibration.
		};
	};
	
	/* Set register XO_RCO_CONF0 */
	void setXO_RCO_CONF0(uint8_t value)
	{
		write(XO_RCO_CONF0::__address, value, 8);
	}
	
	/* Get register XO_RCO_CONF0 */
	uint8_t getXO_RCO_CONF0()
	{
		return read8(XO_RCO_CONF0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG RCO_CALIBR_CONF3                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG RCO_CALIBR_CONF3:
	 */
	struct RCO_CALIBR_CONF3
	{
		static const uint16_t __address = 110;
		
		/* Bits RWT_IN: */
		/* RWT word value for the RCO.  */
		struct RWT_IN
		{
			static const uint8_t dflt = 0b0111; // 4'b111
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits RFB_IN: */
		/* MSB part of RFB word value for RCO.  */
		struct RFB_IN
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register RCO_CALIBR_CONF3 */
	void setRCO_CALIBR_CONF3(uint8_t value)
	{
		write(RCO_CALIBR_CONF3::__address, value, 8);
	}
	
	/* Get register RCO_CALIBR_CONF3 */
	uint8_t getRCO_CALIBR_CONF3()
	{
		return read8(RCO_CALIBR_CONF3::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG RCO_CALIBR_CONF2                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG RCO_CALIBR_CONF2:
	 */
	struct RCO_CALIBR_CONF2
	{
		static const uint16_t __address = 111;
		
		/* Bits RFB_IN: */
		/* LSB part of RFB word value for RCO.  */
		struct RFB_IN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b1001101; // 7'b1001101
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register RCO_CALIBR_CONF2 */
	void setRCO_CALIBR_CONF2(uint8_t value)
	{
		write(RCO_CALIBR_CONF2::__address, value, 8);
	}
	
	/* Get register RCO_CALIBR_CONF2 */
	uint8_t getRCO_CALIBR_CONF2()
	{
		return read8(RCO_CALIBR_CONF2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG PM_CONF4                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PM_CONF4:
	 */
	struct PM_CONF4
	{
		static const uint16_t __address = 117;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits EXT_SMPS: */
		struct EXT_SMPS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
			static const uint8_t DISABLE = 0b1; // 1: disable the internal SMPS.
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b10111; // 5'b10111
			static const uint8_t mask = 0b00011111; // [0,1,2,3,4]
		};
	};
	
	/* Set register PM_CONF4 */
	void setPM_CONF4(uint8_t value)
	{
		write(PM_CONF4::__address, value, 8);
	}
	
	/* Get register PM_CONF4 */
	uint8_t getPM_CONF4()
	{
		return read8(PM_CONF4::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG PM_CONF3                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PM_CONF3:
	 */
	struct PM_CONF3
	{
		static const uint16_t __address = 118;
		
		/* Bits KRM_EN: */
		struct KRM_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
			static const uint8_t DIV_BY_4 = 0b0; // divider by 4 enabled (SMPS' switching frequency is FSW=Fdig/4)
			static const uint8_t RATE_MULT = 0b1; // rate multiplier enabled (SMPS' switching frequency is FSW=KRM*Fdig/(2^15).
		};
		/* Bits KRM: */
		/* Sets the divider ratio (MSB) of the rate multiplier (default: Fsw=Fdig/4)  */
		struct KRM
		{
			static const uint8_t dflt = 0b0100000; // 7'b100000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register PM_CONF3 */
	void setPM_CONF3(uint8_t value)
	{
		write(PM_CONF3::__address, value, 8);
	}
	
	/* Get register PM_CONF3 */
	uint8_t getPM_CONF3()
	{
		return read8(PM_CONF3::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG PM_CONF2                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PM_CONF2:
	 */
	struct PM_CONF2
	{
		static const uint16_t __address = 119;
		
		/* Bits KRM: */
		/* Sets the divider ratio (LSB) of the rate multiplier (default: Fsw=Fdig/4)  */
		struct KRM
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register PM_CONF2 */
	void setPM_CONF2(uint8_t value)
	{
		write(PM_CONF2::__address, value, 8);
	}
	
	/* Get register PM_CONF2 */
	uint8_t getPM_CONF2()
	{
		return read8(PM_CONF2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG PM_CONF1                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PM_CONF1:
	 */
	struct PM_CONF1
	{
		static const uint16_t __address = 120;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits BATTERY_LVL_EN: */
		struct BATTERY_LVL_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
			static const uint8_t ENABLE = 0b1; // 1: enable battery level detector circuit.
		};
		/* Bits SET_BLD_TH: */
		/* Set the BLD threshold:  */
		struct SET_BLD_TH
		{
			static const uint8_t dflt = 0b11; // 2'b11
			static const uint8_t mask = 0b00110000; // [4,5]
			static const uint8_t THRESH_2_7 = 0b00; // 2.7V
			static const uint8_t THRESH_2_5 = 0b01; // 2.5V
			static const uint8_t THRESH_2_3 = 0b10; // 2.3V
			static const uint8_t THRESH_2_1 = 0b11; // 2.1V
		};
		/* Bits SMPS_LVL_MODE: */
		/*
		 * - 0: SMPS output level will depend upon the value written in the PM_CONFIG0 register (SET_SMPS_LEVEL field) both in RX and TX state.
		 * - 1: SMPS output level will depend upon the value in PM_CONFIG register just in TX state, while in RX state it will be fixed to 1.4 V
		 */
		struct SMPS_LVL_MODE
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits BYPASS_LDO: */
		/* Set to 0 (default value)  */
		struct BYPASS_LDO
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b01; // 2'b1
			static const uint8_t mask = 0b00000011; // [0,1]
		};
	};
	
	/* Set register PM_CONF1 */
	void setPM_CONF1(uint8_t value)
	{
		write(PM_CONF1::__address, value, 8);
	}
	
	/* Get register PM_CONF1 */
	uint8_t getPM_CONF1()
	{
		return read8(PM_CONF1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG PM_CONF0                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PM_CONF0:
	 */
	struct PM_CONF0
	{
		static const uint16_t __address = 121;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits SET_SMPS_LVL: */
		/* SMPS output voltage:  */
		struct SET_SMPS_LVL
		{
			static const uint8_t dflt = 0b100; // 3'b100
			static const uint8_t mask = 0b01110000; // [4,5,6]
			static const uint8_t OUT_1_1 = 0b00; // 1.1 V
			static const uint8_t OUT_1_2 = 0b01; // 1.2 V
			static const uint8_t OUT_1_3 = 0b10; // 1.3 V
			static const uint8_t OUT_1_4 = 0b11; // 1.4 V
			static const uint8_t OUT_1_5 = 0b100; // 1.5 V
			static const uint8_t OUT_1_6 = 0b101; // 1.6 V
			static const uint8_t OUT_1_7 = 0b110; // 1.7 V
			static const uint8_t OUT_1_8 = 0b111; // 1.8 V
		};
		/* Bits reserved_1: */
		struct reserved_1
		{
			static const uint8_t dflt = 0b001; // 3'b1
			static const uint8_t mask = 0b00001110; // [1,2,3]
		};
		/* Bits SLEEP_MODE_SEL: */
		struct SLEEP_MODE_SEL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t WITHOUT_FIFO_RET = 0b0; // SLEEP without FIFO retention (SLEEP A)
			static const uint8_t WITH_FIFO_RET = 0b1; // SLEEP with FIFO retention (SLEEP B).
		};
	};
	
	/* Set register PM_CONF0 */
	void setPM_CONF0(uint8_t value)
	{
		write(PM_CONF0::__address, value, 8);
	}
	
	/* Get register PM_CONF0 */
	uint8_t getPM_CONF0()
	{
		return read8(PM_CONF0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG MC_STATE1                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG MC_STATE1:
	 */
	struct MC_STATE1
	{
		static const uint16_t __address = 141;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b010; // 3'b10
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits RCO_CAL_OK: */
		/* RCO calibration successfully terminated.  */
		struct RCO_CAL_OK
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits ANT_SEL: */
		/* Currently selected antenna.  */
		struct ANT_SEL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits TX_FIFO_FULL: */
		struct TX_FIFO_FULL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
			static const uint8_t FULL = 0b1; // 1: TX FIFO is full.
		};
		/* Bits RX_FIFO_EMPTY: */
		struct RX_FIFO_EMPTY
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00000010; // [1]
			static const uint8_t EMPTY = 0b0; // 1: RX FIFO is empty.
		};
		/* Bits ERROR_LOCK: */
		struct ERROR_LOCK
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t ERROR = 0b1; // 1: RCO calibrator error.
		};
	};
	
	/* Set register MC_STATE1 */
	void setMC_STATE1(uint8_t value)
	{
		write(MC_STATE1::__address, value, 8);
	}
	
	/* Get register MC_STATE1 */
	uint8_t getMC_STATE1()
	{
		return read8(MC_STATE1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG MC_STATE0                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG MC_STATE0:
	 */
	struct MC_STATE0
	{
		static const uint16_t __address = 142;
		
		/* Bits STATE: */
		/* Current state.  */
		struct STATE
		{
			static const uint8_t dflt = 0b0000011; // 7'b11
			static const uint8_t mask = 0b11111110; // [1,2,3,4,5,6,7]
		};
		/* Bits XO_ON: */
		struct XO_ON
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b00000001; // [0]
			static const uint8_t OPERATING = 0b1; // 1: XO is operating.
		};
	};
	
	/* Set register MC_STATE0 */
	void setMC_STATE0(uint8_t value)
	{
		write(MC_STATE0::__address, value, 8);
	}
	
	/* Get register MC_STATE0 */
	uint8_t getMC_STATE0()
	{
		return read8(MC_STATE0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                        REG TX_FIFO_STATUS                                         *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG TX_FIFO_STATUS:
	 */
	struct TX_FIFO_STATUS
	{
		static const uint16_t __address = 143;
		
		/* Bits NELEM_TXFIFO: */
		/* Number of elements in TX FIFO.  */
		struct NELEM_TXFIFO
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register TX_FIFO_STATUS */
	void setTX_FIFO_STATUS(uint8_t value)
	{
		write(TX_FIFO_STATUS::__address, value, 8);
	}
	
	/* Get register TX_FIFO_STATUS */
	uint8_t getTX_FIFO_STATUS()
	{
		return read8(TX_FIFO_STATUS::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                        REG RX_FIFO_STATUS                                         *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG RX_FIFO_STATUS:
	 */
	struct RX_FIFO_STATUS
	{
		static const uint16_t __address = 144;
		
		/* Bits NELEM_RXFIFO: */
		/* Number of elements in RX FIFO.  */
		struct NELEM_RXFIFO
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register RX_FIFO_STATUS */
	void setRX_FIFO_STATUS(uint8_t value)
	{
		write(RX_FIFO_STATUS::__address, value, 8);
	}
	
	/* Get register RX_FIFO_STATUS */
	uint8_t getRX_FIFO_STATUS()
	{
		return read8(RX_FIFO_STATUS::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG RCO_CALIBR_OUT4                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG RCO_CALIBR_OUT4:
	 */
	struct RCO_CALIBR_OUT4
	{
		static const uint16_t __address = 148;
		
		/* Bits RWT_OUT: */
		/* RWT word from internal RCO calibrator.  */
		struct RWT_OUT
		{
			static const uint8_t dflt = 0b0111; // 4'b111
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits RFB_OUT: */
		/* RFB word (MSB) from internal RCO calibrator.  */
		struct RFB_OUT
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register RCO_CALIBR_OUT4 */
	void setRCO_CALIBR_OUT4(uint8_t value)
	{
		write(RCO_CALIBR_OUT4::__address, value, 8);
	}
	
	/* Get register RCO_CALIBR_OUT4 */
	uint8_t getRCO_CALIBR_OUT4()
	{
		return read8(RCO_CALIBR_OUT4::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG RCO_CALIBR_OUT3                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG RCO_CALIBR_OUT3:
	 */
	struct RCO_CALIBR_OUT3
	{
		static const uint16_t __address = 149;
		
		/* Bits RFB_OUT: */
		/* RF word (LSB) from internal RCO calibrator.  */
		struct RFB_OUT
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register RCO_CALIBR_OUT3 */
	void setRCO_CALIBR_OUT3(uint8_t value)
	{
		write(RCO_CALIBR_OUT3::__address, value, 8);
	}
	
	/* Get register RCO_CALIBR_OUT3 */
	uint8_t getRCO_CALIBR_OUT3()
	{
		return read8(RCO_CALIBR_OUT3::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG VCO_CALIBR_OUT1                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG VCO_CALIBR_OUT1:
	 */
	struct VCO_CALIBR_OUT1
	{
		static const uint16_t __address = 153;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b11110000; // [4,5,6,7]
		};
		/* Bits VCO_CAL_AMP_OUT: */
		/* VCO magnitude calibration output word (binary coding internally converted from thermometric coding).  */
		struct VCO_CAL_AMP_OUT
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register VCO_CALIBR_OUT1 */
	void setVCO_CALIBR_OUT1(uint8_t value)
	{
		write(VCO_CALIBR_OUT1::__address, value, 8);
	}
	
	/* Get register VCO_CALIBR_OUT1 */
	uint8_t getVCO_CALIBR_OUT1()
	{
		return read8(VCO_CALIBR_OUT1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                        REG VCO_CALIBROUT0                                         *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG VCO_CALIBROUT0:
	 */
	struct VCO_CALIBROUT0
	{
		static const uint16_t __address = 154;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits VCO_CAL_FREQ_OUT: */
		/* VCO Cbank frequency calibration output word (binary coding internally converted from thermometric coding).  */
		struct VCO_CAL_FREQ_OUT
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register VCO_CALIBROUT0 */
	void setVCO_CALIBROUT0(uint8_t value)
	{
		write(VCO_CALIBROUT0::__address, value, 8);
	}
	
	/* Get register VCO_CALIBROUT0 */
	uint8_t getVCO_CALIBROUT0()
	{
		return read8(VCO_CALIBROUT0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG TX_PCKT_INFO                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG TX_PCKT_INFO:
	 */
	struct TX_PCKT_INFO
	{
		static const uint16_t __address = 156;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits TX_SEQ_NUM: */
		/* Current TX packet sequence number.  */
		struct TX_SEQ_NUM
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00110000; // [4,5]
		};
		/* Bits N_RETX: */
		/* Number of re-transmissions done for the last TX packet.  */
		struct N_RETX
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register TX_PCKT_INFO */
	void setTX_PCKT_INFO(uint8_t value)
	{
		write(TX_PCKT_INFO::__address, value, 8);
	}
	
	/* Get register TX_PCKT_INFO */
	uint8_t getTX_PCKT_INFO()
	{
		return read8(TX_PCKT_INFO::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG RX_PCKT_INFO                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG RX_PCKT_INFO:
	 */
	struct RX_PCKT_INFO
	{
		static const uint16_t __address = 157;
		
		/* Bits reserved_0: */
		struct reserved_0
		{
			static const uint8_t dflt = 0b00000; // 5'b0
			static const uint8_t mask = 0b11111000; // [3,4,5,6,7]
		};
		/* Bits NACK_RX: */
		/* NACK field of the received packet.  */
		struct NACK_RX
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits RX_SEQ_NUM: */
		/* Sequence number of the received packet.  */
		struct RX_SEQ_NUM
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000011; // [0,1]
		};
	};
	
	/* Set register RX_PCKT_INFO */
	void setRX_PCKT_INFO(uint8_t value)
	{
		write(RX_PCKT_INFO::__address, value, 8);
	}
	
	/* Get register RX_PCKT_INFO */
	uint8_t getRX_PCKT_INFO()
	{
		return read8(RX_PCKT_INFO::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG AFC_CORR                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG AFC_CORR:
	 */
	struct AFC_CORR
	{
		static const uint16_t __address = 158;
		
		/* Bits AFC_CORR: */
		/* AFC corrected value.  */
		struct AFC_CORR_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register AFC_CORR */
	void setAFC_CORR(uint8_t value)
	{
		write(AFC_CORR::__address, value, 8);
	}
	
	/* Get register AFC_CORR */
	uint8_t getAFC_CORR()
	{
		return read8(AFC_CORR::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG LINK_QUALIF2                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG LINK_QUALIF2:
	 */
	struct LINK_QUALIF2
	{
		static const uint16_t __address = 159;
		
		/* Bits PQI: */
		/* PQI value of the received packet.  */
		struct PQI
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register LINK_QUALIF2 */
	void setLINK_QUALIF2(uint8_t value)
	{
		write(LINK_QUALIF2::__address, value, 8);
	}
	
	/* Get register LINK_QUALIF2 */
	uint8_t getLINK_QUALIF2()
	{
		return read8(LINK_QUALIF2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG LINK_QUALIF1                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG LINK_QUALIF1:
	 */
	struct LINK_QUALIF1
	{
		static const uint16_t __address = 160;
		
		/* Bits CS: */
		/* Carrier Sense indication.  */
		struct CS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits SQI: */
		/* SQI value of the received packet.  */
		struct SQI
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register LINK_QUALIF1 */
	void setLINK_QUALIF1(uint8_t value)
	{
		write(LINK_QUALIF1::__address, value, 8);
	}
	
	/* Get register LINK_QUALIF1 */
	uint8_t getLINK_QUALIF1()
	{
		return read8(LINK_QUALIF1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG RSSI_LEVEL                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG RSSI_LEVEL:
	 */
	struct RSSI_LEVEL
	{
		static const uint16_t __address = 162;
		
		/* Bits RSSI_LEVEL: */
		/* RSSI level captured at the end of the SYNC word detection of the received packet.  */
		struct RSSI_LEVEL_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register RSSI_LEVEL */
	void setRSSI_LEVEL(uint8_t value)
	{
		write(RSSI_LEVEL::__address, value, 8);
	}
	
	/* Get register RSSI_LEVEL */
	uint8_t getRSSI_LEVEL()
	{
		return read8(RSSI_LEVEL::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG RX_PCKT_LEN1                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG RX_PCKT_LEN1:
	 * Length of the packet received.
	 */
	struct RX_PCKT_LEN1
	{
		static const uint16_t __address = 164;
		
		/* Bits RX_PCKT_LEN1: */
		struct RX_PCKT_LEN1_
		{
			/* MODE - */
			static const uint16_t dflt = 0b0000000000000000; // 16'h0
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register RX_PCKT_LEN1 */
	void setRX_PCKT_LEN1(uint16_t value)
	{
		write(RX_PCKT_LEN1::__address, value, 16);
	}
	
	/* Get register RX_PCKT_LEN1 */
	uint16_t getRX_PCKT_LEN1()
	{
		return read16(RX_PCKT_LEN1::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG CRC_FIELD3                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG CRC_FIELD3:
	 */
	struct CRC_FIELD3
	{
		static const uint16_t __address = 166;
		
		/* Bits CRC_FIELD3: */
		/* CRC field 3 of the received packet.  */
		struct CRC_FIELD3_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register CRC_FIELD3 */
	void setCRC_FIELD3(uint8_t value)
	{
		write(CRC_FIELD3::__address, value, 8);
	}
	
	/* Get register CRC_FIELD3 */
	uint8_t getCRC_FIELD3()
	{
		return read8(CRC_FIELD3::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG CRC_FIELD2                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG CRC_FIELD2:
	 */
	struct CRC_FIELD2
	{
		static const uint16_t __address = 167;
		
		/* Bits CRC_FIELD2: */
		/* CRC field 2 of the received packet.  */
		struct CRC_FIELD2_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register CRC_FIELD2 */
	void setCRC_FIELD2(uint8_t value)
	{
		write(CRC_FIELD2::__address, value, 8);
	}
	
	/* Get register CRC_FIELD2 */
	uint8_t getCRC_FIELD2()
	{
		return read8(CRC_FIELD2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG CRC_FIELD1                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG CRC_FIELD1:
	 */
	struct CRC_FIELD1
	{
		static const uint16_t __address = 168;
		
		/* Bits CRC_FIELD1: */
		/* CRC field 1 of the received packet.  */
		struct CRC_FIELD1_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register CRC_FIELD1 */
	void setCRC_FIELD1(uint8_t value)
	{
		write(CRC_FIELD1::__address, value, 8);
	}
	
	/* Get register CRC_FIELD1 */
	uint8_t getCRC_FIELD1()
	{
		return read8(CRC_FIELD1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG CRC_FIELD0                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG CRC_FIELD0:
	 */
	struct CRC_FIELD0
	{
		static const uint16_t __address = 169;
		
		/* Bits CRC_FIELD0: */
		/* CRC field 0 of the received packet.  */
		struct CRC_FIELD0_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register CRC_FIELD0 */
	void setCRC_FIELD0(uint8_t value)
	{
		write(CRC_FIELD0::__address, value, 8);
	}
	
	/* Get register CRC_FIELD0 */
	uint8_t getCRC_FIELD0()
	{
		return read8(CRC_FIELD0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG RX_ADDRE_FIELD1                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG RX_ADDRE_FIELD1:
	 */
	struct RX_ADDRE_FIELD1
	{
		static const uint16_t __address = 170;
		
		/* Bits RX_ADDRE_FIELD1: */
		/* Source address field of the received packet.  */
		struct RX_ADDRE_FIELD1_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register RX_ADDRE_FIELD1 */
	void setRX_ADDRE_FIELD1(uint8_t value)
	{
		write(RX_ADDRE_FIELD1::__address, value, 8);
	}
	
	/* Get register RX_ADDRE_FIELD1 */
	uint8_t getRX_ADDRE_FIELD1()
	{
		return read8(RX_ADDRE_FIELD1::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG RX_ADDRE_FIELD0                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG RX_ADDRE_FIELD0:
	 */
	struct RX_ADDRE_FIELD0
	{
		static const uint16_t __address = 171;
		
		/* Bits RX_ADDRE_FIELD0: */
		/* Destination address field of the received packet.  */
		struct RX_ADDRE_FIELD0_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register RX_ADDRE_FIELD0 */
	void setRX_ADDRE_FIELD0(uint8_t value)
	{
		write(RX_ADDRE_FIELD0::__address, value, 8);
	}
	
	/* Get register RX_ADDRE_FIELD0 */
	uint8_t getRX_ADDRE_FIELD0()
	{
		return read8(RX_ADDRE_FIELD0::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                        REG RSSI_LEVEL_RUN                                         *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG RSSI_LEVEL_RUN:
	 * RSSI level of the received packet, which supports continuous fast SPI reading.
	 */
	struct RSSI_LEVEL_RUN
	{
		static const uint16_t __address = 239;
		
		/* Bits RSSI_LEVEL_RUN: */
		struct RSSI_LEVEL_RUN_
		{
			static const uint8_t dflt = 0b00000000; // 8'b0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register RSSI_LEVEL_RUN */
	void setRSSI_LEVEL_RUN(uint8_t value)
	{
		write(RSSI_LEVEL_RUN::__address, value, 8);
	}
	
	/* Get register RSSI_LEVEL_RUN */
	uint8_t getRSSI_LEVEL_RUN()
	{
		return read8(RSSI_LEVEL_RUN::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG DEVICE_INFO1                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG DEVICE_INFO1:
	 * S2-LP part number
	 */
	struct DEVICE_INFO1
	{
		static const uint16_t __address = 240;
		
		/* Bits DEVICE_INFO1: */
		struct DEVICE_INFO1_
		{
			/* MODE - */
			static const uint8_t dflt = 0b00000011; // 8'h3
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register DEVICE_INFO1 */
	void setDEVICE_INFO1(uint8_t value)
	{
		write(DEVICE_INFO1::__address, value, 8);
	}
	
	/* Get register DEVICE_INFO1 */
	uint8_t getDEVICE_INFO1()
	{
		return read8(DEVICE_INFO1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG DEVICE_INFO0                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG DEVICE_INFO0:
	 * S2-LP version number
	 */
	struct DEVICE_INFO0
	{
		static const uint16_t __address = 241;
		
		/* Bits DEVICE_INFO0: */
		struct DEVICE_INFO0_
		{
			/* MODE - */
			static const uint8_t dflt = 0b10010001; // 8'h91
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register DEVICE_INFO0 */
	void setDEVICE_INFO0(uint8_t value)
	{
		write(DEVICE_INFO0::__address, value, 8);
	}
	
	/* Get register DEVICE_INFO0 */
	uint8_t getDEVICE_INFO0()
	{
		return read8(DEVICE_INFO0::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG IRQ_STATUS3                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/*
	 * REG IRQ_STATUS3:
	 * Interrupt status registers
	 */
	struct IRQ_STATUS3
	{
		static const uint16_t __address = 250;
		
		/* Bits IRQ_STATUS3: */
		struct IRQ_STATUS3_
		{
			/* MODE - */
			static const uint32_t dflt = 0b00000000000010010000010100000000; // 32'h90500
			static const uint32_t mask = 0b11111111111111111111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31]
		};
	};
	
	/* Set register IRQ_STATUS3 */
	void setIRQ_STATUS3(uint32_t value)
	{
		write(IRQ_STATUS3::__address, value, 32);
	}
	
	/* Get register IRQ_STATUS3 */
	uint32_t getIRQ_STATUS3()
	{
		return read32(IRQ_STATUS3::__address, 32);
	}
	
};
