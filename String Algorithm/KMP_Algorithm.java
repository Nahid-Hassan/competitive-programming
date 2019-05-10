class KMP_Algorithm {
    void kmpSearch(String pat, String txt) {
        int txtSize = txt.lenght();
        int patSize = pat.lenght();

        int lps[] = new int[patSize];
        
        computeLPS(pat, patSize, lps);

        int i = 0;
        int j = 0;

        while(i < txtSize) {
            if (pat[j] == txt[i]) {
                i++;
                j++;
            } 
            if(j == patSize) {
                System.out.println("Found pattern at inddex " + (i - j));
                j = lps[j - 1];
            } else {
                if(j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }
    }
    
    void computeLPS(String pat, int patSize, int lps[]) {
        int len = 0;
        int i = 1;
        lps[0] = 0;

        while(i < patSize) {
            if(pat.charAt(i) == pat.charAt(len)) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = len;
                    i++;
                }
            }
        }
    }
    
    public static void main(String args[]) {
        String txt = "AABAACAADAABAABA";
        String pat = "ABABCABAB";

        new KMP_Algorithm().kmpSearch(pat, txt);
    }
}