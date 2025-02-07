# urls.py (inside the food app)
from django.urls import path
from . import views

urlpatterns = [
    path('', views.menu, name='menu'),
]
