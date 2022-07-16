//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TKHostTokenRegistry;

@interface TKHostTokenRegistryConfigurationProxy : NSObject
{
    NSString *_callerBundleID;	// 8 = 0x8
    TKHostTokenRegistry *_registry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000088e2
@property(readonly, nonatomic) __weak TKHostTokenRegistry *registry; // @synthesize registry=_registry;
- (void)removeTokenID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000087ac
- (void)updateTokenID:(id)arg1 data:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008610
- (void)readDataForTokenID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000848d
- (void)updateKeychainItemsForTokenID:(id)arg1 items:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000082dc
- (void)getKeychainItemsForTokenID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008151
- (id)ensureTokenWithTokenID:(id)arg1;	// IMP=0x0010000000007eda
- (void)createTokenID:(id)arg1 persistent:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007d2b
- (void)getTokenIDsForClassID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000079cf
- (void)endTransactionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000078c4
- (void)beginTransactionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000077e5
- (_Bool)ensureAccessForClassID:(id)arg1;	// IMP=0x0010000000007764
- (void)getClassIDsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007480
- (_Bool)haveAccessForClassID:(id)arg1;	// IMP=0x001000000000717c
- (id)initWithRegistry:(id)arg1 callerBundleID:(id)arg2;	// IMP=0x00100000000070ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

