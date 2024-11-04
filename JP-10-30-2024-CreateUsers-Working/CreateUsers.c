CreateUsers()
{
  lr_start_transaction("01_WT_HomePage");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("{p_url}", 
		"URL=http://{p_url}/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("01_WT_HomePage", LR_AUTO);

	    
	 lr_think_time(10);
	 
	 /* Click the Store */
    lr_start_transaction("02_WT_ClickStore");
	

	web_reg_save_param_regexp(
		"ParamName=jsessionid_1",
		"RegExp=JSESSIONID=(.*?);",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"IgnoreRedirections=No",
		"RequestUrl=*/Catalog.action*",
		LAST);

	web_url("Catalog.action", 
		"URL=http://{p_url}/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{p_url}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);
    
    lr_end_transaction("02_WT_ClickStore", LR_AUTO);
    lr_think_time(10);

	/* Click Sign In */

	lr_start_transaction("03_WT_ClickSignIn");


	web_url("Sign In",
		"URL=http://{p_url}/actions/Account.action;jsessionid={jsessionid_1}?signonForm=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{p_url}/actions/Catalog.action",
		"Snapshot=t14.inf",
		"Mode=HTML",
		LAST);
	
	lr_end_transaction("03_WT_ClickSignIn", LR_AUTO);
    
	lr_think_time(10);

	/* Click Register Now */
	
    lr_start_transaction("04_WT_RegisterNow");

	

	web_reg_save_param_attrib(
		"ParamName=_sourcePage_2",
		"TagName=input",
		"Extract=value",
		"Name=_sourcePage",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_reg_save_param_attrib(
		"ParamName=__fp_2",
		"TagName=input",
		"Extract=value",
		"Name=__fp",
		"Type=hidden",
		SEARCH_FILTERS,
		"IgnoreRedirections=No",
		LAST);

	web_url("Register Now!",
		"URL=http://{p_url}/actions/Account.action?newAccountForm=",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=http://{p_url}/actions/Account.action;jsessionid={jsessionid_1}?signonForm=",
		"Snapshot=t15.inf",
		"Mode=HTML",
		LAST);
    
    lr_end_transaction("04_WT_RegisterNow", LR_AUTO);

    lr_think_time(10);

	/* Enter User Info */
	lr_start_transaction("05_WT_EnterUserinfo");


	web_submit_data("Account.action",
		"Action=http://{p_url}/actions/Account.action",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=http://{p_url}/actions/Account.action?newAccountForm=",
		"Snapshot=t16.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value={createusers}", ENDITEM,
		"Name=password", "Value=test123", ENDITEM,
		"Name=repeatedPassword", "Value=test123", ENDITEM,
		"Name=account.firstName", "Value=Mohammed{fourdigits}", ENDITEM,
		"Name=account.lastName", "Value=Islam{fourdigits}", ENDITEM,
		"Name=account.email", "Value=test{fourdigits}@gmail.com", ENDITEM,
		"Name=account.phone", "Value=732243{fourdigits}", ENDITEM,
		"Name=account.address1", "Value={fourdigits} Main ST.", ENDITEM,
		"Name=account.address2", "Value=", ENDITEM,
		"Name=account.city", "Value=South Amboy", ENDITEM,
		"Name=account.state", "Value=NJ", ENDITEM,
		"Name=account.zip", "Value=0{fourdigits}", ENDITEM,
		"Name=account.country", "Value=USA", ENDITEM,
		"Name=account.languagePreference", "Value=english", ENDITEM,
		"Name=account.favouriteCategoryId", "Value=FISH", ENDITEM,
		"Name=newAccount", "Value=Save Account Information", ENDITEM,
		"Name=_sourcePage", "Value={_sourcePage_2}", ENDITEM,
		"Name=__fp", "Value={__fp_2}", ENDITEM,
		LAST);
	
	lr_end_transaction("05_WT_EnterUserinfo", LR_AUTO);


	return 0;
}