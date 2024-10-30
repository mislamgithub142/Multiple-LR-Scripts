Action2()
{

	/* Enter For Login */

	web_revert_auto_header("Accept-Language");

	web_custom_request("$batch", 
		"URL=https://activity.windows.com/v3/feeds/me/$batch", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=multipart/mixed", 
		"Referer=", 
		"Mode=HTML", 
		"EncType=multipart/mixed; boundary=\"Batch_1730233108\"", 
		"Body=--Batch_1730233108\r\nContent-Type: application/http\r\nContent-Transfer-Encoding: binary\r\n\r\nPUT https://activity.windows.com/v3/feeds/me/activities/2F036240-A6C6-C7BC-9AE7-4C08B29A460B HTTP/1.1\r\nContent-Length: 3237\r\nContent-Type: application/json\r\nX-AFS-CV: LvWEBl/Sn0u5eCWbG2r8fQ.2.4.2.4.1.0.1.0\r\nX-AFS-Scenario: 11:MicrosoftDevice.Apps.InstalledApps\r\n\r\n{\n   \"__schemaVersion\" : 1,\n   \"activityId\" : \"2F036240-A6C6-C7BC-9AE7-4C08B29A460B\",\n   \"appActivityId\" : \""
		"{b051c56e-6d98-40dd-817e-686e74154dbf}$windows.data.apps.appmetadata$appmetadatalist|windows.data.apps.appmetadata${771fd6b0-fa20-440a-a002-3b3bac16dc50}_is1\",\n   \"appId\" : {\n      \"alternateId\" : \"\",\n      \"data_boundary\" : \"MicrosoftDevice.Apps.InstalledApps\",\n      \"packageId\" : \"\"\n   },\n   \"applicationId\" : [\n      {\n         \"application\" : \"MicrosoftDevice.Apps.InstalledApps\",\n         \"platform\" : \"data_boundary\"\n      },\n      {\n         \"application\""
		" : \"\",\n         \"platform\" : \"packageId\"\n      },\n      {\n         \"application\" : \"\",\n         \"platform\" : \"alternateId\"\n      }\n   ],\n   \"createdInCloud\" : \"2024-05-28T16:22:16.000Z\",\n   \"expiration\" : \"2034-10-08T16:06:48.000Z\",\n   \"groupIds\" : \"{b051c56e-6d98-40dd-817e-686e74154dbf}$windows.data.apps.appmetadata$appmetadatalist\",\n   \"lastModifiedOnClient\" : \"2024-10-29T18:15:24.000Z\",\n   \"originalLastModifiedOnClient\" : \"2024-10-10T16:01:48.000Z\","
		"\n   \"originalPayload\" : \""
		"Q0IBABIqewA3ADcAMQBGAEQANgBCADAALQBGAEEAMgAwAC0ANAA0ADAAQQAtAEEAMAAwADIALQAzAEIAMwBCAEEAQwAxADYARABDADUAMAB9AF8AaQBzADEAMgxFAHgAdABlAHIAbgBhAGwAIABNAFMASQBKEiwzAEoAcQB1AGMAOQBDADgANgBnAEwAcABaAEoANQBLAEIAcgBvAHkAawA1AGcAVwAvAHAANgBuADYAWAB3AC8AKwBzADcARABFAGEAcwAwAFEAYgBNAD0AAGoSLDMASgBxAHUAYwA5AEMAOAA2AGcATABwAFoASgA1AEsAQgByAG8AeQBrADUAZwBXAC8AcAA2AG4ANgBYAHcALwArAHMANwBEAEUAYQBzADAAUQBiAE0APQAAkiNNAGkAYwByAG8AcwBvAGYAdAAgAFYAaQBzAHUAYQBsACAAUwB0AHUAZABpAG8AIABDAG8AZABlACAAKABVAHMAZQByACkAshVNAG"
		"kAYwByAG8AcwBvAGYAdAAgAEMAbwByAHAAbwByAGEAdABpAG8AbgDGBuDJrMGtnsbtAdIHBjEALgA5ADQALgAyANIIATAA0goeaAB0AHQAcABzADoALwAvAGMAbwBkAGUALgB2AGkAcwB1AGEAbABzAHQAdQBkAGkAbwAuAGMAbwBtAC8A0gseaAB0AHQAcABzADoALwAvAGMAbwBkAGUALgB2AGkAcwB1AGEAbABzAHQAdQBkAGkAbwAuAGMAbwBtAC8A0g03QQBSAFAAXABVAHMAZQByAFwAWAA2ADQAXAB7ADcANwAxAEYARAA2AEIAMAAtAEYAQQAyADAALQA0ADQAMABBAC0AQQAwADAAMgAtADMAQgAzAEIAQQBDADEANgBEAEMANQAwAH0AXwBpAHMAMQDSDg5OAG8AUgBlAGwAaQBhAGIAbABlAEkAbgBmAG8AAA==\",\n   \"payload\" : \""
		"Q0IBABIqewA3ADcAMQBGAEQANgBCADAALQBGAEEAMgAwAC0ANAA0ADAAQQAtAEEAMAAwADIALQAzAEIAMwBCAEEAQwAxADYARABDADUAMAB9AF8AaQBzADEAMgxFAHgAdABlAHIAbgBhAGwAIABNAFMASQBKEiwzAEoAcQB1AGMAOQBDADgANgBnAEwAcABaAEoANQBLAEIAcgBvAHkAawA1AGcAVwAvAHAANgBuADYAWAB3AC8AKwBzADcARABFAGEAcwAwAFEAYgBNAD0AAGoSLDMASgBxAHUAYwA5AEMAOAA2AGcATABwAFoASgA1AEsAQgByAG8AeQBrADUAZwBXAC8AcAA2AG4ANgBYAHcALwArAHMANwBEAEUAYQBzADAAUQBiAE0APQAAkiNNAGkAYwByAG8AcwBvAGYAdAAgAFYAaQBzAHUAYQBsACAAUwB0AHUAZABpAG8AIABDAG8AZABlACAAKABVAHMAZQByACkAshVNAG"
		"kAYwByAG8AcwBvAGYAdAAgAEMAbwByAHAAbwByAGEAdABpAG8AbgDGBpDOlpjnr8rtAdIHBjEALgA5ADUALgAwANIIATAA0goeaAB0AHQAcABzADoALwAvAGMAbwBkAGUALgB2AGkAcwB1AGEAbABzAHQAdQBkAGkAbwAuAGMAbwBtAC8A0gseaAB0AHQAcABzADoALwAvAGMAbwBkAGUALgB2AGkAcwB1AGEAbABzAHQAdQBkAGkAbwAuAGMAbwBtAC8A0g03QQBSAFAAXABVAHMAZQByAFwAWAA2ADQAXAB7ADcANwAxAEYARAA2AEIAMAAtAEYAQQAyADAALQA0ADQAMABBAC0AQQAwADAAMgAtADMAQgAzAEIAQQBDADEANgBEAEMANQAwAH0AXwBpAHMAMQDSDg5OAG8AUgBlAGwAaQBhAGIAbABlAEkAbgBmAG8AAA==\",\n   \"platformDeviceId\" : \""
		"nmJStzTnYuJIlUz2HrUys00aBpZBPyir+wIohBvxdY8=\",\n   \"priority\" : 3,\n   \"read\" : false,\n   \"startTime\" : \"2024-05-28T16:17:14.000Z\",\n   \"tags\" : \"windows.data.apps.appmetadata\",\n   \"type\" : 11,\n   \"userActionState\" : 0\n}\n\r\n--Batch_1730233108\r\nContent-Type: application/http\r\nContent-Transfer-Encoding: binary\r\n\r\nPUT https://activity.windows.com/v3/feeds/me/activities/B71CA748-B48E-F1EF-EB1E-1F19F9798CB6 HTTP/1.1\r\nContent-Length: 2645\r\nContent-Type: application/"
		"json\r\nX-AFS-CV: QSXVBydpS02xen1h1lhNXw.6.2.4.1.0.1.0\r\nX-AFS-Scenario: 11:MicrosoftDevice.Apps.InstalledApps\r\n\r\n{\n   \"__schemaVersion\" : 1,\n   \"activityId\" : \"B71CA748-B48E-F1EF-EB1E-1F19F9798CB6\",\n   \"appActivityId\" : \"{b051c56e-6d98-40dd-817e-686e74154dbf}$windows.data.apps.appleveltileinfo$appleveltilelist|windows.data.apps.appleveltileinfo$w~microsoft.visualstudiocode\",\n   \"appId\" : {\n      \"alternateId\" : \"\",\n      \"data_boundary\" : \""
		"MicrosoftDevice.Apps.InstalledApps\",\n      \"packageId\" : \"\"\n   },\n   \"applicationId\" : [\n      {\n         \"application\" : \"MicrosoftDevice.Apps.InstalledApps\",\n         \"platform\" : \"data_boundary\"\n      },\n      {\n         \"application\" : \"\",\n         \"platform\" : \"packageId\"\n      },\n      {\n         \"application\" : \"\",\n         \"platform\" : \"alternateId\"\n      }\n   ],\n   \"createdInCloud\" : \"2024-05-28T16:25:38.000Z\",\n   \"expiration\" : \""
		"2034-10-08T16:06:48.000Z\",\n   \"groupIds\" : \"{b051c56e-6d98-40dd-817e-686e74154dbf}$windows.data.apps.appleveltileinfo$appleveltilelist\",\n   \"lastModifiedOnClient\" : \"2024-10-29T18:15:26.000Z\",\n   \"originalLastModifiedOnClient\" : \"2024-10-10T16:01:50.000Z\",\n   \"originalPayload\" : \"Q0IBABIcVwB+"
		"AE0AaQBjAHIAbwBzAG8AZgB0AC4AVgBpAHMAdQBhAGwAUwB0AHUAZABpAG8AQwBvAGQAZQAqEixEADAAegBtAHEAbwBLAFEAagBKAHUAbwBRADgAdwBjADkAMgA1AFgARwB5ADgAaQBZADAAdABnAEQAYgAvAG4ARgAxAHcAWQBaADEAYQA5AFEATgBvAD0AAEoSLEQAMAB6AG0AcQBvAEsAUQBqAEoAdQBvAFEAOAB3AGMAOQAyADUAWABHAHkAOABpAFkAMAB0AGcARABiAC8AbgBGADEAdwBZAFoAMQBhADkAUQBOAG8APQAAchJWAGkAcwB1AGEAbAAgAFMAdAB1AGQAaQBvACAAQwBvAGQAZQCSElYAaQBzAHUAYQBsACAAUwB0AHUAZABpAG8AIABDAG8AZABlAMoGEkBDADoAXABVAHMAZQByAHMAXABtAGkAcwBsAGEAXABBAHAAcABEAGEAdABhAFwATABvAGMAYQBsAFwAUA"
		"ByAG8AZwByAGEAbQBzAFwATQBpAGMAcgBvAHMAbwBmAHQAIABWAFMAIABDAG8AZABlAFwAQwBvAGQAZQAuAGUAeABlAADSBxJWAGkAcwB1AGEAbAAgAFMAdAB1AGQAaQBvACAAQwBvAGQAZQAA\",\n   \"payload\" : \"Q0IBABIcVwB+"
		"AE0AaQBjAHIAbwBzAG8AZgB0AC4AVgBpAHMAdQBhAGwAUwB0AHUAZABpAG8AQwBvAGQAZQAqEixEADAAegBtAHEAbwBLAFEAagBKAHUAbwBRADgAdwBjADkAMgA1AFgARwB5ADgAaQBZADAAdABnAEQAYgAvAG4ARgAxAHcAWQBaADEAYQA5AFEATgBvAD0AAEoSLEQAMAB6AG0AcQBvAEsAUQBqAEoAdQBvAFEAOAB3AGMAOQAyADUAWABHAHkAOABpAFkAMAB0AGcARABiAC8AbgBGADEAdwBZAFoAMQBhADkAUQBOAG8APQAAchJWAGkAcwB1AGEAbAAgAFMAdAB1AGQAaQBvACAAQwBvAGQAZQCSElYAaQBzAHUAYQBsACAAUwB0AHUAZABpAG8AIABDAG8AZABlAMoGEkBDADoAXABVAHMAZQByAHMAXABtAGkAcwBsAGEAXABBAHAAcABEAGEAdABhAFwATABvAGMAYQBsAFwAUA"
		"ByAG8AZwByAGEAbQBzAFwATQBpAGMAcgBvAHMAbwBmAHQAIABWAFMAIABDAG8AZABlAFwAQwBvAGQAZQAuAGUAeABlAADSBxJWAGkAcwB1AGEAbAAgAFMAdAB1AGQAaQBvACAAQwBvAGQAZQAA\",\n   \"platformDeviceId\" : \"nmJStzTnYuJIlUz2HrUys00aBpZBPyir+wIohBvxdY8=\",\n   \"priority\" : 3,\n   \"read\" : false,\n   \"startTime\" : \"2024-05-28T16:25:37.000Z\",\n   \"tags\" : \"windows.data.apps.appleveltileinfo\",\n   \"type\" : 11,\n   \"userActionState\" : 0\n}\n\r\n--Batch_1730233108--", 
		LAST);

	/* Click Flight */

	/* Select Find Flight */

	/* Select Flight 050 */

	/* Select Payment Details Info */

	/* Select Itinerary */

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_custom_request("log_3", 
		"URL=https://mail.yahoo.com/d/log?appid=mail_app", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yahoo.com/desktop_sw.js", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"meta\":{\"platform\":\"browser\",\"app\":\"mail_app\",\"env\":\"production\",\"colo\":\"bf1\",\"farm\":\"4262\",\"shardId\":\"165167__axLoIDde2RCSob4FSYPWQ\",\"yid\":\"nazrul.islam142\",\"locale\":\"en-US\",\"region\":\"us\",\"bldVer\":\"1.0.13468\",\"buildNumber\":\"1.0.13468\",\"partnr\":\"\",\"cbe\":\"\",\"prdct\":\"norrin\",\"adFree\":false,\"paidUserType\":\"free\",\"conv\":false,\"buckets\":\"rocket_GA_desk_test-3-v1::ymailnodintaic01::test-caas-guid-bucketing-dev::ymailnorrinppt01:"
		":Wayfair_TOM_Commerce_Desktop_Broad::MailPPVampTestDesktop::mbr-universal-profile::mbr-up-pfs-control\",\"userSegId\":\"2\",\"appName\":\"mail_app\",\"configTimestamp\":-1,\"os\":\"Windows 10\",\"browser\":\"Chrome 130.0.0.0\",\"partner\":\"\",\"rid\":\"7hoon3hji21qi\"},\"events\":[{\"type\":\"feature\",\"featureEvent\":\"success\",\"featureName\":\"setup\",\"component\":\"norrin/service_worker\",\"message\":\"feature_success\",\"data\":{}}]}", 
		LAST);

	web_custom_request("log_4", 
		"URL=https://mail.yahoo.com/d/log?appid=mail_app", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=https://mail.yahoo.com/desktop_sw.js", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"meta\":{\"platform\":\"browser\",\"app\":\"mail_app\",\"env\":\"production\",\"colo\":\"bf1\",\"farm\":\"4262\",\"shardId\":\"165167__axLoIDde2RCSob4FSYPWQ\",\"yid\":\"nazrul.islam142\",\"locale\":\"en-US\",\"region\":\"us\",\"bldVer\":\"1.0.13468\",\"buildNumber\":\"1.0.13468\",\"partnr\":\"\",\"cbe\":\"\",\"prdct\":\"norrin\",\"adFree\":false,\"paidUserType\":\"free\",\"conv\":false,\"buckets\":\"rocket_GA_desk_test-3-v1::ymailnodintaic01::test-caas-guid-bucketing-dev::ymailnorrinppt01:"
		":Wayfair_TOM_Commerce_Desktop_Broad::MailPPVampTestDesktop::mbr-universal-profile::mbr-up-pfs-control\",\"userSegId\":\"2\",\"appName\":\"mail_app\",\"configTimestamp\":-1,\"os\":\"Windows 10\",\"browser\":\"Chrome 130.0.0.0\",\"partner\":\"\",\"rid\":\"7hoon3hji21qi\"},\"events\":[{\"type\":\"feature\",\"featureEvent\":\"success\",\"featureName\":\"push_notification_received\",\"component\":\"norrin/service_worker\",\"message\":\"feature_success\",\"data\":{\"messageId\":\""
		"AIJvMgosmlIaZyFDjgWRyCO04CE\"}}]}", 
		LAST);

	/* Click Check and Delete Itinerary */

	/* Click Sign Off */

	return 0;
}