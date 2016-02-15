        {% if url -%}
            {% assign myUrl = url %}
        {% elsif globals.get.id -%}
            {% assign myUrl = globals.get.id %}
        {% else -%}
            
        {% endif -%}

        {% if myUrl -%}
            <link rel="canonical" href="http://{{globals.site.host}}{{myUrl}}" />
        {% endif -%}