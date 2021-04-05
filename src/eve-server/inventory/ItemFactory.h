/*
    ------------------------------------------------------------------------------------
    LICENSE:
    ------------------------------------------------------------------------------------
    This file is part of EVEmu: EVE Online Server Emulator
    Copyright 2006 - 2021 The EVEmu Team
    For the latest information visit https://evemu.dev
    ------------------------------------------------------------------------------------
    This program is free software; you can redistribute it and/or modify it under
    the terms of the GNU Lesser General Public License as published by the Free Software
    Foundation; either version 2 of the License, or (at your option) any later
    version.

    This program is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
    FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License along with
    this program; if not, write to the Free Software Foundation, Inc., 59 Temple
    Place - Suite 330, Boston, MA 02111-1307, USA, or go to
    http://www.gnu.org/copyleft/lesser.txt.
    ------------------------------------------------------------------------------------
    Author:        Zhur
    Updates:    Allan
*/
#ifndef EVE_ITEM_FACTORY_H
#define EVE_ITEM_FACTORY_H

//#include "eve-compat.h"

#include "utils/Singleton.h"
#include "inventory/ItemRef.h"
//#include "../../eve-common/EVE_RAM.h"


class ItemType;

class ItemData;
class CharacterData;
class CorpData;
class OfficeData;
class AsteroidData;

class BlueprintType;
class CharacterType;
class StationType;
class Missile;
class Client;
class EntityList;
class Inventory;
class PyServiceMgr;
class InventoryDB;

class ItemFactory
: public Singleton<ItemFactory>
{
public:
    ItemFactory();
    ~ItemFactory();

    void Close();
    int Initialize();
    uint32 Count()                                      { return m_items.size(); }

    void SaveItems();
    void RemoveItem(uint32 itemID);
    void SetUsingClient(Client *pClient)                { m_pClient = pClient; }
    void UnsetUsingClient()                             { m_pClient = nullptr; }
    void AddItem(InventoryItemRef iRef);

    InventoryDB* db()                                   { return m_db; }

    Client* GetUsingClient()                            { return m_pClient; }
    // load=true will load the item and its container (recursively) into server, up to solarSystem
    Inventory* GetInventoryFromId(uint32 itemID, bool load=true);
    // load=true will load the item and its container (recursively) into server, up to solarSystem
    Inventory* GetItemContainerInventory(uint32 itemID, bool load=true);

    // these load, cache and return requested type.
    const ItemType*         GetType(uint16 typeID);
    const StationType*      GetStationType(uint16 stationTypeID);
    const CharacterType*    GetCharacterType(uint16 characterTypeID);
    const BlueprintType*    GetBlueprintType(uint16 blueprintTypeID);
    const CharacterType*    GetCharacterTypeByBloodline(uint16 bloodlineID);


    // return a RefPtr of requested itemID, loading (and cache) as needed
    SkillRef                GetSkill(uint32 skillID);
    ShipItemRef             GetShip(uint32 shipID);
    StationItemRef          GetStationItem(uint32 stationID);
    BlueprintRef            GetBlueprint(uint32 blueprintID);
    CharacterRef            GetCharacter(uint32 characterID);
    ModuleItemRef           GetModuleItem(uint32 moduleID);
    SolarSystemRef          GetSolarSystem(uint32 solarSystemID);
    AsteroidItemRef         GetAsteroid(uint32 asteroidID);
    StructureItemRef        GetStructure(uint32 structureID);
    StationOfficeRef        GetOffice(uint32 officeID);
    InventoryItemRef        GetItem(uint32 itemID);
    InventoryItemRef        GetItemContainer(uint32 itemID, bool load=true);
    InventoryItemRef        GetInventoryItemFromID(uint32 itemID, bool load=true);
    CargoContainerRef       GetCargoContainer(uint32 containerID);
    WreckContainerRef       GetWreckContainer(uint32 containerID);
    CelestialObjectRef      GetCelestialObject(uint32 celestialID);
    ProbeItemRef            GetProbeItem(uint32 probeID);


    /**
     * creates new InventoryItem, saves to db, caches it and returns a RefPtr.
     *
     * @param[in] data Item data (for entity table).
     * @param[in] charData Character data.
     * @param[in] corpData Character's corporation-membership data.
     * @return RefPtr to _Ty; NULL if load failed.
     */
    SkillRef                SpawnSkill(ItemData &data);
    ShipItemRef             SpawnShip(ItemData &data);
    CharacterRef            SpawnCharacter(CharacterData& charData, CorpData& corpData);
    ModuleItemRef           SpawnModule(ItemData &data);
    InventoryItemRef        SpawnItem(ItemData &data);
    InventoryItemRef        SpawnTempItem(ItemData &data);
    StationOfficeRef        SpawnOffice(ItemData &idata, OfficeData& odata);
    AsteroidItemRef         SpawnAsteroid(ItemData& idata, AsteroidData& adata);
    StructureItemRef        SpawnStructure(ItemData &data);
    CargoContainerRef       SpawnCargoContainer(ItemData &data);
    WreckContainerRef       SpawnWreckContainer(ItemData &data);
    ProbeItemRef            SpawnProbe(ItemData &data);

    /** @todo  add PI item spawners here */

    /** @todo  add Sleeper item spawners here */

    /* ID Authority Functions  */
    uint32                  GetNextNPCID();
    uint32                  GetNextTempID();
    uint32                  GetNextDroneID();
    uint32                  GetNextMissileID();


protected:
    InventoryDB* m_db;
    Client* m_pClient;     // client currently using the ItemFactory, we do not own this

    std::map<uint16, ItemType*> m_types;
    std::map<uint32, InventoryItemRef> m_items;
    std::map<uint32, InventoryItemRef> m_staticItems;
    std::map<uint32, InventoryItemRef> m_dynamicItems;

    template<class _Ty>
    const _Ty *_GetType(uint16 typeID);

    template<class _Ty>
    RefPtr<_Ty> _GetItem(uint32 itemID);

private:
    // ID Authority:
    // these hold the next valid ID for in-memory only objects
    uint32 m_nextNPCID;
    uint32 m_nextTempID;
    uint32 m_nextDroneID;
    uint32 m_nextMissileID;

};

//Singleton
#define sItemFactory \
 ( ItemFactory::get() )


#endif

