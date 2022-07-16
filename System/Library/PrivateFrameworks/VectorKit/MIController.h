//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VKMapView;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MIController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    VKMapView *_mapView;	// 24 = 0x18
    _Bool _isActive;	// 32 = 0x20
}

+ (id)sharedController;	// IMP=0x00000000005fbdc6
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (void)decodeDebugTreeData:(id)arg1;	// IMP=0x00000000005fc158
- (void)sendData:(id)arg1;	// IMP=0x00000000005fc0d4
- (void)recievedData:(id)arg1;	// IMP=0x00000000005fc023
- (void)handleXPCEvent:(id)arg1;	// IMP=0x00000000005fbfa2
- (void)deactivateController;	// IMP=0x00000000005fbf6f
- (void)activateController:(id)arg1;	// IMP=0x00000000005fbea2
- (id)init;	// IMP=0x00000000005fbe3b

@end
