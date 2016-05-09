void setup() {
  // put your setup code here, to run once:
   pinMode (13, OUTPUT);
    pinMode (12, OUTPUT);
     pinMode (11, OUTPUT);
      pinMode (10, OUTPUT);
       pinMode (9, OUTPUT);
        pinMode (8, OUTPUT);
         pinMode (7, OUTPUT);
           Serial.begin(9600);
        
}

void loop() {
  // put your main code here, to run repeatedly: 
  char opt;
   if(Serial.available()>0) 
  {
  opt=Serial.read();
  
 switch(opt){
  case 'a':
   digitalWrite (13, HIGH); // open the laser head
   delay (100); // delay one second
   digitalWrite (13, LOW); // turn off the laser head
   delay (100); 
   break;
   case 'b':
    digitalWrite (12, HIGH); // open the laser head
   delay (100); // delay one second
   digitalWrite (12, LOW); // turn off the laser head
   delay (100); 
   break;
   case 'c':
    digitalWrite (11, HIGH); // open the laser head
   delay (100); // delay one second
   digitalWrite (11, LOW); // turn off the laser head
   delay (100);
   break;
   case 'd': 
    digitalWrite (10, HIGH); // open the laser head
   delay (100); // delay one second
   digitalWrite (10, LOW); // turn off the laser head
   delay (100);
   break;
   case 'e': 
    digitalWrite (9, HIGH); // open the laser head
   delay (100); // delay one second
   digitalWrite (9, LOW); // turn off the laser head
   delay (100);
   break;
   case 'f': 
    digitalWrite (8, HIGH); // open the laser head
   delay (100); // delay one second
   digitalWrite (8, LOW); // turn off the laser head
   delay (100);
   break;
   case 'g': 
 digitalWrite (7, HIGH); // open the laser head
   delay (100); // delay one second
   digitalWrite (7, LOW); // turn off the laser head
   delay (100);
   break;
   } 
  } 
   else{
    Serial.println(opt);
    }
    
}
