{% if moduleName and moduleName == 'webappitem' %}
    {% assign myUrl = url %}
{% else %}
    {% assign myUrl = globals.get.ID %}
{% endif %}

{% assign tmp = myUrl | split: '/' %}
{% assign rootFolder = tmp[0] %}


{% case rootFolder -%}
  {% when 'contractors' -%}
    {% assign menuId = 1706768 %}

  {% when 'services' -%}
    {% assign menuId = 1707396 %}
    
  {% else -%}
    {% assign menuId = '' %}
{% endcase -%}

{module_menu, version="2", menuId="{{menuId}}", moduleTemplateGroup="Aside"}

