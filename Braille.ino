

void setup() {
  pinMode(2, OUTPUT);//1 1 
  pinMode(3, OUTPUT);//1 2 
  pinMode(4, OUTPUT);//2 1
  pinMode(5, OUTPUT);//2 2
  pinMode(6, OUTPUT);//3 1
  pinMode(7, OUTPUT);//3 2
}

void loop() {

           A(1000);
}

A(int t)
{
  digitalWrite(2,HIGH);
  delay(t);
  digitalWrite(2,LOW);
}

B(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
}

C(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
}

D(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
}

E(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
}

F(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}

G(int t)
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

H(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
}

I(int t)
{
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
}

J(int t)
{
  digitalWrite(3,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  delay(t);
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
}

K(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(6,LOW);
}

I(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
}

M(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(6,LOW);
}

N(int t)
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

O(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
}

P(int t)
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

Q(int t)
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

R(int t)
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

S(int t)
{
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(6,HIGH);
  delay(t);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
}



