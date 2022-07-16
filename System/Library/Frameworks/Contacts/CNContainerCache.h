//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNCache, CNContactStore, CNContainer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CNContainerCache : NSObject
{
    CNContainer *_primaryiCloudContainer;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    ACAccountStore *_accountStore;	// 24 = 0x18
    CNCache *_cachedAccounts;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

+ (id)os_log;	// IMP=0x00000000000f309e
- (void).cxx_destruct;	// IMP=0x00000000000f3c87
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) CNCache *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) __weak CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContainer *primaryiCloudContainer; // @synthesize primaryiCloudContainer=_primaryiCloudContainer;
- (void)resetPrimaryiCloudContainer;	// IMP=0x00000000000f3bf4
- (void)resetAccountCache;	// IMP=0x00000000000f3be0
- (id)cnAccountForContainer:(id)arg1;	// IMP=0x00000000000f3a84
- (id)accountForContainer:(id)arg1;	// IMP=0x00000000000f37f0
- (id)onWorkQueue_findPrimaryiCloudContainer;	// IMP=0x00000000000f359d
- (void)dealloc;	// IMP=0x00000000000f3375
- (void)contactStoreDidChange;	// IMP=0x00000000000f32ee
- (void)accountStoreDidChange;	// IMP=0x00000000000f3267
- (id)initWithContactStore:(id)arg1;	// IMP=0x00000000000f30fa

@end

