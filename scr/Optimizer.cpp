#include <iostream>

class Optimizer
{
public:
    void Apply()
    {
        std::cout << "[✓] Applying gaming optimizations..." << std::endl;
        std::cout << "[✓] Cleaning temporary files..." << std::endl;
        std::cout << "[✓] Optimizing startup configuration..." << std::endl;
        std::cout << "[✓] Optimization complete." << std::endl;
    }
};

int main()
{
    Optimizer optimizer;
    optimizer.Apply();

    return 0;
}
