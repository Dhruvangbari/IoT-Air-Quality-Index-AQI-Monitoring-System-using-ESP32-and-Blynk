# IoT AQI Monitoring System with Mobile App (Blynk) 📱🌫️

ESP32-based IoT Air Quality Index monitoring system using MQ-135 sensor with real-time
mobile app visualization and alert notifications via Blynk.
# IoT Air Quality Index (AQI) Monitoring System using ESP32 & Blynk 📱🌫️  
Monitor air quality anytime, anywhere.

This project implements an **IoT-based Air Quality Index (AQI) monitoring system** using an **ESP32**, **MQ-135 air quality sensor**, and a **mobile application built with Blynk**.

The system continuously monitors air quality, displays real-time values on a mobile app, and sends alerts when pollution levels exceed safe limits.

Smart sensing. Mobile visibility. Instant alerts.

---

## 🧠 Project Overview
Air pollution is a serious health concern, especially in indoor and urban environments.  
This project combines **embedded sensing** with **mobile IoT monitoring**, allowing users to track air quality in real time from anywhere.

### System Flow

---

## ⚡ Key Features
- Real-time AQI monitoring
- ESP32 high-resolution ADC (0–4095)
- Live AQI data on Blynk mobile app
- Push notification alerts for poor air quality
- Visual indication using LEDs
- Audible alert using buzzer
- Wi-Fi based remote monitoring
- Android & iOS support via Blynk

Perfect for **IoT projects, demos, and smart environment systems**.

---

## 🔧 Hardware Components
- ESP32 Development Board  
- MQ-135 Air Quality Sensor  
- Buzzer  
- Red LED (Poor air quality)  
- Green LED (Good air quality)  
- Jumper wires and resistors  

⚠️ ESP32 operates on **3.3V logic** — ensure sensor output is ADC-safe.

---

## 🔌 Pin Connections

### MQ-135 Sensor
| MQ-135 Pin | ESP32 GPIO |
|-----------|------------|
| AO | GPIO 34 |
| VCC | 5V |
| GND | GND |

### Output Devices
| Device | ESP32 GPIO |
|------|-----------|
| Buzzer | GPIO 25 |
| Red LED | GPIO 26 |
| Green LED | GPIO 27 |

---

## 📱 Blynk App Configuration
- **Virtual Pin V0** → AQI value display (Gauge / Label)
- **Virtual Pin V1** → Air quality status indicator
- **Event** → `bad_air` (Push notification)

Add your credentials in code:
```cpp
char auth[] = "YOUR_BLYNK_AUTH_TOKEN";
char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";


## Author
Dhruvang Bari
