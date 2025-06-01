TelStarter_MapScripts::
	.byte 0


TelStarter_Happy::
# 5 "data/maps/TelStarter/scripts.pory"
	lock
# 6 "data/maps/TelStarter/scripts.pory"
	faceplayer
# 8 "data/maps/TelStarter/scripts.pory"
	compare VAR_RECEIVED_EGG, 1
	goto_if_eq TelStarter_Happy_2
# 16 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_1, MSGBOX_YESNO
# 19 "data/maps/TelStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TelStarter_Happy_5
# 51 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_5
TelStarter_Happy_4:
# 54 "data/maps/TelStarter/scripts.pory"
	releaseall
	end

TelStarter_Happy_2:
# 9 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_0
# 11 "data/maps/TelStarter/scripts.pory"
	waitmessage
# 12 "data/maps/TelStarter/scripts.pory"
	releaseall
	end

TelStarter_Happy_5:
# 20 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_SPECIES, SPECIES_CHARMANDER
# 21 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_LEVEL, 1
# 22 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_SHINY, 1
# 23 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_IV_HP, 31
# 24 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_IV_ATK, 31
# 25 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_IV_DEF, 31
# 26 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_IV_SPEED, 31
# 27 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_IV_SPATK, 31
# 28 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_IV_SPDEF, 31
# 29 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_NATURE, 15
# 30 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_ITEM, 0
# 31 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_MOVE1, 0
# 32 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_MOVE2, 0
# 33 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_MOVE3, 0
# 34 "data/maps/TelStarter/scripts.pory"
	setvar VAR_CUSTOM_EGG_MOVE4, 0
# 36 "data/maps/TelStarter/scripts.pory"
	showmonpic SPECIES_EGG, 10, 3
# 37 "data/maps/TelStarter/scripts.pory"
	special Special_GiveCustomEgg
# 38 "data/maps/TelStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TelStarter_Happy_9
# 42 "data/maps/TelStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TelStarter_Happy_10
# 47 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_4
TelStarter_Happy_8:
# 49 "data/maps/TelStarter/scripts.pory"
	hidemonpic
	goto TelStarter_Happy_4

TelStarter_Happy_9:
# 39 "data/maps/TelStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_2
# 41 "data/maps/TelStarter/scripts.pory"
	setvar VAR_RECEIVED_EGG, 1
	goto TelStarter_Happy_8

TelStarter_Happy_10:
# 43 "data/maps/TelStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 44 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_3
# 45 "data/maps/TelStarter/scripts.pory"
	setvar VAR_RECEIVED_EGG, 1
	goto TelStarter_Happy_8


TelStarter_Happy_Text_0:
# 9 "data/maps/TelStarter/scripts.pory"
	.string "T'en veux plus hein chacal\p"
	.string "T'en as déjà un, casse-toi.$"

TelStarter_Happy_Text_1:
# 16 "data/maps/TelStarter/scripts.pory"
	.string "Putin j'ai la fibre dans cette ville,\n Enfin ...\p Après 7 ans à me battre pour l'avoir\p  Pour la peine,\n Tient un œuf de mon pokémon favori.\n Tu le veux ?$"

TelStarter_Happy_Text_2:
# 40 "data/maps/TelStarter/scripts.pory"
	.string "Oeuf reçu !$"

TelStarter_Happy_Text_3:
# 44 "data/maps/TelStarter/scripts.pory"
	.string "Ton équipe est pleine, l'œuf a été envoyé dans le PC !\p$"

TelStarter_Happy_Text_4:
# 47 "data/maps/TelStarter/scripts.pory"
	.string "T'es plein !$"

TelStarter_Happy_Text_5:
# 51 "data/maps/TelStarter/scripts.pory"
	.string "Ah ok connard$"
