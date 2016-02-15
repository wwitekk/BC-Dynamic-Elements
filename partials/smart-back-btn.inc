{module_referreraddress collection="address" template=""}
{% assign backUrl = address.referrer %}
{% if backUrl contains 'search-results' -%}
	{% assign backUrl = '/' %}
{% endif -%}

	<a href="{{backUrl}}">&laquo;&nbsp;go back</a>