//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDictionary;

@interface CSDRouteController : NSObject
{
    MISSING_TYPE *_routesByUniqueIdentifier;	// 8 = 0x8
    MISSING_TYPE *routesDidChangeHandler;	// 16 = 0x10
    MISSING_TYPE *routeWasPickedHandler;	// 32 = 0x20
    MISSING_TYPE *timedOutPickingRouteHandler;	// 48 = 0x30
    MISSING_TYPE *queue;	// 64 = 0x40
    MISSING_TYPE *routeProviders;	// 72 = 0x48
    MISSING_TYPE *pendingRouteContext;	// 80 = 0x50
    MISSING_TYPE *pickWhenAvailableRouteIdentifier;	// 104 = 0x68
    MISSING_TYPE *pendingPickedRouteTimeout;	// 120 = 0x78
}

+ (id)makePairedHostDeviceRouteController;	// IMP=0x002000000025bf70
+ (id)makeLocalRouteController;	// IMP=0x001000000025bf50
- (void).cxx_destruct;	// IMP=0x004000000025deb0
- (id)init;	// IMP=0x001000000025de50
- (void)handleUpdatedPairedHostDeviceRoutes:(id)arg1;	// IMP=0x001000000025da50
- (void)clearState;	// IMP=0x001000000025d520
- (void)pickRouteWithUniqueIdentifier:(id)arg1 shouldWaitUntilAvailable:(_Bool)arg2;	// IMP=0x001000000025d1a0
@property(nonatomic, copy) CDUnknownBlockType timedOutPickingRouteHandler;
@property(nonatomic, copy) CDUnknownBlockType routeWasPickedHandler;
@property(nonatomic, copy) CDUnknownBlockType routesDidChangeHandler;
@property(nonatomic, readonly) NSDictionary *routesByUniqueIdentifier;

@end
