//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, NSArray, NSHashTable;

@interface HFMediaDispatcher : NSObject
{
    NSArray *_appleMusicMagicAuthCapableAccounts;	// 8 = 0x8
    NSHashTable *_appleMusicAccountObservers;	// 16 = 0x10
}

+ (id)sharedDispatcher;	// IMP=0x0000000000062f0e
- (void).cxx_destruct;	// IMP=0x000000000006313a
@property(retain, nonatomic) NSHashTable *appleMusicAccountObservers; // @synthesize appleMusicAccountObservers=_appleMusicAccountObservers;
@property(copy, nonatomic) NSArray *appleMusicMagicAuthCapableAccounts; // @synthesize appleMusicMagicAuthCapableAccounts=_appleMusicMagicAuthCapableAccounts;
- (void)_setupAppleMusicAccountStoreIfNecessary;	// IMP=0x0000000000063100
@property(readonly, nonatomic) _Bool isUsingiCloud;
- (void)removeAppleMusicAccountObserver:(id)arg1;	// IMP=0x0000000000063086
- (void)addAppleMusicAccountObserver:(id)arg1;	// IMP=0x0000000000063010
@property(readonly, nonatomic) ACAccountStore *appleMusicAccountStore;
- (id)init;	// IMP=0x0000000000062f74

@end

