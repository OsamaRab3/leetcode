/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    let f = s.split('').sort().join();
      let sec = t.split('').sort().join();

      if (f!==sec)
        return false;
    return true;
    
};