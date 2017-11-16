#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Algoritmo do Subvetor Máximo - Versão Iterativa
# Autor: João Victor Nascimento
import sys
import myBib

argc = len(sys.argv)

if argc != 2:
    print 'Uso: ./algoritmo tam_vet\n'
    sys.exit(0)

# Tamanho do Vetor
n = int(sys.argv[1]) 

vet = []

# Preenchendo uma lista com números pseudoaleatórios
for i in range(0,n):
    vet.insert(i, (myBib.myRand() % 200) - 100) 


max = -2147483647

# Encontrando o subvetor máximo
for i in range(0,n): # Inicio
    for j in range(i,n): # Fim
        soma = 0
        for k in range(i,j+1): # Soma os valores do Subvetor
            soma += vet[k]
        if soma > max: # Testa se é o Subvetor Máximo
            max = soma
            inicio = i
            fim = j

# Imprime o Vetor Inicial
print '\n',vet

# Imprime a soma do subvetor, a posição do inicio e do fim
print max,inicio,fim


