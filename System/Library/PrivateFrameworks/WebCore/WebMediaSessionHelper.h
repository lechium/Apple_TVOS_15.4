//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebMediaSessionHelper : NSObject
{
    void *_callback;	// 8 = 0x8
    struct RetainPtr<AVRouteDetector> _routeDetector;	// 16 = 0x10
    _Bool _monitoringAirPlayRoutes;	// 24 = 0x18
    _Bool _startMonitoringAirPlayRoutesPending;	// 25 = 0x19
}

- (id).cxx_construct;	// IMP=0x0000000000110640
- (void).cxx_destruct;	// IMP=0x0000000000110620
- (void)carPlayIsConnectedDidChange:(id)arg1;	// IMP=0x00000000001103f0
- (void)mediaServerConnectionDied:(id)arg1;	// IMP=0x0000000000110070
- (void)applicationDidEnterBackground:(id)arg1;	// IMP=0x000000000010ff00
- (void)wirelessRoutesAvailableDidChange:(id)arg1;	// IMP=0x000000000010fd90
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x000000000010fc80
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x000000000010fb70
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x000000000010fa00
- (void)stopMonitoringAirPlayRoutes;	// IMP=0x000000000010f9d0
- (void)startMonitoringAirPlayRoutes;	// IMP=0x000000000010f750
- (_Bool)hasWirelessTargetsAvailable;	// IMP=0x000000000010f730
- (void)clearCallback;	// IMP=0x000000000010f720
- (void)dealloc;	// IMP=0x000000000010f610
- (id)initWithCallback:(void *)arg1;	// IMP=0x000000000010f100

@end

