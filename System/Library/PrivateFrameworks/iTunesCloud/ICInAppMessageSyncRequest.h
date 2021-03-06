//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICIAMSynchronizeMessagesResponse, ICStoreRequestContext;

@interface ICInAppMessageSyncRequest
{
    ICStoreRequestContext *_storeRequestContext;	// 8 = 0x8
    ICIAMSynchronizeMessagesResponse *_syncResponse;	// 16 = 0x10
    unsigned long long _fromRevision;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000163faf
- (void)execute;	// IMP=0x0000000000163efe
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000163e6c
- (id)initWithStoreRequestContext:(id)arg1 fromRevision:(unsigned long long)arg2;	// IMP=0x0000000000163dc0

@end

