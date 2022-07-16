//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, PKAppletSubcredential, PKContactResolver, PKPaymentPass, PKPaymentWebService;
@protocol OS_dispatch_queue;

@interface PKSharedCredentialsGroupController : NSObject
{
    PKContactResolver *_contactResolver;	// 8 = 0x8
    PKPaymentWebService *_webService;	// 16 = 0x10
    PKAppletSubcredential *_credential;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSHashTable *_delegates;	// 40 = 0x28
    struct os_unfair_lock_s _delegateLock;	// 48 = 0x30
    _Bool _sharingEnabled;	// 52 = 0x34
    NSArray *_groups;	// 56 = 0x38
    PKPaymentPass *_pass;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000003952c9
@property(readonly, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(readonly, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (unsigned long long)numberOfOutstandingSharingSession;	// IMP=0x0000000000394ca6
@property(readonly, nonatomic) NSArray *nonLocalGroups;
- (void)immobilizerTokenCountWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003949bc
- (void)parseCredentialsOnPass:(id)arg1;	// IMP=0x0000000000394923
- (void)updateGroupsWithCredential:(id)arg1;	// IMP=0x000000000039485e
- (void)revokeGroup:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003945c8
- (void)canSendInvitationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000393db9
- (void)fetchContactForGroup:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000393b81
- (id)contactForGroup:(id)arg1;	// IMP=0x0000000000393b1e
- (void)didUpdateGroups;	// IMP=0x000000000039392a
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000003938d1
- (void)addDelegate:(id)arg1;	// IMP=0x0000000000393878
- (id)initWithPass:(id)arg1 contactResolver:(id)arg2 webService:(id)arg3 queue:(id)arg4;	// IMP=0x0000000000393752

@end

