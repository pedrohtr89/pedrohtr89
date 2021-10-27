#include <iostream>
#include <string>

using namespace std;

void desafio1()
{
    system("cls");
    cout << "desafio: \n Print out a Greetings! message \n";
    cout << "ACHO que esta resovido. \n";
    system("pause");
}
int desafio2()
{
    system("cls");
    cout << "Desafio: Criar um programa que some dois numeros \n";
    int primeiroNumero, segundoNumero;
    cout << "digite o primeiro numero \n";
    cin >> primeiroNumero;
    cout << "digite o segundo numero \n";
    cin >> segundoNumero;
    cout << " a soma " << primeiroNumero << " + " << segundoNumero << " = " << primeiroNumero + segundoNumero << endl;
    system("pause");


    system("cls");
    cout << "Desafio Bonus!!! \nExpandir o programa pra adicionar duas colunas de uma matriz\n";
    cout << "a matriz a ser somada tem 2 colunas e 10 linhas. \n";
    int matriz[2][10];
    cout << "vamos definir os numeros da primeira coluna: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "numero " << i + 1 << ":";
        cin >> matriz[0][i];
    }
    cout << "vamos definir os numeros da segunda coluna: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "numero " << i + 1 << ":";
        cin >> matriz[1][i];
    }
    int soma[10];
    cout << "mostraremos a soma das duas colunas: \n";
    for (int i = 0; i <= 9; i++)
    {
        soma[i] = matriz[0][i] + matriz[1][i];
    }
    system("cls");
    for (int i = 0; i <= 9; i++)
    {
        cout << "soma " << i + 1 << ": " << matriz[0][i] << " + " << matriz[1][i] << " = " << soma[i] << endl;
    }
    system("pause");
    return 0;
}
int desafio3()
{
    cout << "desafio numero 3:\nConversor de medidas\n";
    cout << "opcoes:\n1-metros para pes\n2-pes para metros\n3-pes para milhas\n4-milhas para pes\n";
    cout << "5-milhas para quilometros\n6-quilometros para milhas\n";
    int converter;
    double valorAConverter, valorConvertido;
    cout << "Escolha a opcao: ";
    cin >> converter;
    cout << "\n qual a medida?\n";
    cin >> valorAConverter;
    system("cls");
    switch (converter)
    {
    case 1: //metros para pes 3,28084
        valorConvertido = valorAConverter * 3.28084;
        cout << valorAConverter << " metros sao " << valorConvertido << " pes.\n";
        system("pause");
        break;
    case 2: //pes para metros 0,3048
        valorConvertido = valorAConverter * 0.3048;
        cout << valorAConverter << " pes sao " << valorConvertido << " metros.\n";
        system("pause");
        break;
    case 3: //pes para milhas 0,000189394
        valorConvertido = valorAConverter * 0.000189394;
        cout << valorAConverter << " pes sao " << valorConvertido << " milhas.\n";
        system("pause");
        break;
    case 4://milhas para pes 5280
        valorConvertido = valorAConverter * 5280;
        cout << valorAConverter << " milhas sao " << valorConvertido << " pes.\n";
        system("pause");
        break;
    case 5://milha para km 1,60934
        valorConvertido = valorAConverter * 1.60934;
        cout << valorAConverter << " milhas sao " << valorConvertido << " quilometros.\n";
        system("pause");
        break;
    case 6://km pra milha 0,621369647819236
        valorConvertido = valorAConverter * 0.621369647819236;
        cout << valorAConverter << " quilometros sao " << valorConvertido << " milhas.\n";
        system("pause");
        break;
    }
    return 0;
}
int desafio4()
{
    system("cls");
    cout << "desafio 4: conversor de temperatura\n";
    double temperatura, tempConvertida;
    cout << "Opcoes:\n1-Celsius para Fahrenheit\n2-Fahrenheit pra Celsius\n";
    int conversao;
    cin >> conversao;
    cout << "Qual temperatura quer converter?\n";
    cin >> temperatura;
    if (conversao == 1)
    {
        tempConvertida = (temperatura * 9 / 5) + 32;
        cout << temperatura << " graus Celsius sao " << tempConvertida << " graus Fahrenheit\n";
    }
    else
    {
        tempConvertida = (temperatura - 32) * 5 / 9;
        cout << temperatura << " graus v sao " << tempConvertida << " graus Celsius\n";
    }
    system("pause");
    return 0;
}
int desafio5()
{
    system("cls");
    double primeiroNumero, segundoNumero;
    cout << "Desafio 5: multiplicador de numeros com virgula\n";
    cout << "digite o primeiro numero: ";
    cin >> primeiroNumero;
    cout << "digite o segundo numero: ";
    cin >> segundoNumero;
    cout << primeiroNumero << " x " << segundoNumero << " = " << primeiroNumero * segundoNumero << endl;
    system("pause");
    return 0;
}
void desafio6()
{
    cout << "desafio 6: \n Trocar as letras da string incluida pra maiusculo \n";
    cout << "digite a palavra de ate 10 caracteres que queres deixar maiuscula: ";
    char letra;
    string palavra;
    cin >> palavra;
    for (int i = 0; i < palavra.length(); i++)
    {
        if (palavra[i] >= 97 && palavra[i] <= 122)
        {
            letra = palavra[i] - 32;
        }
        else
        {
            letra = palavra[i];
        }
        cout << letra;
    }
    cout << endl;
    system("pause");
}
void desafio7()
{
    cout << "Desafio 7: Calculadora de médias\n";
    cout << "digite o numero de termos que deseja fazer a media : ";
    int n;
    cin >> n;
    cout << "Digite os números e aperte enter após cada um:";
    double termos[20];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> termos[i];
    }
    system("cls");
    cout << "termos escolhidos: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cout << termos[i] << " ";
    }
    cout << endl;
    double media = 0;
    for (int i = 0; i < n; i++)
    {
        media = media + termos[i];
    }
    cout << "média: " << media / n << endl;
    system("pause");
}
void desafio8()
{
    cout << "Desafio 8: limitador de strings para 10 char\nQual termo queres diminuir para 10 char?\n";
    string termoInteiro;
    cin >> termoInteiro;
    char termo10[10];
    for (int i = 0; i < 10; i++)
    {
        termo10[i] = termoInteiro[i];
    }
    cout << "palavra reduzida: ";
    for (int i = 0; i < 10; i++)
    {
        cout << termo10[i];
    }
    cout << endl << "termo Original: " << termoInteiro << endl;
    system("pause");
}
void desafio9()
{
    cout << "desafio 9: Colocando em ordem os numeros dados\nquantos numeros desesja colocar na ortem?";
    int n;
    cin >> n;
    cout << "Digite os números e aperte enter após cada um:";
    int termos[100];
    for (int i = 0; i < n; i++)
    {
        cin >> termos[i];
    }
    cout << "termos escolhidos:";
    for (int i = 0; i < n; i++)
    {
        cout << " " << termos[i];
    }
    cout << ".\n";
    int menor = 0;
    for (int j = 0; j < n-1; j++) // colocando em ordem
    {
        for (int i = j; i < n; i++)
        {
            if (termos[i] < termos[menor])
            {
                menor = i;
            }
        }
        int temp = termos[j];
        termos[j] = termos[menor];
        termos[menor] = temp;
    }
    cout << "termos ordenados:";
    for (int i = 0; i < n; i++)
    {
        cout << " " << termos[i];
    }
    cout << ".\n";
    system("pause");
}
void desafio10()
{
    cout << "desafio 10! Crie um programa que conta entrdas duplicadas\n";
    cout << "digite uma sequencia de 10 numeros:\n";
    int sequencia[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> sequencia[i];
    }
    cout << "a sequencia escolhida foi:";
    for (int i = 0; i < 10; i++)
    {
        cout << " " << sequencia[i];
    }
    int repetidos=0;
    for (int i = 0; i < 9; i++)
    {
        bool repetiu = false;
        for (int j = 0; j < 10; j++)
        {
            if (j != i)
            {
                if (sequencia[j] == sequencia[i])
                {
                    repetiu = true;
                }
            }
        }
        if (repetiu)
        {
            repetidos++;
        }
    }
    if (repetidos == 0)
    {
        cout << ". E nao existem numeros repetidos nesta sequencia." << endl;
    }
    else if (repetidos == 1)
    {
        cout << ". E existe ";
        cout << repetidos << " numero repetidos nesta sequencia." << endl;
    }
    else
    {
        cout << ". E existem ";
        cout << repetidos << " numeros repetidos nesta sequencia." << endl;
    }
    system("pause");
}


int main()
{
    int escolha =11;
    bool continua = true;
    
    while (continua)
    {
        switch (escolha)
        {
        case 0:
            system("cls");
            continua = false;
            cout << "Tchau! Volte Sempre! \n \n";
            break;
        case 1:
            desafio1();
            escolha = 11;
            break;
        case 2:
            desafio2();
            escolha = 11;
            break;
        case 3:
            desafio3();
            escolha = 11;
            break;
        case 4:
            desafio4();
            escolha = 11;
            break;
        case 5:
            desafio5();
            escolha = 11;
            break;
        case 6:
            desafio6();
            escolha = 11;
            break;
        case 7:
            desafio7();
            escolha = 11;
            break;
        case 8:
            desafio8();
            escolha = 11;
            break;
        case 9:
            desafio9();
            escolha = 11;
            break;
        case 10:
            desafio10();
            escolha = 11;
            break;
        case 11:
            system("cls");
            cout << "Escolha o desafio, de 1 a 10: \n 0 para sair \n";
            cin >> escolha;
            if (escolha < 0 || escolha > 10)
            {
                escolha = 11;
            }
            break;
        }
    }
}
