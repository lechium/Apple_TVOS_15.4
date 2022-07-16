//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface IDSConnectivityMonitorMetricProperties : NSObject
{
    _Bool _success;	// 8 = 0x8
    _Bool _terminusConnected;	// 9 = 0x9
    _Bool _terminusNearby;	// 10 = 0xa
    _Bool _terminusRegistered;	// 11 = 0xb
    double _timeConnected;	// 16 = 0x10
    double _timeDisconnected;	// 24 = 0x18
    NSString *_personalCBUUIDString;	// 32 = 0x20
    MISSING_TYPE *_pairedDeviceCBUUIDString;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000002a0840
@property(retain, nonatomic) NSString *pairedDeviceCBUUIDString; // @synthesize pairedDeviceCBUUIDString=_pairedDeviceCBUUIDString;
@property(retain, nonatomic) NSString *personalCBUUIDString; // @synthesize personalCBUUIDString=_personalCBUUIDString;
@property(nonatomic) double timeDisconnected; // @synthesize timeDisconnected=_timeDisconnected;
@property(nonatomic) double timeConnected; // @synthesize timeConnected=_timeConnected;
@property(nonatomic) _Bool terminusRegistered; // @synthesize terminusRegistered=_terminusRegistered;
@property(nonatomic) _Bool terminusNearby; // @synthesize terminusNearby=_terminusNearby;
@property(nonatomic) _Bool terminusConnected; // @synthesize terminusConnected=_terminusConnected;
@property(nonatomic) _Bool success; // @synthesize success=_success;

@end

