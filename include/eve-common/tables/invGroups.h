#ifndef EVEDB_invGroups_H__
#define EVEDB_invGroups_H__

namespace EVEDB {
 namespace invGroups {

typedef enum {
	_System = 0,
	Character = 1,
	Corporation = 2,
	Region = 3,
	Constellation = 4,
	Solar_System = 5,
	Sun = 6,
	Planet = 7,
	Moon = 8,
	Asteroid_Belt = 9,
	Stargate = 10,
	Asteroid_OLD = 11,
	Cargo_Container = 12,
	Ring = 13,
	Biomass = 14,
	Station = 15,
	Station_Services = 16,
	Money = 17,
	Mineral = 18,
	Faction = 19,
	Drug = 20,
	Clone = 23,
	Voucher = 24,
	Frigate = 25,
	Cruiser = 26,
	Battleship = 27,
	Industrial = 28,
	Capsule = 29,
	Titan = 30,
	Shuttle = 31,
	Alliance = 32,
	Shield_Extender = 38,
	Shield_Recharger = 39,
	Shield_Booster = 40,
	Shield_Transporter = 41,
	Capacitor_Recharger = 43,
	Afterburner = 46,
	Cargo_Scanner = 47,
	Ship_Scanner = 48,
	Survey_Scanner = 49,
	Jump_Scrambler = 52,
	Energy_Weapon = 53,
	Mining_Laser = 54,
	Projectile_Weapon = 55,
	Missile_Launcher = 56,
	Power_Manager = 57, //Another duplicate
	Shield_Power_Relay = 57, //---
	Gyrostabilizer = 59,
	Damage_Control = 60,
	Capacitor_Battery = 61,
	Armor_Repair_Unit = 62,
	Hull_Repair_Unit = 63,
	Stasis_Web = 65,
	Energy_Transfer_Array = 67,
	Energy_Vampire = 68,
	Energy_Destabilizer = 71,
	Smart_Bomb = 72,
	Hybrid_Weapon = 74,
	Capacitor_Booster = 76,
	Shield_Hardener = 77,
	Hull_Mods = 78, //should be reinforced bulkheads
	Reinforced_Bulkheads = 78, //need to remove Hull_Mods
	ECM_Burst = 80,
	Passive_Targeting_System = 82,
	Ammo = 83,
	Missile = 84,
	Hybrid_Ammo = 85,
	Frequency_Crystal = 86,
	Capacitor_Booster_Charge = 87,
	Defender_Missile = 88,
	Torpedo = 89,
	Bomb = 90,
	Mine = 92,
	Trading = 94,
	Trade_Session = 95,
	Automated_Targeting_System = 96,
	Proximity_Drone = 97,
	Armor_Coating = 98,
	Sentry_Gun = 99,
	Combat_Drone = 100,
	Mining_Drone = 101,
	Clone_Blueprint = 104,
	Frigate_Blueprint = 105,
	Cruiser_Blueprint = 106,
	Battleship_Blueprint = 107,
	Industrial_Blueprint = 108,
	Capsule_Blueprint = 109,
	Titan_Blueprint = 110,
	Shuttle_Blueprint = 111,
	Shield_Extender_Blueprint = 118,
	Shield_Recharger_Blueprint = 119,
	Shield_Booster_Blueprint = 120,
	Shield_Transporter_Blueprint = 121,
	Capacitor_Recharger_Blueprint = 123,
	Afterburner_Blueprint = 126,
	Cargo_Scanner_Blueprint = 127,
	Ship_Scanner_Blueprint = 128,
	Survey_Scanner_Blueprint = 129,
	ECM_Blueprint = 130,
	ECCM_Blueprint = 131,
	Jump_Scrambler_Blueprint = 132,
	Energy_Weapon_Blueprint = 133,
	Mining_Laser_Blueprint = 134,
	Projectile_Weapon_Blueprint = 135,
	Missile_Launcher_Blueprint = 136,
	Power_Manager_Blueprint = 137,
	Fast_Loader_Blueprint = 139,
	Damage_Control_Blueprint = 140,
	Capacitor_Battery_Blueprint = 141,
	Armor_Repair_Unit_Blueprint = 142,
	Hull_Repair_Unit_Blueprint = 143,
	Stasis_Web_Blueprint = 145,
	Energy_Transfer_Array_Blueprint = 147,
	Energy_Vampire_Blueprint = 148,
	Energy_Destabilizer_Blueprint = 151,
	Smart_Bomb_Blueprint = 152,
	Hybrid_Weapon_Blueprint = 154,
	Capacitor_Booster_Blueprint = 156,
	Shield_Hardener_Blueprint = 157,
	Hull_Mods_Blueprint = 158,
	ECM_Burst_Blueprint = 160,
	Passive_Targeting_System_Blueprint = 161,
	Automated_Targeting_System_Blueprint = 162,
	Armor_Coating_Blueprint = 163,
	Ammo_Blueprint = 165,
	Missile_Blueprint = 166,
	Hybrid_Ammo_Blueprint = 167,
	Frequency_Crystal_Blueprint = 168,
	Capacitor_Booster_Charge_Blueprint = 169,
	Defender_Missile_Blueprint = 170,
	Bomb_Blueprint = 172,
	Mine_Blueprint = 174,
	Proximity_Drone_Blueprint = 175,
	Combat_Drone_Blueprint = 176,
	Mining_Drone_Blueprint = 177,
	Drug_Blueprint = 178,
	Protective_Sentry_Gun = 180,
	Police_Drone = 182,
	Pirate_Drone = 185,
	Wreck = 186,
	Bloodline_Bonus = 190,
	Physical_Benefit = 191,
	Physical_Handicap = 192,
	Phobia_Handicap = 193,
	Social_Handicap = 194,
	Amarr_Education = 195,
	Caldari_Education = 196,
	Gallente_Education = 197,
	Minmatar_Education = 198,
	Career_Bonus = 199,
	ECM = 201,
	ECCM = 202,
	Sensor_Backup_Array = 203,
	Heat_Sink = 205,
	Remote_Sensor_Damper = 208,
	Tracking_Link = 209,
	Signal_Amplifier = 210,
	Tracking_Enhancer = 211,
	EB2___Sensor_Booster = 212,
	EB3___Tracking_Computer = 213,
	Heat_Sink_Blueprint = 218,
	EB2___Sensor_Booster_Blueprint = 223,
	EB3___Tracking_Computer_Blueprint = 224,
	Cheat_Module_Group = 225,
	Large_Collidable_Object = 226,
	Cloud = 227,
	Rookie_ship = 237,
	Gunnery = 255,
	Missile_Launcher_Operation = 256,
	Spaceship_Command = 257,
	Leadership = 258,
	Corporation_Management = 266,
	Learning = 267,
	Industry = 268,
	Mechanic = 269,
	Science = 270,
	Engineering = 271,
	Electronics = 272,
	Drones = 273,
	Trade = 274,
	Navigation = 275,
	Social = 278,
	LCO_Drone = 279,
	General = 280,
	Frozen = 281,
	Radioactive = 282,
	Livestock = 283,
	Biohazard = 284,
	CPU_Enhancer = 285,
	Tutorial_Drone = 286,
	Rogue_Drone = 287,
	Faction_Drone = 288,
	Projected_ECCM = 289,
	Remote_Sensor_Booster = 290,
	Tracking_Disrupter = 291,
	Shield_Amplifier = 295,
	Shield_Amplifier_Blueprint = 296,
	Convoy = 297,
	Convoy_Drone = 298,
	Repair_Drone = 299,
	Cyberimplant = 300,
	Concord_Drone = 301,
	Magnetic_Field_Stabilizer = 302,
	Booster = 303,
	DNA_Mutator = 304,
	Comet = 305,
	Spawn_Container = 306,
	Construction_Platform = 307,
	Countermeasure_Launcher = 308,
	Autopilot = 309,
	Beacon = 310,
	Refining_Array = 311,
	Planetary_Cloud = 312,
	Drugs = 313,
	Miscellaneous = 314,
	Anti_Warp_Scrambler = 315,	//Another duplicate
	Warp_Core_Stabilizer = 315, //----
	Gang_Coordinator = 316,
	Computer_Interface_Node = 317,
	Landmark = 318,
	Large_Collidable_Structure = 319,
	Shield_Disruptor = 321,
	Billboard = 323,
	Elite_Frigate = 324,
	Armor_Repair_Projector = 325,
	Armor_Plating_Energized = 326,
	Armor_Hardener = 328,
	Armor_Reinforcer = 329,
	Cloaking_Device = 330,
	Tool = 332,
	Datacores = 333,
	Construction_Components = 334,
	Temporary_Cloud = 335,
	Mobile_Sentry_Gun = 336,
	Mission_Drone = 337,
	Shield_Boost_Amplifier = 338,
	Auxiliary_Power_Core = 339,
	Secure_Cargo_Container = 340,
	Signature_Scrambling = 341,
	Anti_Warp_Scrambler_Blueprint = 342,
	Tracking_Disruptor_Blueprint = 343,
	Tracking_Enhancer_Blueprint = 344,
	Tracking_Link_Blueprint = 345,
	Co_Processor_Blueprint = 346,
	Signal_Amplifier_Blueprint = 347,
	Armor_Hardener_Blueprint = 348,
	Armor_Reinforcer_Blueprint = 349,
	Armor_Repair_Projector_Blueprint = 350,
	Auxiliary_Power_Core_Blueprint = 352,
	GM_Modules = 353,
	Refinables = 355,
	Tool_Blueprint = 356,
	DroneBayExpander = 357,
	Elite_Cruiser = 358,
	Shield_Boost_Amplifier_Blueprint = 360,
	Mobile_Warp_Disruptor = 361,
	Ship_Maintenance_Array = 363,
	Mobile_Storage = 364,
	Control_Tower = 365,
	Warp_Gate = 366,
	Ballistic_Control_system = 367,
	Global_Warp_Disruptor = 368,
	Ship_Logs = 369,
	Criminal_Tags = 370,
	Mobile_Warp_Disruptor_Blueprint = 371,
	Advanced_Autocannon_Ammo = 372,
	Advanced_Railgun_Ammo = 373,
	Advanced_Beam_Laser_Crystal = 374,
	Advanced_Pulse_Laser_Crystal = 375,
	Advanced_Artillery_Ammo = 376,
	Advanced_Blaster_Ammo = 377,
	Cruise_Control = 378,
	Target_Painter = 379,
	Elite_Industrial = 380,
	Elite_Battleship = 381,
	Shipping_Crates = 382,
	Destructible_Sentry_Gun = 383,
	Light_Missile = 384,
	Heavy_Missile = 385,
	Cruise_Missile = 386,
	Rocket = 387,
	FoF_Light_Missile = 394,
	FoF_Heavy_Missile = 395,
	FoF_Cruise_Missile = 396,
	Assembly_Array = 397,
	Ballistic_Control_System_Blueprint = 400,
	Cloaking_Device_Blueprint = 401,
	Silo = 404,
	Anti_Cloaking_Pulse = 405,
	Smartbomb_Supercharger = 406,
	Drone_Control_Unit = 407,
	Drone_Control_Unit_Blueprint = 408,
	Empire_Insignia_Drops = 409,
	Anti_Cloaking_Pulse_Blueprint = 410,
	Force_Field = 411,
	Mobile_Laboratory = 413,
	Mobile_Power_Core = 414,
	Moon_Mining = 416,
	Mobile_Missile_Sentry = 417,
	Mobile_Shield_Generator = 418,
	Battlecruiser = 419,
	Destroyer = 420,
	Gas_Isotopes = 422,
	Ice_Product = 423,
	Orbital_Assault_Unit = 425,
	Mobile_Projectile_Sentry = 426,
	Moon_Materials = 427,
	Intermediate_Materials = 428,
	Composite = 429,
	Mobile_Laser_Sentry = 430,
	Deadspace_Overseer = 435,
	Simple_Reaction = 436,
	Mobile_Reactor = 438,
	Electronic_Warfare_Battery = 439,
	Sensor_Dampening_Battery = 440,
	Stasis_Webification_Battery = 441,
	Warp_Scrambling_Battery = 443,
	Shield_Hardening_Array = 444,
	Force_Field_Array = 445,
	Customs_Official = 446,
	Construction_Component_Blueprints = 447,
	Audit_Log_Secure_Container = 448,
	Mobile_Hybrid_Sentry = 449,
	Arkonor = 450,
	Bistot = 451,
	Crokite = 452,
	Dark_Ochre = 453,
	Hedbergite = 454,
	Hemorphite = 455,
	Jaspet = 456,
	Kernite = 457,
	Plagioclase = 458,
	Pyroxeres = 459,
	Scordite = 460,
	Spodumain = 461,
	Veldspar = 462,
	Mining_Barge = 463,
	Strip_Miner = 464,
	Ice = 465,
	Gneiss = 467,
	Mercoxit = 468,
	Omber = 469,
	Unanchoring_Drone = 470,
	Corporate_Hangar_Array = 471,
	System_Scanner = 472,
	Tracking_Array = 473,
	Acceleration_Gate_Keys = 474,
	Microwarpdrive = 475,
	Citadel_Torpedo = 476,
	Mining_Barge_Blueprint = 477,
	System_Scanner_Blueprint = 478,
	Scanner_Probe = 479,
	Stealth_Emitter_Array = 480,
	Scan_Probe_Launcher = 481,
	Mining_Crystal = 482,
	Frequency_Mining_Laser = 483,
	Complex_Reactions = 484,
	Dreadnought = 485,
	Scan_Probe_Blueprint = 486,
	Destroyer_Blueprint = 487,
	Battlecruiser_Blueprint = 489,
	Strip_Miner_Blueprint = 490,
	Survey_Probe = 492,
	Overseer_Personal_Effects = 493,
	Deadspace_Overseer_s_Structure = 494,
	Deadspace_Overseer_s_Sentry = 495,
	Deadspace_Overseer_s_Belongings = 496,
	Fuel = 497,
	Modifications = 498,
	New_EW_Testing = 499,
	Snowballs = 500,
	Missile_Launcher_Snowball = 501,
	Cosmic_Signature = 502,
	Elite_Industrial_Blueprint = 503,
	Target_Painter_Blueprint = 504,
	Fake_Skills = 505,
	Missile_Launcher_Cruise = 506,
	Missile_Launcher_Rocket = 507,
	Missile_Launcher_Siege = 508,
	Missile_Launcher_Standard = 509,
	Missile_Launcher_Heavy = 510,
	Missile_Launcher_Assault = 511,
	Missile_Launcher_Defender = 512,
	Freighter = 513,
	ECM_Stabilizer = 514,
	Siege_Module = 515,
	Siege_Module_Blueprint = 516,
	Agents_in_Space = 517,
	Anti_Ballistic_Defense_System = 518,
	Terran_Artifacts = 519,
	Storyline_Frigate = 520,
	Identification = 521,
	Storyline_Cruiser = 522,
	Storyline_Battleship = 523,
	Missile_Launcher_Citadel = 524,
	Freighter_Blueprint = 525,
	Commodities = 526,
	Storyline_Mission_Frigate = 527,
	Artifacts_and_Prototypes = 528,
	Information_and_Lore = 529,
	Materials_and_Compounds = 530,
	Gang_Coordinator_Blueprint = 532,
	Storyline_Mission_Cruiser = 533,
	Storyline_Mission_Battleship = 534,
	Construction_Platform_Blueprint = 535,
	Station_Components = 536,
	Dreadnought_Blueprint = 537,
	Data_Miners = 538,
	Elite_Battlecruiser = 540,
	Elite_Destroyer = 541,
	Elite_Mining_Barge = 543,
	Cap_Drain_Drone = 544,
	Warp_Scrambling_Drone = 545,
	Mining_Upgrade = 546,
	Carrier = 547,
	Warp_Disruption_Probe = 548,
	Fighter_Drone = 549,
	Asteroid_Angel_Cartel_Frigate = 550,
	Asteroid_Angel_Cartel_Cruiser = 551,
	Asteroid_Angel_Cartel_Battleship = 552,
	Asteroid_Angel_Cartel_Officer = 553,
	Asteroid_Angel_Cartel_Hauler = 554,
	Asteroid_Blood_Raiders_Cruiser = 555,
	Asteroid_Blood_Raiders_Battleship = 556,
	Asteroid_Blood_Raiders_Frigate = 557,
	Asteroid_Blood_Raiders_Hauler = 558,
	Asteroid_Blood_Raiders_Officer = 559,
	Asteroid_Guristas_Battleship = 560,
	Asteroid_Guristas_Cruiser = 561,
	Asteroid_Guristas_Frigate = 562,
	Asteroid_Guristas_Hauler = 563,
	Asteroid_Guristas_Officer = 564,
	Asteroid_Sansha_s_Nation_Battleship = 565,
	Asteroid_Sansha_s_Nation_Cruiser = 566,
	Asteroid_Sansha_s_Nation_Frigate = 567,
	Asteroid_Sansha_s_Nation_Hauler = 568,
	Asteroid_Sansha_s_Nation_Officer = 569,
	Asteroid_Serpentis_Battleship = 570,
	Asteroid_Serpentis_Cruiser = 571,
	Asteroid_Serpentis_Frigate = 572,
	Asteroid_Serpentis_Hauler = 573,
	Asteroid_Serpentis_Officer = 574,
	Asteroid_Angel_Cartel_Destroyer = 575,
	Asteroid_Angel_Cartel_BattleCruiser = 576,
	Asteroid_Blood_Raiders_Destroyer = 577,
	Asteroid_Blood_Raiders_BattleCruiser = 578,
	Asteroid_Guristas_Destroyer = 579,
	Asteroid_Guristas_BattleCruiser = 580,
	Asteroid_Sansha_s_Nation_Destroyer = 581,
	Asteroid_Sansha_s_Nation_BattleCruiser = 582,
	Asteroid_Serpentis_Destroyer = 583,
	Asteroid_Serpentis_BattleCruiser = 584,
	Remote_Hull_Repairer = 585,
	Drone_Modules = 586,
	Super_Weapon = 588,
	Bubble_Probe_Launcher = 589,
	Jump_Portal_Generator = 590,
	Deadspace_Angel_Cartel_BattleCruiser = 593,
	Deadspace_Angel_Cartel_Battleship = 594,
	Deadspace_Angel_Cartel_Cruiser = 595,
	Deadspace_Angel_Cartel_Destroyer = 596,
	Deadspace_Angel_Cartel_Frigate = 597,
	Deadspace_Blood_Raiders_BattleCruiser = 602,
	Deadspace_Blood_Raiders_Battleship = 603,
	Deadspace_Blood_Raiders_Cruiser = 604,
	Deadspace_Blood_Raiders_Destroyer = 605,
	Deadspace_Blood_Raiders_Frigate = 606,
	Deadspace_Guristas_BattleCruiser = 611,
	Deadspace_Guristas_Battleship = 612,
	Deadspace_Guristas_Cruiser = 613,
	Deadspace_Guristas_Destroyer = 614,
	Deadspace_Guristas_Frigate = 615,
	Deadspace_Sanshas_Nation_BattleCruiser = 620,
	Deadspace_Sanshas_Nation_Battleship = 621,
	Deadspace_Sanshas_Nation_Cruiser = 622,
	Deadspace_Sanshas_Nation_Destroyer = 623,
	Deadspace_Sanshas_Nation_Frigate = 624,
	Deadspace_Serpentis_BattleCruiser = 629,
	Deadspace_Serpentis_Battleship = 630,
	Deadspace_Serpentis_Cruiser = 631,
	Deadspace_Serpentis_Destroyer = 632,
	Deadspace_Serpentis_Frigate = 633,
	Navigation_Computer = 638,
	Electronic_Warfare_Drone = 639,
	Logistic_Drone = 640,
	Stasis_Webifying_Drone = 641,
	Super_Gang_Enhancer = 642,
	Carrier_Blueprint = 643,
	Drone_Navigation_Computer = 644,
	Drone_Damage_Modules = 645,
	Drone_Tracking_Modules = 646,
	Drone_Control_Range_Module = 647,
	Advanced_Rocket = 648,
	Freight_Container = 649,
	Tractor_Beam = 650,
	Super_Weapon_Blueprint = 651,
	Lease = 652,
	Advanced_Light_Missile = 653,
	Advanced_Assault_Missile = 654,
	Advanced_Heavy_Missile = 655,
	Advanced_Cruise_Missile = 656,
	Advanced_Torpedo = 657,
	Cynosural_Field = 658,
	Mothership = 659,
	Energy_Vampire_Slayer = 660,
	Simple_Biochemical_Reactions = 661,
	Complex_Biochemical_Reactions = 662,
	Mercoxit_Mining_Crystal = 663,
	Mission_Amarr_Empire_Frigate = 665,
	Mission_Amarr_Empire_Battlecruiser = 666,
	Mission_Amarr_Empire_Battleship = 667,
	Mission_Amarr_Empire_Cruiser = 668,
	Mission_Amarr_Empire_Destroyer = 669,
	Mission_Amarr_Empire_Other = 670,
	Mission_Caldari_State_Frigate = 671,
	Mission_Caldari_State_Battlecruiser = 672,
	Mission_Caldari_State_Cruiser = 673,
	Mission_Caldari_State_Battleship = 674,
	Mission_Caldari_State_Other = 675,
	Mission_Caldari_State_Destroyer = 676,
	Mission_Gallente_Federation_Frigate = 677,
	Mission_Gallente_Federation_Cruiser = 678,
	Mission_Gallente_Federation_Destroyer = 679,
	Mission_Gallente_Federation_Battleship = 680,
	Mission_Gallente_Federation_Battlecruiser = 681,
	Mission_Gallente_Federation_Other = 682,
	Mission_Minmatar_Republic_Frigate = 683,
	Mission_Minmatar_Republic_Destroyer = 684,
	Mission_Minmatar_Republic_Battlecruiser = 685,
	Mission_Minmatar_Republic_Other = 686,
	Mission_Khanid_Frigate = 687,
	Mission_Khanid_Destroyer = 688,
	Mission_Khanid_Cruiser = 689,
	Mission_Khanid_Battlecruiser = 690,
	Mission_Khanid_Battleship = 691,
	Mission_Khanid_Other = 692,
	Mission_CONCORD_Frigate = 693,
	Mission_CONCORD_Destroyer = 694,
	Mission_CONCORD_Cruiser = 695,
	Mission_CONCORD_Battlecruiser = 696,
	Mission_CONCORD_Battleship = 697,
	Mission_CONCORD_Other = 698,
	Mission_Mordu_Frigate = 699,
	Mission_Mordu_Destroyer = 700,
	Mission_Mordu_Cruiser = 701,
	Mission_Mordu_Battlecruiser = 702,
	Mission_Mordu_Battleship = 703,
	Mission_Mordu_Other = 704,
	Mission_Minmatar_Republic_Cruiser = 705,
	Mission_Minmatar_Republic_Battleship = 706,
	Jump_Portal_Array = 707,
	Scanner_Array = 709,
	Logistics_Array = 710,
	Harvestable_Cloud = 711,
	Biochemical_Material = 712,
	Processed_Gas_Clouds = 714,
	Destructible_Agents_In_Space = 715,
	Data_Interfaces = 716,
	Booster_Blueprints = 718,
	Destructible_Agents_With_Guns = 719,
	Destructible_Agent_NPCs = 720,
	Temp = 721,
	Inertial_Stabilizer = 762,
	Nanofiber_Internal_Structure = 763,
	Overdrive_Injector_System = 764,
	Expanded_Cargohold = 765,
	Power_Diagnostics = 766,
	Capacitor_Power_Relay = 767,
	Capacitor_Flux_Coil = 768,
	Reactor_Control_Unit = 769,
	Shield_Flux_Coil = 770,
	Missile_Launcher_Bomb = 862,



 } invGroups;

 }
}

#endif

