//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

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

+ (id)logCategory;	// IMP=0x00000000005b813d
+ (id)applicationInfoForBundleIdentifier:(id)arg1;	// IMP=0x00000000005b7f8c
+ (id)applicationInfoForBundleURL:(id)arg1;	// IMP=0x00000000005b7e3c
+ (id)privateVendorIdentifier;	// IMP=0x00000000005b7e1e
- (void).cxx_destruct;	// IMP=0x00000000005b7d13
@property(readonly) HMDApplicationInfo *companionApplicationInfo; // @synthesize companionApplicationInfo=_companionApplicationInfo;
@property(readonly, getter=isIndependent) _Bool independent; // @synthesize independent=_independent;
@property(readonly, copy) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)logIdentifier;	// IMP=0x00000000005b7cc3
- (void)removeProcess:(id)arg1;	// IMP=0x00000000005b7be8
- (void)addProcess:(id)arg1;	// IMP=0x00000000005b7b0d
@property(readonly, copy) NSArray *processes;
- (id)clientIdentifierSalt:(id *)arg1;	// IMP=0x00000000005b7898
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess;
@property(readonly, getter=isInstalled) _Bool installed;
@property(readonly) HMDApplicationInfo *hostApplicationInfo;
@property(readonly, copy) NSData *vendorIdentifier;
@property(readonly) NSURL *bundleURL;
- (id)attributeDescriptions;	// IMP=0x00000000005b75ea
- (id)shortDescription;	// IMP=0x00000000005b757e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005b74aa
@property(readonly) unsigned long long hash;
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000005b7350
- (id)init;	// IMP=0x00000000005b72a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

