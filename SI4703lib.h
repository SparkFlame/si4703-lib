#ifndef Si4703_h
#define Si4703_h

#include "Arduino.h"

class Si4703
{
  public:
    void initRadio ();
    void Up ();
    void Down();
  private:
    int _resetPin;
    int _sdio;
    int _sclk;
}

#endif
