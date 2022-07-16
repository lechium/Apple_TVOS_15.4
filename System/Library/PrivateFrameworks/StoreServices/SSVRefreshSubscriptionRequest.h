//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString, SSAuthenticationContext;

@interface SSVRefreshSubscriptionRequest <SSXPCCoding>
{
    SSAuthenticationContext *_authenticationContext;	// 56 = 0x38
    _Bool _requestingOfflineSlot;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000020f50
@property(nonatomic, getter=isRequestingOfflineSlot) _Bool requestingOfflineSlot; // @synthesize requestingOfflineSlot=_requestingOfflineSlot;
@property(copy, nonatomic) SSAuthenticationContext *authenticationContext; // @synthesize authenticationContext=_authenticationContext;
- (id)copyXPCEncoding;	// IMP=0x0000000000020eb9
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000020dc0
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020d20
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000020a9a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
