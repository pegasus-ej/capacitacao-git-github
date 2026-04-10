const display = document.getElementById('display');

function adicionar(valor) {
    const ultimo = display.value.slice(-1);
    const operadores = ['+', '-', '*', '/'];
    
    if (operadores.includes(valor) && operadores.includes(ultimo)) return;
    
    display.value += valor;
}

function limpar() {
    display.value = '';
}

function apagarUm() {
    display.value = display.value.slice(0, -1);
}

function calcular() {
    try {
        if (display.value !== "") {
            display.value = eval(display.value);
        }
    } catch {
        display.value = 'Erro';
        setTimeout(limpar, 1500);
    }
}
