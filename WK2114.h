#ifndef __WK2114_H__
#define __WK2114_H__

#define WK2114_CRYSTAL_F	16000000L
#define MASTER_2MBPS	2000000L
#define MASTER_1MBPS	1000000L

#define MASTER_BAUD		MASTER_1MBPS

#define WK2114_GENA		0x00
#define WK2114_GRST		0x01
#define WK2114_GMUT		0x02
#define WK2114_GIER		0x10
#define WK2114_GIFR		0x11

#define WK2114_SPAGE(cc)	(((cc)<<4)|0x03)	// SPAGE0
#define WK2114_SCR(cc)		(((cc)<<4)|0x04)    // SPAGE0
#define WK2114_LCR(cc)      (((cc)<<4)|0x05)    // SPAGE0
#define WK2114_FCR(cc)      (((cc)<<4)|0x06)    // SPAGE0
#define WK2114_SIER(cc)     (((cc)<<4)|0x07)    // SPAGE0
#define WK2114_SIFR(cc)     (((cc)<<4)|0x08)    // SPAGE0
#define WK2114_TFCNT(cc)    (((cc)<<4)|0x09)    // SPAGE0
#define WK2114_RFCNT(cc)    (((cc)<<4)|0x0A)    // SPAGE0
#define WK2114_FSR(cc)      (((cc)<<4)|0x0B)    // SPAGE0
#define WK2114_LSR(cc)      (((cc)<<4)|0x0C)    // SPAGE0
#define WK2114_FDAT(cc)     (((cc)<<4)|0x0D)    // SPAGE0

#define WK2114_BAUD1(cc)    (((cc)<<4)|0x04)    // SPAGE1
#define WK2114_BAUD0(cc)    (((cc)<<4)|0x05)    // SPAGE1
#define WK2114_PRES(cc)     (((cc)<<4)|0x06)    // SPAGE1
#define WK2114_RFTL(cc)     (((cc)<<4)|0x07)    // SPAGE1
#define WK2114_TFTL(cc)     (((cc)<<4)|0x08)    // SPAGE1

#define WK2114_SPAGE0		0
#define WK2114_SPAGE1		1

// Global Register fields

// GENA
#define WK2114_UT4EN	(1<<3)
#define WK2114_UT3EN	(1<<2)
#define WK2114_UT2EN	(1<<1)
#define WK2114_UT1EN	(1<<0)

#define WK2114_UTEN_ALL	(0x0F)

// GRST
#define WK2114_UT4SLEEP	(1<<7)
#define WK2114_UT3SLEEP	(1<<6)
#define WK2114_UT2SLEEP	(1<<5)
#define WK2114_UT1SLEEP	(1<<4)
#define WK2114_UT4RST	(1<<3)
#define WK2114_UT3RST	(1<<2)
#define WK2114_UT2RST	(1<<1)
#define WK2114_UT1RST	(1<<0)

#define WK2114_UTRST_ALL	(0x0F)

// GMUT
#define WK2114_PAEN		(1<<3)
#define WK2114_PAM1		(1<<2)
#define WK2114_PAM0		(1<<1)
#define WK2114_U1IEN	(1<<0)

#define WK2114_PAM_ZERO		(0x0<<1)
#define WK2114_PAM_ODD		(0x1<<1)
#define WK2114_PAM_EVEN		(0x2<<1)
#define WK2114_PAM_ONE		(0x3<<1)

// GIER
#define WK2114_UT4IE	(1<<3)
#define WK2114_UT3IE	(1<<2)
#define WK2114_UT2IE	(1<<1)
#define WK2114_UT1IE	(1<<0)

// GIFR
#define WK2114_UT4INT	(1<<3)
#define WK2114_UT3INT	(1<<2)
#define WK2114_UT2INT	(1<<1)
#define WK2114_UT1INT	(1<<0)

// SUB Channel Register fields

// SCR
#define WK2114_SLEEPEN	(1<<2)
#define WK2114_TXEN		(1<<1)
#define WK2114_RXEN		(1<<0)

// LCR
#define WK2114_BREAK	(1<<5)
#define WK2114_IREN		(1<<4)
//#define WK2114_PAEN		(1<<3)	same as GMUT flags
//#define WK2114_PAM1		(1<<2)
//#define WK2114_PAM0		(1<<1)
#define WK2114_STPL		(1<<0)

// FCR
#define WK2114_TFTRIG1		(1<<7)
#define WK2114_TFTRIG0     (1<<6)
#define WK2114_RFTRIG1     (1<<5)
#define WK2114_RFTRIG0     (1<<4)
#define WK2114_TFEN        (1<<3)
#define WK2114_RFEN        (1<<2)
#define WK2114_TFRST       (1<<1)
#define WK2114_RFRST       (1<<0)

