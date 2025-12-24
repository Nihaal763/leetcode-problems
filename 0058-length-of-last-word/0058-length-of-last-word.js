/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    s = s.trim(" ");
    let str = s.split(" ");
    let N = str.length;
    let c = str[N-1];
    return c.length;
};