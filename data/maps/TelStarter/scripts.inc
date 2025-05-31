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
# 35 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_5
TelStarter_Happy_4:
# 38 "data/maps/TelStarter/scripts.pory"
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
	showmonpic SPECIES_EGG, 10, 3
# 21 "data/maps/TelStarter/scripts.pory"
	giveegg SPECIES_CHARMANDER
# 22 "data/maps/TelStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TelStarter_Happy_9
# 26 "data/maps/TelStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TelStarter_Happy_10
# 31 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_4
TelStarter_Happy_8:
# 33 "data/maps/TelStarter/scripts.pory"
	hidemonpic
	goto TelStarter_Happy_4

TelStarter_Happy_9:
# 23 "data/maps/TelStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 24 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_2
# 25 "data/maps/TelStarter/scripts.pory"
	setvar VAR_RECEIVED_EGG, 1
	goto TelStarter_Happy_8

TelStarter_Happy_10:
# 27 "data/maps/TelStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 28 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_3
# 29 "data/maps/TelStarter/scripts.pory"
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
# 24 "data/maps/TelStarter/scripts.pory"
	.string "Oeuf reçu !$"

TelStarter_Happy_Text_3:
# 28 "data/maps/TelStarter/scripts.pory"
	.string "Ton équipe est pleine, l'œuf a été envoyé dans le PC !\p$"

TelStarter_Happy_Text_4:
# 31 "data/maps/TelStarter/scripts.pory"
	.string "T'es plein !$"

TelStarter_Happy_Text_5:
# 35 "data/maps/TelStarter/scripts.pory"
	.string "Ah ok connard$"
