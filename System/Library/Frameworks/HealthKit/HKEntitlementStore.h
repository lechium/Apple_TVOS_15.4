//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKEntitlementStoreClient-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKEntitlementStore : NSObject <_HKXPCExportable, HKEntitlementStoreClient>
{
    HKProxyProvider *_proxyProvider;	// 8 = 0x8
}

+ (id)taskIdentifier;	// IMP=0x0000000000157aea
- (void).cxx_destruct;	// IMP=0x0000000000157c2c
- (id)remoteInterface;	// IMP=0x0000000000157c22
- (id)exportedInterface;	// IMP=0x0000000000157c18
- (void)connectionInvalidated;	// IMP=0x0000000000157c12
- (void)fetchContainerAppExtensionEntitlementsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000157afc
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000001579f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
