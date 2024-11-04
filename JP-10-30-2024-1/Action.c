Action()
{
   
   char  *allimages;
   char  *allProducts;
   char *allsubproducts;
   char *allworkingitems;
	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("192.168.1.193:8084", 
		"URL=http://192.168.1.193:8084/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(10);
	

	/* Click Enter the Store */
   //	categoryId=FISH">
	
	web_reg_save_param("categoryId",
                   "LB=categoryId\=",
                   "RB=\">",
                   "ord=all",LAST);
	
	web_reg_save_param("categoryIdimage",
                   "LB=<img src\=",
                   "RB=\" />",
                   "ord=all",LAST);
	
	


	

	web_reg_save_param_regexp(
		"ParamName=jsessionid",
		"RegExp=JSESSIONID=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/Catalog.action*",
		LAST);

	web_url("Enter the Store", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(10);

	/* Click Sign In */

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

	web_url("Sign In",
		"URL=http://192.168.1.193:8084/actions/Account.action;jsessionid={jsessionid}?signonForm=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://192.168.1.193:8084/actions/Catalog.action",
		"Snapshot=t3.inf",
		"Mode=HTML",
		LAST);
	
	lr_think_time(10);

	/* Enter Login Info */

	web_submit_data("Account.action",
		"Action=http://192.168.1.193:8084/actions/Account.action",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://192.168.1.193:8084/actions/Account.action;jsessionid={jsessionid}?signonForm=",
		"Snapshot=t4.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value={username}", ENDITEM,
		"Name=password", "Value=mislam123", ENDITEM,
		"Name=signon", "Value=Login", ENDITEM,
		"Name=_sourcePage", "Value={_sourcePage}", ENDITEM,
		"Name=__fp", "Value={__fp}", ENDITEM,
		LAST);
	
	lr_think_time(10);

	/* Select Product Fish */
	
	
	web_reg_save_param("subproductId",
                   "LB=productId\=",
                  "RB=\">",
                   "ord=all",LAST);
	
		

	
	web_url("{allimages}", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);
	
	allProducts=lr_paramarr_random("categoryId");
	lr_save_string(allProducts,"allProducts"); 
	 
	
	allimages=lr_paramarr_random("categoryIdimage");
	lr_save_string(allimages,"allimages"); 
	
	
	lr_think_time(10);
	
	

	/* Select Product Id Fi-sw-02 */
	
	
	//addItemToCart=&amp;workingItemId=EST-3"
	
	
	web_reg_save_param("workingItemId",
                   "LB=workingItemId\=",
                  "RB=\"",
                   "ord=all",LAST);

	
	web_url("{allsubproducts}", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action?viewProduct=&productId={allproductsid}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action?viewCategory=&categoryId=FISH", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);
	
	
	allsubproducts=lr_paramarr_random("subproductId");
	lr_save_string(allsubproducts,"allsubproducts");
	
	lr_think_time(10);

	/* Click Add to Cart */

	
	web_url("Add to Cart", 
		"URL=http://192.168.1.193:8084/actions/Cart.action?addItemToCart=&workingItemId=EST-3", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action?viewProduct=&productId=FI-SW-02", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(10);

	/* Click Proceed to CheckOut */

	
	web_reg_save_param_attrib(
		"ParamName=_sourcePage_1",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_reg_save_param_attrib(
		"ParamName=__fp_1",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("Proceed to Checkout", 
		"URL=http://192.168.1.193:8084/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Cart.action?addItemToCart=&workingItemId={allworkingitems}", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);
	
	
	allworkingitems=lr_paramarr_random("workingItemId");
	lr_save_string(allworkingitems,"allworkingitems");
	
	lr_think_time(10);
	
	
	
	
	

	/* Click Continue with Payment */

	
	web_submit_data("Order.action",
		"Action=http://192.168.1.193:8084/actions/Order.action",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://192.168.1.193:8084/actions/Order.action?newOrderForm=",
		"Snapshot=t9.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=order.cardType", "Value=Visa", ENDITEM,
		"Name=order.creditCard", "Value=999 9999 9999 {p_randnum}", ENDITEM,
		"Name=order.expiryDate", "Value=12/03", ENDITEM,
		"Name=order.billToFirstName", "Value=Mohammed", ENDITEM,
		"Name=order.billToLastName", "Value=Islam", ENDITEM,
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
	
	
	lr_think_time(10);

	/* Click to Confirm */

	
	web_url("Confirm", 
		"URL=http://192.168.1.193:8084/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Order.action", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_think_time(10);

	/* Click to SignOut */

	web_url("Sign Out", 
		"URL=http://192.168.1.193:8084/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}