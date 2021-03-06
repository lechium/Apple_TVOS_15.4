//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, _IDSAccountController;

@interface IDSAccountController : NSObject
{
    _IDSAccountController *_internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004b404
- (void)_disableAccount:(id)arg1;	// IMP=0x000000000004b272
- (void)_enableAccount:(id)arg1;	// IMP=0x000000000004b0e0
- (void)disableAccount:(id)arg1;	// IMP=0x000000000004b0ce
- (void)enableAccount:(id)arg1;	// IMP=0x000000000004b0bc
- (void)_removeAccount:(id)arg1;	// IMP=0x000000000004afde
- (void)removeAccount:(id)arg1;	// IMP=0x000000000004ae4c
- (void)addAccount:(id)arg1;	// IMP=0x000000000004acba
- (void)setupAccountWithSetupParameters:(id)arg1 aliases:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a9be
- (void)setupAccountWithLoginID:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a87e
- (void)setupAccountWithLoginID:(id)arg1 aliases:(id)arg2 password:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004a705
- (id)accountWithUniqueID:(id)arg1;	// IMP=0x000000000004a53e
- (id)accountWithLoginID:(id)arg1 service:(id)arg2;	// IMP=0x000000000004a33e
- (id)serviceName;	// IMP=0x000000000004a1b4
- (id)enabledAccounts;	// IMP=0x000000000004a02a
@property(readonly, nonatomic) NSSet *accounts;
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000000049dd0
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000049cbb
- (id)_internal;	// IMP=0x0000000000049c17
- (void)dealloc;	// IMP=0x0000000000049a3e
- (id)initWithService:(id)arg1;	// IMP=0x0000000000049973
- (id)_initWithService:(id)arg1;	// IMP=0x00000000000498a5
- (id)_initWithService:(id)arg1 onIDSQueue:(_Bool)arg2;	// IMP=0x00000000000490e0

@end

