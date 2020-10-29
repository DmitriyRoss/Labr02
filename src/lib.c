/**
 * @file lib.c
 * @brief Файл з реалізацією функцій оперування тваринами
 *
 * @author Davydov V.
 * @date 14-apr-2020
 * @version 1.3
 */

#include "lib.h"

char *get_animal_type_name(enum animal_type type)
{
	char *result;
	switch (type) {
	case HUMAN:
		result = "Chelovek";
		break;
	case CAT:
		result = "Kit";
		break;
	case DOG:
		result = "Sobaka";
		break;
	case COW:
		result = "Korova";
		break;
	case PIG:
		result = "Svinya";
		break;
	default:
		result = "N/A";
	}
	return result;
}

void generate_animal(struct animal *entity)
{
	entity->height = (unsigned int)rand() % INT8_MAX;
	entity->weight = (unsigned int)rand() % INT8_MAX;
	entity->type = (unsigned int)rand() % ANIMAL_TYPE_COUNT;
	entity->sound = (unsigned int)rand() % INT8_MAX;
}

void show_animals(struct animal animals[], unsigned int count)
{
	for (unsigned int i = 0; i < count; i++) {
		printf("Інформація про тварину №%02u: ", i + 1);
		printf("%s: зріст = %u см, маssа = %u гр, sound = %u \n",
		       get_animal_type_name(animals[i].type), animals[i].height,
		       animals[i].weight, animals[i].sound);
	}
}
