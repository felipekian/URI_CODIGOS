#include<vector>
#include<algorithm>
#include<iostream>
#include <stdio.h>
using namespace std;

int main ()
{
    vector<int>marmores;
    vector<int> resultados;
    std::pair<std::vector<int>::iterator,std::vector<int>::iterator> it;
    int vezes, vezes2, cases=0, valor;
    while (cin>>vezes>>vezes2 && (vezes!=0 || vezes2!=0))
    {

        cases++;
        marmores.clear();
        resultados.clear();
        for(int a=0; a<vezes; a++)
        {
            cin>>valor;
            marmores.push_back(valor);
        }
        for(int a=0; a<vezes2;a++)
        {
            cin>>valor;
            resultados.push_back(valor);
        }
        sort(marmores.begin(), marmores.end());
        cout <<"CASE# "<<cases<<":"<<endl;
        for(int a=0; a<resultados.size(); a++)
            {

                    if (std::binary_search (marmores.begin(), marmores.end(), resultados[a]))
                    {
                        it =std::equal_range (marmores.begin(), marmores.end(), resultados[a]);
                        //cout <<resultados[a]<<" found at "<<it.first;
                        std::cout <<resultados[a]<<" found at "<< (it.first - marmores.begin())+1<<endl;
                    }
                    else
                        cout <<resultados[a]<<" not found"<<endl;
            }
    }

    return 0;
}
