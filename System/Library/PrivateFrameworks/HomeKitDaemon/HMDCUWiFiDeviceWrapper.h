//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDWACDevice-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CUWACSession, CUWiFiDevice, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCUWiFiDeviceWrapper : NSObject <HMDWACDevice, HMFLogging>
{
    CUWiFiDevice *_cuWiFiDevice;	// 8 = 0x8
    CUWACSession *_wacSession;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *deviceID;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0000000000621f82
- (void).cxx_destruct;	// IMP=0x000000000062189f
@property(readonly, nonatomic) NSString *deviceID; // @synthesize deviceID;
- (id)logIdentifier;	// IMP=0x0000000000621883
@property(readonly, copy) NSString *description;
- (void)cancelConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000062168c
- (void)startConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006213fd
@property(readonly, nonatomic) id underlyingDevice; // @dynamic underlyingDevice;
@property(readonly, nonatomic) _Bool supportsAirPlay2; // @dynamic supportsAirPlay2;
@property(readonly, nonatomic) _Bool isConfigured; // @dynamic isConfigured;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(readonly, nonatomic) NSString *ssid; // @dynamic ssid;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithCUWiFiDevice:(id)arg1 dispatchQueue:(id)arg2;	// IMP=0x00000000006211c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

