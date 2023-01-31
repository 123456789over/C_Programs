#include <stdio.h>
#define l 24 
#define c 27


int main(void) {
	int i,j;

	int janeiro[l][c] = {
		{40,40,36,36,40,36,36,40,40,40,40,36,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,40,40,40,73,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,36,40,40,40,40,40,36,36,40,40,40,36,40,40,40,40,40,40,40,40,36,40,40,40,40},
		{40,40,40,40,40,40,40,36,36,40,36,36,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,36,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,40,36,40,40,40,40,41,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,41,40,36,36,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,36,40,40,40,40,36,36,36,40,36,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,36,40,36,40,40,36,40,40,40,40,40,40,40,36,36,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,40,40,36,40,40,36,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{36,40,40,40,36,40,40,36,36,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{36,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{36,36,40,40,36,40,40,40,40,40,36,40,40,40,36,36,36,36,36,36,36,36,36,40,40,40,40},
		{40,36,40,40,40,40,40,40,40,4,36,36,36,36,36,36,36,40,40,40,40,36,36,40,40,40,40},
		{40,36,36,40,40,40,40,40,40,36,36,36,36,36,36,40,40,40,40,40,40,36,36,40,40,40,40},
		{36,36,36,40,40,40,36,40,40,40,36,36,36,36,36,40,40,40,36,36,40,40,36,40,40,40,40},
		{36,36,40,40,40,36,40,40,36,36,40,40,36,36,36,40,40,36,36,36,40,40,36,40,40,40,40},
		{36,36,36,40,40,36,40,40,40,40,36,36,40,40,40,36,36,36,36,36,36,36,36,40,40,40,40},
		{40,36,36,40,40,36,40,40,36,36,36,36,40,40,40,36,36,36,40,40,36,36,40,40,40,40,40},
		{40,40,36,36,40,40,36,36,36,36,36,36,40,40,40,40,36,36,36,40,36,36,40,40,40,40,40},
		{40,40,40,40,40,40,36,36,40,36,36,36,36,36,36,36,36,36,40,40,40,40,40,40,40,40,40},
		{40,73,41,36,40,40,40,40,40,36,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40},
		{40,40,40,36,40,40,40,40,40,40,40,40,36,36,36,36,40,40,40,40,40,40,40,40,40,40,40}
	};

	int fevereiro[l][c]={
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{4,4,4,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36,36},
		{40,40,40,40,40,40,36,36,36,36,36,36,36,36,36,40,40,40,36,36,36,36,36,36,36,36,36},
		{109,109,109,109,109,109,72,40,72,72,72,72,40,40,40,73,105,73,40,36,36,40,40,40,36,36,36},
		{141,141,141,141,141,109,72,72,72,72,72,72,40,40,40,73,109,73,40,36,36,40,40,40,36,36,36},
		{109,109,109,109,109,109,72,40,72,72,72,72,40,40,40,73,109,73,40,36,36,40,40,40,36,36,36},
		{109,109,109,141,141,109,72,40,72,72,72,72,40,36,40,109,109,109,40,40,40,36,36,36,36,36,36},
		{109,109,109,141,141,141,72,40,72,72,72,72,40,36,40,109,109,109,40,40,40,36,36,36,36,36,36},
		{109,109,109,109,141,109,72,40,72,72,72,72,40,36,40,109,109,109,40,40,40,36,36,36,36,36,36},
		{72,72,72,72,72,72,40,40,40,73,109,73,40,36,40,72,72,72,40,40,40,36,36,36,36,36,36},
		{40,40,40,72,72,72,40,36,40,73,109,73,40,36,36,72,72,72,40,40,40,36,36,36,36,36,36},
		{72,72,72,72,72,72,40,40,40,73,109,73,40,36,40,72,72,72,40,40,40,36,36,36,36,36,36},
		{109,109,109,109,109,109,109,109,109,109,109,109,73,109,73,40,40,40,36,36,36,36,36,36,36,36,36},
		{141,141,141,109,109,109,109,141,109,109,109,109,109,109,109,40,36,40,36,36,36,36,36,36,36,36,36},
		{109,109,109,109,109,109,109,109,109,109,109,109,73,109,73,40,36,40,36,36,36,36,36,36,36,36,36},
		{109,109,109,109,141,109,72,72,72,40,40,40,40,40,40,36,36,36,40,40,40,36,36,36,36,36,36},
		{109,109,109,141,141,109,72,72,72,40,36,36,36,36,36,36,36,36,40,40,40,36,36,36,36,36,36},
		{109,109,109,109,141,109,72,72,72,40,40,40,36,36,36,36,36,36,40,40,40,36,36,36,36,36,36}
	};

	int marco[l][c] = {
		{36,36,36,36,36,36,36,36,36,36,36,36,36,109,109,109,141,109,109,73,4,72,145,109,141,109,109},
		{36,36,36,36,36,36,36,40,36,36,36,40,36,72,141,141,141,141,145,73,4,40,108,104,109,141,145},
		{40,36,36,36,36,40,40,40,40,36,40,4,36,109,145,109,109,141,141,72,36,36,72,109,141,109,76},
		{40,36,40,36,36,36,36,40,40,40,36,36,36,72,109,109,109,145,77,36,36,40,76,109,145,108,72},
		{36,36,40,40,36,36,36,40,40,40,36,40,109,109,76,109,77,109,40,36,40,40,109,109,145,141,109},
		{36,36,36,36,36,36,36,40,40,40,36,36,72,108,109,109,109,109,109,109,73,36,40,73,109,141,109},
		{40,36,36,36,36,36,40,40,40,36,40,36,36,109,145,141,145,141,145,109,36,40,72,109,109,109,109},
		{40,36,36,40,36,36,40,36,36,36,36,36,72,109,109,109,109,141,109,40,36,72,109,141,141,109,72},
		{40,40,40,40,36,36,40,40,40,40,40,40,36,77,141,145,109,108,36,36,40,36,72,109,141,141,109},
		{109,109,109,109,109,109,40,40,40,72,72,72,40,36,109,109,109,109,72,40,36,40,109,109,141,141,145},
		{109,109,109,141,141,141,72,40,40,72,72,72,40,73,109,73,109,141,145,40,4,40,72,109,141,109,109},
		{109,109,109,109,141,109,72,40,40,72,72,72,40,109,113,73,109,109,109,40,4,72,109,109,109,109,40},
		{72,104,105,141,141,141,40,40,40,72,72,72,36,40,72,109,141,141,104,73,40,72,145,145,141,109,109},
		{72,104,105,141,145,141,40,40,40,72,72,72,40,40,76,109,141,141,109,72,40,72,73,72,109,141,109},
		{72,72,72,141,141,141,40,40,40,72,72,72,40,72,109,109,109,109,72,40,40,40,72,72,109,145,109},
		{40,40,40,72,72,72,40,40,40,72,108,72,40,36,40,109,145,145,40,4,36,40,109,113,145,109,40},
		{40,40,40,72,72,72,40,40,40,72,109,72,40,36,40,109,109,108,40,36,40,40,40,40,109,72,36},
		{40,40,40,72,72,72,40,40,40,72,109,72,40,36,77,77,109,76,40,40,40,40,36,36,40,40,36},
		{109,109,109,109,109,109,109,109,109,109,109,109,73,109,76,72,109,109,40,40,40,40,40,40,36,40,40},
		{109,109,109,109,109,109,141,141,141,109,109,109,109,109,109,72,40,109,72,36,40,40,40,40,40,40,40},
		{109,109,109,109,109,109,109,109,109,109,109,109,73,77,72,40,36,40,40,36,72,40,40,36,40,40,36},
		{104,109,109,109,109,109,72,40,72,40,40,40,36,36,36,40,40,40,36,40,40,40,40,36,40,40,40},
		{109,109,109,141,141,109,72,40,40,40,40,40,36,36,40,40,40,40,40,40,72,40,36,40,36,36,40},
		{104,108,108,109,109,109,72,40,40,40,40,40,40,40,40,36,36,40,40,40,72,40,40,40,40,4,40}
	};

  //Tarefa 1
/*
  int contDesm[3]={0,0,0};
  float media=l*c;
  float percent;

printf("JANEIRO \n");
for(i=0;i<l;i++){
	for(j=0;j<c;j++){
		if(janeiro[i][j]>50){
      contDesm[0]++;
    }
	}
}
printf("Desmatamento no mês de janeiro: %d\n",contDesm[0]);
  percent=((float)contDesm[0]/media)*100;
  printf("A média percentual de desmatamento do mes de janeiro é de %.1f% \n",percent);

printf("FEVEREIRO \n");
for(i=0;i<l;i++){
	for(j=0;j<c;j++){
		if(fevereiro[i][j]>50){
      contDesm[1]++;
    }
	}
}
printf("Desmatamento no mês de fevereiro: %d\n",contDesm[1]);
  percent=((float)contDesm[1]/media)*100;
  printf("A média percentual de desmatamento do mes de fevereiro é de %.1f% \n",percent);
  printf("Tiveram %d unidades de desmatamento a mais que o mês anterior \n",(contDesm[1]-contDesm[0]));
  
printf("MAR�O \n");
for(i=0;i<l;i++){
	for(j=0;j<c;j++){
		if(marco[i][j]>50){
      contDesm[2]++;
    }
	}
}
printf("Desmatamento no m�s de mar�o: %d\n",contDesm[2]);
  percent=((float)contDesm[2]/media)*100;
  printf("A m�dia percentual de desmatamento do mes de mar�o � de %.1f% \n",percent);
  printf("Tiveram %d unidades de desmatamento a mais que o m�s anterior\n",(contDesm[2]-contDesm[1]));



  //Tarefa 2
  


  // FEVEREIRO - JANEIRO
  
  for(i=0;i<l;i++){
	  for(j=0;j<c;j++){
      if(fevereiro[i][j]>janeiro[i][j]*1.2){
        printf("* ");
      }
      else{
        printf("_ ");
      }
    }
    printf("\n");
  }
  
  printf("\n\n");

  // MARÇO - FEVEREIRO
  for(i=0;i<l;i++){
	  for(j=0;j<c;j++){
      if(marco[i][j]>fevereiro[i][j]*1.2){
        printf("* ");
      }
      else{
        printf("_ ");
      }
    }
    printf("\n");
  }

  //Tarefa 3

  //JANEIRO
  
  int maior=0,maiorDEF[l],posicao=0,inicio=0;
  
  for(i=0;i<l;i++){
    maiorDEF[i]=0;
	  for(j=0;j<c;j++){
      if(janeiro[i][j]>50){
        maior++;
         if(maior>=maiorDEF[i]){
          maiorDEF[i]=maior;
          inicio= (j+1) - maiorDEF[i];
            if(inicio<0){
             inicio=0;
             }
        }
        
      }
      else{
        maior=0;
      }
    }
    
      
  }

  for(i=0;i<l;i++){
	  if(maiorDEF[i]>=maior){
      posicao=i;
      maior=maiorDEF[i];
    }
  }
   
  

  for(i=posicao;i<(posicao+1);i++){
   for(j=inicio;j<=maior;j++){
     if(j==inicio){
       printf("A estrada começa em [%d][%d] e ",i,j);
     }
     if(j==(maior-1) || maior==1){
       printf("termina em [%d][%d]",i,j);
     }
     }
     maior=0;
    }
  printf("\n");

  //FEVEREIRO

  for(i=0;i<l;i++){
    maiorDEF[i]=0;
	  for(j=0;j<c;j++){
      if(fevereiro[i][j]>50){
        maior++;
         if(maior>=maiorDEF[i]){
          maiorDEF[i]=maior;
          inicio= (j+1) - maiorDEF[i];
            if(inicio<0){
             inicio=0;
             }
        }
        
      }
      else{
        maior=0;
      }
    }
    
      
  }

  for(i=0;i<l;i++){
	  if(maiorDEF[i]>=maior){
      posicao=i;
      maior=maiorDEF[i];
    }
  }
   
  

  for(i=posicao;i<(posicao+1);i++){
   for(j=inicio;j<=maior;j++){
     if(j==inicio){
       printf("A estrada começa em [%d][%d] e ",i,j);
     }
     if(j==(maior-1) || maior==1){
       printf("termina em [%d][%d]",i,j);
     }
     }
    maior=0;
    }
  printf("\n");

  //MARÇO

  for(i=0;i<l;i++){
    maiorDEF[i]=0;
	  for(j=0;j<c;j++){
      if(marco[i][j]>50){
        maior++;
         if(maior>=maiorDEF[i]){
          maiorDEF[i]=maior;
          inicio= (j+1) - maiorDEF[i];
            if(inicio<0){
             inicio=0;
             }
        }
        
      }
      else{
        maior=0;
      }
    }
    
      
  }

  for(i=0;i<l;i++){
	  if(maiorDEF[i]>=maior){
      posicao=i;
      maior=maiorDEF[i];
    }
  }
   
  

  for(i=posicao;i<(posicao+1);i++){
   for(j=inicio;j<=maior;j++){
     if(j==inicio){
       printf("A estrada começa em [%d][%d] e ",i,j);
     }
     if(j==(maior-1) || maior==1){
       printf("termina em [%d][%d]",i,j);
     }
     }
    maior=0;
    }
*/
  //DESAFIO
  int sub[l][c],bin[l][c];
  int  min=0;
  int POSi,POSj,maxTamanho=0,col=0,row=0,Ajustej=0;
  int colAUX,rowAUX,i1=0,j1=0;
  int  janeiroSUB[l][c], fevereiroSUB[l][c], marcoSUB[l][c];
  

  //Janeiro
  //transformando a matriz em uma matriz binaria

  for(i=0;i<l;i++){
     for(j=0;j<c;j++){
       if(janeiro[i][j]>50){
         bin[i][j]=1;
       }
       else{
         bin[i][j]=0;
       }
       sub[i][j]=0;
       
  }    
   
  }

  
  //primeira linha
  for(i=0;i<l;i++){
    sub[i][0]=bin[i][0];
  }
  //primeira coluna
  for(j=0;j<c;j++){
    sub[0][j]=bin[0][j];
  }
  //itens restantes
   for(i=1;i<l;i++){
      for(j=1;j<c;j++){
        if(bin[i][j]==1){
          //cód pra achar o mínimo entre cima, esquerda e digonal esq de cima
           min=bin[i][j-1];
          if(bin[i-1][j] < min){
            min=bin[i-1][j];
          }
          if(bin[i-1][j-1] < min){
            min=bin[i-1][j-1];
          }
          //agora adicionamos na nova matriz
          sub[i][j]=min+1;
        }
        }
     }

  //agora vamos rodar a nova matriz, mas comparando seus próprios elementos
  for(i=0;i<l;i++){
      for(j=0;j<c;j++){
        if(bin[i][j]>=1){
          //cód pra achar o mínimo entre cima, esquerda e digonal esq de cima
           min=sub[i][j-1];
          if(sub[i-1][j] < min){
            min=sub[i-1][j];
          }
          if(sub[i-1][j-1] < min){
            min=sub[i-1][j-1];
          }
          //agora adicionamos na nova matriz
          sub[i][j]=min+1;
          
        }
       
        }

     }
  
 //agora precisamos achar o tamanho max da linha

   maxTamanho=0,col=0,row=0,Ajustej=0;

  for(i=0;i<l;i++){
      for(j=0;j<c;j++){
        if(maxTamanho<=sub[i][j]){
          //Tamanho max de linhas
          maxTamanho=sub[i][j];
          //posição que se encontra o ultimo elemento na linha
          POSi=i;
          //posição que se encontra o ultimo elemento na coluna
          POSj=j;
          //o 'maxTamanho' apenas contabiliza a qntd de linhas, então temos que acertar
          }
        
        }
    }
  
   
  for(i=POSi;i>(POSi-maxTamanho);i--){
      row++;
      }
  for(j=POSj;j>(POSj-maxTamanho-Ajustej);j--){
        col++;
      }
      

    
  

   colAUX=POSj-maxTamanho-Ajustej;
   rowAUX=POSi-maxTamanho;
  
    
      printf("A maior área desmatada foi uma matriz é 1x1 e começa na posição [%d][%d] da matriz principal \n\n",POSi,POSj);
      for(i=POSi;i>POSi-1;i--){
       for(j=POSj;j>POSj-1;j--){
          janeiroSUB[i1][j1]=janeiro[i][j];
         printf("%d ",janeiroSUB[i1][j1]);
        }
      }
    
   
   printf("\n\n");
   
  
  
  
   //Fevereiro
  //transformando a matriz em uma matriz binaria

  for(i=0;i<l;i++){
     for(j=0;j<c;j++){
       if(fevereiro[i][j]>50){
         bin[i][j]=1;
       }
       else{
         bin[i][j]=0;
       }
       sub[i][j]=0;
       
  }    
   
  }

  //Transformando a matrix Sub em binaria
  //primeira linha
  for(i=0;i<l;i++){
    sub[i][0]=bin[i][0];
  }
  //primeira coluna
  for(j=0;j<c;j++){
    sub[0][j]=bin[0][j];
  }
  //itens restantes
   for(i=1;i<l;i++){
      for(j=1;j<c;j++){
        if(bin[i][j]==1){
          //cód pra achar o mínimo entre cima, esquerda e digonal esq de cima
           min=bin[i][j-1];
          if(bin[i-1][j] < min){
            min=bin[i-1][j];
          }
          if(bin[i-1][j-1] < min){
            min=bin[i-1][j-1];
          }
          //agora adicionamos na nova matriz
          sub[i][j]=min+1;
        }
        }
     }

  //Agora vamos rodar a nova matriz, mas comparando seus próprios elementos
  for(i=0;i<l;i++){
      for(j=0;j<c;j++){
        if(sub[i][j]>=1){
          //cód pra achar o mínimo entre cima, esquerda e digonal esq de cima
           min=sub[i][j-1];
          if(sub[i-1][j] < min){
            min=sub[i-1][j];
          }
          if(sub[i-1][j-1] < min){
            min=sub[i-1][j-1];
          }
          //agora adicionamos na nova matriz
          sub[i][j]=min+1;
          
        }
       
        }

     }
  
 //agora precisamos achar o tamanho max da linha

   maxTamanho=0,col=0,row=0,Ajustej=0;

  for(i=0;i<l;i++){
      for(j=0;j<c;j++){
        if(maxTamanho<=sub[i][j]){
          //Tamanho max de linhas
          maxTamanho=sub[i][j];
          //posição que se encontra o ultimo elemento na linha
          POSi=i;
          //posição que se encontra o ultimo elemento na coluna
          POSj=j;
          //o 'maxTamanho' apenas contabiliza a qntd de linhas, então temos que acertar
          Ajustej=(j+1)-maxTamanho;
          }
        
        }
    }
 

  for(i=POSi;i>(POSi-maxTamanho);i--){
      row++;
      }
      for(j=POSj;j>(POSj-maxTamanho-Ajustej);j--){
        col++;
      }
      

    
  printf("A maior área desmatada foi uma matriz é %dx%d e começa na posição [%d][%d] da matriz principal \n",row,col,POSi-row+1,POSj-col+1);

   
   colAUX=POSj-maxTamanho-Ajustej;
   rowAUX=POSi-maxTamanho;
   i1=0;
 
  if(maxTamanho==1){
      printf("A maior área desmatada foi uma matriz é 1x1 e começa na posição [%d][%d] da matriz principal \n",POSi,POSj);
      for(i=POSi;i>rowAUX;i--){
       for(j=POSj;j>colAUX+1;j--){
          janeiroSUB[i1][j1]=janeiro[i][j];
         printf("%d ",janeiroSUB[i1][j1]);
        }
      }
    }else{
  for(i=POSi;i>rowAUX;i--){
    for(j=POSj;j>colAUX;j--){
      fevereiroSUB[i1][j1]=fevereiro[i][j];
     
      j1++;
      }
    j1=0;
    i1++;
    
    }
  printf("\n");
  colAUX=maxTamanho + Ajustej;
  for(i=maxTamanho-1;i>=0;i--){
    for(j=colAUX-1;j>=0;j--){
      printf("%d ",fevereiroSUB[i][j]);
    }
    printf("\n");
  }
    }
  printf("\n");
  

  
   //Março
  //transformando a matriz em uma matriz binaria

  for(i=0;i<l;i++){
     for(j=0;j<c;j++){
       if(marco[i][j]>50){
         bin[i][j]=1;
       }
       else{
         bin[i][j]=0;
       }
       sub[i][j]=0;
       
  }    
   
  }

  
  //primeira linha
  for(i=0;i<l;i++){
    sub[i][0]=bin[i][0];
  }
  //primeira coluna
  for(j=0;j<c;j++){
    sub[0][j]=bin[0][j];
  }
  //itens restantes
   for(i=1;i<l;i++){
      for(j=1;j<c;j++){
        if(bin[i][j]==1){
          //cód pra achar o mínimo entre cima, esquerda e digonal esq de cima
           min=bin[i][j-1];
          if(bin[i-1][j] < min){
            min=bin[i-1][j];
          }
          if(bin[i-1][j-1] < min){
            min=bin[i-1][j-1];
          }
          //agora adicionamos na nova matriz
          sub[i][j]=min+1;
        }
        }
     }

  //agora vamos rodar a nova matriz, mas comparando seus próprios elementos
  for(i=0;i<l;i++){
      for(j=0;j<c;j++){
        if(bin[i][j]>=1){
          //cód pra achar o mínimo entre cima, esquerda e digonal esq de cima
           min=sub[i][j-1];
          if(sub[i-1][j] < min){
            min=sub[i-1][j];
          }
          if(sub[i-1][j-1] < min){
            min=sub[i-1][j-1];
          }
          //agora adicionamos na nova matriz
          sub[i][j]=min+1;
          
        }
       
        }

     }
  
 //agora precisamos achar o tamanho max da linha

   maxTamanho=0,col=0,row=0,Ajustej=0;

  for(i=0;i<l;i++){
      for(j=0;j<c;j++){
        if(maxTamanho<=sub[i][j]){
          //Tamanho max de linhas
          maxTamanho=sub[i][j];
          //posição que se encontra o ultimo elemento na linha
          POSi=i;
          //posição que se encontra o ultimo elemento na coluna
          POSj=j;
          //o 'maxTamanho' apenas contabiliza a qntd de linhas, então temos que acertar
          Ajustej=(j+1)-maxTamanho;
          }
        
        }
    }
 

  for(i=POSi;i>(POSi-maxTamanho);i--){
      row++;
      }
      for(j=POSj;j>(POSj-maxTamanho-Ajustej);j--){
        col++;
      }
      

    
  printf("A maior área desmatada foi uma matriz é %dx%d e começa na posição [%d][%d] da matriz principal \n",row,col,POSi-row+1,POSj-col+1);

   
   colAUX=POSj-maxTamanho-Ajustej;
   rowAUX=POSi-maxTamanho;
   i1=0;
  
  if(maxTamanho==1){
      printf("A maior área desmatada foi uma matriz é 1x1 e começa na posição [%d][%d] da matriz principal \n",POSi,POSj);
      for(i=POSi;i>rowAUX;i--){
       for(j=POSj;j>colAUX+1;j--){
          marco[i1][j1]=marco[i][j];
         printf("%d ",marco[i1][j1]);
        }
      }
    }
  else{
  for(i=POSi;i>rowAUX;i--){
    for(j=POSj;j>colAUX;j--){
      marcoSUB[i1][j1]=marco[i][j];
     
      j1++;
      }
    j1=0;
    i1++;
    
    }
  printf("\n");
  colAUX=maxTamanho + Ajustej;
  for(i=maxTamanho-1;i>=0;i--){
    for(j=colAUX-1;j>=0;j--){
      printf("%d ",marcoSUB[i][j]);
    }
    printf("\n");
  }
    }
  
   
     
          


  


                                                                       
  
  

  return 0;
}
