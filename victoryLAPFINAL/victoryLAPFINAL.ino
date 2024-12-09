void setup() {
  pinMode (7,OUTPUT); 
 pinMode (5,OUTPUT); 
 pinMode (8,OUTPUT); 
 pinMode (3,OUTPUT); 
 pinMode (6,OUTPUT); 
}

void loop() {
 forward(100); 
  delay(1500); 
  leftforward(100); 
  delay(1500); 
  forward(100); 
  delay(1500); 
  leftforward(90); 
  delay(2000); 
  forward(100); 
  delay(1500); 
  leftforward(100); 
  delay(1500); 
  forward(100); 
  delay(1500); 
  leftforward(100); 
  delay(1500);

}
void forward(int x) { 

digitalWrite (7,1); 
analogWrite (5,x); 
digitalWrite (8,1); 
analogWrite (6,x); 
digitalWrite (3,1); 
} 

void stop () { 
digitalWrite (7,0); 
analogWrite (5,0); 
digitalWrite (8,0); 
analogWrite (6,0); 
digitalWrite (3,1); 
} 
 void backwards (int x){ 
digitalWrite (7,0); 
analogWrite (5,x); 
digitalWrite (8,0); 
analogWrite (6,x); 
digitalWrite (3,1);  
} 
 void left (int x){ 
digitalWrite (7,1); 
analogWrite (5,x); 
digitalWrite (8,0); 
analogWrite (6,x); 
digitalWrite (3,1);  

} 

void right (int x){ 
digitalWrite (7,0); 
analogWrite (5,x); 
digitalWrite (8,1); 
analogWrite (6,x); 
digitalWrite (3,1);  
} 

void leftforward (int x){ 
digitalWrite (7,1); 
analogWrite (5,x); 
digitalWrite (8,1); 
analogWrite (6,x/2); 
digitalWrite (3,1);  
} 

void leftbackwards (int x){ 
digitalWrite (7,0); 
analogWrite (5,x); 
digitalWrite (8,0); 
analogWrite (6,x/2); 
digitalWrite (3,1);  
} 

void rightforward (int x){ 
digitalWrite (7,1); 
analogWrite (5,x/2); 
digitalWrite (8,1); 
analogWrite (6,x); 
digitalWrite (3,1);  
} 

void rightbackwards (int x){ 
digitalWrite (7,0); 
analogWrite (5,x/2); 
digitalWrite (8,0); 
analogWrite (6,x); 
digitalWrite (3,1);  
} 

 

 

 




