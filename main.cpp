#include "Worker.hpp"
#include <iostream>
#define SWAP(A, B) { Worker t = A; A = B; B = t; } //change place
aaaaaaaaaaaaaaaaaaaaaaaaaa
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	const int w_count = 2;//���������� �������
	Worker workers[w_count];
	int a;
	//����
	while(true){
		cout << "\n1. �����\n2. ������� �����������\n3. �����\n";
		if(!(cin >> a)){  //���� ������������ ����, �� ���������� ��
		 continue;
		}
		if(a == 1){
			return 0;
		}
		else if(a == 2){
			//��������� ������
			cout << "������� �������� ���\n";
			for(int i =0; i < w_count; ++i){
				try{
					cin >> workers[i];
				}	  //������������ ����������

			}
			/*��������� ��������� �� ��������\*/
			int j, n = w_count;
			  do {
				int nn = 0;
				for (j = 1; j < n; ++j)
				  if (workers [j-1].getSurname() > workers[j].getSurname()) {
					SWAP( workers[j-1], workers[j] );
					nn = j;
				  }
				n = nn;
			  } while (n);
		}
		else if(a == 3){
			cout << "���: ";
			if(!(cin >> a)){
				cout << "����� �����";
				continue;
			}
			int i = 0;
			int f = 0;
			for(; i < w_count; ++i){
				if(workers[i].getYear() > a){
					cout << workers[i] << '\n';
					f = 1;
				}
			}
			if(f == 0){
				cout << "�� �������!";
			}
		}
	}

}
