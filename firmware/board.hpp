#pragma once

extern "C" {

class Board {

    private:

        // add stuff as needed here

    public:

        // your implementation should support these methods

        void     init(void);

        void     checkReboot(bool pendReboot);
        void     delayMilliseconds(uint32_t msec);
        uint32_t getMicros();
        void     imuInit(uint16_t *acc1G, float * gyroScale);
        void     imuRead(int16_t accADC[3], int16_t gyroADC[3]);
        void     ledGreenOff(void);
        void     ledGreenOn(void);
        void     ledGreenToggle(void);
        void     ledRedOff(void);
        void     ledRedOn(void);
        void     ledRedToggle(void);
        uint16_t readPWM(uint8_t chan);
        void     reboot(void);
        uint8_t  serialAvailableBytes(void);
        uint8_t  serialReadByte(void);
        void     serialWriteByte(uint8_t c);
        void     writeMotor(uint8_t index, uint16_t value);

}; // class Board


} // extern "C"