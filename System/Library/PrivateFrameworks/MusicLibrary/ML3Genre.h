//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ML3Genre
{
}

+ (id)trackForeignPersistentID;	// IMP=0x00000000000a01cb
+ (id)propertiesForGroupingKey;	// IMP=0x00000000000a019b
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;	// IMP=0x000000000009fe7f
+ (_Bool)propertyIsCountProperty:(id)arg1;	// IMP=0x000000000009fe4e
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;	// IMP=0x000000000009fda9
+ (id)allProperties;	// IMP=0x000000000009fd98
+ (id)predisambiguatedProperties;	// IMP=0x000000000009fd87
+ (id)defaultOrderingTerms;	// IMP=0x000000000009fd76
+ (id)joinClausesForProperty:(id)arg1;	// IMP=0x000000000009fcd3
+ (long long)revisionTrackingCode;	// IMP=0x000000000009fcc8
+ (id)databaseTable;	// IMP=0x000000000009fcbb
+ (void)initialize;	// IMP=0x000000000009fac9
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;	// IMP=0x0000000000131a75
- (void)updateTrackValues:(id)arg1;	// IMP=0x000000000009f766
- (id)protocolItem;	// IMP=0x000000000012f0c8
- (id)multiverseIdentifier;	// IMP=0x000000000012ef36

@end

