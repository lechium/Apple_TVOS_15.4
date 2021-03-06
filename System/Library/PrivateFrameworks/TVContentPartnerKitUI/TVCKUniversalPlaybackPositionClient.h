//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVContentPartnerKitUI/SBKUniversalPlaybackPositionDataSource-Protocol.h>

@class ATVUPPClientState, NSLock, NSString, SBKUniversalPlaybackPositionStore;

__attribute__((visibility("hidden")))
@interface TVCKUniversalPlaybackPositionClient : NSObject <SBKUniversalPlaybackPositionDataSource>
{
    SBKUniversalPlaybackPositionStore *_uppStore;	// 8 = 0x8
    id _activeAccountOrNull;	// 16 = 0x10
    double _lastSyncTimestamp;	// 24 = 0x18
    _Bool _needsSync;	// 32 = 0x20
    NSLock *_stateLock;	// 40 = 0x28
    ATVUPPClientState *_state;	// 48 = 0x30
}

+ (id)defaultClient;	// IMP=0x0000000000099d5c
- (void).cxx_destruct;	// IMP=0x000000000009ab4a
@property(retain) ATVUPPClientState *state; // @synthesize state=_state;
- (id)allRecords;	// IMP=0x000000000009aa67
- (void)_updateBoundActiveStoreAccount;	// IMP=0x000000000009a850
- (void)tvs_bindActiveStoreAccountBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x000000000009a757
- (id)ActiveStoreAccountBinding;	// IMP=0x000000000009a707
- (id)recordForBookmarkKey:(id)arg1;	// IMP=0x000000000009a460
- (id)recordForItemIdentifier:(id)arg1 mediaType:(id)arg2 podcastURL:(id)arg3 podcastGUID:(id)arg4;	// IMP=0x000000000009a340
- (void)writeItems:(id)arg1;	// IMP=0x000000000009a149
- (void)synchronize:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099fa7
- (void)_setNeedsSync;	// IMP=0x0000000000099f46
- (void)dealloc;	// IMP=0x0000000000099ed1
- (id)init;	// IMP=0x0000000000099db1
- (void)cancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x000000000009b2db
- (void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009acf3
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009ab88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

