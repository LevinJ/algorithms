class LRUCache {
private:
	struct HTData{
		int val;
		std::list<int>::iterator adr;
		HTData(){

		};
		HTData(int val_p, std::list<int>::iterator adr_p):val(val_p), adr(adr_p){

		};
	};
	std::list<int> lru_list_;
	std::unordered_map<int, HTData> ht_;
	int size_;

public:
    LRUCache(int capacity):size_(capacity) {

    }

    int get(int key) {
    	if(ht_.find(key) == ht_.end()){
    		return -1;
    	}

    	auto ht_data = ht_[key];
    	lru_list_.erase(ht_data.adr);
    	lru_list_.push_front(key);
    	ht_data.adr = lru_list_.begin();

    	ht_[key] = ht_data;
    	return ht_data.val;
    }

    void put(int key, int value) {
    	if(ht_.find(key) != ht_.end()){
    		//update the list
    		auto ht_data = ht_[key];
    		lru_list_.erase(ht_data.adr);
    		lru_list_.push_front(key);

    		//update the hash table
    		ht_data.adr = lru_list_.begin();
    		ht_data.val = value;
    		ht_[key] = ht_data;
    		return;
    	}

    	if(ht_.size() >= size_){
    		auto last_item_it = lru_list_.end();
    		last_item_it--;
    		auto last_key = *last_item_it;

    		lru_list_.pop_back();
    		ht_.erase(last_key);
    	}

    	lru_list_.push_front(key);
    	HTData ht_data(value, lru_list_.begin());

    	ht_[key] = ht_data;
    	return;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
