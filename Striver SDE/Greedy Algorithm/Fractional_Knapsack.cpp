class Solution {
    public:
    struct Itemm {
        int v; // value
        int w; // weight
        double p; // value/weight (profit per unit weight)
    };

    static bool comparator(Itemm a, Itemm b) {
        return a.p > b.p;
    }

    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n) {
        // Create an array of Itemm to store value, weight, and profit per unit weight
        Itemm a[n];
        double profit = 0.0;
        int s=0;
        // Populate the Itemm array
        for (int i = 0; i < n; i++) {
            a[i].v = arr[i].value;
            a[i].w = arr[i].weight;
            a[i].p = static_cast<double>(arr[i].value) / arr[i].weight; // Use floating-point division
        }

        // Sort the items based on profit per unit weight in descending order
        sort(a, a + n, comparator);

        // Debug: Print the sorted items
        //cout << "Items after sorting (value, weight, profit per unit weight):" << endl;
        for (int i = 0; i < n; i++) {
            if(s+a[i].w <= w){
               // cout<<s<<" "<<a[i].w<<endl;
                s+=a[i].w;
                profit+=a[i].v;
            }
            else{
                int remain = w - s;
                profit += a[i].v * ((double)remain / a[i].w);
                break;
            }
        }
        return profit;
    }
};
