void setup() {

 int i =0;
 while(i<=3)
 {
  pinMode(i,OUTPUT);
  i++;
 }

}

void loop() {

 int i = 10;
 while(i<=3)
 { 
  if(i<3)
  {
 digitalWrite(i,HIGH);
 digitalWrite(i+1,HIGH);
 delay(200);
  digitalWrite(i,LOW);
 digitalWrite(i+1,LOW);

 }
 else
 {
  digitalWrite(i,HIGH);
  digitalWrite(i-3,HIGH);
  delay(200);
  digitalWrite(i,LOW);
  digitalWrite(i-3,LOW);
 }
  i++;
 }

}
