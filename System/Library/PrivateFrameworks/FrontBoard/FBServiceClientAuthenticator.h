//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding>
{
    NSString *_entitlement;	// 8 = 0x8
    unsigned long long _credentials;	// 16 = 0x10
}

+ (int)_authenticateAuditToken:(id)arg1 entitlement:(id)arg2 credentials:(unsigned long long)arg3 error:(out id *)arg4 withResult:(CDUnknownBlockType)arg5;	// IMP=0x0000000000056c9c
+ (id)_errorForCode:(int)arg1 process:(id)arg2 failedEntitlement:(id)arg3;	// IMP=0x0000000000056ae2
+ (_Bool)authenticateAuditToken:(CDStruct_6ad76789)arg1 forEntitlement:(id)arg2 error:(out id *)arg3;	// IMP=0x00000000000566d5
+ (id)sharedForegroundUIAppClientAuthenticator;	// IMP=0x0000000000056585
+ (id)sharedUIAppClientAuthenticator;	// IMP=0x000000000005651b
+ (id)sharedSystemClientAuthenticator;	// IMP=0x00000000000564b1
- (void).cxx_destruct;	// IMP=0x00000000000570c5
@property(readonly, nonatomic) unsigned long long credentials; // @synthesize credentials=_credentials;
@property(readonly, copy, nonatomic) NSString *entitlement; // @synthesize entitlement=_entitlement;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000005709f
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000005704f
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000056fa5
- (id)succinctDescription;	// IMP=0x0000000000056f55
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 forEntitlement:(id)arg2 withResult:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056a30
- (int)authenticateAuditToken:(CDStruct_6ad76789 *)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056a17
- (int)authenticateClient:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056967
- (_Bool)authenticateAuditToken:(id)arg1 forEntitlement:(id)arg2 error:(out id *)arg3;	// IMP=0x00000000000568e1
- (_Bool)authenticateAuditToken:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000000568c8
- (_Bool)authenticateAuditToken:(id)arg1;	// IMP=0x00000000000568b4
- (_Bool)authenticateClient:(id)arg1 error:(out id *)arg2;	// IMP=0x0000000000056810
- (_Bool)authenticateClient:(id)arg1;	// IMP=0x00000000000567fc
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned long long)arg2;	// IMP=0x0000000000056668
- (id)initWithEntitlement:(id)arg1;	// IMP=0x0000000000056651
- (id)initWithCredentials:(unsigned long long)arg1;	// IMP=0x000000000005662b
- (id)init;	// IMP=0x00000000000565ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

