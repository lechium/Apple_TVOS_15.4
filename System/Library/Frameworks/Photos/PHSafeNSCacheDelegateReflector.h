//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Photos/NSCacheDelegate-Protocol.h>

@class NSMapTable, NSString;

@interface PHSafeNSCacheDelegateReflector : NSObject <NSCacheDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMapTable *_delegegatesByCache;	// 16 = 0x10
}

+ (void)removeDelegateForCache:(id)arg1;	// IMP=0x0000000000006f2e
+ (void)setDelegate:(id)arg1 forCache:(id)arg2;	// IMP=0x0000000000006ea8
+ (id)sharedInstance;	// IMP=0x0000000000006e84
- (void).cxx_destruct;	// IMP=0x0000000000006d71
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x0000000000006c8c
- (void)removeDelegateForCache:(id)arg1;	// IMP=0x0000000000006bef
- (void)setDelegate:(id)arg1 forCache:(id)arg2;	// IMP=0x0000000000006a27
- (id)init;	// IMP=0x00000000000069a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

