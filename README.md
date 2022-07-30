# Discount Hardware Key
This code configures an [Arduino Micro](https://docs.arduino.cc/hardware/micro) to act as a USB keyboard to be able to inject keystrokes to the target machine.
This code types the specified text once and then drops into an infinite loop to prevent multiple entries of the same text.

If you want to use special chars, please reference this article on how the keyboard library works (you may need to use integers to call the special keys):
https://www.arduino.cc/reference/en/language/functions/usb/keyboard/keyboardprint/#_parameters