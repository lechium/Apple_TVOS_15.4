//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSNumber, NSString;
@protocol AMSBagProtocol, Device;

@interface AuthorizeMachine : NSObject
{
    ACAccount *_account;	// 8 = 0x8
    id <AMSBagProtocol> _bag;	// 16 = 0x10
    AMSProcessInfo *_clientInfo;	// 24 = 0x18
    id <Device> _device;	// 32 = 0x20
    long long _authorizeReason;	// 40 = 0x28
    NSNumber *_familyMemberAccountID;	// 48 = 0x30
    NSString *_logKey;	// 56 = 0x38
}

+ (id)bagKeySet;	// IMP=0x002000000022e6eb
+ (void)addRequiredBagKeysToAggregator:(id)arg1;	// IMP=0x001000000022e5ed
- (void).cxx_destruct;	// IMP=0x002000000022eff1
@property(copy) NSString *logKey; // @synthesize logKey=_logKey;
@property(copy) NSNumber *familyMemberAccountID; // @synthesize familyMemberAccountID=_familyMemberAccountID;
@property long long authorizeReason; // @synthesize authorizeReason=_authorizeReason;
- (id)_checkRequestThrottle;	// IMP=0x001000000022eddd
- (id)_buildRequestTask;	// IMP=0x001000000022ec5a
- (id)_buildRequestParametersWithError:(id *)arg1;	// IMP=0x001000000022ea75
- (id)_buildRequest;	// IMP=0x001000000022e7c4
- (void)performAuthorizationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000022e520
- (id)performAuthorization;	// IMP=0x001000000022e0ec
- (id)initWithAccount:(id)arg1 authorizeReason:(long long)arg2;	// IMP=0x001000000022e08c
- (id)init;	// IMP=0x001000000022df6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

