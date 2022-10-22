class MedianFinder {
public:
    int i;
    double median;
    priority_queue<int>a;
    priority_queue<int, vector<int>, greater<int> >b;
    
    MedianFinder() {
        i = 0;
    }
    
    void addNum(int num) {
        
        i++;
        
        if ( a.empty() ) {
            a.push(num);
            median = num;
            return;
        }
        
        if ( i%2 == 0 ) {
        
            if ( num >= median ) {
                b.push(num);
            }else{
                b.push(a.top());
                a.pop();
                a.push(num);
            }
            median = ( (double)a.top() + (double)b.top() ) / 2;

        }else{

            if ( num <= b.top() ) {
                a.push(num);
            }else{
                a.push(b.top());
                b.pop();
                b.push(num);
            }
            median = a.top();

        }
        
    }
    
    double findMedian() {
        return median;
    }
    
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */