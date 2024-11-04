Action()
{
   char  *allproducts;
   char  *allimages;
   char *allcardtypes;
   int icount;
   const char len;
   
	web_set_sockets_option("SSL_VERSION", "AUTO");
	web_set_max_html_param_len(99999);
	
	//web_set_max_html_param_len(99999); //if 3 digits put 3 999 4 digits put 9999

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");
	
	lr_start_transaction("01_WT_HomePage");

	
     web_reg_find("Search=All",
		"SaveCount=count",
		"Text=Enter the Store",
		LAST);
	
	

	
	

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
	
	
	  
	 
	 
	
	lr_think_time(10);
	

	/* Click Enter the Store */
	
	lr_start_transaction("02_WT_EnterStore");

	
	
	web_reg_save_param("categoryIdimage",
                   "LB=<img src\=",
                   "RB=\" />",
                   "ord=all",LAST);
	
	
//	web_reg_save_param("categoryId",
 //                  "LB=categoryId\=",
   //                "RB=\">",
     //              "ord=all",LAST);

	

	web_reg_save_param_regexp(
		"ParamName=jsessionid",
		"RegExp=JSESSIONID=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/Catalog.action*",
		LAST);
     
     
//  web_reg_find("Search=All",
//		"SaveCount=count",
//		"Text=Enter the Store",
//		LAST);  
     
     

	web_url("Enter the Store", 
		"URL=http://{p_url}/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
     
     icount=atoi(lr_eval_string("count"));
	if(icount>0)
	{	
	    lr_end_transaction("02_WT_EnterStore", LR_PASS);
	}
	 else
	 {	
	    lr_end_transaction("02_WT_EnterStore", LR_FAIL);
	}
     
          
	
     
     
     
	lr_think_time(10);

	/* Click Sign In */
	
	lr_start_transaction("03_WT_ClickLogin");


	web_reg_save_param_attrib(
		"ParamName=_sourcePage",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_reg_save_param_attrib(
		"ParamName=__fp",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_reg_find("Search=All",
		"Text=Username",
		LAST);

	web_url("Sign In",
		"URL=http://{p_url}/actions/Account.action;jsessionid={jsessionid}?signonForm=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{p_url}/actions/Catalog.action",
		"Snapshot=t3.inf",
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("03_WT_ClickLogin", LR_AUTO);

	
	lr_think_time(10);

	/* Enter Login Info */
	
	lr_start_transaction("04_WT_Login");


		

	web_submit_data("Account.action",
		"Action=http://{p_url}/actions/Account.action",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{p_url}/actions/Account.action;jsessionid={jsessionid}?signonForm=",
		"Snapshot=t4.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value=mislam123", ENDITEM,
		"Name=signon", "Value=Login", ENDITEM,
		"Name=_sourcePage", "Value={_sourcePage}", ENDITEM,
		"Name=__fp", "Value={__fp}", ENDITEM,
		LAST);
	
    lr_end_transaction("04_WT_Login", LR_AUTO);

	
	lr_think_time(10);

	/* Select Product Fish */
	lr_start_transaction("05_WT_SelectProducts");


	
	web_url("{allimages}", 
		"URL=http://{p_url}/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	
	//allproducts=lr_paramarr_random("categoryId");
	//lr_save_string(allproducts,"allproducts"); 
	
	allimages=lr_paramarr_random("categoryIdimage");
	lr_save_string(allimages,"allimages"); 
	
	
	lr_think_time(10);
	
	lr_end_transaction("05_WT_SelectProducts", LR_AUTO);


	/* Select Product Id Fi-sw-02 */
	
	lr_start_transaction("06_WT_SelectSubProducts");


	
	web_reg_find("Search=All",
		"Text=200 ",
		LAST);

	web_url("FI-SW-02", 
		"URL=http://{p_url}/actions/Catalog.action?viewProduct=&productId=FI-SW-02", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	
     lr_end_transaction("06_WT_SelectSubProducts", LR_AUTO);

	
	lr_think_time(10);

	/* Click Add to Cart */
   lr_start_transaction("07_WT_AddtoCart");

	
	web_url("Add to Cart", 
		"URL=http://{p_url}/actions/Cart.action?addItemToCart=&workingItemId=EST-3", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Catalog.action?viewProduct=&productId=FI-SW-02", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
    lr_end_transaction("07_WT_AddtoCart", LR_AUTO);

	lr_think_time(10);
	
	
	/* Click Proceed to CheckOut */
	lr_start_transaction("08_WT_ProceedtoCheckOut");

	
	

	web_reg_save_param_attrib(
		"ParamName=__fp_1",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_reg_save_param_attrib(
		"ParamName=_sourcePage_1",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);
	
	//<option value="American Express">
	
		web_reg_save_param("CardType",
                 "LB=\<option value\=\"",
                   "RB=\">",
                   "ord=all",LAST);
	
	
	
	

	web_url("Proceed to Checkout", 
		"URL=http://{p_url}/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Cart.action?addItemToCart=&workingItemId=EST-3", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
		
	lr_end_transaction("08_WT_ProceedtoCheckOut", LR_AUTO);
	
    lr_think_time(10);

	/* Click Continue with Payment */
     lr_start_transaction("09_WT_ContinuewithPayment");

	
	web_reg_find("Search=All",
		"Text=Confirm",
		LAST);

	web_submit_data("Order.action",
		"Action=http://{p_url}/actions/Order.action",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{p_url}/actions/Order.action?newOrderForm=",
		"Snapshot=t9.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=order.cardType", "Value={allcardtypes}", ENDITEM,
		"Name=order.creditCard", "Value=999 {p_randnum} 9999 {p_randnum}", ENDITEM,
		"Name=order.expiryDate", "Value={p_date}", ENDITEM,
		"Name=order.billToFirstName", "Value={FirstName}", ENDITEM,
		"Name=order.billToLastName", "Value={LastName}", ENDITEM,
		"Name=order.billAddress1", "Value=225 Tyler ST", ENDITEM,
		"Name=order.billAddress2", "Value=", ENDITEM,
		"Name=order.billCity", "Value=SOUTH AMBOY", ENDITEM,
		"Name=order.billState", "Value=NJ", ENDITEM,
		"Name=order.billZip", "Value=08879", ENDITEM,
		"Name=order.billCountry", "Value=United States", ENDITEM,
		"Name=newOrder", "Value=Continue", ENDITEM,
		"Name=_sourcePage", "Value={_sourcePage_1}", ENDITEM,
		"Name=__fp", "Value={__fp_1}", ENDITEM,
		LAST);
	
	
	allcardtypes=lr_paramarr_random("CardType");
	lr_save_string(allcardtypes,"allcardtypes");
	
	
	lr_end_transaction("09_WT_ContinuewithPayment", LR_AUTO);

	
	lr_think_time(10);
	

	/* Click to Confirm */
    lr_start_transaction("10_WT_Confirm");

	
	web_url("Confirm", 
		"URL=http://{p_url}/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Order.action", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
    
    lr_end_transaction("10_WT_Confirm", LR_AUTO);

	
	lr_think_time(10);
	
	

	/* Click to SignOut */
	
	lr_start_transaction("11_WT_SignOut");


	web_url("Sign Out", 
		"URL=http://{p_url}/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);
	
	
	lr_end_transaction("11_WT_SignOut", LR_AUTO);


	return 0;
}