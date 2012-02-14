#include "ThermalSD.h"

void ThermalSD::printBitmap(int w, int h, File file) {
  if (w > 384) return; // maximum width of the printer
  for (int rowStart=0; rowStart < h; rowStart += 256) {
    int chunkHeight = ((h - rowStart) > 255) ? 255 : (h - rowStart);
    writeBytes(18, 42);
    writeBytes(chunkHeight, w/8);
    for (int i=0; i<((w/8)*chunkHeight); i++) {
      PRINTER_PRINT((uint8_t)file.read());
    }
  }
};