bool isPalindrome(int x){
long int count=1;
int r=0;                        //ifeelstupid.andgoodalsolittle.usedmynotescopyandcamesolutioninmymindtook2hrbutlolineed.togetbetterin.coading
if (x<0){return false;}
int x1=x;                        //tookme.like5submissions.thendid2moresubmission,gotawrosttimeinsted.8to8.1mbafterlookingsol
while (x1>0)
{                                   //one good thing my intution was right fundamentally just my space is wrrong as being a rookie.butlogicisgood?
    x1=x1/10;
    r++;count=count*10;
}
r=r;count=count/10;
int pn1=x;
int pn2=x;
while (r/2>0)
{int p1,p2;
    
    
    p1=pn1/count;
    p2=pn2%10;
    if (p1!=p2)
    {
    return false;
    }
    pn1=pn1-count*p1;
    pn2=pn2/10;
    count=count/10;r=r-1;
}
    return true;
}

    
