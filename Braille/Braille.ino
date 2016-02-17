

void setup() {
  pinMode(2, OUTPUT);//1 1 
  pinMode(3, OUTPUT);//1 2 
  pinMode(4, OUTPUT);//2 1
  pinMode(5, OUTPUT);//2 2
  pinMode(6, OUTPUT);//3 1
  pinMode(7, OUTPUT);//3 2
}

void loop() {

           H(1000);
           i(1000);
}

void A(int t)
{
  digitalWrite(2,HIGH);
  delay(t);
  digitalWrite(2,LOW);
}

void B(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
}

void C(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}

void D(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
}

void E(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
}

void f(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}

void G(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
}

void H(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
}

void i(int t)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}

void J(int t)
{
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
}

void K(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(6,LOW);
}

void I(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
}

void M(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
}

void N(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
} 

void O(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}

void P(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
} 

void Q(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
} 

void R(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);    
}

void S(int t)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
}

void T(int t)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}

void U(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void V(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
}

void W(int t)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
}

void X(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void Y(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void Z(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
}

void one(int t)
{
  digitalWrite(2,HIGH);
  delay(t);
  digitalWrite(2,LOW);
}

void two(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
}

void three(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}

void four(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
}

void five(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
}

void six(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}

void seven(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW); 
}

void eight(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
}

void nine(int t)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}

void zero(int t)
{
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
}

void exclamation(int t)
{
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}



