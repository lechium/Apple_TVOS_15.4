//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

@interface UNSAuthorizationAlertController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_bundleIdentifersForActiveAlerts;	// 16 = 0x10
    NSMutableDictionary *_bundleIdentifiersToResultBlocks;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001739a
- (void)_queue_sendResponse:(long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000017237
- (void)_queue_addResultBlock:(CDUnknownBlockType)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x0000000000017139
- (void)_queue_removeAlertActiveForBundleIdentifier:(id)arg1;	// IMP=0x0000000000017123
- (void)_queue_addAlertActiveForBundleIdentifier:(id)arg1;	// IMP=0x000000000001710d
- (_Bool)_queue_isAlertActiveForBundleIdentifier:(id)arg1;	// IMP=0x00000000000170f7
- (void)presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 usageDescription:(id)arg3 withResult:(CDUnknownBlockType)arg4;	// IMP=0x00000000000170f1
- (void)_presentAuthorizationAlertForBundleIdentifier:(id)arg1 displayName:(id)arg2 usageDescription:(id)arg3 withResult:(CDUnknownBlockType)arg4;	// IMP=0x0000000000016df0
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 displayName:(id)arg2 usageDescription:(id)arg3 withResult:(CDUnknownBlockType)arg4;	// IMP=0x0000000000016c12
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000016b72

@end

