/*
Grupo: 
Aluno 1: Jhonnatan Rodrigues Reishoffer Muniz
Aluno 2: João Miguel Araújo Panza Ribeiro
*/

#include <stdio.h>
#include "libs/libbmp.h"
#include "libs/imghelpers.h"

int min(int a,int b, int c);
int main(){
  //Utilize apenas imagens .bmp com o formato 24 (true color)
  // converta em: https://online-converting.com/image/convert2bmp/
  bmp_img img;
  char filename[] = "lenna.bmp";
  printf("\n");
  IMG_TAM t = pegarTamanho(filename);
  int l = t.qtdLinhas,c = t.qtdColunas;
  int R[l][c];
  int G[l][c];
  int B[l][c];
  carregaImagem(t,R,G,B,filename);

  //Segunda imagem, com as figurinhas

  bmp_img img1;
  char filename1[] = "Sticker.bmp";
  printf("\n");
  IMG_TAM t1 = pegarTamanho(filename);
  int l1 = t1.qtdLinhas,c1 = t1.qtdColunas;
  int R1[l][c];
  int G1[l][c];
  int B1[l][c];
  carregaImagem(t1,R1,G1,B1,filename1);




 
  

  // manipule sua imagem aqui. 

  //--------------BRANCO ACIMA DA DIAGONAL PRINCIPAL-------------
  
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      if(i<j){
        R[i][j] += 35;
        G[i][j] += 35;
        B[i][j] += 35;
      }
    }
  }
  

  //--------------bordas pretas de 20px em x e em y-----------
  
  for(int i=0;i<l;i++){
    for(int j=0;j<c;j++){
      if(i<20 || i>=l-20 || j<20 || j>=c-20){
      R[i][j]=0;
      G[i][j]=0;
      B[i][j]=0;
        }
      }
    }

  //--------------------inverter a foto---------------------------

  //256 é exatamente a metade da foto principal, então as alterações são feitas a partir do meio da imagem
  
  int aux1,aux2;

  for(int i=0;i<l;i++){
    for(int j=0;j<256;j++){
      aux1=R[i][256+j];
      aux2=R[i][256-j];
      R[i][256-j]=aux1;
      R[i][256+j]=aux2;
      
      aux1=G[i][256+j];
      aux2=G[i][256-j];
      G[i][256-j]=aux1;
      G[i][256+j]=aux2;
      
      aux1=B[i][256+j];
      aux2=B[i][256-j];
      B[i][256-j]=aux1;
      B[i][256+j]=aux2;
      }
   }

  

  //Filtro de blur: desfoca a imagem de acordo com a sua preferencia
  
  int desfoque;
  printf("Quantas vezes voce quer aumentar o desfoque da imagem? ");
  scanf("%d",&desfoque);

 
  //repetição para a quantidade de vezes que a imagem irá desfocar 
  for(int k=0;k<desfoque;k++){
    //repetição do desfoque
      for(int i=1;i<l-1;i++){
          for(int j=1;j<c-1;j++){
       
      //a posição atual de cada cor será o resultado da média de uma soma entre as posições:
    
  // X -> nome genérico para uma matriz
  // i -> posição na linha 
  // j -> posição na coluna

  // X[i+1][j]   -> posição de baixo
  // X[i-1][j]   -> posição de cima
  // X[i][j-1]   -> posição da esquerda
  // X[i+1][j-1] -> posição da esquerda de baixo
  // X[i-1][j-1] -> posição da esquerda de cima  
  // X[i][j+1]   -> posição da direita
  // X[i+1][j+1] -> posição da direita de baixo
  // X[i-1][j+1] -> posição da direita de cima

  //  Caso surjam dúvidas de quais posições estão sendo somadas, selecione os [][]. Ex: selecione essas caixinhas -> [i+1][j-1]
          //Desfoque da primeira posição da primeira linha:
        if(i==0 && j==0){
          R[i][j]=(R[i+1][j]+R[i][j+1]+R[i+1][j+1])/3;

          B[i][j]=(B[i+1][j]+B[i][j+1]+B[i+1][j+1])/3;

          G[i][j]=(G[i+1][j]+G[i][j+1]+G[i+1][j+1])/3;
              
            }
            //Desfoque da primeira posição da ultima linha:
        if(i==l-1 && j==0){
          R[i][j]=(R[i-1][j]+R[i][j+1]+R[i-1][j+1])/3;

          B[i][j]=(B[i-1][j]+B[i][j+1]+B[i-1][j+1])/3;

          G[i][j]=(G[i-1][j]+G[i][j+1]+G[i-1][j+1])/3;
              
            }
            //Desfoque da ultima posição da primeira linha:
        if(i==0 && j==c-1){
          R[i][j]=(R[i+1][j]+R[i][j-1]+R[i+1][j-1])/3;

          B[i][j]=(B[i+1][j]+B[i][j-1]+B[i+1][j-1])/3;

          G[i][j]=(G[i+1][j]+G[i][j-1]+G[i+1][j-1])/3;
              
            }
            //Desfoque da ultima posição da ultima linha:
        if(i==l-1 && j==c-1){
          R[i][j]=(R[i-1][j]+R[i][j-1]+R[i-1][j-1])/3;

          B[i][j]=(B[i-1][j]+B[i][j-1]+B[i-1][j-1])/3;

          G[i][j]=(G[i-1][j]+G[i][j-1]+G[i-1][j-1])/3;
              
            }
            //Desfoque da primeira linha:
        if(i==0 && j>0 && j<c-1){
          R[i][j]=(R[i+1][j]+R[i][j+1]+R[i][j-1]+R[i+1][j+1]+R[i+1][j-1])/5;

          B[i][j]=(B[i+1][j]+B[i][j+1]+B[i][j-1]+B[i+1][j+1]+B[i+1][j-1])/5;

          G[i][j]=(G[i+1][j]+G[i][j+1]+G[i][j-1]+G[i+1][j+1]+G[i+1][j-1])/5;
                              }
            //Desfoque da última linha:
        if(i==l-1 && j>0 && j<c-1){
          R[i][j]=(R[i-1][j]+R[i][j+1]+R[i][j-1]+R[i-1][j-1]+R[i-1][j+1])/5;

          B[i][j]=(B[i-1][j]+B[i][j+1]+B[i][j-1]+B[i-1][j-1]+B[i-1][j+1])/5;

          G[i][j]=(G[i-1][j]+G[i][j+1]+G[i][j-1]+G[i-1][j-1]+G[i-1][j+1])/5;
                              }
            //Desfoque da primeira coluna:
        if(i>0 && j==0 && i<l-1){
          R[i][j]=(R[i+1][j]+R[i-1][j]+R[i][j+1]+R[i+1][j+1]+R[i-1][j+1])/5;

          B[i][j]=(B[i+1][j]+B[i-1][j]+B[i][j+1]+B[i+1][j+1]+B[i-1][j+1])/5;

          G[i][j]=(G[i+1][j]+G[i-1][j]+G[i][j+1]+G[i+1][j+1]+G[i-1][j+1])/5;
                              }
            //Desfoque da última coluna:
        if(i>0 && j==c-1 && i<l-1){
          R[i][j]=(R[i+1][j]+R[i-1][j]+R[i][j-1]+R[i-1][j-1]+R[i+1][j-1])/5;

          B[i][j]=(B[i+1][j]+B[i-1][j]+B[i][j-1]+B[i-1][j-1]+B[i+1][j-1])/5;

          G[i][j]=(G[i+1][j]+G[i-1][j]+G[i][j-1]+G[i-1][j-1]+G[i+1][j-1])/5;
                              }
         //Desfoques restantes das posições do meio da matriz:
        if(i>0 && j>0 && j<c-1 && i<l-1){
          R[i][j]=(R[i+1][j]+R[i-1][j]+R[i][j+1]+R[i][j-1]+R[i-1][j-1]+R[i+1][j+1]+R[i-1][j+1]+R[i+1][j-1])/8;

          B[i][j]=(B[i+1][j]+B[i-1][j]+B[i][j+1]+B[i][j-1]+B[i-1][j-1]+B[i+1][j+1]+B[i-1][j+1]+B[i+1][j-1])/8;

          G[i][j]=(G[i+1][j]+G[i-1][j]+G[i][j+1]+G[i][j-1]+G[i-1][j-1]+G[i+1][j+1]+G[i-1][j+1]+G[i+1][j-1])/8;
                              }
            
      }
    }
  }
  
    

  //filtro chuva colorida
  /*
   for(int i=1;i<l-1;i++){
          for(int j=1;j<c-1;j++){
            R[i][j]-=min(R[i][j-1],R[i-1][j],R[i-1][j]-1);
            G[i][j]-=min(G[i][j-1],G[i-1][j],G[i-1][j]-1);
            B[i][j]-=min(B[i][j-1],B[i-1][j],B[i-1][j]-1);
          
     }
   }
  */
  
  //Filtros Sticks
  
  int i1=0,j1=0,op1,op11,op2,op22,op3,op33,op4,op44;
  char resposta,resposta1,resposta2,resposta3;

  printf("\nResponda apenas com s ou n as 4 perguntas abaixo: \n");
  printf("Deseja incluir o 1º sticker? ");
  scanf(" %c",&resposta);
  printf("Deseja incluir o 2º sticker? ");
  scanf(" %c",&resposta1);
  printf("Deseja incluir o 3º sticker? ");
  scanf(" %c",&resposta2);
  printf("Deseja incluir o 4º sticker? ");
  scanf(" %c",&resposta3);
  printf("\n\n");
  
   
  if(resposta=='s' || resposta=='S'){
    printf("Digite um número de 1 a 400 para a posição em y do 1º sticker:");
    scanf("%d",&op1);
    printf("Digite um número de 1 a 372 para a posição em x do 1º sticker:");
    scanf("%d",&op11);
    
    //A posição inicial na linha assume op1
  for(int i=op1;i<99+op1;i++){
    //A posição inicial na coluna assume op1
    for(int j=op11;j<140+op11;j++){
      if(R1[i1][j1]<250 && G1[i1][j1]<250 && B1[i1][j1]<250){
        //As posições em R,G e B são trocadas para as posições da primeira figurinha, o "KBOOM"
            R[i][j]=R1[i1][j1];
            G[i][j]=G1[i1][j1];
            B[i][j]=B1[i1][j1];
     
           
        }
      j1++;
            }
      j1=0;
       i1++;
  }
    }

  
  
  if(resposta1=='s' || resposta1=='S'){
    printf("Digite um número de 1 a 400 para a posição em y do 2º sticker:");
    scanf("%d",&op2);
    printf("Digite um número de 1 a 372 para a posição em x do 2º sticker:");
    scanf("%d",&op22);
    
    //Parâmetros iniciais do Sticker 
    i1=100;
    j1=0;
  //A posição inicial na linha assume op2
  for(int i=op2;i<97+op2;i++){
     //A posição inicial na coluna assume op2
    for(int j=op22;j<140+op22;j++){
      if(R1[i1][j1]<250 && G1[i1][j1]<250 && B1[i1][j1]<250){
        //As posições em R,G e B são trocadas para as posições da primeira figurinha, o "POW"
            R[i][j]=R1[i1][j1];
            G[i][j]=G1[i1][j1];
            B[i][j]=B1[i1][j1];
     
           
        }
      j1++;
            }
      j1=0;
       i1++;
  }
    }

  

  if(resposta2=='s' || resposta2=='S'){

    printf("Digite um número de 1 a 400 para a posição em y do 3º sticker:");
  scanf("%d",&op3);
  printf("Digite um número de 1 a 372 para a posição em x do 3º sticker:");
  scanf("%d",&op33);

   
  //Parâmetros iniciais do Sticker 
  i1=l-95;
  j1=c-140;
    //A posição inicial na linha assume op3
  for(int i=op3;i<95+op3;i++){
    //A posição inicial na coluna assume op3
    for(int j=op33;j<140+op33;j++){
      if(R1[i1][j1]<240 && G1[i1][j1]<240 && B1[i1][j1]<240){
        //As posições em R,G e B são trocadas para as posições da primeira figurinha, o "BAZINGA!"
            R[i][j]=R1[i1][j1];
            G[i][j]=G1[i1][j1];
            B[i][j]=B1[i1][j1];
     
           
        }
      j1++;
            }
      j1=c-140;
       i1++;
  }
    }
  if(resposta3=='s' || resposta3=='S'){

  printf("Digite um número de 1 a 400 para a posição em y do 4º sticker:");
  scanf("%d",&op4);
  printf("Digite um número de 1 a 372 para a posição em x do 4º sticker:");
  scanf("%d",&op44);

    
   //Parâmetros iniciais do Sticker 
  i1=200;
  j1=0;
    //A posição inicial na linha assume op4
  for(int i=op4;i<95+op4;i++){
    //A posição inicial na coluna assume op4
    for(int j=op44;j<140+op44;j++){
      if(R1[i1][j1]<240 && G1[i1][j1]<240 && B1[i1][j1]<240){
        //As posições em R,G e B são trocadas para as posições da primeira figurinha, o "POW"
            R[i][j]=R1[i1][j1];
            G[i][j]=G1[i1][j1];
            B[i][j]=B1[i1][j1];
     
           
        }
      j1++;
            }
      j1=0;
       i1++;
  }
    }



  


  

  salvaImagem(t,R,G,B,"saida.bmp");
  mostrarNoReplit("saida.bmp");
  return 0;
}


int min(int a,int b, int c){
  int m;
    m=a;
  if(m>b){
    m=b;
  }
  if(m>c){
    m=c;
  }
  return m;
}
