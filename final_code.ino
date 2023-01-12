int led,fl,total,total1;
int f1,f2,f3,f4,f5,f6,f7,f8,f9,f10,f21,c1,c2,c3,c4;
int a,b,c,d,e,f,i,g,h,k;
int f11,f12,f13,f14,f15,f16,f17,f18,f19,f20,c5,c6,c7,c8;
int l,m,n,o,p,q,r,w,x,z;
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);
#include <Servo.h>

Servo myservo; 
void setup() {
  // put your setup code here, to run once:
  for (led = 2; led <= 19; led += 1) { 
    // in steps of 1 degree
   pinMode(led,OUTPUT);             
    delay(15);                       
  }
   for (fl = 22; fl <= 49; fl += 1) { 
    // in steps of 1 degree
   pinMode(fl,INPUT);             
    delay(15);                       
  }
  pinMode(52,INPUT);
  pinMode(50,OUTPUT); 
  pinMode(51,OUTPUT); 
   
  Serial.begin(9600);
    lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();
   lcd.setCursor(0, 0);
 lcd.print("welcome to crage"); 
   myservo.attach(44); 
}

void loop() {
  f1=digitalRead(22);
 f2=digitalRead(23);
 f3=digitalRead(24);
 f4=digitalRead(25);
 f5=digitalRead(26);
 f6=digitalRead(27);
 f7=digitalRead(28);
 f8=digitalRead(29);
 f9=digitalRead(30);
 f10=digitalRead(31);
 f21=digitalRead(52);
 //c1=digitalRead(32);
 //c2=digitalRead(33);
 //c3=digitalRead(34);
 //c4=digitalRead(35);
c1=map(digitalRead(32),1,0,0,1);
 c2=map(digitalRead(33),1,0,0,1);
 c3=map(digitalRead(34),1,0,0,1);
 c4=map(digitalRead(35),1,0,0,1);
 f11=digitalRead(36);
 f12=digitalRead(37);
 f13=digitalRead(38);
 f14=digitalRead(39);
 f15=digitalRead(40);
 f16=digitalRead(41);
 f17=digitalRead(42);
 f18=digitalRead(43);
 f19=digitalRead(53);
 f20=digitalRead(45);
 c5=map(digitalRead(46),1,0,0,1);
 c6=map(digitalRead(47),1,0,0,1);
 c7=map(digitalRead(48),1,0,0,1);
 c8=map(digitalRead(49),1,0,0,1);

 total1=c5+c6+c7+c8;
 Serial.print(total);
 Serial.println(total1);
 total=c1+c2+c3+c4;
 enter();
 A();
 B();
}
 void A()
 {
  if (total < 4 and c1==0   )
{
  if(g==0)
  park1();
  if(g==1 and c1==0 and c2==0)
  park1to2();
  if(g==1 and c2==1 and c3==0 )
 park1to3();
   if(g==1 and c2==1 and c3==1 and c4==0 )
 park44();
  if(g==2  and c3==0 )
 park1to3();
 if(g==2  and c3==1 and c4==0 )
 park44();
 if(g==3 and c4==0)
  park1to4(); 
}
 

else if (total < 4 and c2==0 )
{
  if(c1==1 and h==0) 
  park2();
   if(c1==1 and h==1 and c3==0)
park2to3();
   if(c1==1 and h==1 and c3==1)
park2to44();
 if(c1==1 and h==2 )
  park2to4();
}
else if (total < 4 and c3==0)
{
 
  if(  k==0)
  park3();
  if(  k==1 and c4==0)
  park3to4();
  
}
else if (total < 4 and c4==0 )
{
  park4();
  
}
 
 }
void B()
 {
  if (total1 < 4 and c5==0   )
{
 if(w==0)
  park5();
 if(w==1 and c5==0 and c6==0)
park5to6();
 if(w==1 and c6==1 and c7==0 )
 park5to7();
  if(w==1 and c6==1 and c7==1 and c8==0 )
 park88();
  if(w==2  and c7==0 )
park5to7();
if(w==2  and c7==1 and c8==0 )
 park88();
if(w==3 and c8==0)
  park5to8(); 
}
 

else if (total1 < 4 and c6==0 )
{
  if(c5==1 and x==0) 
  park6();
  if(c5==1 and x==1 and c7==0)
park6to7();
if(c5==1 and x==1 and c7==1)
park6to88();
 if(c5==1 and x==2)
  park6to8();
}
else if (total1 < 4 and c7==0)
{
 
  if(  z==0)
  park7();
 if(  z==1 and c8==0)
  park7to8();
  
}
else if (total1 < 4 and c8==0 )
{
  park8();
  
}
 }
