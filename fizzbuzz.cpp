void setup()
{
	pindMode(13, OUTPUT);
	pindMode(9, OUTPUT);
	pindMode(6, OUTPUT);
	pindMode(2, OUTPUT);
}

void loop()
{
	int x = 3;
	int y = 5;
	int xy = x + y;
	int MaxValue = 100;
	int i = 1;

	while(i < MaxValue)
	{
		if((i % xy) == 0) //Verde = Divide por X e Y (FizzBuzz)
		{
			digitalWrite(13, HIGH);
			delay(100);
			digitalWrite(13, LOW);
			delay(100);
		}
		else if((i % x) == 0) //Laranja = Divide só por X (Fizz)
		{
			digitalWrite(9, HIGH);
			delay(100);
			digitalWrite(9, LOW);
			delay(100);
		}
		else if((i % y) == 0) //Azul = Divide só por Y (Buzz)
		{
			digitalWrite(6, HIGH);
			delay(100);
			digitalWrite(6, LOW);
			delay(100);
		}
		else //Vermelho = Não divide por nenhum (Próprio número)
		{
			digitalWrite(2, HIGH);
			delay(100);
			digitalWrite(2, LOW);
			delay(100);
		}
	
		i++;
	}
}