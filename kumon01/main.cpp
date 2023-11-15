#include <iostream>

int main(int argc, char* argv[]){
	int num;
	for (int i = 1; i <= 100; ++i){
		//判定処理をここに書いてください
		num = i;
		if (num % 15 == 0) {
			std::cout << "hogepiyo" << std::endl;
		}
		else if (num % 5 == 0) {
			std::cout << "piyo" << std::endl;
		}
		else if (num % 3 == 0) {
			std::cout << "hoge" << std::endl;
		}
		else{
			std::cout << i << std::endl;
		}
	}
    return 0;
}