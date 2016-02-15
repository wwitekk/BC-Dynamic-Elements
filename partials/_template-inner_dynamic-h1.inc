{module_json, json="/_System/Data/h1.json" template="" collection="data" }

<!-- 
the below turns various urls of the same page:
/page/
/page.html
/page.htm
to
/page 
-->

{% assign pageUrl =  this.globals.get.id | remove: '/index.html' | remove: '/index.htm' | split: '/' | join: '/' | prepend: '/' %}
{% for item in data.pages -%}
    {% if item.url ==  pageUrl -%}
        {% assign h1 = item.h1 %}
    {% endif -%}
{% endfor -%}

<h1>{% if h1 and h1 != '' -%}{{h1}}{% else %}{module_pagename}{% endif -%}</h1>