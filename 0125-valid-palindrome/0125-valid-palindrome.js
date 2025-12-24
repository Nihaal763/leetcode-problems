/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s = s.trim();
    s = s.toLowerCase();
    s = s.replace(/[^a-z0-9]/g, "");
    let N = s.length;
    let start =  0;
    let end = N-1;
    while(start<end){
        if(s[start]!== s[end]){
           return false;
        }
        ++start;
        --end;
    }
    return true;
};