//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface TVPSMutableBluetoothDeviceManagerConfiguration
{
}

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005540
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000054f0

// Remaining properties
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @dynamic calloutQueue;
@property(copy, nonatomic) CDUnknownBlockType deviceFilter; // @dynamic deviceFilter;
@property(copy, nonatomic) NSSet *deviceTypes; // @dynamic deviceTypes;
@property(copy, nonatomic) NSString *label; // @dynamic label;

@end

