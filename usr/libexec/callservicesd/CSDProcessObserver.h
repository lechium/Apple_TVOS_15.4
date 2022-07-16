//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CSDProcessObserver : NSObject
{
    MISSING_TYPE *queue;	// 8 = 0x8
    MISSING_TYPE *processInfoByBundleIdentifier;	// 16 = 0x10
    MISSING_TYPE *applicationMonitor;	// 24 = 0x18
    MISSING_TYPE *processStateChanged;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00400000001c7f60
- (id)init;	// IMP=0x00100000001c7f00
- (void)fetchCurrentProcessStatesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c7e30
- (id)fetchCurrentProcessStatesForBundleIdentifier:(id)arg1;	// IMP=0x00100000001c7b90
- (void)processStatesForBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c7ac0
- (id)processStatesForBundleIdentifier:(id)arg1;	// IMP=0x00100000001c7ab0
- (id)processIdentifiersForBundleIdentifier:(id)arg1;	// IMP=0x00100000001c7a10
@property(nonatomic, copy) CDUnknownBlockType processStateChanged;
@property(nonatomic, readonly) int currentProcessIdentifier;
- (id)initWithBundleIdentifiers:(id)arg1 queue:(id)arg2;	// IMP=0x00100000001c6ab0
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001c5330

@end
