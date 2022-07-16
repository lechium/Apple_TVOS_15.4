//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSEntityDescription, NSKnownKeysMappingStrategy, NSMutableArray, NSMutableDictionary, NSSQLEntityKey, NSSQLEntity_DerivedAttributesExtension, NSSQLModel, NSSQLOptLockKey, NSSQLPrimaryKey, NSSQLStoreMappingGenerator, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLEntity
{
    NSSQLModel *_model;	// 16 = 0x10
    NSEntityDescription *_entityDescription;	// 24 = 0x18
    NSString *_tableName;	// 32 = 0x20
    NSMutableDictionary *_properties;	// 40 = 0x28
    NSArray *_propertyAllCache;	// 48 = 0x30
    NSArray *_propertiesAllToManysCache;	// 56 = 0x38
    NSArray *_propertyManyToManyCache;	// 64 = 0x40
    NSMutableArray *_columnsToFetch;	// 72 = 0x48
    NSMutableArray *_ekColumns;	// 80 = 0x50
    NSMutableArray *_fkColumns;	// 88 = 0x58
    NSMutableArray *_fokColumns;	// 96 = 0x60
    NSMutableArray *_attrColumns;	// 104 = 0x68
    NSMutableArray *_virtualFKs;	// 112 = 0x70
    NSSQLPrimaryKey *_primaryKey;	// 120 = 0x78
    NSSQLEntityKey *_entityKey;	// 128 = 0x80
    NSSQLOptLockKey *_optLockKey;	// 136 = 0x88
    NSMutableArray *_subentities;	// 144 = 0x90
    NSSQLEntity *_superentity;	// 152 = 0x98
    NSSQLEntity *_rootEntity;	// 160 = 0xa0
    NSSQLStoreMappingGenerator *_mappingGenerator;	// 168 = 0xa8
    unsigned int _entityID;	// 176 = 0xb0
    unsigned int _subentityMaxID;	// 180 = 0xb4
    struct _NSRange _toOneRange;	// 184 = 0xb8
    NSMutableArray *_uniqueProperties;	// 200 = 0xc8
    NSMutableArray *_multicolumnUniquenessConstraints;	// 208 = 0xd0
    void *_fetch_entity_plan;	// 216 = 0xd8
    NSMutableDictionary *_rtreeIndices;	// 224 = 0xe0
    NSKnownKeysMappingStrategy *_propertyMapping;	// 232 = 0xe8
    void *_odiousHashHackStorage;	// 240 = 0xf0
    NSMutableArray *_derivedAttributes;	// 248 = 0xf8
    NSSQLEntity_DerivedAttributesExtension *_derivedAttributeExtension;	// 256 = 0x100
    struct __sqlentityFlags {
        unsigned int _hasAttributesWithExternalDataReferences:1;
        unsigned int _hasAttributesWithFileBackedFutures:1;
        unsigned int _reserved:30;
    } _sqlentityFlags;	// 264 = 0x108
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;	// IMP=0x0000000000167c45
- (id)description;	// IMP=0x0000000000167bf2
- (id)rootEntity;	// IMP=0x0000000000167be1
- (id)model;	// IMP=0x0000000000167bd0
- (id)attributeColumns;	// IMP=0x0000000000163a74
- (id)foreignOrderKeyColumns;	// IMP=0x0000000000163a63
- (id)foreignEntityKeyColumns;	// IMP=0x0000000000163a52
- (id)foreignKeyColumns;	// IMP=0x0000000000163881
- (id)entityDescription;	// IMP=0x0000000000163870
- (id)manyToManyRelationships;	// IMP=0x00000000001632ab
- (id)toManyRelationships;	// IMP=0x0000000000163116
- (id)tableName;	// IMP=0x0000000000162f87
- (id)name;	// IMP=0x0000000000162f6a
- (void)dealloc;	// IMP=0x0000000000162ca5
- (id)initWithModel:(id)arg1 entityDescription:(id)arg2;	// IMP=0x000000000016275a
- (id)attributes;	// IMP=0x00000000001682cf
- (id)externalName;	// IMP=0x00000000001682bd

@end

