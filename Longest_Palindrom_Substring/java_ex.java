public class java_ex
{
	public static String longestPalindrome(String s) 
	{
		if (s.length() == 1) {
			return s;
		}
        String curr = "";
        int len = 0;
        String temp = "";
        for (int i = 0; i <= s.length(); i++) {
            for (int j = i; j <= s.length(); j++) {
                temp = s.substring(i,j);
                if (isPalindrome(temp) && (j-i+1) > len) {
                    len = j-i+1;
                    curr = temp; 
                }
            }
        }
        return curr;
    }

    public static boolean isPalindrome(String sub) 
    {
        String rev="";
        for (int x = sub.length()-1; x >= 0; x--) {
            rev = rev + sub.charAt(x);
        }
        return sub.equals(rev);
    }

	public static void main(String[] args) 
	{
		String temp = "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
		String ans = longestPalindrome(temp);
		System.out.println("Original: " + temp);
		System.out.println("Longest Palindrome: " + ans);
	}
}