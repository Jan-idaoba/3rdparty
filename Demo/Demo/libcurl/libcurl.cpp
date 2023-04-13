#include <iostream>
#include "libcurl/include/curl/curl.h"

#include <curl/curl.h>
int main()
{
	CURL* curl; 
	CURLcode res; 
	curl = curl_easy_init(); 
	if (curl)
	{
		curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");
		res = curl_easy_perform(curl);
		if (res != CURLE_OK)
		{
			fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res)); 
		}
		curl_easy_cleanup(curl); 
	}

	return 0;
}