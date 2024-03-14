#include <iostream>
#include <cmath>

const double perfect_ratio = 50.0E6 / 115200.0 * 2;     // wartość, do której chcemy się zbliżyć
const int lower_bound = 512;
const int upper_bound = 1024;

double current_delta;
double best_delta = HUGE_VAL;
int power_of_best_delta;
int divisor_of_best_delta;
uint64_t power_of_2 = 1024;

void lookForBestRatio(){
    for(int exp = 10; exp <= 30; exp++){
        for(int divisor = power_of_2/upper_bound+1; divisor < power_of_2/lower_bound; divisor++){
            current_delta = abs((power_of_2/divisor)-perfect_ratio)/perfect_ratio;
            if(current_delta < best_delta){
                best_delta = current_delta;
                power_of_best_delta = exp;
                divisor_of_best_delta = divisor;
            }
        }
        std::cout << exp << "\t\t" << best_delta * 100 << "%\n";
        power_of_2 *= 2;
    }
}

int main(){
    std::cout << "Przeszukiwana potega\t\tNajlepszy blad\n";
    lookForBestRatio();
    std::cout << "\n\nNajlepszy blad:" << best_delta*100 << "%\n";
    std::cout << "Najlepszy sotsunek:" << pow(2, power_of_best_delta) << "/" << divisor_of_best_delta << "\n";
    getchar(); 
    return 0;   
}