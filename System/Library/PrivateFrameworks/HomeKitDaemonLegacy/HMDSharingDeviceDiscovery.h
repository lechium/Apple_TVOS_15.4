//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDSharingDeviceDiscovery-Protocol.h>

@class NSObject, NSString, SFDeviceDiscovery;
@protocol OS_dispatch_queue;

@interface HMDSharingDeviceDiscovery : HMFObject <HMDSharingDeviceDiscovery>
{
    SFDeviceDiscovery *_deviceDiscovery;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000004e40a3
@property(retain, nonatomic) SFDeviceDiscovery *deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004e3fba
- (void)stop;	// IMP=0x00000000004e3f60
- (void)start;	// IMP=0x00000000004e3f1c
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property(nonatomic) unsigned long long discoveryFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
- (void)dealloc;	// IMP=0x00000000004e3a4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

