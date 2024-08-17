class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        int a=max(0,min(ay2,by2)-max(ay1,by1));
        int b=max(0,min(bx2,ax2)-max(ax1,bx1));
        int arearemove=a*b;
        int area1=abs(bx2-bx1)*abs(by2-by1);
        int area2=abs(ax2-ax1)*abs(ay2-ay1);
        return area1+area2-arearemove;
    }
};