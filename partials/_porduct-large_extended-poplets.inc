<!-- poplets with description taken from custom2 -->

<link type="text/css" href="/CatalystStyles/lightbox.css?vs=b1663.r460422-phase1" rel="StyleSheet" />
<script type="text/javascript" src="/CatalystScripts/Cache/lightbox2022.js?vs=b1663.r460422-phase1"></script>
{% assign colours = custom3 | split: ',' -%}
{% assign coloursSize = colours | size -%}
{% for item in this.poplets -%}
	{% assign imageColour = '' -%}
	{% if forloop.index0 < coloursSize -%}
		{% assign imageColour = colours[forloop.index0] -%}
	{% endif -%}
	<a class="product-poplets_item" onclick="myLightbox.start(this); return false;" title="{{imageColour}} | {{name}}" 
		href="{{item.url}}" rel="lightbox[{{this.id}}]">
		<img src="{{item.url}}" alt="{{name}} | {{imageColour}}">
		{{imageColour}} &nbsp;
	</a>

	
{% endfor -%}