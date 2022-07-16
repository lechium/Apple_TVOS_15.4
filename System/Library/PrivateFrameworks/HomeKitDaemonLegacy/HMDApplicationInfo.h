//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSArray, NSData, NSHashTable, NSString, NSURL;
@protocol HMFLocking;

@interface HMDApplicationInfo : HMFObject <HMFLogging>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    _Bool _independent;	// 16 = 0x10
    id <HMFLocking> _lock;	// 24 = 0x18
    NSHashTable *_processes;	// 32 = 0x20
    HMDApplicationInfo *_companionApplicationInfo;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x000000000054d2c2
+ (id)applicationInfoForBundleIdentifier:(id)arg1;	// IMP=0x000000000054d111
+ (id)applicationInfoForBundleURL:(id)arg1;	// IMP=0x000000000054cfc1
+ (id)privateVendorIdentifier;	// IMP=0x000000000054cfa3
- (void).cxx_destruct;	// IMP=0x000000000054ce98
@property(readonly) HMDApplicationInfo *companionApplicationInfo; // @synthesize companionApplicationInfo=_companionApplicationInfo;
@property(readonly, getter=isIndependent) _Bool independent; // @synthesize independent=_independent;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)logIdentifier;	// IMP=0x000000000054ce48
- (void)removeProcess:(id)arg1;	// IMP=0x000000000054cd6d
- (void)addProcess:(id)arg1;	// IMP=0x000000000054cc92
@property(readonly, copy) NSArray *processes;
- (id)clientIdentifierSalt:(id *)arg1;	// IMP=0x000000000054ca1d
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess;
@property(readonly, getter=isInstalled) _Bool installed;
@property(readonly) HMDApplicationInfo *hostApplicationInfo;
@property(readonly, copy) NSData *vendorIdentifier;
@property(readonly) NSURL *bundleURL;
- (id)attributeDescriptions;	// IMP=0x000000000054c76f
- (id)shortDescription;	// IMP=0x000000000054c703
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000054c62f
@property(readonly) unsigned long long hash;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x000000000054c4d5
- (id)init;	// IMP=0x000000000054c42d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

