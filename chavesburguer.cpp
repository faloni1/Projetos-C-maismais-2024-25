#include <iostream>
#include <iomanip>

using namespace std;

double calc_preco1(double distancia)
{
	double preco1;
	
	preco1 = distancia * 4.50 + 3.00;
	
	return preco1;	
}

double calc_preco2(double distancia)
{
	double preco2;
	
		preco2 = distancia * 5.50 + 8.00;
		
	return preco2;	
}

int main()
{	
	setlocale(LC_ALL,"portuguese");
	double preco, distancia, p1, p2;
	string opcao, pagamento, cartao;
	
	cout << "Bem vindo ao Papaléguas Driver!" << endl << endl;
	
	cout<< "Insira a distância (km): ";
	do{
		cin>>distancia;
	} while ( distancia <= 0 );
	
	cout<< "Escolha uma opção (padrao), (premium) ou (prioritario): ";
	cin.ignore();
	getline(cin,opcao);	
				
	while ( opcao != "padrao" && opcao != "prioritario" && opcao != "premium") 
	{	
		cout<< "Insira uma opção válida!" << endl;
		cin>> opcao;
				
	} 
	
	p1 = calc_preco1(distancia);
	p2 = calc_preco2(distancia);
	
	if ( opcao == "padrao" || opcao == "prioritario")
	{
		cout<<fixed<<setprecision(2)<< "Valor da corrida: " << "R$" << p1 << endl;
	
	}
	
	else if ( opcao == "premium")
	{
		cout<<fixed<<setprecision(2)<< "Valor da corrida: " << "R$" << p2 << endl;
	
	}
	
	cout << "Escolha a forma de pagamento; pix, cartão ou dinheiro: ";
	cin >> pagamento;
	
	while ( pagamento != "pix" && pagamento != "cartao" && pagamento != "dinheiro") 
	{	
		cout<< "Insira uma opção válida!" << endl;
		cin >> pagamento;
	} 
	
	if (pagamento == "cartao")
	{
		cout << "Débito ou crédito? ";
		cin >> cartao;
	}
	
	cout << endl << "Obrigado pela preferência!" << endl;
	
	
	
	
	return 0;	
}