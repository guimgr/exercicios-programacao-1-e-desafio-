#include <stdio.h>
#include <math.h>  
int main() {

    int senha, senhainv, digverif, soma, multiptotal, temp, tempinv;
    int centena, dezena, unidade;

    printf("Digite a senha de 3 digitos:");
    scanf("%d", &senha);

	temp = senha;
	
	centena = (temp%10*100);
	dezena = ((temp/10)%10) * 10;
	unidade = (temp/100);
	
	senhainv = centena + dezena + unidade;

    tempinv = senhainv
    
	soma = senha + senhainv;
	
	
char n1, n2, n3, n4;
    
  if(soma =<999){
  	do{ 
	n1 = (soma/100)	  
    n2 = (soma/10)%10
    n3 = soma %10
		  
		  
	  }
	  
	  
	  
	  
  }
    return 0;
} 
