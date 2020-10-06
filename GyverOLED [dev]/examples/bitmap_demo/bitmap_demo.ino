// Пример GyverOLED. Смотри документацию на http://alexgyver.ru/gyveroled/
// вывод картинки из памяти, буфер не используем

// битмап из программы BITmaper OLED (ищи в папке с библиотекой)
const uint8_t bitmap_128x64[] PROGMEM = {
  0xFE, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x04, 0xFC, 0x04, 0xFC, 0x04, 0xFC, 0x04, 0xFC, 0xFC, 0x04, 0xFC, 0x04, 0xFC, 0x04, 0xFC, 0x04, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0x7C, 0x00, 0x1C, 0x80, 0xEC, 0x60, 0x2C, 0x20, 0x2C, 0x40, 0x4C, 0x40, 0x5C, 0x80, 0x9C, 0x00, 0x3C, 0x00, 0x3C, 0x00, 0x7C, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x00, 0xFC, 0x04, 0xFC, 0x14, 0x7C, 0xE0, 0x00, 0x1C, 0x1C, 0xEC, 0x84, 0xFC, 0x04, 0xFC, 0x84, 0x7C, 0x64, 0x1C, 0x10, 0x8C, 0xC8, 0x64, 0xC4,
  0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x40, 0xFF, 0x20, 0x3F, 0x3F, 0x20, 0x3F, 0x20, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x0F, 0xF0, 0xC0, 0x00, 0x7F, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x40, 0x40, 0x80, 0x80, 0x80, 0x00, 0x40, 0x41, 0x40, 0x81, 0x88, 0x8B, 0x08, 0x1B, 0x10, 0x17, 0x30, 0x2F, 0x20, 0x2F, 0x10, 0x1F, 0x00, 0x0F, 0x10, 0x1F, 0x00, 0x00, 0x3F, 0x1F, 0x0C, 0x00, 0x81, 0x81, 0x1F, 0x66, 0x71, 0xD9, 0x8E, 0x07, 0x03, 0x87, 0xCD, 0x78, 0x78, 0xCC,
  0xFF, 0x00, 0xFF, 0x00, 0x3F, 0x00, 0x0F, 0x00, 0x07, 0x30, 0x73, 0xD0, 0xD3, 0x18, 0x09, 0x08, 0x01, 0x00, 0x03, 0x00, 0x03, 0x00, 0x07, 0x00, 0x0F, 0x08, 0x0F, 0x00, 0x1F, 0x00, 0xE3, 0xFC, 0xFF, 0xFF, 0xFC, 0xFE, 0xFE, 0xF9, 0xF8, 0xF2, 0xF8, 0xF9, 0xFC, 0xFC, 0xFF, 0xFE, 0xE6, 0xE2, 0xF0, 0xBD, 0x50, 0x0F, 0x00, 0xBF, 0xE0, 0x4F, 0xE0, 0xF7, 0xF0, 0x7B, 0xBC, 0xDE, 0x6B, 0x81, 0x80, 0x80, 0xC0, 0xF8, 0x8C, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x09, 0x00, 0xFE, 0x00, 0xF8, 0x00, 0xF1, 0x01, 0xF3, 0x02, 0xF2, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xE0, 0x00, 0xC0, 0x00, 0xC0, 0x10, 0xF0, 0x30, 0xB0, 0x78, 0xC8, 0xE9, 0x61, 0xF0, 0xE8, 0x18, 0xFC, 0xC7, 0x83, 0x03, 0x87, 0xCC, 0x7C, 0x78, 0x6C,
  0x03, 0x80, 0x00, 0x00, 0x30, 0xF8, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC7, 0xE7, 0x74, 0x7C, 0xF8, 0xF0, 0xF0, 0xF0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x10, 0x30, 0xE0, 0xE6, 0x67, 0x7F, 0x79, 0x71, 0xEF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x3F, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x6F, 0xF7, 0xF8, 0xFD, 0xFE, 0xFF, 0xFF, 0xFC, 0xF9, 0xF2, 0xFA, 0xFC, 0xE1, 0xC3, 0xE7, 0x9C, 0xD9, 0xC0, 0x9E, 0x3E, 0x7E, 0x7E, 0xFE, 0xFD, 0xFD, 0xFD, 0xFD, 0x9D, 0xD2, 0xEA, 0x3A, 0x04, 0xC8, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x03, 0xFC, 0x0F, 0xF3, 0x13, 0xE6, 0x2C, 0xC8, 0x0C,
  0xFF, 0x01, 0xE6, 0x18, 0x20, 0xE7, 0x7F, 0x59, 0x60, 0x70, 0xF8, 0xFC, 0x3E, 0x7F, 0xFF, 0x0C, 0x0C, 0x4F, 0x4F, 0x4F, 0x7F, 0x7F, 0xC9, 0x6B, 0x37, 0x1F, 0x0E, 0x00, 0x86, 0x87, 0x80, 0x80, 0xC0, 0xC0, 0xC1, 0x41, 0x00, 0x00, 0x88, 0xCC, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E, 0xFE, 0xFE, 0x7C, 0x3D, 0xC3, 0x07, 0xFF, 0xFF, 0xFF, 0xF3, 0xF7, 0xEF, 0xED, 0xEC, 0xFD, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0x3C, 0x01, 0x03, 0x03, 0x03, 0x0E, 0x0D, 0x03, 0x7C, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0xFF, 0x00, 0x7F, 0x80, 0x1F, 0x00, 0x1F, 0x00, 0x9F, 0xC0, 0x3F, 0x40, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x7F, 0x40, 0x7F, 0x40, 0x7F, 0x40, 0x7F, 0x7F, 0x40, 0x7F, 0x40, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
  0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFC, 0x06, 0xE6, 0x0C, 0xCC, 0x19, 0x98, 0x10, 0x91, 0x01, 0xC0, 0x04, 0xC4, 0x04, 0x84, 0x04, 0xC4, 0x04, 0xEC, 0x09, 0x89, 0x09, 0x89, 0x89, 0x89, 0x09, 0xE0, 0xE0, 0xE0, 0xF4, 0xFE, 0xFF, 0xFF, 0xFD, 0xFB, 0xFB, 0xF7, 0xCF, 0xCF, 0xCF, 0xCF, 0xCC, 0x8C, 0xB4, 0xA7, 0x67, 0x94, 0x33, 0x33, 0xCB, 0x17, 0xAF, 0xDF, 0x3F, 0xFF, 0xFF, 0x3F, 0xCF, 0xE7, 0xF3, 0xFB, 0xF9, 0xFD, 0xFE, 0xFE, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0x84, 0x78, 0xFF, 0x30, 0x30, 0x30, 0x00, 0x00, 0x00, 0x0E, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0E, 0x0E, 0x06, 0x06, 0x04, 0x85, 0x06, 0x06, 0x06,
  0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0x7F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0x9F, 0xC2, 0x3F, 0x24, 0xF7, 0x99, 0x99, 0x99, 0xE9, 0xC9, 0xD9, 0xE9, 0xE9, 0xF1, 0xF1, 0xFB, 0xFB, 0xFB, 0xFB, 0xFB, 0xFF, 0xFF, 0xFE, 0xFF, 0xFE, 0x7D, 0x7A, 0xB4, 0x3C, 0xC1, 0x02, 0xDC, 0x1B, 0xB7, 0x2B, 0x57, 0x6F, 0x57, 0x6F, 0x57, 0x6F, 0x57, 0x6F, 0xB7, 0x2F, 0xB7, 0x2F, 0xB7, 0x2F, 0xB7, 0x2F, 0xB7, 0x2F, 0xB7, 0x1B, 0xD7, 0x1B, 0xD7, 0x1B, 0xEF, 0x0C, 0xF3, 0x0E, 0x90, 0x20, 0xA0, 0x00, 0xC0, 0x00, 0xC0, 0x10, 0xC0, 0x30, 0xF8, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0xF0, 0x10, 0xF0, 0x0C, 0xF8, 0xF8, 0x08, 0xF8, 0x08, 0xFE, 0x04, 0xFF, 0x00, 0xFE, 0x00, 0xFF, 0x00, 0xFF, 0x00,
  0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3D, 0x3A, 0x3C, 0x3A, 0x34, 0x38, 0x35, 0x08, 0x13, 0x24, 0x0F, 0x00, 0x03, 0x3C, 0x35, 0x02, 0x01, 0x3D, 0x0F, 0x27, 0x03, 0x1B, 0x13, 0x13, 0x13, 0x1B, 0x13, 0x1B, 0x13, 0x1B, 0x13, 0x1B, 0x01, 0x1D, 0x01, 0x1D, 0x01, 0x1D, 0x01, 0x3E, 0x00, 0x3E, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x1F, 0x00, 0x27, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x10, 0x1F, 0x10, 0x1F, 0x10, 0x1F, 0x1F, 0x10, 0x1F, 0x10, 0x1F, 0x10, 0x1F, 0x10, 0x1F, 0x00, 0x1F, 0x00, 0x1F, 0x00,
};

