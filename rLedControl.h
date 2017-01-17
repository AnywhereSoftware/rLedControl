#pragma once
#include "B4RDefines.h"
#include "LedControl.h"
//~version: 1.00
namespace B4R {
	//~shortname: LedControl
	class B4RLedControl {
		private:
			uint8_t beLed[sizeof(LedControl)];
			LedControl* led;
		public:
			/**
			*Initializes the controller.
			*DataPin - Data pin.
			*ClockPin - Clock pin.
			*CsPin - Chip selection pin.
			*NumDevices - Maximum number of devices that can be connected.
			*/
			void Initialize(Int DataPin, Int ClkPin, Int CsPin, Int NumDevices);
			//Returns the number of attached devices.
			Int getDeviceCount();
			/**
			*Sets the shutdown (power saving) mode for the device.
			*Address - Device address.
			*Status - If true then the device goes into power down mode.
			*/
			void Shutdown(Int Address, bool Status);
			//Sets the number of digits to be displayed.
			void SetScanLimit(Int Address, Int Limit);
			//Sets the display brightness (0 - 15).
			void SetIntensity (Int Address, Int Intensity);
			//Clears the display.
			void ClearDisplay(Int Address);
			//Sets the status of a single led.
			void SetLed(Int Address, Int Row, Int Col, bool State);
			/**
			*Sets all 8 leds in a row.
			*Address - Device address.
			*Row - Row index (0 - 7).
			*Value - Each bit set to 1 will light the corresponding led.
			*/
			void SetRow (Int Address, Int Row, Byte Value);
			/**
			*Sets all 8 leds in a column.
			*Address - Device address.
			*Column - Column index (0 - 7).
			*Value - Each bit set to 1 will light the corresponding led.
			*/
			void SetColumn (Int Address, Int Column, Byte Value);
			/**
			*Displays a hexadecimal digit on a 7 segment display.
			*/
			void SetDigit (Int Address, Int Digit, Byte Value, bool DecimalPoint);
			/**
			*Displays a character. The following characters are supported:
			*0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0,
			*A, b, c, d, E, F, H, L, O, ., -, _ and space.
			*/
			void SetChar(Int Address, Int Digit, B4RString* Value, bool DecimalPoint);
	};
}