#include <Windows.h>
#include <iostream>

int main() {
  // Set the desired RGB color values.
  const int red = 255;
  const int green = 0;
  const int blue = 0;

  // Create an input event structure for the Ctrl key down event.
  INPUT input;
  input.type = INPUT_KEYBOARD;
  input.ki.wScan = 0;
  input.ki.time = 0;
  input.ki.dwExtraInfo = 0;
  input.ki.wVk = VK_CONTROL;
  input.ki.dwFlags = 0;

  // Send the Ctrl key down event.
  if (!SendInput(1, &input, sizeof(input))) {
    // Handle error.
    std::cerr << "Error sending input." << std::endl;
    return 1;
  }

  // Create an input event structure for the Shift key down event.
  input.ki.wVk = VK_SHIFT;

  // Send the Shift key down event.
  if (!SendInput(1, &input, sizeof(input))) {
    // Handle error.
    std::cerr << "Error sending input." << std::endl;
    return 1;
  }

  // Create an input event structure for the C key down event.
  input.ki.wVk = 'C';

  // Send the C key down event.
  if (!SendInput(1, &input, sizeof(input))) {
    // Handle error.
    std::cerr << "Error sending input." << std::endl;
    return 1;
  }

  // Create an input event structure for the C key up event.
  input.ki.dwFlags = KEYEVENTF_KEYUP;

  // Send the C key up event.
  if (!SendInput(1, &input, sizeof(input))) {
    // Handle error.
    std::cerr << "Error sending input." << std::endl;
    return 1;
  }

  // Create an input event structure for the RGB color values.
  input.ki.wVk = 0;
  input.ki.wScan = 0;
  input.ki.dwFlags = KEYEVENTF_UNICODE;

  // Send the red color value.
  input.ki.wScan = red;
  if (!SendInput(1, &input, sizeof(input))) {
    // Handle error.
    std::cerr << "Error sending input." << std::endl;
    return 1;
  }

  // Send the green color value.
  // Send the green color value.
  input.ki.wScan = green;
  if (!SendInput(1, &input, sizeof(input))) {
    // Handle error.
    std::cerr << "Error sending input." << std::endl;
    return 1;
  }

  // Send the blue color value.
  input.ki.wScan = blue;
  if (!SendInput(1, &input, sizeof(input))) {
    // Handle error.
    std::cerr << "Error sending input." << std::endl;
    return 1;
  }

  // Create an input event structure for the Shift key up event.
  input.ki.wVk = VK_SHIFT;
  input.ki.dwFlags = KEYEVENTF_KEYUP;

  // Send the Shift key up event.
  if (!SendInput(1, &input, sizeof(input))) {
    // Handle error.
    std::cerr << "Error sending input." << std::endl;
    return 1;
  }

  // Create an input event structure for the Ctrl key up event.
  input.ki.wVk = VK_CONTROL;
  input.ki.dwFlags = KEYEVENTF_KEYUP;

  // Send the Ctrl key up event.
  if (!SendInput(1, &input, sizeof(input))) {
    // Handle error.
    std::cerr << "Error sending input." << std::endl;
    return 1;
  }

  return 0;
}