const uint8_t bitmap_32x32[] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0x70, 0x70, 0x30, 0x30, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE0, 0xF0, 0xF0, 0x70, 0x30, 0x30, 0x20, 0x00, 0x00,
  0x00, 0x30, 0x78, 0xFC, 0x7F, 0x3F, 0x0F, 0x0F, 0x1F, 0x3C, 0x78, 0xF0, 0xE0, 0xC0, 0x80, 0x80, 0x80, 0x40, 0xE0, 0xF0, 0xF8, 0xFC, 0xFF, 0x7F, 0x33, 0x13, 0x1E, 0x1C, 0x1C, 0x0E, 0x07, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF9, 0xF7, 0xEF, 0x5F, 0x3F, 0x7F, 0xFE, 0xFD, 0xFB, 0xF1, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x1E, 0x33, 0x33, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x1F, 0x0E, 0x04, 0x00, 0x00, 0x00, 0x00,
};

#include <GyverOLED.h>
GyverOLED<SSD1306_128x64, OLED_NO_BUFFER> oled;
// можно передать адрес: GyverOLED oled(0x3C);

void setup() {
  oled.init();
  oled.clear();

  // вывод битмапа: (x, y, имя, размерХ, размерУ, инверсия INVERT или не указана)
  oled.drawBitmap(0, 0, bitmap_128x64, 128, 64);
  oled.drawBitmap(25, 16, bitmap_32x32, 32, 32);
}

void loop() {
}