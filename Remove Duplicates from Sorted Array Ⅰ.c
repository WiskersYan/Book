/*Code1:时间复杂度O(n),空间复杂度O(1)*/
class Solution{
public:
int removeDuplicates01(vector<int>& nums) {
	if(nums.empty()) return 0;
	int index=0;
	for(int i=0; i<nums.size(); i++) {
		if(nums[index]!=nums[i]) {
			nums[++index]=nums[i];
		}
	}
	return index;
}
};

/*Code2:时间复杂度O(n),空间复杂度O(1)*/
class Solution{
public:
int removeDuplicates01(vector<int>& nums) {
	return distance(nums.begin(), unique(nums.begin(), nums.end));
}
};
