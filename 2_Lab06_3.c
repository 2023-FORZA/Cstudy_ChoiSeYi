//3566

#include <stdio.h>
#include <math.h>

int monitor_num, rh, rv, sh, sv, rhi, rvi, shi, svi, pi, result = 2147483647, tem;

// 두 숫자 중 더 높은 숫자 리턴
int max(int a, int b){
    return a > b ? a : b;
}

// 두 숫자 중 더 낮은 숫자 리턴
int min(int a, int b){
    return a < b ? a : b;
}

// 특정 모니터를 사용할 때 소비될 총 비용
int calculate(int a, int b, int c, int d, int price){
    int highest_h, highest_v;
    
    // 세로 화면 해상도, 세로 화면 크기를 만족시키기 위해 필요한 모니터 개수
    highest_h = max(ceil((double)rh / a), ceil((double)sh / c));
    
    // 가로 화면 해상도, 가로 화면 크기를 만족시키기 위해 필요한 모니터 개수
    highest_v = max(ceil((double)rv / b), ceil((double)sv / d));
    
    // 총 비용 = 가로로 필요한 모니터 개수 * 세로로 필요한 모니터 개수 * 모니터 하나당 비용
    return highest_h * highest_v * price;
}

int main(){
    
    scanf("%d %d %d %d", &rh, &rv, &sh, &sv);
    scanf("\n%d", &monitor_num);
    
    for(int j = 0; j < monitor_num; j++){
        scanf("\n%d %d %d %d %d", &rhi, &rvi, &shi, &svi, &pi);
        
        // 기본 상태로 계산한 비용, 가로 세로를 바꿔서 계산한 비용
        // 지금까지 구한 비용 중 최저 비용 중 가장 낮은 것으로 선택해서 최저 비용을 업데이트
        result = min(result, min(calculate(rhi, rvi, shi, svi, pi), calculate(rvi, rhi, svi, shi, pi)));
    }
    
    printf("%d\n", result);
    return 0;
}