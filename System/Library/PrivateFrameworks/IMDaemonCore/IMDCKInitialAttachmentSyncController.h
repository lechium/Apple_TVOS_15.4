//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController
{
    CKServerChangeToken *_syncToken;	// 8 = 0x8
}

@property(retain, nonatomic) CKServerChangeToken *syncToken; // @synthesize syncToken=_syncToken;
- (id)ckUtilities;	// IMP=0x00000000000b8d36
- (_Bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 activity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b8ceb
- (_Bool)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(_Bool)arg1;	// IMP=0x00000000000b8cbc
- (_Bool)_deviceConditionsAllowsMessageSync;	// IMP=0x00000000000b8c65
- (_Bool)_deviceConditionsAllowsMessageSyncForActivity:(id)arg1 deviceConditionsToCheck:(unsigned long long)arg2 currentBatchCount:(long long)arg3 maxBatchCount:(long long)arg4;	// IMP=0x00000000000b8bc5
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;	// IMP=0x00000000000b8b25
- (id)latestSyncToken;	// IMP=0x00000000000b8b13
- (void)setLatestSyncToken:(id)arg1 forSyncType:(id)arg2;	// IMP=0x00000000000b8b01
- (void)setLatestSyncToken:(id)arg1;	// IMP=0x00000000000b8aef
- (void)dealloc;	// IMP=0x00000000000b8aad

@end
