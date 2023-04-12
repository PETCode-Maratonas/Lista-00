# Function: Contagem de leds
def nleds(number):
    if number == '1':
        return 2
    elif number == '2':
        return 5
    elif number == '3':
        return 5
    elif number == '4':
        return 4
    elif number == '5':
        return 5
    elif number == '6':
        return 6
    elif number == '7':
        return 3
    elif number == '8':
        return 7
    elif number == '9':
        return 6
    elif number == '0':
        return 6

def main():
    # Variaveis
    testes = input()

    # Loop de testes
    for i in range(testes):

        # Variaveis de teste
        string = str(input()) # Entrada do numero
        length = len(string)  # Tamanho do numero
        count = 0             # Contador de leds

        # Contagem de leds
        for j in range(length):
            count += nleds(string[i])
        print(count,"\n")

main()