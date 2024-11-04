NewusersLogin()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.5");

	web_url("192.168.1.193:8084", 
		"URL=http://192.168.1.193:8084/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	/* Click to Enter Store */

	lr_think_time(16);

	web_url("Enter the Store", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Sign In */

	lr_think_time(18);

	web_url("Sign In", 
		"URL=http://192.168.1.193:8084/actions/Account.action;jsessionid=A8CC9ACB195D3AD6951F4764771F763E?signonForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	/* Enter Username and Password */

	web_submit_data("Account.action", 
		"Action=http://192.168.1.193:8084/actions/Account.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Account.action;jsessionid=A8CC9ACB195D3AD6951F4764771F763E?signonForm=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=test10", ENDITEM, 
		"Name=password", "Value=test123", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=60TbOrfHmGUYvfBfABbQ2DP55HZzIthbin-2dvqYCmSG4TVZPnYaDjynDVqGYHk2t_WKrZWcBHBgWB-kUaS5c5xOS0zbiVIRIbdN0L2hYKM=", ENDITEM, 
		"Name=__fp", "Value=a0cs7YfLUvFjdiSN-SIZUdo2r9ITVP7TMMvkf-9s92hjKA3NbeVKVBiwRidfWZ9G", ENDITEM, 
		LAST);

	/* Select Product Dogs */

	lr_think_time(27);

	web_url("sm_dogs.gif", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action?viewCategory=&categoryId=DOGS", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	/* Select Product Id k9-PO-02 */

	lr_think_time(37);

	web_url("K9-PO-02", 
		"URL=http://192.168.1.193:8084/actions/Catalog.action?viewProduct=&productId=K9-PO-02", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action?viewCategory=&categoryId=DOGS", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	/* Click to Add to Cart */

	lr_think_time(18);

	web_url("Add to Cart", 
		"URL=http://192.168.1.193:8084/actions/Cart.action?addItemToCart=&workingItemId=EST-8", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Catalog.action?viewProduct=&productId=K9-PO-02", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Proceed to Checkout */

	lr_think_time(29);

	web_url("Proceed to Checkout", 
		"URL=http://192.168.1.193:8084/actions/Order.action?newOrderForm=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Cart.action?addItemToCart=&workingItemId=EST-8", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	/* Select Master Card */

	lr_think_time(41);

	web_submit_data("Order.action", 
		"Action=http://192.168.1.193:8084/actions/Order.action", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Order.action?newOrderForm=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=order.cardType", "Value=MasterCard", ENDITEM, 
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
		"Name=_sourcePage", "Value=2GsgG6Uugv4Z7loKpG_4qQ1aEcngcC1RIDmhUCuz9ioQ-Nz2_YTF_f5kWHSUQ2rU_pbr3pwvOhAJwmHYdJp39PYYh4-Fl-rtTS_47ZOcv6c=", ENDITEM, 
		"Name=__fp", "Value=yHLRzUQYt5ZgJckzmV-BQb7hfmi6KFmbY01W2eQWmFzZ0E3VHILB99nEmgc_Gzrpn9o0qtSN6blKskvsgFhE4cKAG4wmlqfAmjea414x4gtZeRItQjacIg==", ENDITEM, 
		LAST);

	/* Click Confirm */

	web_reg_find("Text=Thank you, your order has been submitted", 
		LAST);

	lr_think_time(15);

	web_url("Confirm", 
		"URL=http://192.168.1.193:8084/actions/Order.action?newOrder=&confirmed=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Order.action", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	/* Click Sign Out */

	web_url("Sign Out", 
		"URL=http://192.168.1.193:8084/actions/Account.action?signoff=", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.1.193:8084/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}