//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Accounts/ACAccountStoreClientProtocol-Protocol.h>

@class NSString;
@protocol ACRemoteAccountStoreSessionDelegate;

@interface ACAccountStoreClientSideListener : NSObject <ACAccountStoreClientProtocol>
{
    id <ACRemoteAccountStoreSessionDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004414d
- (void)connectionWasInvalidated;	// IMP=0x000000000004411c
- (void)accountDidChange:(id)arg1 withChangeType:(int)arg2;	// IMP=0x00000000000440b2
- (void)accountCredentialsDidChangeForAccountWithIdentifier:(id)arg1;	// IMP=0x0000000000043ef1
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000043e8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
