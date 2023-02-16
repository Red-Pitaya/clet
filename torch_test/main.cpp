#include <iostream>
#include <torch/torch.h>

using namespace std;

int main()
{
    torch::Tensor tensor = torch::eye(3);
    std::cout << tensor << std::endl;
    cout << "Hello World!" << endl;
    return 0;
}
