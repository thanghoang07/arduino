/*
 Name:		DemoSketch.ino
 Created:	7/10/2017 4:22:55 PM
 Author:	thang
*/

// the setup function runs once when you press reset or power the board
void setup() {
	//Đầu tiên là khai báo pin đầu ra ở vị trí pin 13.
	pinMode(13, OUTPUT);
}

// the loop function runs over and over again until power down or reset
void loop() {
	//thực hiện việc bật đèn LED lên
	digitalWrite(13, HIGH);
	delay(1000);
	//Chờ 1 giây và sau đó thực hiện việc tắt đèn LED đi
	digitalWrite(13, LOW);
	delay(1000);
	//Chờ 1 giây và thực hiện lặp lại như trên.
}
