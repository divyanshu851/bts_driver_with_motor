#define r_en 15
#define r_pwm 14
#define l_pwm 27

const int frequency = 1000;
const int pwmChannel = 0;
const int pwmChannel2 = 1;
const int pwmResolution = 8;
const int max_duty_cycle = 255;

uint16_t duty;

void setup() {
Serial.begin(9600);
pinMode(r_en, OUTPUT);
digitalWrite(r_en, HIGH);
ledcSetup(pwmChannel, frequency, pwmResolution);
ledcAttachPin(r_pwm, pwmChannel);
ledcSetup(pwmChannel2, frequency, pwmResolution);
ledcAttachPin(l_pwm, pwmChannel2);
}

void loop() {
//  for(duty = 0; duty <= max_duty_cycle; duty += 10){
//    ledcWrite(pwmChannel, duty);
//    ledcWrite(pwmChannel2, 0);
//    Serial.print("First Loop And Duty :");
//    Serial.println(duty);
//    delay(400);  
//  }
//    ledcWrite(pwmChannel, 0);
//    ledcWrite(pwmChannel2, 0);  
//    delay(1000);
//   for(duty = 0; duty <= max_duty_cycle; duty += 10){
//    ledcWrite(pwmChannel, 0);
//    ledcWrite(pwmChannel2, duty); 
//    Serial.print("Second Loop And Duty :");
//    Serial.println(duty);
//    delay(400); 
//  }  
//    ledcWrite(pwmChannel, 0);
//    ledcWrite(pwmChannel2, 0);  
//    delay(1000);
    ledcWrite(pwmChannel, 255);
    ledcWrite(pwmChannel2, 0);
    delay(5000);
    ledcWrite(pwmChannel, 0);
    ledcWrite(pwmChannel2, 0);
    delay(1000);
    
}
