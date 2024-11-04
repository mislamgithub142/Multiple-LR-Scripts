DowhileLoop()
{
       
  
   int i=1;
   
   do {
	web_set_sockets_option("SSL_VERSION", "AUTO");
	
	//web_set_max_html_param_len(999); //if 3 digits put 3 999 4 digits put 9999

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");
	
	lr_start_transaction("01_WT_HomePage");
    

	web_url("{p_url}", 
		"URL=http://{p_url}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	 
	lr_end_transaction("01_WT_HomePage", LR_AUTO);
	
	 i++;
		} while (i <=5);
    
    return 0;
}