#define WK2114_TFTRIG_8		(0x0<<6)
#define WK2114_TFTRIG_16	(0x1<<6)
#define WK2114_TFTRIG_24	(0x2<<6)
#define WK2114_TFTRIG_30	(0x3<<6)

#define WK2114_RFTRIG_8		(0x0<<4)
#define WK2114_RFTRIG_16	(0x1<<4)
#define WK2114_RFTRIG_24	(0x2<<4)
#define WK2114_RFTRIG_28	(0x3<<4)


// SIER
#define WK2114_FERR_IEN		(1<<7)
#define WK2114_TFEMPTY_IEN	(1<<3)
#define WK2114_TFTRIG_IEN	(1<<2)
#define WK2114_RXOVT_IEN 	(1<<1)
#define WK2114_RFTRIG_IEN	(1<<0)

// SIFR
#define WK2114_FERR_INT		(1<<7)
#define WK2114_TFEMPTY_INT	(1<<3)
#define WK2114_TFTRIG_INT	(1<<2)
#define WK2114_RXOVT_INT 	(1<<1)
#define WK2114_RFTRIG_INT	(1<<0)

// FSR
#define WK2114_RFOE		(1<<7)
#define WK2114_RFBI    	(1<<6)
#define WK2114_RFFE    	(1<<5)
#define WK2114_RFPE    	(1<<4)
#define WK2114_RDAT	    (1<<3)
#define WK2114_TDAT		(1<<2)
#define WK2114_TFULL	(1<<1)
#define WK2114_TBUSY	(1<<0)

// LSR
#define WK2114_OE		(1<<3)
#define WK2114_BI       (1<<2)
#define WK2114_FE       (1<<1)
#define WK2114_PE       (1<<0)

template<typename serial_t>
class WK2114
{
private:
	serial_t& S;
public:
	WK2114(serial_t& s):S(s) {}
	void init()
	{
		S.begin(MASTER_BAUD);
		S.write(0x55);
	}
	
	void writeReg(uint8_t reg, uint8_t data)
	{
		S.write(0x00 | (reg & 0x3F));
		S.write(data);
	}

	uint8_t readReg(uint8_t reg)
	{
		S.write(0x40 | (reg & 0x3F));
		return forceRead(); //Serial.read();
	}

	void setBaud(uint8_t sub, uint32_t baud)
	{
		uint32_t code = 10*WK2114_CRYSTAL_F / (16L * baud);
		setBaud(sub, code/10 - 1, code % 10);
	}
	
	void setBaud(uint8_t sub, uint16_t baud, uint8_t pres)
	{
		writeReg(WK2114_SPAGE(sub), WK2114_SPAGE1);
		writeReg(WK2114_BAUD1(sub), baud >> 8);
		writeReg(WK2114_BAUD0(sub), baud);
		writeReg(WK2114_PRES(sub), pres);
		writeReg(WK2114_SPAGE(sub), WK2114_SPAGE0);
	}
	
	void enable(uint8_t sub, bool rx, bool tx)
	{
		uint8_t scr = (rx ? 0x01 : 0x00);
		scr |= (tx ? 0x20 : 0x00);
		writeReg(WK2114_SCR(sub), scr);
	}

	inline uint8_t availableToRead(uint8_t sub) { return readReg(WK2114_RFCNT(sub)); }
	inline uint8_t freeToSend(uint8_t sub) { return readReg(WK2114_TFCNT(sub)); }

	// single byte
	inline void writeData(const uint8_t sub, const uint8_t data) { writeReg(WK2114_FDAT(sub), data); }
	inline uint8_t readData(const uint8_t sub) { return readReg(WK2114_FDAT(sub)); }

	// fifo
	void writeFifo(uint8_t sub, uint8_t len, const uint8_t* data)
	{
		if (len > 0) {
			S.write(0x80 | (sub << 4) | ((len-1) & 0x0F));
			while (len-- > 0) S.write(*data++);
		}
	}

	void readFifo(uint8_t sub, uint8_t len, uint8_t* data)
	{
		if (len > 0) {
			S.write(0xC0 | (sub << 4) | ((len-1) & 0x0F));
			while (len-- > 0) *data++ = forceRead();	//Serial.read();
		}
	}
private:
	uint8_t forceRead(int timeout = 255){
		while(S.available() == 0 && timeout-- > 0) ;
		return S.read();
	}
};


#include "HardwareSerial.h"
typedef WK2114<HardwareSerial> WK2114_HS;

/*
union WkCmd {
	struct {
		int cmd:2;
		int sub:2;
		int len:4;
	}
	uint8_t reg;
};
*/

#endif /* __WK2114_H__ */