void park1()
{
  
  if(f1==0 and g==0)
  {
    a=1;
  }
  if(a==1)
  {
    digitalWrite(12,1);
    digitalWrite(13,1);
    
  }
  if(f2==0)
  {
    a=0;
    
  }
   if(a==0)
  {
    digitalWrite(12,0);
    digitalWrite(13,0);
    
  }
  if (f3==0)
  {
    g=1;
    a=1;
  }
  
}
void park2()
{
 if(f1==0)
  {
    a=1;
  }
  if(a==1)
  {
    digitalWrite(12,1);
    digitalWrite(15,1);
    
  }
  if(f3==0)
  {
    a=0;
  }
   if(a==0)
  {
    digitalWrite(12,0);
    
    
  }
  if(f4==0)
  {
    b=0;
  }
  else
  {
    b=1;
  }
   if(b==0)
  {
    digitalWrite(15,0);
    
    
  }
  if(f5==0)
  {
    h=1;
    a=1;
  }
}

void park3()
{
  if(f1==0)
  {
    a=1;
  }
  if(a==1)
  {
    digitalWrite(12,1);
    digitalWrite(14,1);
    digitalWrite(16,1);
    digitalWrite(17,1);
    digitalWrite(18,1);
    digitalWrite(19,1);
    
  }
  if(f3==0)
  {
    a=0;
  }
   if(a==0)
  {
    digitalWrite(12,0);
    
    
  }
  if(f5==0)
  {
    b=0;
  }
  else
  {
    b=1;
  }
   if(b==0)
  {
    digitalWrite(14,0);
    
    
  }
  if(f6==0)
  {
    c=0;
  }
  else
  {
    c=1;
  }
   if(c==0)
  {
    digitalWrite(16,0);
    
    
  }
  if(f7==0)
  {
    d=0;
  }
  else
  {
    d=1;
  }
   if(d==0)
  {
    digitalWrite(17,0);
    
    
  }
  
  if(f8==0)
  {
    e=0;
  }
  else
  {
    e=1;
  }
   if(e==0)
  {
    digitalWrite(18,0);
    digitalWrite(19,0);
    k=0;
    
  } 
   if(f9==0)
  {
    k=1;
  }
}
void park4()
{
 
  if(f1==0)
  {
    a=1;
  }
  if(a==1)
  {
    digitalWrite(12,1);
    digitalWrite(14,1);
    digitalWrite(16,1);
    digitalWrite(17,1);
    digitalWrite(18,1);
    digitalWrite(50,1);
    
  }
  if(f3==0)
  {
    a=0;
  }
   if(a==0)
  {
    digitalWrite(12,0);
    
    
  }
  if(f5==0)
  {
    b=0;
  }
  else
  {
    b=1;
  }
   if(b==0)
  {
    digitalWrite(14,0);
    
    
  }
  if(f6==0)
  {
    c=0;
  }
  else
  {
    c=1;
  }
   if(c==0)
  {
    digitalWrite(16,0);
    
    
  }
  if(f7==0)
  {
    d=0;
  }
  else
  {
    d=1;
  }
   if(d==0)
  {
    digitalWrite(17,0);
    
    
  }
  
  if(f9==0)
  {
    e=0;
  }
  else
  {
    e=1;
  }
   if(e==0)
  {
    digitalWrite(18,0);
 
    
    
  }
  if(f10==0)
  {
    e=0;
  }
  else
  {
    e=1;
  }
   if(e==0)
  {
    digitalWrite(50,0);
 
    
    
  }

}
void park1to2()
{
  
    digitalWrite(15,1);
    digitalWrite(13,0);
  
  if(f3==0)
  {
    a=0;
  }
   if(a==0)
  {
    digitalWrite(12,0);
    
    
  }
  if(f4==0)
  {
    b=0;
  }
  else
  {
    b=1;
  }
   if(b==0)
  {
    digitalWrite(15,0);
    g=0;
    
  }

if(f5==0)
{
g=2;
a=1;
}}
void park1to3()
{
  
    digitalWrite(15,0);
    digitalWrite(13,0);
 
  if(a==1)
  {
    digitalWrite(16,1);
    digitalWrite(17,1);
    digitalWrite(18,1);
    digitalWrite(19,1);
    //digitalWrite(14,1);
    
  }
 
  if(f6==0)
  {
    c=0;
    a=0;
  }
  else
  {
    c=1;
  }
   if(c==0)
  {
    digitalWrite(16,0);
   // digitalWrite(14,0);
    
  }
  if(f7==0)
  {
    d=0;
  }
  else
  {
    d=1;
  }
   if(d==0)
  {
    digitalWrite(17,0);
    
    
  }
  
  if(f8==0)
  {
    e=0;
  }
  else
  {
    e=1;
  }
   if(e==0)
  {
    digitalWrite(18,0);
    digitalWrite(19,0);
    g=0;
    
  } 
  if(f9==0)
  g=3; 
}
void park1to4()
{
  digitalWrite(18,0);
    digitalWrite(19,0);
    digitalWrite(50,1);
    if(f10==0 and g==3)
    {
      digitalWrite(50,0); 
      g=0;
    }
}
void park44()
{

  
    digitalWrite(15,0);
    digitalWrite(13,0);
 
  if(a==1)
  {
    digitalWrite(16,1);
    digitalWrite(17,1);
    digitalWrite(18,1);
    digitalWrite(50,1);
    
  }
 
  if(f6==0)
  {
    c=0;
    a=0;
  }
  else
  {
    c=1;
  }
   if(c==0)
  {
    digitalWrite(16,0);
    
    
  }
  if(f7==0)
  {
    d=0;
  }
  else
  {
    d=1;
  }
   if(d==0)
  {
    digitalWrite(17,0);
    
    
  }
  
  if(f9==0)
  {
    e=0;
  }
  else
  {
    e=1;
  }
   if(e==0)
  {
    digitalWrite(18,0);
   
   
    
  } 
  if(f10==0)
  {
  digitalWrite(50,0);
  g=0;
  }  
}
void park2to3()
{
 digitalWrite(15,0);
    digitalWrite(13,0);
 
  if(a==1)
  {
    digitalWrite(16,1);
    digitalWrite(17,1);
    digitalWrite(18,1);
    digitalWrite(19,1);
    
  }
 
  if(f6==0)
  {
    c=0;
    a=0;
  }
  else
  {
    c=1;
  }
   if(c==0)
  {
    digitalWrite(16,0);
    
    
  }
  if(f7==0)
  {
    d=0;
  }
  else
  {
    d=1;
  }
   if(d==0)
  {
    digitalWrite(17,0);
    
    
  }
  
  if(f8==0)
  {
    e=0;
  }
  else
  {
    e=1;
  }
   if(e==0)
  {
    digitalWrite(18,0);
    digitalWrite(19,0);
    h=0;
    
  } 
  if(f9==0)
  //g=3;
  h=2;  
}
void park2to44()
{
 digitalWrite(15,0);
    digitalWrite(13,0);
 
  if(a==1)
  {
    digitalWrite(16,1);
    digitalWrite(17,1);
    digitalWrite(18,1);
    digitalWrite(50,1);
    
  }
 
  if(f6==0)
  {
    c=0;
    a=0;
  }
  else
  {
    c=1;
  }
   if(c==0)
  {
    digitalWrite(16,0);
    
    
  }
  if(f7==0)
  {
    d=0;
  }
  else
  {
    d=1;
  }
   if(d==0)
  {
    digitalWrite(17,0);
    
    
  }
  
  if(f9==0)
  {
    e=0;
  }
  else
  {
    e=1;
  }
   if(e==0)
  {
    digitalWrite(18,0);
    //digitalWrite(19,0);
   
    
  } 
  if(f10==0)
  {
  digitalWrite(50,0);
 
  h=0;  
}}
void park2to4()
{

 digitalWrite(18,0);
    digitalWrite(19,0);
    digitalWrite(50,1);
    if(f10==0 and h==2)
    {
      digitalWrite(50,0); 
      g=0;
      h=0;
    }
   
}
void park3to4()
{
   digitalWrite(18,0);
    digitalWrite(19,0);
    digitalWrite(50,1);
    if(f10==0 and k==1)
    {
      digitalWrite(50,0); 
      k=0;
     
    }
}
void enter()
{
  if(f21==0 and total<4 and total1==4)
  {
   myservo.write(0); 
    
  lcd.setCursor(0, 0);
 lcd.print("go right"); 
 lcd.setCursor(0, 1);
  lcd.print("R=");
  lcd.setCursor(2, 1);
  lcd.print(4-total);
   lcd.setCursor(4, 1);
   lcd.print("L=");
  lcd.setCursor(6, 1);
  lcd.print(4-total1);
delay(500);
lcd.clear();
delay(500);
  
  }
  if(f21==0 and total==4 and total1<3)
  {
    myservo.write(0);
   lcd.setCursor(0, 0);
 lcd.print("go left"); 
 lcd.setCursor(0, 1);
  lcd.print("R=");
  lcd.setCursor(2, 1);
  lcd.print(4-total);
   lcd.setCursor(4, 1);
   lcd.print("L=");
  lcd.setCursor(6, 1);
  lcd.print(4-total1);
delay(500);
lcd.clear();
delay(500);
  }
  if(f21==0 and total<4 and total1<4)
  {
   myservo.write(0); 
   lcd.setCursor(0, 0);
 lcd.print("go right or left");
 lcd.setCursor(0, 1);
 lcd.print("R=");
  lcd.setCursor(2, 1);
  lcd.print(4-total);
  lcd.setCursor(4, 1);
   lcd.print("L=");
  lcd.setCursor(6, 1);
  lcd.print(4-total1);

  }
  if(f21==1 )
  {
   myservo.write(90); 
   lcd.setCursor(0, 0);
 lcd.print("welcome to garage"); 

 lcd.setCursor(0, 1);
 lcd.print("R=");
  lcd.setCursor(2, 1);
  lcd.print(4-total);
   lcd.setCursor(4, 1);
   lcd.print("L=");
  lcd.setCursor(6, 1);
  lcd.print(4-total1);
delay(500);
lcd.clear();
delay(500);

  }
   if(f21==0 and total==4 and total1==4 )
  {
   myservo.write(90); 
   lcd.setCursor(0, 0);
 lcd.print("welcome to garage"); 
 lcd.setCursor(0, 1);
 lcd.print("parking is full ");
}}
void park5()
{
  
  if(f11==0 and w==0 )
  {
    l=1;
  }
  if(l==1)
  {
    digitalWrite(2,1);
    digitalWrite(3,1);
    
  }
  if(f12==0)
  {
    l=0;
    
  }
   if(l==0)
  {
    digitalWrite(2,0);
    digitalWrite(3,0);
    
  }
  if (f13==0)
  {
    w=1;
    l=1;
  }
  
}
void park6()
{
 if(f11==0)
  {
    l=1;
  }
  if(l==1)
  {
    digitalWrite(2,1);
    digitalWrite(5,1);
    
  }
  if(f13==0)
  {
    l=0;
  }
   if(l==0)
  {
    digitalWrite(2,0);
    
    
  }
  if(f14==0)
  {
    m=0;
  }
  else
  {
    m=1;
  }
   if(m==0)
  {
    digitalWrite(5,0);
    
    
  }
  if(f15==0)
  {
    x=1;
    l=1;
  }
}

