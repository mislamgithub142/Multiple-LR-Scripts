NewusersLogin()
{
    
    char *allcategoryid;
    char *allproductid;
    char *allitemid;
    char *allcardtypes;
    

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("{p_url}", 
		"URL=http://{p_url}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/* Click to Enter Store */

	lr_think_time(10);

	web_reg_save_param_regexp(
		"ParamName=jsessionid_2",
		"RegExp=JSESSIONID=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/Catalog.action*",
		LAST);

	web_url("Enter the Store", 
		"URL=http://{p_url}/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Sign In */

	lr_think_time(10);

	web_reg_save_param_attrib(
		"ParamName=_sourcePage_3",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_reg_save_param_attrib(
		"ParamName=__fp_3",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("Sign In",
		"URL=http://{p_url}/actions/Account.action;jsessionid={jsessionid_2}?signonForm=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{p_url}/actions/Catalog.action",
		"Snapshot=t19.inf",
		"Mode=HTML",
		LAST);

	/* Enter Username and Password */
	
	
	//viewCategory=&amp;categoryId=FISH">
	
	web_reg_save_param("categoryid",
                   "LB=viewCategory=&amp;categoryId\=",
                   "RB=\">",
                   "ord=all",LAST);


	web_submit_data("Account.action",
		"Action=http://{p_url}/actions/Account.action",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{p_url}/actions/Account.action;jsessionid={jsessionid_2}?signonForm=",
		"Snapshot=t20.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value=test10", ENDITEM,
		"Name=password", "Value=test123", ENDITEM,
		"Name=signon", "Value=Login", ENDITEM,
		"Name=_sourcePage", "Value={_sourcePage_3}", ENDITEM,
		"Name=__fp", "Value={__fp_3}", ENDITEM,
		LAST);
	
	
		allcategoryid=lr_paramarr_random("categoryid");
    	lr_save_string(allcategoryid,"allcategoryid");
	

	/* Select Product {categoryId} */

	lr_think_time(10);
	
	//viewProduct=&amp;productId={productId}">
	
	web_reg_save_param("productid",
                   "LB=viewProduct\=&amp;productId\=",
                   "RB=\">",
                   "ord=all",LAST);
	
	
	
	

	web_url("sm_{categoryId}.gif", 
		"URL=http://{p_url}/actions/Catalog.action?viewCategory=&categoryId={allcategoryid}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Catalog.action", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);
	
	 allproductid=lr_paramarr_random("productid");
    	lr_save_string(allproductid,"allproductid");
    	
	

	/* Select Product Id {productId} */

	lr_think_time(10);
	
	//viewItem=&amp;itemId={itemId}">
	
	web_reg_save_param("itemid",
                   "LB=viewItem\=\&amp;itemId\=",
                   "RB=\">",
                   "ord=all",LAST);
	
	
	
	
	
	
	
	

	web_url("{productId}", 
		"URL=http://{p_url}/actions/Catalog.action?viewProduct=&productId={allproductid}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Catalog.action?viewCategory=&categoryId={allcategoryid}", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);
	
	
   	allitemid=lr_paramarr_random("itemid");
    	lr_save_string(allitemid,"allitemid");

	/* Click to Add to Cart */

	lr_think_time(10);
	
	
	
	
	

	web_url("Add to Cart", 
		"URL=http://{p_url}/actions/Cart.action?addItemToCart=&workingItemId={allitemid}", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Catalog.action?viewProduct=&productId={allproductid}", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Proceed to Checkout */

	lr_think_time(20);

	web_reg_save_param_attrib(
		"ParamName=_sourcePage_4",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_reg_save_param_attrib(
		"ParamName=__fp_4",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);
	
	//<option value="MasterCard">
	
	web_reg_save_param("cardtypes",
                   "LB=\<option value\=\"",
                   "RB=\">",
                   "ord=all",LAST);
	
	

	web_url("Proceed to Checkout", 
		"URL=http://{p_url}/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Cart.action?addItemToCart=&workingItemId={allitemid}", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);
	
	
	allcardtypes=lr_paramarr_random("cardtypes");
    	lr_save_string(allcardtypes,"allcardtypes");
	
	

	/* Select Master Card */

	lr_think_time(10);

	web_submit_data("Order.action",
		"Action=http://{p_url}/actions/Order.action",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{p_url}/actions/Order.action?newOrderForm=",
		"Snapshot=t25.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=order.cardType", "Value={allcardtypes}", ENDITEM,
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM,
		"Name=order.expiryDate", "Value=12/03", ENDITEM,
		"Name=order.billToFirstName", "Value=Mohammed8920", ENDITEM,
		"Name=order.billToLastName", "Value=Islam4465", ENDITEM,
		"Name=order.billAddress1", "Value=6537 Main ST.", ENDITEM,
		"Name=order.billAddress2", "Value=", ENDITEM,
		"Name=order.billCity", "Value=South Amboy", ENDITEM,
		"Name=order.billState", "Value=NJ", ENDITEM,
		"Name=order.billZip", "Value=05372", ENDITEM,
		"Name=order.billCountry", "Value=USA", ENDITEM,
		"Name=newOrder", "Value=Continue", ENDITEM,
		"Name=_sourcePage", "Value={_sourcePage_4}", ENDITEM,
		"Name=__fp", "Value={__fp_4}", ENDITEM,
		LAST);

	/* Click Confirm */

	web_reg_find("Text=Thank you, your order has been submitted", 
		LAST);

	lr_think_time(10);

	web_url("Confirm", 
		"URL=http://{p_url}/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Order.action", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Sign Out */

	web_url("Sign Out", 
		"URL=http://{p_url}/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}