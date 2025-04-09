#include <stdio.h>

//Inicia o codigo

/*Cada variavel esta representado por um numero ao final para cada uma das cartas,
    como exemplo carta1 , estado1 - carta2 , estado2, e assim por diante.*/
int main(){
    char estado1, codigo_da_carta1[50], nome_da_cidade1[50], estado2, codigo_da_carta2[50], nome_da_cidade2[50];
	int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area_km1, pib1, area_km2, pib2, den_pop1, renda_capita1, den_pop2, renda_capita2;
    float den_pop_invertida1, den_pop_invertida2, super_poder_carta1, super_poder_carta2;
	   
	//================
	//========Abaixo, inicio do codigo para primeira carta.
	//================
	
    //Imprime nome da primeira carta
    printf("\n_____Insira os dados da primeira carta: \n");
    
	//Imprime o pedido de estado da primeira carta
    printf("Estado(Apenas uma letra): \n");
   
    //Abre o pedido de insercao do estado da primeira carta
    scanf(" %c", &estado1);
   
    //Imprime o pedido de codigo da primeira carta
    printf("Codigo: \n");
    
	//Abre o pedido de insercao do codigo da primeira carta
    scanf("%s", codigo_da_carta1);
  
    //Imprime o pedido de cidade da primeira carta
    printf("Nome da cidade(apenas uma palavra): \n");
   
    //Abre o pedido de insercao do cidade da primeira carta
    scanf("%s", nome_da_cidade1);
   
    //Imprime o pedido de cidade da primeira carta
    printf("Populacao: \n");
    
	//Abre o pedido de insercao do polulacao da primeira carta
    scanf("%d", &populacao1);
   
    //Imprime o pedido de area da primeira carta
    printf("area: \n");
   
    //Abre o pedido de insercao de area da primeira carta
    scanf("%f", &area_km1);
   
    //Imprime o pedido de pib da primeira carta
    printf("PIB: \n");
   
    //Abre o pedido de insercao do pib da primeira carta
    scanf("%f", &pib1);
    
	//Imprime o pedido de numeros de pontos turisticos da primeira carta
    printf("Numero de pontos turisticos: \n");
    
	//Abre o pedido de insercao do numeros de pontos turisticos da primeira carta
    scanf("%d", &pontos_turisticos1);
    
    //Fim do questionario da primeira carta.
    
    
    //---->Inicia as contagens
    
    //Gera a conta de densidade populacional primeira carta - quociente entre populacao / area
    den_pop1 = populacao1 / area_km1;
    
   	//Conta para inverter a densidade populacional
	den_pop_invertida1 = (1 / den_pop1);
	
	//Gera a conta de renda per capita primeira carta - quociente entre pib / populacao
    renda_capita1 = pib1 / populacao1;
	
	//---->Finaliza as contagens
	
    
    //================
    //========Abaixo, inicio do codigo para segunda carta.
	//================
	
	//Imprime nome da segunda carta
    printf("\n_____Insira os dados da segunda carta: \n");
    
	//Imprime o pedido de estado da segunda carta
    printf("Estado(Apenas uma letra): \n");
    
	//Abre o pedido de insercao do estado da segunda carta
    scanf(" %c", &estado2);
    
	//Imprime o pedido de codigo da segunda carta
    printf("Codigo: \n");
    
	//Abre o pedido de insercao do codigo da segunda carta
    scanf("%s", codigo_da_carta2);
	
	//Imprime o pedido de cidade da segunda carta
    printf("Nome da cidade(apenas uma palavra): \n");
    
	//Abre o pedido de insercao do cidade da segunda carta
    scanf("%s", nome_da_cidade2);
    
	//Imprime o pedido de populacao da segunda carta
    printf("Populacao: \n");
    
	//Abre o pedido de insercao do polulacao da segunda carta
    scanf("%d", &populacao2);
    
	//Imprime o pedido de area da segunda carta
    printf("area: \n");
    
	//Abre o pedido de insercao de area da segunda carta
    scanf("%f", &area_km2);
    
	//Imprime o pedido de pib da segunda carta
    printf("PIB: \n");
    
	//Abre o pedido de insercao do pib da segunda carta
    scanf("%f", &pib2);
    
	//Imprime o pedido de numeros de pontos turisticos da segunda carta
    printf("Numero de pontos turisticos: \n");
    
    //Abre o pedido de insercao do numeros de pontos turisticos da segunda carta
    scanf("%d", &pontos_turisticos2);
    
    //Fim do questionario da segunda carta.
    
    
    //---->Inicia as contagens
    
    //Gera a conta de densidade populacional segunda carta - quociente entre populacao / area
    den_pop2 = populacao2 / area_km2;
    
   	//Conta para inverter a densidade populacional
	den_pop_invertida2 = (1 / den_pop2);
	
	//Gera a conta de renda per capita primeira carta - quociente entre pib / populacao
    renda_capita2 = pib2 / populacao2;
	
	//---->Finaliza as contagens
    
	
	//================	
	//========Inicio do retorno dos dados da primeira carta.
	//================
	
	//Imprime nome da primeira carta.
    printf("\n_____Dados da Primeira carta: \n");
	
	//Imprime estado da primeira carta.
    printf("Estado: %c\n", estado1);
	
	//Imprime codigo da primeira carta.
    printf("Codigo: %s\n", codigo_da_carta1);
	
	//Imprime cidade da primeira carta.
    printf("Cidade: %s\n", nome_da_cidade1);  
	
	//Imprime populacao da primeira carta.
    printf("Populacao: %d\n", populacao1);
	
	//Imprime area da primeira carta.
    printf("Area: %.2f\n", area_km1);
	
	//Imprime pib da primeira carta.
    printf("PIB: %.2f\n", pib1);
    
	//Imprime ponto turistico da primeira carta.
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    
    //Imprime densidade populacional primeira carta   
    printf("Densidade populacional: %.2f\n", den_pop_invertida1);
    
	//Renda per capita primeira carta
	printf("Renda per capita: %.2f\n", renda_capita1);
	
	//Fim das respostas da primeira carta.

	//================
	//========Inicio do retorno dos dados da segunda carta.
	//================
	
	//Imprime nome da segunda carta.
    printf("\n_____Dados da Segunda carta: \n");
	
	//Imprime estado da segunda carta.
    printf("Estado: %c\n", estado2);
	
	//Imprime codigo da segunda carta.
    printf("Codigo: %s\n", codigo_da_carta2);

	//Imprime cidade da segunda carta.
    printf("Cidade: %s\n", nome_da_cidade2);  

	//Imprime populacao da segunda carta.
    printf("Populacao: %d\n", populacao2);

	//Imprime area da segunda carta.
    printf("Area: %.2f\n", area_km2);

	//Imprime pib da segunda carta.
    printf("PIB: %.2f\n", pib2);
   
    //Imprime ponto turistico da segunda carta.
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
	
	//Imprime densidade populacional segunda carta     
    printf("Densidade populacional: %.2f\n", den_pop_invertida2);

	//Renda per capita segunda carta
	printf("Renda per capita: %.2f\n", renda_capita2);
	
	//==================Fim das respostas da segunda carta.
  
  
  	//===========Super poder
	
	//Soma da primeira carta
	super_poder_carta1 = populacao1 + pontos_turisticos1 + area_km1 + pib1 + renda_capita1 + den_pop_invertida1;
	
	//Soma da segunda carta
	super_poder_carta2 = populacao2 + pontos_turisticos2 + area_km2 + pib2 + renda_capita2 + den_pop_invertida2; 
  
  
   	//================
	//========Inicio da comparacao entre as duas cartas.
	//================
	
	//Compara a populacao da primeira carta com a segunda
	//Logo gera a carta vencedora, primeira ou segunda
	if (populacao1 > populacao2){
		printf("\nPrimeira carta venceu em populacao!\n");
		printf("Pontuacao vencedora: %d\n", populacao1);
	}else{
		printf("\nSegunda carta venceu em populacao!\n");
		printf("Pontuacao vencedora: %d\n", populacao2);
	}
	//Compara a area em quilometros da primeira carta com a segunda
	//Logo gera a carta vencedora, primeira ou segunda
	if (area_km1 > area_km2){
		printf("\nPrimeira carta venceu em area!\n");
		printf("Pontuacao vencedora: %.2f\n", area_km1);
	}else{
		printf("\nSegunda carta venceu em area!\n");
		printf("Pontuacao vencedora: %.2f\n", area_km2);
	}
	//Compara o pib da primeira carta com a segunda
	//Logo gera a carta vencedora, primeira ou segunda
	if (pib1 > pib2){
		printf("\nPrimeira carta venceu em pib!\n");
		printf("Pontuacao vencedora: %.2f\n", pib1);
	}else{
		printf("\nSegunda carta venceu em pib!\n");
		printf("Pontuacao vencedora: %.2f\n", pib2);
	}
	//Compara a quantidade de pontos turisticos da primeira carta com a segunda
	//Logo gera a carta vencedora, primeira ou segunda
	if (pontos_turisticos1 > pontos_turisticos2){
		printf("\nPrimeira carta venceu em pontos turisticos!\n");
		printf("Pontuacao vencedora: %d\n", pontos_turisticos1);
	}else{
		printf("\nSegunda carta venceu em pontos turisticos!\n");
		printf("Pontuacao vencedora: %d\n", pontos_turisticos2);
	}
	//Compara a menor densidade populacional da primeira carta com a segunda
	//Logo gera a carta vencedora, primeira ou segunda
	if (den_pop_invertida1 < den_pop_invertida2){
		printf("\nPrimeira carta venceu em menor densidade populacional!\n");
		printf("Pontuacao vencedora: %.2f\n", den_pop_invertida1);
	}else{
		printf("\nSegunda carta venceu em menor densidade populacional!\n");
		printf("Pontuacao vencedora: %.2f\n", den_pop_invertida2);
	}
	//Compara a renda per capita da primeira carta com a segunda
	//Logo gera a carta vencedora, primeira ou segunda
	if (renda_capita1 > renda_capita2){
		printf("\nPrimeira carta venceu em renda per capita!\n");
		printf("Pontuacao vencedora: %.2f\n", renda_capita1);
	}else{
		printf("\nSegunda carta venceu em renda per capita!\n");
		printf("Pontuacao vencedora: %.2f\n", renda_capita2);
	}
	//Compara o super poder da primeira carta com a segunda
	//Logo gera a carta vencedora, primeira ou segunda
	if (super_poder_carta1 > super_poder_carta2){
		printf("\nPrimeira carta venceu em super poder!\n");
		printf("Pontuacao vencedora: %.0f\n", super_poder_carta1);
	}else{
		printf("\nSegunda carta venceu em super poder!\n");
		printf("Pontuacao vencedora: %.0f\n", super_poder_carta2);
	}
	
	
   //Finaliza o codigo
   return 0;
   
     
}