	#include <iostream>
	using namespace std;
	
	struct dados {
		int status, k;
	};
	
	int hash_aux(int k, int m)
	{
		if (k < 0 || m < 0)
			return (k % m) + m;
		else 
			return k % m;
	}
	
	int hash1(int k, int i, int m) {
	    int h = (hash_aux(k, m) + i) % m;
	    
	    return h;
	}
	
	int hash_insert(dados T[], int m, int k)
	{
		int i = 0, j = 0;
	 	do {
			j = hash1(k,i,m);
	   		if (T[j].status != 1){
	            T[j].k = k;
	            T[j].status = 1;
	            return j;
			}
	        else
	            i++;
		} while (i != m);
	    return -1;
	}
	
	int main()
	{
		int m, i = 0, j = 0, aux;
		dados t[100];
		
		cin >> m;
		
		for(i = 0; i < m; i++) {
			t[i].k = 0;
			t[i].status = -1;
		}
		
		cin >> aux;
		
		while (aux != 0) {
			hash_insert(t, m, aux);
			cin >> aux;
		}
		
		for (j = 0; j < m; j++) {
			if(t[j].k == 0)
				cout << "-1 ";
			else
				cout << t[j].k << " ";
		}
		
		
		
		return 0;
	}