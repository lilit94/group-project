import processing.serial.*;


Serial myPort;

int recta1,rectb1;
int recta2,rectb2;
int recta3,rectb3;
int recta4,rectb4;
int recta5,rectb5;
int recta6,rectb6;
int recta7,rectb7;
int rectSize = 90;     // Diameter of rect
int x,y;

void setup() {
  size(1000,500);
  recta1=0;
  rectb1=height/2-rectSize/2;
  recta2=recta1+100;
  rectb2=height/2-rectSize/2;
  recta3=recta2+100;
  rectb3=height/2-rectSize/2;
  recta4=recta3+100;
  rectb4=height/2-rectSize/2;
  recta5=recta4+100;
  rectb5=height/2-rectSize/2;
  recta6=recta5+100;
  rectb6=height/2-rectSize/2;
  recta7=recta6+100;
  rectb7=height/2-rectSize/2;
  
  myPort = new Serial(this, "COM3", 9600);
   
}

void draw() {
  
 
  stroke(255);
   rect(recta1,rectb1,rectSize, rectSize);
    rect(recta2,rectb2,rectSize, rectSize);
     rect(recta3,rectb3,rectSize, rectSize);
      rect(recta4,rectb4,rectSize, rectSize);
       rect(recta5,rectb5,rectSize, rectSize);
        rect(recta6,rectb6,rectSize, rectSize);
         rect(recta7,rectb7,rectSize, rectSize);





   if(mousePressed){
          x= mouseX;y=mouseY;
         if(x>recta1 &&x<recta1+90 && y>rectb1 && y<rectb1+rectSize){
          myPort.write('a');
          
        }
         if(x>recta2 &&x<recta2+90 && y>rectb1 && y<rectb1+rectSize){
          myPort.write('b');
        }
        if(x>recta3 &&x<recta3+90 && y>rectb1 && y<rectb1+rectSize){
          myPort.write('c');
        }
        if(x>recta4 &&x<recta4+90 && y>rectb1 && y<rectb1+rectSize){
          myPort.write('d');
        }
         if(x>recta5 &&x<recta5+90 && y>rectb1 && y<rectb1+rectSize){
          myPort.write('e');
        }
         if(x>recta6 &&x<recta6+90 && y>rectb1 && y<rectb1+rectSize){
          myPort.write('f');
        }
          if(x>recta7 &&x<recta7+90 && y>rectb1 && y<rectb1+rectSize){
          myPort.write('g');
        }
  }
  
  else if(keyPressed){
          if(key=='q'){
          myPort.write('a');
          
        }
         if(key=='w'){
          myPort.write('b');
        }
        if(key=='e'){
          myPort.write('c');
        }
        if(key=='r'){
          myPort.write('d');
        }
         if(key=='t'){
          myPort.write('e');
        }
         if(key=='y'){
          myPort.write('f');
        }
          if(key=='u'){
          myPort.write('g');
        }
  
  
  }

}

