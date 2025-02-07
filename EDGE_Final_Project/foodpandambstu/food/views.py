# views.py
from django.shortcuts import render, get_object_or_404
from .models import FoodItem

def menu(request):
    food_items = FoodItem.objects.all()
    return render(request, 'food/menu.html', {'food_items': food_items})
