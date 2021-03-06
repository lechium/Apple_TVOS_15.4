//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol MRDHostedExternalDeviceManagerDelegate;

@interface MRDHostedExternalDeviceManager : NSObject
{
    NSMutableArray *_hostedExternalDeviceGraveyard;	// 8 = 0x8
    NSMutableDictionary *_hostedExternalDeviceMap;	// 16 = 0x10
    id <MRDHostedExternalDeviceManagerDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000cd8e2
@property(nonatomic) __weak id <MRDHostedExternalDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleExternalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x00100000000cd622
- (void)_tombstoneHostedExternalDevice:(id)arg1;	// IMP=0x00100000000cd4df
- (void)_removeExternalDeviceWithOutputDeviceUID:(id)arg1 forReason:(id)arg2;	// IMP=0x00100000000cd16b
- (void)_removeExternalDeviceWithEndpointIdentifier:(id)arg1 forReason:(id)arg2;	// IMP=0x00100000000cd03d
- (void)purgeUndiscoverableDisconnectedDevices:(id)arg1;	// IMP=0x00100000000ccaad
- (_Bool)isDirectConnectedToOutputDeviceUID:(id)arg1;	// IMP=0x00100000000cc977
- (id)hostedExternalDeviceForEndpointIdentifier:(id)arg1;	// IMP=0x00100000000cc8eb
- (void)addHostedExternalDevice:(id)arg1 endpoint:(id)arg2;	// IMP=0x00100000000cc77e
@property(readonly, nonatomic) NSDictionary *availableExternalDevices;
- (id)init;	// IMP=0x00100000000cc692

@end

