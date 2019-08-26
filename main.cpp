#include <bits/stdc++.h>


using namespace std;

int main() {

	string palabra,modificado;
	vector<string>imprimir;
	unordered_map<string,pair<string,int>> lista;	
	std::vector<string>::iterator it;
	while(cin>>palabra){
		if(palabra=="#"){break;}
		modificado = palabra;
		transform(modificado.begin(),modificado.end(),modificado.begin(), ::tolower);
		sort(modificado.begin(),modificado.end());
		lista[modificado].second++;
		lista[modificado].first = palabra;

	}
	for(auto val : lista){
		if(val.second.second==1){imprimir.push_back(val.second.first);}
	}

	sort(imprimir.begin(),imprimir.end());

	for(auto val : imprimir){
			cout<<val<<endl;
		}


	return EXIT_SUCCESS;
}

