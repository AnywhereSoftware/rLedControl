#include "B4RDefines.h"
namespace B4R {

		void B4RLedControl::Initialize(Int DataPin, Int ClkPin, Int CsPin, Int NumDevices) {
			led = new (beLed) LedControl(DataPin, ClkPin, CsPin, NumDevices);
		}
		Int B4RLedControl::getDeviceCount() {
			return led->getDeviceCount();
		}
		void B4RLedControl::Shutdown(Int Address, bool Status) {
			led->shutdown(Address, Status);
		}
		void B4RLedControl::SetScanLimit(Int Address, Int Limit) {
			led->setScanLimit(Address, Limit);
		}
		void B4RLedControl::SetIntensity (Int Address, Int Intensity) {
			led->setIntensity(Address, Intensity);
		}
		void B4RLedControl::ClearDisplay(Int Address) {
			led->clearDisplay(Address);
		}
		void B4RLedControl::SetLed(Int Address, Int Row, Int Col, bool State) {
			led->setLed(Address, Row, Col, State);
		}
		void B4RLedControl::SetRow (Int Address, Int Row, Byte Value) {
			led->setRow(Address, Row, Value);
		}
		void B4RLedControl::SetColumn (Int Address, Int Column, Byte Value) {
			led->setColumn(Address, Column, Value);
		}
		void B4RLedControl::SetDigit (Int Address, Int Digit, Byte Value, bool DecimalPoint) {
			led->setDigit (Address, Digit, Value, DecimalPoint);
		}
		void B4RLedControl::SetChar(Int Address, Int Digit, B4RString* SingleChar, bool DecimalPoint) {
			led->setChar(Address, Digit, SingleChar->data[0], DecimalPoint);
		}
}