void park7()
{
  if(f11==0)
  {
    l=1;
  }
  if(l==1)
  {
    digitalWrite(2,1);
    digitalWrite(4,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    
  }
  if(f13==0)
  {
    l=0;
  }
   if(l==0)
  {
    digitalWrite(2,0);
    
    
  }
  if(f15==0)
  {
    m=0;
  }
  else
  {
    m=1;
  }
   if(m==0)
  {
    digitalWrite(4,0);
    
    
  }
  if(f16==0)
  {
    n=0;
  }
  else
  {
    n=1;
  }
   if(n==0)
  {
    digitalWrite(6,0);
    
    
  }
  if(f17==0)
  {
    o=0;
  }
  else
  {
    o=1;
  }
   if(o==0)
  {
    digitalWrite(7,0);
    
    
  }
  
  if(f18==0)
  {
    p=0;
  }
  else
  {
    p=1;
  }
   if(p==0)
  {
    digitalWrite(8,0);
    digitalWrite(9,0);
    z=0;
    
  } 
   if(f19==0)
  {
    z=1;
  }
}
void park8()
{
 
  if(f11==0)
  {
    l=1;
  }
  if(l==1)
  {
    digitalWrite(2,1);
    digitalWrite(4,1);
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(10,1);
    
  }
  if(f13==0)
  {
    l=0;
  }
   if(l==0)
  {
    digitalWrite(2,0);
    
    
  }
  if(f15==0)
  {
    m=0;
  }
  else
  {
    m=1;
  }
   if(m==0)
  {
    digitalWrite(4,0);
    
    
  }
  if(f16==0)
  {
    n=0;
  }
  else
  {
    n=1;
  }
   if(n==0)
  {
    digitalWrite(6,0);
    
    
  }
  if(f17==0)
  {
    o=0;
  }
  else
  {
    o=1;
  }
   if(o==0)
  {
    digitalWrite(7,0);
    
    
  }
  
  if(f19==0)
  {
    p=0;
  }
  else
  {
    p=1;
  }
   if(p==0)
  {
    digitalWrite(8,0);
 
    
    
  }
  if(f20==0)
  {
    p=0;
  }
  else
  {
    p=1;
  }
   if(p==0)
  {
    digitalWrite(10,0);
 
    
    
  }

}
void park5to6()
{
  
    digitalWrite(5,1);
    digitalWrite(3,0);
  
  if(f13==0)
  {
    l=0;
  }
   if(l==0)
  {
    digitalWrite(2,0);
    
    
  }
  if(f14==0)
  {
    m=0;
  }
  else
  {
    m=1;
  }
   if(m==0)
  {
    digitalWrite(15,0);
    w=0;
    
  }

if(f15==0)
{
w=2;
l=1;
}}
void park5to7()
{
  
    digitalWrite(5,0);
    digitalWrite(3,0);
 
  if(l==1)
  {
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    //digitalWrite(4,1);
    
  }
 
  if(f16==0)
  {
    n=0;
    l=0;
  }
  else
  {
    n=1;
  }
   if(n==0)
  {
    digitalWrite(6,0);
   // digitalWrite(14,0);
    
  }
  if(f17==0)
  {
    o=0;
  }
  else
  {
    o=1;
  }
   if(o==0)
  {
    digitalWrite(7,0);
    
    
  }
  
  if(f18==0)
  {
    p=0;
  }
  else
  {
    p=1;
  }
   if(p==0)
  {
    digitalWrite(8,0);
    digitalWrite(9,0);
    w=0;
    
  } 
  if(f19==0)
  w=3; 
}
void park5to8()
{
  digitalWrite(8,0);
    digitalWrite(9,0);
    digitalWrite(10,1);
    if(f20==0 and w==3)
    {
      digitalWrite(10,0); 
      w=0;
    }
}
void park88()
{

  
    digitalWrite(5,0);
    digitalWrite(3,0);
 
  if(l==1)
  {
    digitalWrite(16,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(10,1);
    
  }
 
  if(f16==0)
  {
    n=0;
    l=0;
  }
  else
  {
    n=1;
  }
   if(n==0)
  {
    digitalWrite(6,0);
    
    
  }
  if(f17==0)
  {
    o=0;
  }
  else
  {
    o=1;
  }
   if(o==0)
  {
    digitalWrite(7,0);
    
    
  }
  
  if(f19==0)
  {
    q=0;
  }
  else
  {
    q=1;
  }
   if(q==0)
  {
    digitalWrite(8,0);
   
   
    
  } 
  if(f20==0)
  {
  digitalWrite(10,0);
  w=0;
  }  
}
void park6to7()
{
 digitalWrite(5,0);
    digitalWrite(3,0);
 
  if(l==1)
  {
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    
  }
 
  if(f16==0)
  {
    n=0;
    l=0;
  }
  else
  {
    n=1;
  }
   if(n==0)
  {
    digitalWrite(6,0);
    
    
  }
  if(f17==0)
  {
    o=0;
  }
  else
  {
    o=1;
  }
   if(o==0)
  {
    digitalWrite(7,0);
    
    
  }
  
  if(f18==0)
  {
    p=0;
  }
  else
  {
    p=1;
  }
   if(p==0)
  {
    digitalWrite(8,0);
    digitalWrite(9,0);
    x=0;
    
  } 
  if(f19==0)
  //w=3;
  x=2;  
}
void park6to8()
{

 digitalWrite(8,0);
    digitalWrite(19,0);
    digitalWrite(10,1);
    if(f20==0 and x==2)
    {
      digitalWrite(10,0); 
      w=0;
      x=0;
    }
   
}
void park7to8()
{
   digitalWrite(8,0);
    digitalWrite(9,0);
    digitalWrite(10,1);
    if(f20==0 and z==1)
    {
      digitalWrite(10,0); 
      z=0;
     
    }
}
void park6to88()
{
 digitalWrite(5,0);
    digitalWrite(3,0);
 
  if(l==1)
  {
    digitalWrite(6,1);
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(10,1);
    
  }
 
  if(f16==0)
  {
    n=0;
    l=0;
  }
  else
  {
    n=1;
  }
   if(n==0)
  {
    digitalWrite(6,0);
    
    
  }
  if(f17==0)
  {
    o=0;
  }
  else
  {
    o=1;
  }
   if(o==0)
  {
    digitalWrite(7,0);
    
    
  }
  
  if(f19==0)
  {
    p=0;
  }
  else
  {
    p=1;
  }
   if(p==0)
  {
    digitalWrite(8,0);
    //digitalWrite(19,0);
   
    
  } 
  if(f20==0)
  {
  digitalWrite(10,0);
 
  x=0;  
}}
