//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CLLocationSmootherProxy;
@protocol CLLocationManagerDelegateInternal;

@interface CLLocationSmoother : NSObject
{
    _CLLocationSmootherProxy *_locationManagerSmootherProxy;	// 8 = 0x8
}

@property(nonatomic) id <CLLocationManagerDelegateInternal> delegate;
- (void)smoothLocations:(id)arg1 workoutActivityType:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002c1be
- (void)smoothLocations:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c1a4
- (void)smoothLocations:(id)arg1;	// IMP=0x000000000002c0ca
@property(readonly, retain, nonatomic) _CLLocationSmootherProxy *locationManagerSmootherProxy;
- (void)dealloc;	// IMP=0x000000000002c053

@end
