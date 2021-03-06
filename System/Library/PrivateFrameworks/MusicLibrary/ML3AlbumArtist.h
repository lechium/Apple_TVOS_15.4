//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ML3AlbumArtist
{
}

+ (_Bool)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long *)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5;	// IMP=0x00000000000bcf8f
+ (id)propertiesForGroupingUniqueCollections;	// IMP=0x00000000000bcf1d
+ (id)trackForeignPersistentID;	// IMP=0x00000000000bcefe
+ (id)propertiesForGroupingKey;	// IMP=0x00000000000bcece
+ (id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3;	// IMP=0x00000000000bcc08
+ (_Bool)propertyIsCountProperty:(id)arg1;	// IMP=0x00000000000bcbe6
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;	// IMP=0x00000000000bcb41
+ (id)allProperties;	// IMP=0x00000000000bcb30
+ (id)predisambiguatedProperties;	// IMP=0x00000000000bcb1f
+ (id)sectionPropertyForProperty:(id)arg1;	// IMP=0x00000000000bcb06
+ (id)defaultOrderingTerms;	// IMP=0x00000000000bcaf5
+ (long long)revisionTrackingCode;	// IMP=0x00000000000bcaea
+ (id)databaseTable;	// IMP=0x00000000000bcadd
+ (void)initialize;	// IMP=0x00000000000bc8ec
+ (id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2;	// IMP=0x000000000013203e
- (void)updateTrackValues:(id)arg1;	// IMP=0x00000000000bc49d
- (id)protocolItem;	// IMP=0x000000000013195e
- (id)multiverseIdentifier;	// IMP=0x00000000001316d4

@end

