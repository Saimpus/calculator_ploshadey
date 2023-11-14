#include <iostream>
#include <cmath>

int main(){

    std::cout << "Welcome to the ploshad of differnt figures calculator" << std::endl;

    int figura;
    double otvet;
    int answer;

    std::cout << "What is your figure?" << std::endl << "(Treugolnik = 1, pryamougolnik = 2, kvadrat = 3, krug = 4, trapecia = 5, parallelogram = 6)" << std::endl;
    std::cin >> figura;
    switch(figura){
        case 1:

            double katet1;
            double katet2;
            double vicota;
            double storona;
            

            std::cout << "On pryamougolni? (Da = 1, Net = 2)" << std::endl;
            std::cin >> answer;
                if (answer == 1){
                    std::cout << "Vvedi perviy katet:" << std::endl;
                    std::cin >> katet1;
                    std::cout << "Vvedi vtoroy katet:" << std::endl;
                    std::cin >> katet2;
                    otvet = (katet1 * katet2) / 2;
                    std::cout << "Your otvet is: " << otvet;
                    }

                else if(answer == 2){
                    std::cout << "Vvedi storonu k kotoroy vicota:" << std::endl;
                    std::cin >> storona;
                    std::cout << "Vvedi vicotu:" << std::endl;
                    std::cin >> vicota;
                    otvet = (vicota * storona) / 2;
                    std::cout << "Your otvet is: " << otvet;
                    }
                    
                else{
                    std::cout << "debil";
                }

        break;

        case 2:

            double storona1;
            double storona2;

            std::cout << "Vvedi pervuy storonu: " << std::endl;
            std::cin >> storona1;
            
            std::cout << "Vvedi vtoruy storonu: " << std::endl;
            std::cin >> storona2;

            otvet = storona1 * storona2;
            std::cout << "Your otvet is: " << otvet;

        break;

        case 3:

        double storonak;
        double diogonal;

        std::cout << "est diogonal? (Da = 1, Net = 2)" << std::endl;
        std::cin >> answer;
            if (answer == 1){
                std::cout << "skolk diogonal" << std::endl;
                std::cin >> diogonal;
                otvet = (diogonal * diogonal) / 2;
                std::cout << "Your otvet is: " << otvet;
            }

            else if (answer == 2){
                std::cout << "skolk storona" << std::endl;
                std::cin >> storonak;
                otvet = storonak * storonak;
                std::cout << "Your otvet is: " << otvet;
            }

            else{
                    std::cout << "debil";
                }

    }

    return 0;
}
