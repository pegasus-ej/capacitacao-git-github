def calculadora():
    print("--- Calculadora Simples ---")
    print("Operações: + (soma), - (subtração), * (multiplicação), / (divisão)")
    
    while True:
        num1 = float(input("\nPrimeiro número: "))
        operacao = input("Operação: ")
        num2 = float(input("Segundo número: "))

        if operacao == "+":
            resultado = num1 + num2
        elif operacao == "-":
            resultado = num1 - num2
        elif operacao == "*":
            resultado = num1 * num2
        elif operacao == "/":
            if num2 != 0:
                resultado = num1 / num2
            else:
                resultado = "Erro! Divisão por zero."
        else:
            resultado = "Operação inválida!"

        print(f"Resultado: {resultado}")
        continuar = input("\nDeseja fazer outra conta? (s/n): ").lower()
        if continuar != 's':
            print("Saindo...")
            break

calculadora()

