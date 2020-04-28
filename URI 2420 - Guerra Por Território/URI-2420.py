# -*- coding: utf-8 -*-

'''
    Felipe Derkian - URI 2420 - Guerra por Território
'''

def soma_total(arr):
    soma = 0
    for v in arr:
        soma += v
    return soma


def parte_de_cada(total_territorio):
    return int(total_territorio / 2)


def count_divisa(arr, metade):
    cont = 0
    soma = 0
    for v in arr:
        soma += v
        cont += 1
        if soma == metade:
            break
    return cont


if __name__ == "__main__":
    
    n = int(input()) # total de divisas

    arr = input() # lista com as divisas
    arr = arr.split() # separação dos valores em modo array
    arr = [int(arr[i]) for i in range(n)] # converter de string para inteiro

    total_territorio = soma_total(arr) # pega o tamanho total do território

    divisao = parte_de_cada(total_territorio) # tem que dividir ao meio

    print(count_divisa(arr, divisao)) # contabiliza o total de território
