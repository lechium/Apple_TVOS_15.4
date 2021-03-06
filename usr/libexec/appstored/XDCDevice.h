//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NRDevice, NSDictionary, NSString, NSUUID;

@interface XDCDevice : NSObject
{
    NRDevice *_device;	// 8 = 0x8
    _Bool _activePairedDevice;	// 16 = 0x10
    _Bool _connected;	// 17 = 0x11
    _Bool _supported;	// 18 = 0x12
    _Bool _tombstone;	// 19 = 0x13
    NSString *_destinationID;	// 24 = 0x18
    NSString *_thinningVariant;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000124b37
@property(readonly, getter=isTombstone) _Bool tombstone; // @synthesize tombstone=_tombstone;
@property(readonly) NSString *thinningVariant; // @synthesize thinningVariant=_thinningVariant;
@property(readonly, getter=isSupported) _Bool supported; // @synthesize supported=_supported;
@property(readonly) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
@property(readonly, getter=isActivePairedDevice) _Bool activePairedDevice; // @synthesize activePairedDevice=_activePairedDevice;
- (id)description;	// IMP=0x0010000000124a6e
- (void)updateWithIDSDevice:(id)arg1;	// IMP=0x0010000000124961
- (void)markAsTombstoneDevice;	// IMP=0x0010000000124951
@property(readonly) NSDictionary *thinningHeaders;
@property(readonly) NSString *systemVersion;
@property(readonly) NSString *productType;
@property(readonly) NSUUID *pairingID;
- (id)initWithIDSDevice:(id)arg1;	// IMP=0x00100000001245b7

@end

