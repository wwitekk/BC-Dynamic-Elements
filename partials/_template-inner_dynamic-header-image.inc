		{% assign url = globals.get.ID %}
		{% assign tmp = url | split: '/' %}
		{% assign image = tmp[0] %}

		{%assign tmp = url | strip%}
		{% if tmp and this.tmp != '' -%}
			<img class="inner_main-image" src="/_Assets/images/headers/{{image}}.jpg" alt="{{image}}" onerror="this.style.display='none';"> 
		{% endif -%}