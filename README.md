# Наследование

**Цель:** познакомиться с концепцией наследования в языке программирования C++.

**Задачи:**
  1. Реализовать класс `Bank` с методом `makeTransaction()`;
  2. Реализовать дочерние классы `DebitCard` и `CreditCard`, переопределив в них метод `makeTransaction()`;
  3. В классе `CreditCard` определить поле `credetLimit` и метод `checkCreditLimit()`.

**Язык реализации:** C++

## Определение классов
Файл `Bank.h`, содержащий определения классов:
  1. Transaction

  ![image](https://github.com/user-attachments/assets/75d37e7b-01bb-4efc-b398-1dce20a87a29)

  2. Bank
     
  ![image](https://github.com/user-attachments/assets/3bb5b856-d362-4f84-81b4-db6ab549ac3f)

  3. DebitCard
     
  ![image](https://github.com/user-attachments/assets/f2f1d8fa-e48b-43c7-a6bf-9e61656bebe7)

  4. CreditCard
     
  ![image](https://github.com/user-attachments/assets/7e88a622-5113-41a2-9364-7b7a0e484fa8)

## Реализация классов
Файл `Bank.cpp`, содержит реализации вышеперечисленных классов

![image](https://github.com/user-attachments/assets/f5b54099-ab6d-407e-81e8-f753d7c69eb7)

## Логическая модель системы

![image](https://github.com/user-attachments/assets/10a07167-1622-4b1a-9f5c-6f8f7f639fbc)

### Логическая структура:
- Transaction описывает одну операцию — сумму и дату.
- Bank ведет учет операций с использованием истории транзакций (вектора history).
- DebitCard и CreditCard наследуются от класса Bank, но реализуют свою логику операций:
  + DebitCard управляет балансом.
  + CreditCard управляет кредитным лимитом.

### Взаимодействие:
- Bank управляет историей операций.
- DebitCard и CreditCard используют возможности класса Bank для работы с транзакциями, но добавляют собственные особенности: баланс или кредитный лимит.
- Каждая транзакция сохраняется в истории банка для последующего анализа.

Таким образом, модель отражает принцип разделения обязанностей: транзакции, история транзакций и специфическая логика для дебетовых и кредитных карт.
