#include <stdio.h>
#include <stdlib.h>

int calculo(int hi, int mi, int ht, int mt)
{
	int mini, mint;
	mini = hi * 60 + mi;
	mint = ht * 60 + mt;
	
	if(mini > mint)
	{
		mint = mint + 24 * 60;
	}
	
	return mint - mini;
}
main()
{
	int horai, minutoi, horaf, minutof;
	
	printf("Digite o valor em hora e minuto de inicio: ");
	scanf("%i %i", &horai, &minutoi);
	printf("Digite o valor em hora e minuto de final: ");
	scanf("%i %i", &horaf, &minutof);
	
	printf("Tempo total de jogo: %i minuto(s) de jogo", calculo(horai,minutoi,horaf,minutof));
	system("pause");
}
