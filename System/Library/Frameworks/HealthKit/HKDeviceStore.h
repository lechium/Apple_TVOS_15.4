//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKDeviceStoreClient-Protocol.h>
#import <HealthKit/_HKXPCExportable-Protocol.h>

@class HKProxyProvider, NSString;

@interface HKDeviceStore : NSObject <_HKXPCExportable, HKDeviceStoreClient>
{
    HKProxyProvider *_proxyProvider;	// 8 = 0x8
}

+ (id)taskIdentifier;	// IMP=0x00000000000e3a5d
- (void).cxx_destruct;	// IMP=0x00000000000e3d20
- (id)remoteInterface;	// IMP=0x00000000000e3d16
- (id)exportedInterface;	// IMP=0x00000000000e3d0c
- (void)connectionInvalidated;	// IMP=0x00000000000e3d06
- (void)fetchAllDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e3bf0
- (void)fetchDevicesMatchingValues:(id)arg1 forProperty:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e3a6f
- (id)initWithHealthStore:(id)arg1;	// IMP=0x00000000000e3967

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
