//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface NLXSchemaCDMNLContext
{
    NSArray *_activeTasks;	// 8 = 0x8
    NSArray *_executedTasks;	// 16 = 0x10
    NSArray *_salientEntities;	// 24 = 0x18
    NSArray *_systemDialogActs;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000799ca
@property(copy, nonatomic) NSArray *systemDialogActs; // @synthesize systemDialogActs=_systemDialogActs;
@property(copy, nonatomic) NSArray *salientEntities; // @synthesize salientEntities=_salientEntities;
@property(copy, nonatomic) NSArray *executedTasks; // @synthesize executedTasks=_executedTasks;
@property(copy, nonatomic) NSArray *activeTasks; // @synthesize activeTasks=_activeTasks;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000791a2
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000790e4
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000787c5
- (unsigned long long)hash;	// IMP=0x0000000000078741
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000078285
- (void)writeTo:(id)arg1;	// IMP=0x0000000000077ec8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000774b2
- (id)systemDialogActsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000077495
- (unsigned long long)systemDialogActsCount;	// IMP=0x0000000000077478
- (void)addSystemDialogActs:(id)arg1;	// IMP=0x00000000000773fe
- (void)deleteSystemDialogActs;	// IMP=0x00000000000773ec
- (void)clearSystemDialogActs;	// IMP=0x00000000000773cf
- (id)salientEntitiesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000773b2
- (unsigned long long)salientEntitiesCount;	// IMP=0x0000000000077395
- (void)addSalientEntities:(id)arg1;	// IMP=0x000000000007731b
- (void)deleteSalientEntities;	// IMP=0x0000000000077309
- (void)clearSalientEntities;	// IMP=0x00000000000772ec
- (id)executedTasksAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000772cf
- (unsigned long long)executedTasksCount;	// IMP=0x00000000000772b2
- (void)addExecutedTasks:(id)arg1;	// IMP=0x0000000000077238
- (void)deleteExecutedTasks;	// IMP=0x0000000000077226
- (void)clearExecutedTasks;	// IMP=0x0000000000077209
- (id)activeTasksAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000771ec
- (unsigned long long)activeTasksCount;	// IMP=0x00000000000771cf
- (void)addActiveTasks:(id)arg1;	// IMP=0x0000000000077155
- (void)deleteActiveTasks;	// IMP=0x0000000000077143
- (void)clearActiveTasks;	// IMP=0x0000000000077126
- (id)applySensitiveConditionsPolicy:(id)arg1;	// IMP=0x0000000000314194
- (id)suppressMessageUnderConditions;	// IMP=0x000000000031415c

@end

