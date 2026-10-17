# Домашнее задание к работе 4 #
## Условие задачи ##
В игре три героя (A, B, C) атакуют босса. Их специальная способность "Тройной удар" активируется, только если уровень силы каждого из них кратен трем. Запишите условие активации способности.

## 1. Алгоритм и блок-схема ##

### Алгоритм ###

1. **Начало**
2. Задать исходные данные:
    * `int A` = 9 - уровень силы первого героя.
    * `int B` = 12 - уровень силы второго героя.
    * `int C` = 15 - уровень силы третьего героя.
   
3. Проверить, делится ли уровень силы каждого из героев на 3 без остатка:
    * `if (A % 3 == 0 && B % 3 == 0 && C % 3 == 0)` - оператор && нужен чтобы проверить, что все три условия выполняются одновременно, а % нужен для проверки кратности чисел 3.
4. Если все три условия выполняются:
    * `printf("Тройной удар активирован!\n");` - выводим "Тройной удар активирован!".
5. Иначе если хотя бы одно условие не выполнено:
    * `printf("Условие не выполнено.\n");` - выводим "Условие не выполнено."
6. **Конец**

### Блок-схема ###

<img width="512" height="642" alt="Блок-схема алгоритма программы drawio" src="https://github.com/user-attachments/assets/8f4d037b-b060-446a-8d6e-5c1f863f35c4" />

[Блок-схема алгоритма программы, созданной в draw.io](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=%D0%91%D0%BB%D0%BE%D0%BA-%D1%81%D1%85%D0%B5%D0%BC%D0%B0%20%D0%B0%D0%BB%D0%B3%D0%BE%D1%80%D0%B8%D1%82%D0%BC%D0%B0%20%D0%BF%D1%80%D0%BE%D0%B3%D1%80%D0%B0%D0%BC%D0%BC%D1%8B.drawio.png&dark=0#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%A1%D1%82%D1%80%D0%B0%D0%BD%D0%B8%D1%86%D0%B0-1%22%20id%3D%22mSo6wd_UgSDNky1yiRql%22%3E7VpLc%2BMoEP4te3BVcohLL8v20Y9ktnZqqmY3h82cUkTCMhVJeBEe2%2Fvrl5deSI5lRXKS2fiAoWkaif5oPhADexHtvxCwWX%2FDPgwHluHvB%2FZyYFmmYYzYH5ccpMSdOFIQEOQrpVxwj%2F6FaUsl3SIfJiVFinFI0aYs9HAcQ4%2BWZIAQvCurrXBY7nUDAlgR3HsgrEr%2FRj5dS%2BnEGufy3yEK1mnPpjuVNU%2FAew4I3saqv5Ar3fiAPF8NLPtO%2FAbWIstfy2YRSPtQA5CsgY93BZF9O7AXBGMqc9F%2BAUM%2B5ulwynZ3R2qz9yEwpk0aBHd0i74u%2F7T%2BuvvD%2FWpbjw%2BPzs2oakUZTughHbqEEvycjRp78PmaRiHLmizLXmvD9aJ9wIEzXIV4560BocOEsvSR6%2BzWiML7DfC44o6pMdkKheECh5gw0ekhZfo4pvX6hvhJfZlP9RUKTTctq3cSzy1e6hyLclx%2BgnCrxmWwNAbTpUgNns7GeX46F%2BmtagQJhfvC%2BCoXfYE4gpQcmMq6AL6JgswuB6plKJmyYqewUtPRUUWgpkmQWc4hwTIKFWcgRM0P6FemVxUyeEs8eBptBWjB2J%2Fxyc1KXgiSBHlldIl5B%2FnzGawE94g%2B8PxwpEo%2FlB7PL%2FcFteWhUPgOCWKjAYmSdeH7k04cKY8QGAKKfpZHr%2BDZ0QueUz18x4gNde57o%2Bx7W3e%2BdIRqVQwJmiFHA5HpaobYDA4grRgSQMpeuz22Jo2ijwowTAuEIQwxizORFoMqAWpT8HipYQEKtWEpBxw3DIiXxhBuNZF5Y2jZLSLY%2BajTY1gNCt2QctMbEJdGzf1ny9eVuSd7m7HKQockeLqSnRnp37X8r6uR%2BE8tslzA%2F2eyei7%2FFumTMBzIh5Falwp%2FFeR2Fv%2BmHca%2FyRvEvw8e61w91ukm2sa6DGUXinUpD%2B6FavnQQwnC8UWiUl3YZHPeQ3GgMFeMW85LcWtDYG3Y4gZuViBC4UEGL1YFIt6RUliAxAM%2BAqzqG46xXi36NIQVGbO5DZNNmw2tDWZvGEfRKu38iaSyK%2FnKjC4ZNs%2BxJ%2BEPw03lIyHTalGzJWN0h9YWR6xdH10CMrFw9ysWBtM6f2WozPPOVgbTPGNpqA35MY7hi%2FE%2BZs%2F5UCz8yKM%2FL%2BYhX5QOxVJXpFfGxQaR7Z2sGJnDX8uOs6UmRdL4wiuG1Te%2Bzt1Tf3Au0RkydEOObqhvZDhNgFDeytSt2gVggKcEh1sKZ%2FmOp7z%2FcWr3WZfZA7XdM9nvhntMh%2BNj3GNDGErqSMBJUlLLY1IJP4%2ByBsyLE3EeNb8V6VSky5KEvSFXs0XREamhGlbXf1XL0pnQEYdg84lIs7zWqVVotfyt9NR1hOG6Y9JgVEmD6ZRJQ3ZKfWxCd0caGp24svej5flZS7pLk0kF%2B%2BKMVCLA5k3Md5isR3HwwUcQeSCcqYoI%2BT7v%2BpXLw%2BnjCn4k6qhD0ja%2BtKuudDVPjrUYb%2FbmSfdy9C9nfNmG%2F5P%2BNdvnOzr%2Fb7zIO2VDo0sfGJxz8t4KXx%2BczrldefokZPr29PSTzv0ydO5tnqftuVZzOnqErHXAUm1BGE1BD%2BcV2iip5egIFV2mtUbahJmSVXcFU2XlAgUeNmCjR6joRQnqSDuLyD4Bdk5rrAueapVpTU5k6mlNfwxm%2Bq7XNUv%2FttV0XTM10Dg6aHpe1yy7CXJ%2B5b2OvBwyUpvxfnY8jq152eotNDivDQ1NvnG23PT8X6NDa9b75tFh1PdC88H3N5Uv1m3XgZMLSt%2BePuek5NQdivTs%2B%2FMSRXMkmdolCqftJQr9w4d76ZgxPg6cz%2Fuqje6rztS9VJ2euK3oSYOrWuYpzDTgJ6yYX5SWYMpvqdu3%2FwE%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)

## 2. Реализация программы ##
Оператор % находит остаток от деления. Если число кратно трём, остаток от деления на 3 равен нулю. Оператор && проверяет, что все три условия выполняются одновременно.

## 3. Результаты работы программы ##
<img width="1202" height="202" alt="image" src="https://github.com/user-attachments/assets/3ca4d0b0-92a2-401d-9878-4babc6e26a27" />

## 4. Информация о разработчике ##
**Четверня Данил, БТИИ-262**
