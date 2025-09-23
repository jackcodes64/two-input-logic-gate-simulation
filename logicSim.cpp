#include <iostream>
#include <iomanip>

int main(){
    char reply;
    int firstInput {}, secondInput {}, gate {}, numeric{};
    do{

        std::cout<<"Simulated gates are : "<<std::endl;
        std::cout<<"   1. AND gate"<<std::endl;
        std::cout<<"   2. OR gate"<<std::endl;
        std::cout<<"   3. NAND gate"<<std::endl;
        std::cout<<"   4. NOR gate"<<std::endl;
        std::cout<<"   5. XOR gate"<<std::endl;
        std::cout<<"   6. XNOR gate"<<std::endl;
        std::cout<<"Enter a gate number to select : ";
        std::cin>>gate;
        std::cout<<std::endl;

        if(gate>6 || gate<1){
            std::cout<<gate<<" is not in the options."<<std::endl;
            return 1;
        }

        std::cout<<"Enter the two binary variables (space-separated): ";
        std::cin>>firstInput>>secondInput;
        std::cout<<std::endl;
        if((firstInput>1 || firstInput<0) || (secondInput>1 || secondInput<0)){
            std::cout<<firstInput<<" and "<<secondInput<<" pair is not all-binary input"<<std::endl;
            return -1;
        }
        switch(gate){
            case 1://AND gate
            std::cout<<(firstInput && secondInput)<<std::endl;
            break;

            case 2://OR gate
            std::cout<<(firstInput || secondInput)<<std::endl;
            break;

            case 3://NAND gate
            std::cout<<((firstInput && secondInput)? 0: 1)<<std::endl;
            break;

            case 4://NOR gate
            std::cout<< ((firstInput || secondInput)? 0: 1)<<std::endl;
            break;

            case 5://XOR gate
            std::cout<<(firstInput ^ secondInput)<<std::endl;
            break;

            case 6:// XNOR
            std::cout<< ((firstInput ^ secondInput)? 0: 1)<<std::endl;
            break;

            default:
            std::cout<<gate<<" is not in the options. Select Y to try again"<<std::endl;
            break;

        }

        std::cout<<"Do you want another test? (Y/N) : ";
        std::cin>>reply;
        std::cout<<std::endl;
    } while(toupper(reply)=='Y');

}
