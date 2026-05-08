#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> date;

    // 각 작업 완료까지 걸리는 날짜 계산
    for(int i = 0; i < progresses.size(); i++) {
        int remain = 100 - progresses[i];

        int day = remain / speeds[i];

        if(remain % speeds[i] != 0)
            day++;

        date.push_back(day);
    }

    // 배포 묶기
    int current = date[0];
    int count = 1;

    for(int i = 1; i < date.size(); i++) {

        // 앞 기능보다 빨리 끝나거나 같으면 같이 배포
        if(date[i] <= current) {
            count++;
        }
        else {
            answer.push_back(count);

            current = date[i];
            count = 1;
        }
    }

    answer.push_back(count);

    return answer;
}