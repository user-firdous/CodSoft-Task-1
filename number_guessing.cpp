#include<iostream>
#include<cstdlib>
using namespace std;
class Guess{
private:
	int guess,gen,f;
public:
	void begin(){
		f = 0;
		cout <<"In this level you have 10 attempts" <<endl;
		int max = 10;
		gen = (rand()%10)+1;
		while(max != 0){
			cout <<"Guess the number between 1-10" <<endl;
			cin >> guess;
			
			if(guess > 0 && guess <= 10){
				if(gen == guess){
			    	cout <<"Congrats,You Win" <<endl <<endl;
			    	f = 1;
			    	break;
		    	}else{
			    	if(guess > gen){
			    		cout <<"Your guess is too high" <<endl <<endl;
					}else{
						cout <<"Your guess is too low" <<endl <<endl;
					}
		        }
		    }else{
		    	cout <<"Please Enter under the range" <<endl <<endl;
		   	}
		   	
		   	if(max == 4){
		   		cout <<"You have only 3 last chance" <<endl;
			   }
			max--;
		}
		if(f == 0){
			cout <<"Sorry, You Lose the game" <<endl;
			cout <<"The number is: " <<gen <<endl <<endl;
		}
	}
	
	void medium(){
		f = 0;
		cout <<"In this level you have 7 attempts" <<endl;
		int max = 7;
		gen = (rand()%50)+1;
		while(max != 0){
			cout <<"Guess the number between 1-50" <<endl;
			cin >> guess;
			
			if(guess > 0 && guess <= 50){
				if(gen == guess){
			    	cout <<"Congrats,You Win" <<endl <<endl;
			    	f = 1;
			    	break;
		    	}else{
			    	if(guess > gen){
			    		cout <<"Your guess is too high" <<endl <<endl;
					}else{
						cout <<"Your guess is too low" <<endl <<endl;
					}
		        }
		    }else{
		    	cout <<"Please Enter under the range" <<endl <<endl;
		   	}
		   	if(max == 3){
		   	    cout <<"You have only 2 last chance" <<endl;
			}
			max--;
		}
		if(f == 0){
			cout <<"Sorry, You Lose the game" <<endl;
			cout <<"The number is: " <<gen <<endl <<endl;
		}
	}
	
	void hard(){
		f = 0;
		cout <<"In this level you have 5 attempts" <<endl;
		int max = 5;
		gen = (rand()%100)+1;
		while(max != 0){
			cout <<"Guess the number between 1-100" <<endl;
			cin >> guess;
			
			if(guess > 0 && guess <= 100){
				if(gen == guess){
			    	cout <<"Congrats,You Win" <<endl <<endl;
			    	f = 1;
			    	break;
		    	}else{
			    	if(guess > gen){
			    		cout <<"Your guess is too high" <<endl <<endl;
					}else{
						cout <<"Your guess is too low" <<endl <<endl;
					}
		        }
		    }else{
		    	cout <<"Please Enter under the range" <<endl <<endl;
		   	}
		   	if(max == 2){
		   		cout <<"You have only 1 last chance" <<endl;
			}
			max--;
		}
		if(f == 0){
			cout <<"Sorry, You Lose the game" <<endl <<endl;
			cout <<"The number is: " <<gen <<endl <<endl;
		}
	}
};
int main(){
	Guess num;
	cout <<"<--------------------Number Guessing Game-------------------->" <<endl;
	int ch;
	do{
		cout <<"1. Easy Level \n2. Meduim Level \n3. Hard Level \n4. Exit" <<endl;
		cin >> ch;
		
		switch(ch){
			case 1:
				num.begin();
				break;
			case 2:
				num.medium();
				break;
			case 3:
				num.hard();
				break;
			case 4:
				return 0;
			default:
				cout <<"Please Enter correct Key";
		}
	}while(true);
}
