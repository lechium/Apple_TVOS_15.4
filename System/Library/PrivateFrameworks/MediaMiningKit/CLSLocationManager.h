//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface CLSLocationManager : NSObject <CLLocationManagerDelegate>
{
    double _desiredAccuracy;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _minimumDelayReached;	// 24 = 0x18
    _Bool _isBrowsing;	// 32 = 0x20
    NSMutableArray *_pendingBlocks;	// 40 = 0x28
    CLLocationManager *_locationManager;	// 48 = 0x30
    _Bool _isUpdatingLocation;	// 56 = 0x38
    NSUUID *_shutdownUUID;	// 64 = 0x40
}

+ (id)defaultManager;	// IMP=0x000000000004216b
- (void).cxx_destruct;	// IMP=0x0000000000041d63
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000041ccd
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x0000000000041c66
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000041bdb
- (void)_dispatchProximityPendingBlocks:(_Bool)arg1;	// IMP=0x00000000000416b1
- (id)currentLocation;	// IMP=0x000000000004156b
- (void)locationResult:(CDUnknownBlockType)arg1;	// IMP=0x00000000000414e0
- (void)dealloc;	// IMP=0x0000000000041474
- (id)init;	// IMP=0x000000000004130e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
