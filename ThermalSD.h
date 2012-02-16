#ifndef Thermal_SD_h
#define Thermal_SD_h

#include <Thermal.h>
#include <SD.h>

class ThermalSD : public Thermal {
  public:
    ThermalSD(int RX_Pin, int TX_Pin) : Thermal(RX_Pin, TX_Pin) {
      _RX_Pin = RX_Pin;
      _TX_Pin = TX_Pin;
    };

    void printBitmap(int w, int h, File file);
    void printBitmap(File file);
};
#endif