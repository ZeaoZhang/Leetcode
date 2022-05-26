#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class FreqStack {
public:
    FreqStack() {                   //��ʼ��
        st.clear();
        f.clear();
    }

    void push(int val) {
        if (f.find(val) != f.end())            //����f���ҵ�����ջ��Ԫ�أ���Ԫ�ز��ǵ�һ����ջ
        {
            if (f[val] == st.size() - 1)       //����ǰԪ���ѳ��ִ�������ߣ����½�һ��vector���鲢Ԫ����ջ
            {
                vector<int> value(1, val);
                st.push_back(value);
            }
            else                              //����ֱ����ջ�������һ��
            {
                st[f[val] + 1].push_back(val);
            }
            ++f[val];                         //����Ԫ��val���ִ���
        }
        else                                  //��һ����ջ
        {
            f[val] = 0;                       //��Ԫ��val�����ִ�������f��
            if (st.size() == 0)                //����ǰջstΪ�գ��½�һ��vector���飬Ԫ����ջ
            {
                vector<int> value(1, val);
                st.push_back(value);
            }
            else                              //����Ԫ��ֱ�ӽ�����Ͳ�
            {
                st[0].push_back(val);
            }

        }
    }

    int pop() {
        int layer = st.size() - 1;
        int v = st[layer].back();
        st[layer].pop_back();                //���Ƶ������ջ�������Ԫ�س�ջ

        if (st[layer].size() == 0)            //����վ����߲�Ϊ�գ�ɾ����߲�
        {
            auto it = st.end();
            it--;
            st.erase(it);
        }

        --f[v];                             //����f
        if (f[v] < 0)                        //����ʱջ�����޴�Ԫ�أ�ɾ��f�е���ϵ
        {
            f.erase(v);
        }
        return v;
    }

private:
    vector<vector<int>> st;
    map<int, int> f;
};