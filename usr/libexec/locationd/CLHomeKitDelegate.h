//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLHomeKitDelegate : NSObject
{
    void *_homekitProvider;	// 8 = 0x8
    _Bool _homekitPower;	// 16 = 0x10
    _Bool _cbPower;	// 17 = 0x11
}

- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x0020000000143b63
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0010000000143a66
@property(readonly, nonatomic) _Bool power;
- (id)initWithProvider:(void *)arg1;	// IMP=0x0010000000143a0e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
