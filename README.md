# sanitizer_door_opener
### Project Overview
The Sanitizer Door Opener is an Arduino-based automatic door system designed to ensure individuals sanitize their hands before gaining access to a restricted area. This project was primarily developed for hospitals but can also be applied to offices, schools, and other public spaces where hygiene is a priority.

The system operates using ultrasonic sensors to detect hand presence, a servo motor to simulate sanitizer dispensing, and another servo motor to open and close the door. If the user does not sanitize, access is denied, ensuring a more hygienic environment.

### How It Works
Hand Detection: An ultrasonic sensor detects a hand near the sanitizer dispenser.
Sanitization Process: The system waits for sanitization to complete.
Door Access Control:
If sanitization is completed, a second ultrasonic sensor detects the user, and the door unlocks.
If sanitization is skipped, the door remains locked.
Exit Mechanism: After a set time, the door automatically closes to maintain security.
Features
✅ Contactless, automatic operation to minimize germ transmission.
✅ Ultrasonic sensors for hand detection and door activation.
✅ Servo motor-controlled door mechanism for smooth, reliable access.
✅ Timed auto-close function to ensure security.
✅ Easy to implement and cost-effective solution for hygiene control.

### Hardware Requirements
Arduino Uno / Mega (or any compatible board)
2 x Ultrasonic Sensors (HC-SR04) – for hand detection and door activation
2 x Servo Motors – to control the door mechanism
Relay Module (optional) – if using an automatic sanitizer dispenser
Power Supply – for Arduino and servo motors
Software & Libraries Used
Servo.h – to control servo motors
pulseIn() – to measure ultrasonic sensor distance

### Installation & Setup
Connect the ultrasonic sensors to the Arduino for hand detection.
Attach the servo motors to the door mechanism.
Upload the Arduino code to control the system logic.
Test the system by placing your hand near the sanitizer sensor and observing door operation.
End in Mind (Project Goals & Future Vision)
This project was developed with hospitals and high-risk environments in mind, aiming to enforce sanitization compliance in a seamless, automated manner.

### Short-Term Goals:
✔ Ensure effective hands-free access control to reduce contamination risks.
✔ Provide an affordable and easy-to-deploy solution for hospitals and offices.
✔ Improve hygiene compliance in high-traffic areas.

### Long-Term Vision:
🔹 Integration with RFID or Facial Recognition – for authorized personnel access.
🔹 IoT Connectivity – to monitor and log entries remotely.
🔹 AI-based compliance tracking – using computer vision for more advanced sanitization detection.
🔹 Wider adoption in public places such as malls, schools, and airports to improve overall hygiene standards.

### Conclusion
The Sanitizer Door Opener is a practical, innovative, and essential project for enhancing hygiene and preventing the spread of infections. By ensuring mandatory sanitization before entry, it enforces better hygiene habits in public spaces and workplaces. With further improvements, it can be adapted for wider applications beyond hospitals, creating a safer and healthier environment for everyone.
