//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLCreateFromSearchableItem-Protocol.h>

@class NSSet, NSString;

@interface PLConversation <PLCreateFromSearchableItem>
{
    _Bool _needsPersistenceUpdate;	// 8 = 0x8
    _Bool _albumShouldBeAutomaticallyDeleted;	// 9 = 0x9
}

+ (id)createOrUpdateObjectFromSearchableItem:(id)arg1 library:(id)arg2 createIfNeeded:(_Bool)arg3 didCreate:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x00000000003da4af
+ (id)albumWithConversationID:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000003da3aa
+ (id)albumsWithConversationIDs:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000003da136
+ (id)insertNewConversationAlbumWithConversationID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x00000000003da0ac
+ (id)entityName;	// IMP=0x00000000003da09f
@property(nonatomic) _Bool albumShouldBeAutomaticallyDeleted; // @synthesize albumShouldBeAutomaticallyDeleted=_albumShouldBeAutomaticallyDeleted;
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;	// IMP=0x00000000003da057
- (_Bool)isEmpty;	// IMP=0x00000000003da03e
- (unsigned long long)count;	// IMP=0x00000000003d9ffa
- (void)willSave;	// IMP=0x00000000003d9f08
- (void)_updateAssetSyndicationState:(unsigned short)arg1;	// IMP=0x00000000003d9d6e
- (id)_orderedBatchedAssets;	// IMP=0x00000000003d9a97
- (_Bool)_isDateAfterEndDate:(id)arg1;	// IMP=0x00000000003d99f3
- (_Bool)_isDateBeforeStartDate:(id)arg1;	// IMP=0x00000000003d994f
- (_Bool)_isAssetIncludedInConversationDates:(id)arg1;	// IMP=0x00000000003d98ff
- (void)updateConversationDatesFromAddedAsset:(id)arg1;	// IMP=0x00000000003d983d
- (void)_updateEndDate:(id)arg1;	// IMP=0x00000000003d96c6
- (void)_updateStartDate:(id)arg1;	// IMP=0x00000000003d954f
- (id)mutableAssets;	// IMP=0x00000000003d9536

// Remaining properties
@property(retain, nonatomic) NSSet *assets; // @dynamic assets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) unsigned short syndicate; // @dynamic syndicate;

@end

