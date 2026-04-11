[README_lcd_codes.md](https://github.com/user-attachments/files/26646777/README_lcd_codes.md)
# 📟 LCD Codes — Arduino 16x2 Display Library

![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![LCD](https://img.shields.io/badge/Display-16x2_LCD-a855f7?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-a855f7?style=for-the-badge)

> **A practical collection of Arduino code examples for driving a 16x2 LCD display — covering everything from basic text output to scrolling, custom characters, and multi-mode display logic.**

---

## 📖 About

The 16x2 LCD is one of the most common output devices in embedded systems — and knowing how to drive it well is a core skill for any hardware developer. This repository is a modular, all-in-one reference for working with LCD displays on Arduino.

Rather than having to dig through datasheets or scattered tutorials, everything is bundled into a single, well-structured `.ino` file with multiple code sections you can activate by uncommenting. Think of it as your personal LCD cookbook. 🍳

---

## ✨ Features

- ✅ **Basic text display** — print static and dynamic strings
- ✅ **Cursor control** — position text anywhere on the 16x2 grid
- ✅ **Scrolling text** — smooth left/right scrolling for long messages
- ✅ **Custom characters** — define and display your own 5x8 pixel glyphs
- ✅ **Multi-mode design** — uncomment sections to switch between display modes
- ✅ Clean, beginner-friendly code with inline comments throughout

---

## 🔧 Hardware Requirements

| Component | Details |
|-----------|---------|
| Microcontroller | Arduino Uno / Nano |
| Display | 16x2 LCD (HD44780 compatible) |
| Potentiometer | 10kΩ (for contrast adjustment) |
| Resistor | 220Ω (for backlight) |
| Wires & Breadboard | For prototyping |

> 💡 **Tip:** You can also use an **I2C LCD backpack module** (PCF8574) to reduce wiring from 6 pins down to just 2 (SDA + SCL). Minor code adjustments needed — swap `LiquidCrystal` for `LiquidCrystal_I2C`.

---

## 🚀 Getting Started

### 1. Clone the repository
```bash
git clone https://github.com/my-ke20/lcd_codes.git
cd lcd_codes
```

### 2. Open in Arduino IDE
Open `lcd_code1.ino` in the [Arduino IDE](https://www.arduino.cc/en/software).

### 3. Choose your display mode
Inside the file, you'll find multiple code sections. **Uncomment the section** you want to use and comment out the others. Each section is clearly labelled.

### 4. Wire up the LCD
Connect your 16x2 LCD to the Arduino according to the pin definitions at the top of the sketch. Standard wiring:

```
LCD RS  → Arduino Pin 12
LCD EN  → Arduino Pin 11
LCD D4  → Arduino Pin 5
LCD D5  → Arduino Pin 4
LCD D6  → Arduino Pin 3
LCD D7  → Arduino Pin 2
LCD VSS → GND
LCD VDD → 5V
LCD V0  → Potentiometer wiper (contrast)
LCD A   → 5V via 220Ω resistor (backlight)
LCD K   → GND
```

### 5. Upload & enjoy
Flash the sketch to your Arduino and watch the display come to life! 🎉

---

## 📁 Project Structure

```
lcd_codes/
├── lcd_code1.ino                      # Main sketch with all display modes
├── Screenshot from 2026-03-20.png     # Circuit/simulation screenshot
└── README.md
```

---

## 🧠 How It Works

The sketch uses Arduino's built-in **LiquidCrystal library**, which abstracts the HD44780 LCD controller protocol. Each code section in the file demonstrates a different display capability:

```cpp
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // Initialize with pin numbers

lcd.begin(16, 2);          // Set display dimensions
lcd.setCursor(0, 0);       // Move cursor to column 0, row 0
lcd.print("Hello, World!"); // Print text
```

To switch modes, simply **comment out** the active section and **uncomment** the one you want to try.

---

## 🔮 Possible Extensions

- Integrate with **sensors** (temperature, distance) to display live readings
- Use an **I2C backpack** to free up Arduino pins
- Add a **rotary encoder** to scroll through menu options on the LCD
- Build a **mini console** that displays Arduino serial input on the LCD

---

## 👤 Author

**Michael Otieno Odhiambo**
- GitHub: [@my-ke20](https://github.com/my-ke20)
- Email: michaelotieno915@gmail.com
