//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;

@interface PXLocationStream : NSObject <CLLocationManagerDelegate>
{
    unsigned long long _state;	// 8 = 0x8
    double _accuracy;	// 16 = 0x10
    CDUnknownBlockType _handler;	// 24 = 0x18
    CLLocationManager *_locationManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008608b4
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x0000000000860656
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000086056b
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000860475
- (void)_cleanup;	// IMP=0x0000000000860418
- (void)_closeStreamWithError;	// IMP=0x000000000086029b
- (void)_emitLocation:(id)arg1;	// IMP=0x0000000000860157
- (void)_requestLocation;	// IMP=0x000000000086002b
- (void)_requestAuthorization;	// IMP=0x000000000085ff07
- (void)_open;	// IMP=0x000000000085fc96
@property(nonatomic, getter=isClosed) _Bool closed;
- (void)dealloc;	// IMP=0x000000000085fb09
- (id)initWithAccuracy:(double)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000085f853

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
