from django.db import models

class FoodItem(models.Model):
    name = models.CharField(max_length=100)
    description = models.TextField()
    price = models.DecimalField(max_digits=6, decimal_places=2)
    image = models.ImageField(upload_to='food_images/', null=True, blank=True)

    def __str__(self):
        return self.name

class Order(models.Model):
    food_item = models.ForeignKey(FoodItem, on_delete=models.CASCADE)
    quantity = models.IntegerField(default=1)
    ordered_at = models.DateTimeField(auto_now_add=True)

    def __str__(self):
        return f"{self.food_item.name} (x{self.quantity})"
