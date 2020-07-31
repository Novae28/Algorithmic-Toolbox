#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
long long MaxPairwise_product(const std::vector<int> &number)
{
	long max1=number[0],max2=-1,temp,index=0;
	for(int i=1;i<number.size();i++)
		{
			if(number[i]>max1)
				{
					index=i;
					max1=number[i];

				}
		}
    //std::cout<<"\n"<<index;
	for(int i=0;i<number.size();i++)
		{
			if((i!=index)&&(number[i]>max2))
				{
					max2=number[i];

                }
        }
 //if(number.size()==1)
   // max2=1;
	return (long long)max1*max2;
}
/*long long MaxPairwiseProduct(const std::vector<int>& numbers) {
    long long max_product = 0;
    int n = numbers.size();

    for (int first = 0; first < n; ++first) {
        for (int second = first + 1; second < n; ++second) {
            max_product = std::max(max_product,
                (long long)numbers[first] * numbers[second]);
        }
    }

    return max_product;
}*/

int main() {

    /*while(true)      //stress Testing
    {
        int n=rand()%1000 +2;
        std::cout<<n;
        std::vector<int> a;
        for(int i=0;i<n;i++)
        {
            a.push_back(rand()%100);
        }
        std::cout<<"\n";
        for(int i=0;i<n;i++)
        {
            std::cout<<" "<<a[i];
        }
        std::cout<<"\n";
        std::cout<<MaxPairwise_product(a)<<" "<<MaxPairwiseProduct(a);
        if(MaxPairwise_product(a)==MaxPairwiseProduct(a))
            std::cout<<"\nok\n";
        else
            break;

    }*/
    int n;
    std::cin >> n;
    std::vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::cout << (long long)MaxPairwise_product(numbers)<< "\n";
    return 0;
}
