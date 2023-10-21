class Solution {
public:
    int romanToInt(string s) {
        int num=0;   
       

        for(int i = 0 ; i< s.length() ; i++){
            
            switch(s[i])
            {
                case 'I':
                    switch(s[i+1])
                    {
                        case 'V':
                            num = num + 4;
                            i++;
                            break;
                        case 'X':
                            num = num + 9;
                            i++;
                            break;
                        default:
                            num = num + 1;
                            break;
                    }

                    break;
                case 'V':
                    num = num + 5;
                    break;
                    
                   
                case 'X':
                     switch(s[i+1])
                    {
                        case 'L':
                            num = num + 40;
                            i++;
                            break;
                        case 'C':
                            num = num + 90;
                            i++;
                            break;
                        default:
                            num = num + 10;
                            break;
                    }

                    break;
                    
                case 'L':
                    num = num + 50;
                    break;
                    
                case 'C':
                     switch(s[i+1])
                    {
                        case 'D':
                            num = num + 400;
                            i++;
                            break;
                        case 'M':
                            num = num + 900;
                            i++;
                            break;
                        default:
                            num = num + 100;
                            break;
                    }

                    break;
                    
                case 'D':
                    num = num + 500;
                    break;
                    
                case 'M':
                    num = num + 1000;
                    break;
                   
                default :
                    num+=0;
                    break;
            }

            
        }
        return num;
        
    }
};
