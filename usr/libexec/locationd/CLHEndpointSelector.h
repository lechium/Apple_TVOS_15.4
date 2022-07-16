//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CLHEndpointSelector : NSObject
{
    NSURL *_appEndpoint;	// 8 = 0x8
    NSURL *_batchEndpoint;	// 16 = 0x10
    NSURL *_cellWifiEndpoint;	// 24 = 0x18
    NSURL *_indoorEndpoint;	// 32 = 0x20
    NSURL *_passEndpoint;	// 40 = 0x28
    NSURL *_poiEndpoint;	// 48 = 0x30
    NSURL *_pressureEndpoint;	// 56 = 0x38
    NSURL *_traceEndpoint;	// 64 = 0x40
    NSURL *_altimeterEndpoint;	// 72 = 0x48
    NSURL *_ionosphereEndpoint;	// 80 = 0x50
}

@property(readonly) NSURL *ionosphereEndpoint; // @synthesize ionosphereEndpoint=_ionosphereEndpoint;
@property(readonly) NSURL *altimeterEndpoint; // @synthesize altimeterEndpoint=_altimeterEndpoint;
@property(readonly) NSURL *traceEndpoint; // @synthesize traceEndpoint=_traceEndpoint;
@property(readonly) NSURL *pressureEndpoint; // @synthesize pressureEndpoint=_pressureEndpoint;
@property(readonly) NSURL *poiEndpoint; // @synthesize poiEndpoint=_poiEndpoint;
@property(readonly) NSURL *passEndpoint; // @synthesize passEndpoint=_passEndpoint;
@property(readonly) NSURL *indoorEndpoint; // @synthesize indoorEndpoint=_indoorEndpoint;
@property(readonly) NSURL *cellWifiEndpoint; // @synthesize cellWifiEndpoint=_cellWifiEndpoint;
@property(readonly) NSURL *batchEndpoint; // @synthesize batchEndpoint=_batchEndpoint;
@property(readonly) NSURL *appEndpoint; // @synthesize appEndpoint=_appEndpoint;
- (id)description;	// IMP=0x00100000008eb710
- (id)jsonObject;	// IMP=0x00100000008eb596
- (void)updateEndpoint:(id *)arg1 withKey:(id)arg2;	// IMP=0x00100000008eb404
- (void)refresh;	// IMP=0x00100000008eb318
- (void)dealloc;	// IMP=0x00100000008eb296
- (id)init;	// IMP=0x00100000008eb0f3

@end

