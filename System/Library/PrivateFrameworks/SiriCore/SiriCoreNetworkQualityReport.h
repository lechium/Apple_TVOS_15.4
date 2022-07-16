//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SiriCoreNetworkQualityReport : NSObject
{
    long long _cellularInstant;	// 8 = 0x8
    long long _cellularHistorical;	// 16 = 0x10
    long long _wifiInstant;	// 24 = 0x18
    long long _wifiHistorical;	// 32 = 0x20
}

@property(nonatomic) long long wifiHistorical; // @synthesize wifiHistorical=_wifiHistorical;
@property(nonatomic) long long wifiInstant; // @synthesize wifiInstant=_wifiInstant;
@property(nonatomic) long long cellularHistorical; // @synthesize cellularHistorical=_cellularHistorical;
@property(nonatomic) long long cellularInstant; // @synthesize cellularInstant=_cellularInstant;

@end

