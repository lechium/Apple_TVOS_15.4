//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DNDSPairedDevice, NSSet;
@protocol DNDSPairedDeviceStateMonitorDelegate;

@interface DNDSPairedDeviceStateMonitor : NSObject
{
    id <DNDSPairedDeviceStateMonitorDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000062b90
@property(nonatomic) __weak id <DNDSPairedDeviceStateMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resume;	// IMP=0x0000000000062b63
- (id)pairedDeviceForDeviceIdentifier:(id)arg1;	// IMP=0x0000000000062b5b
@property(readonly, copy) NSSet *cloudDevices; // @dynamic cloudDevices;
@property(readonly, copy) DNDSPairedDevice *pairedDevice; // @dynamic pairedDevice;
- (id)initWithLocalIDSService:(id)arg1 cloudIDSService:(id)arg2;	// IMP=0x0000000000062b2c

@end

