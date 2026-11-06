#include <stdio.h>
int main()
{
    int sex;
    double weight,height,age,bmr;
    printf("请输入性别（1为男，2为女）：");
    scanf("%d", &sex);
    printf("请输入身高（cm）：");
    scanf("%lf",&height);
    printf("请输入体重（kg）：");
    scanf("%lf",&weight);
    printf("请输入年龄：");
    scanf("%lf",&age);

    if(sex == 1)
    {
        //男性公式
        bmr = 88.362 + 13.397 * weight + 4.799 * height - 5.677 * age;
    }
    else
    {
        //女性公式
        bmr = 447.593 + 9.247 * weight + 3.098 * height - 4.330 * age;
    }
    printf("基础代谢率（千卡/天）：%.2f\n",bmr);
    return 0;
}
