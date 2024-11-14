#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        float one_person_work = (float)m1 * d;
        int total_farmer = m1 + m2;
        float total_work_day = one_person_work / total_farmer;
        int fewer_days = (int)ceil(d - total_work_day);
        printf("%d\n", fewer_days);
    }

    return 0;
}

