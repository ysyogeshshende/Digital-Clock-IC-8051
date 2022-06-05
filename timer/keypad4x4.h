sbit r1=P3^0;
sbit r2=P3^1;
sbit r3=P3^2;
sbit r4=P3^3;
sbit c1=P3^4;
sbit c2=P3^5;
sbit c3=P3^6;
sbit c4=P3^7;
unsigned char a,b,c,d,e,f,g,h,i,j,k,l,m,u,o,t,y,n;

unsigned char key()
{
	r1=1;r2=1; r3=1;r4=1;
	c1=1;c2=1; c3=1;c4=1;
	
	r1=0;
	
	if(c1==0)	{	delay(1);	while(c1==0);	return a='7';	}	/////0//////
	if(c2==0)	{	delay(1);	while(c2==0);	return b='8';	}	/////1/////
	if(c3==0)	{	delay(1);	while(c3==0);	return d='9';	}
	if(c4==0)	{	delay(1);	while(c4==0);	return e='/';	}
	
	r1=1;r2=0;

	if(c1==0)	{	delay(1);	while(c1==0);	return f='4';	}	/////0//////
	if(c2==0)	{	delay(1);	while(c2==0);	return h='5';	}	/////1/////
	if(c3==0)	{	delay(1);	while(c3==0);	return i='6';	}
	if(c4==0)	{	delay(1);	while(c4==0);	return j='*';	}
	
	r1=1;r2=1;r3=0;

	
	if(c1==0)	{	delay(1);	while(c1==0);	return k='1';	}	/////0//////
	if(c2==0)	{	delay(1);	while(c2==0);	return l='2';	}	/////1/////
	if(c3==0)	{	delay(1);	while(c3==0);	return m='3';	}
	if(c4==0)	{	delay(1);	while(c4==0);	return n='-';	}

	r1=1;r2=1;r3=1;r4=0;
	if(c1==0)	{	delay(1);	while(c1==0);	return t='C';	}	/////0//////
	if(c2==0)	{	delay(1);	while(c2==0);	return y='0';	}	/////1/////
	if(c3==0)	{	delay(1);	while(c3==0);	return u='=';	}
	if(c4==0)	{	delay(1);	while(c4==0);	return o='+';	}


	return 0;

}

