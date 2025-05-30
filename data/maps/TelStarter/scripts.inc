TelStarter_MapScripts::
	.byte 0


TelStarter_Happy::
# 5 "data/maps/TelStarter/scripts.pory"
	lock
# 6 "data/maps/TelStarter/scripts.pory"
	faceplayer
# 7 "data/maps/TelStarter/scripts.pory"
	showmonpic SPECIES_EGG, 10, 3
# 9 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text, MSGBOX_YESNO
# 10 "data/maps/TelStarter/scripts.pory"
	release
# 13 "data/maps/TelStarter/scripts.pory"
	compare VAR_RECEIVED_EGG, 0
	goto_if_eq TelStarter_Happy_2
# 32 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_3
TelStarter_Happy_1:
# 35 "data/maps/TelStarter/scripts.pory"
	hidemonpic
# 36 "data/maps/TelStarter/scripts.pory"
	waitmessage
# 37 "data/maps/TelStarter/scripts.pory"
	releaseall
	end

TelStarter_Happy_2:
# 14 "data/maps/TelStarter/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq TelStarter_Happy_5
# 29 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_notChosen
	goto TelStarter_Happy_1

TelStarter_Happy_5:
# 15 "data/maps/TelStarter/scripts.pory"
	giveegg SPECIES_TYRUNT
# 18 "data/maps/TelStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TelStarter_Happy_9
# 21 "data/maps/TelStarter/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TelStarter_Happy_10
# 24 "data/maps/TelStarter/scripts.pory"
	compare VAR_RESULT, MON_CANT_GIVE
	goto_if_eq TelStarter_Happy_11
TelStarter_Happy_8:
# 27 "data/maps/TelStarter/scripts.pory"
	setvar VAR_RECEIVED_EGG, 1
	goto TelStarter_Happy_1

TelStarter_Happy_9:
# 19 "data/maps/TelStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_0
	goto TelStarter_Happy_8

TelStarter_Happy_10:
# 22 "data/maps/TelStarter/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_1
	goto TelStarter_Happy_8

TelStarter_Happy_11:
# 25 "data/maps/TelStarter/scripts.pory"
	msgbox TelStarter_Happy_Text_2
	goto TelStarter_Happy_8


TelStarter_Happy_Text_0:
# 20 "data/maps/TelStarter/scripts.pory"
	.string "Oeuf reçu dans ton groupe\p$"

TelStarter_Happy_Text_1:
# 23 "data/maps/TelStarter/scripts.pory"
	.string "Oeuf reçu dans ta boîte\p$"

TelStarter_Happy_Text_2:
# 25 "data/maps/TelStarter/scripts.pory"
	.string "T'es plein\p$"

TelStarter_Happy_Text_3:
# 32 "data/maps/TelStarter/scripts.pory"
	.string "Tu as déjà reçu l'œuf.\p$"

TelStarter_Happy_Text::
# 41 "data/maps/TelStarter/scripts.pory"
	.string "Putin j'ai la fibre dans cette ville\n"
	.string "Enfin ...\p"
	.string "Après 7 ans à me battre pour l'avoir\p"
	.string "Pour la peine je vais te donner\n un œuf de mon pokémon favoris\p$"

TelStarter_Happy_notChosen::
# 48 "data/maps/TelStarter/scripts.pory"
	.string "A ok connard$"
