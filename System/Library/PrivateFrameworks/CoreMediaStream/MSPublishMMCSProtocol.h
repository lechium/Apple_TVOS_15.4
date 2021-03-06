//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMediaStream/MSPublishStorageProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol MSPublishStorageProtocolDelegate;

@interface MSPublishMMCSProtocol <MSPublishStorageProtocol>
{
    id <MSPublishStorageProtocolDelegate> _delegate;	// 40 = 0x28
    NSMutableDictionary *_itemIDToAssetDict;	// 48 = 0x30
    unsigned long long *_itemIDs;	// 56 = 0x38
    const char **_signatures;	// 64 = 0x40
    char **_authTokens;	// 72 = 0x48
    unsigned int *_itemFlags;	// 80 = 0x50
    long long _itemsInFlight;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000028e56
@property(nonatomic) id <MSPublishStorageProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_putItemsFailure;	// IMP=0x0000000000028ac4
- (void)_requestCompleted;	// IMP=0x00000000000287d7
- (void)_putItemDone:(unsigned long long)arg1 putReceipt:(id)arg2 error:(id)arg3;	// IMP=0x0000000000028542
- (void)publishAssets:(id)arg1 URL:(id)arg2;	// IMP=0x0000000000027fe1
- (id)_getUTIFromItem:(unsigned long long)arg1;	// IMP=0x0000000000027d84
- (int)_getFileDescriptorFromItem:(unsigned long long)arg1;	// IMP=0x0000000000027b59
- (void)computeHashForAsset:(id)arg1;	// IMP=0x0000000000027689
- (void)dealloc;	// IMP=0x000000000002764b
- (void)deactivate;	// IMP=0x0000000000027601
- (id)initWithPersonID:(id)arg1;	// IMP=0x0000000000027560

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

