//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;

@interface PKCoarseLocationMonitor : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;	// 8 = 0x8
    _Bool _coarseLocationEnabled;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000043cb20
- (void).cxx_destruct;	// IMP=0x000000000043cdc8
@property(readonly, nonatomic) _Bool coarseLocationEnabled; // @synthesize coarseLocationEnabled=_coarseLocationEnabled;
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x000000000043cc9f
- (id)init;	// IMP=0x000000000043cb75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

