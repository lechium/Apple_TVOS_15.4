//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPMediaItemCollection, MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSMutableSet;

@interface MPUQueryDataSource
{
    NSArray *_entities;	// 8 = 0x8
    NSMutableSet *_additionalUniqueItemPropertiesToFetch;	// 16 = 0x10
    _Bool _hasValidEmpty;	// 24 = 0x18
    _Bool _hasValidRepresentativeCollection;	// 25 = 0x19
    _Bool _invalidateWhenEnteringForeground;	// 26 = 0x1a
    _Bool _isEmpty;	// 27 = 0x1b
    MPMediaItemCollection *_representativeCollection;	// 32 = 0x20
    MPMediaQuerySectionInfo *_sectionInfo;	// 40 = 0x28
    _Bool _ignoringInvalidationDueToBackgroundApplicationState;	// 48 = 0x30
    MPMediaQuery *_query;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000012206
@property(nonatomic) _Bool ignoringInvalidationDueToBackgroundApplicationState; // @synthesize ignoringInvalidationDueToBackgroundApplicationState=_ignoringInvalidationDueToBackgroundApplicationState;
@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (id)_sectionInfo;	// IMP=0x0000000000012167
- (void)_invalidateForDisplayValuesChangeIfNeeded;	// IMP=0x00000000000120e9
- (_Bool)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out _Bool *)arg2;	// IMP=0x0000000000011d68
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;	// IMP=0x0000000000011d56
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;	// IMP=0x0000000000011d44
- (void)_mediaLibraryDidChangeNotification:(id)arg1;	// IMP=0x0000000000011d32
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;	// IMP=0x0000000000011d20
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;	// IMP=0x0000000000011cb4
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x0000000000011c9d
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x0000000000011c89
- (id)_representativeCollection;	// IMP=0x0000000000011c23
- (void)_invalidateIfNeeded;	// IMP=0x0000000000011be1
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg1;	// IMP=0x0000000000011b21
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)arg1;	// IMP=0x0000000000011a3e
- (_Bool)showsEntityCountFooter;	// IMP=0x0000000000011a36
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001195c
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011909
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011862
- (id)localizedSectionIndexTitles;	// IMP=0x0000000000011812
- (unsigned long long)numberOfSections;	// IMP=0x0000000000011770
- (_Bool)showsIndexBar;	// IMP=0x0000000000011730
- (_Bool)isEmpty;	// IMP=0x000000000001168c
- (void)_invalidateCalculatedEntities;	// IMP=0x00000000000115fd
- (id)queryForEntityAtIndexPath:(id)arg1;	// IMP=0x00000000000115cc
- (id)queryForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000011490
- (id)entities;	// IMP=0x00000000000113f6
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000110f3
- (void)deleteEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010f1b
- (unsigned long long)count;	// IMP=0x0000000000010eb0
- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010c23
- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000010bae
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010a7d
- (unsigned long long)hash;	// IMP=0x00000000000109e2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010912
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000107eb
- (void)dealloc;	// IMP=0x00000000000106e5
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;	// IMP=0x0000000000010572
- (id)initWithEntityType:(long long)arg1;	// IMP=0x000000000001055b

@end
