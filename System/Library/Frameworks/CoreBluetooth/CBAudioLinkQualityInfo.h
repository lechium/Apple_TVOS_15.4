//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CUXPCCodable-Protocol.h>

@class NSString;

@interface CBAudioLinkQualityInfo : NSObject <CUXPCCodable>
{
    BOOL _codecType;	// 8 = 0x8
    BOOL _noiseFloor90;	// 9 = 0x9
    BOOL _rssiAverage;	// 10 = 0xa
    BOOL _signalToNoiseRatio;	// 11 = 0xb
    unsigned int _bitRate;	// 12 = 0xc
    NSString *_deviceName;	// 16 = 0x10
    double _jitterBufferSeconds;	// 24 = 0x18
    double _retransmitRate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002fb10
@property(nonatomic) BOOL signalToNoiseRatio; // @synthesize signalToNoiseRatio=_signalToNoiseRatio;
@property(nonatomic) BOOL rssiAverage; // @synthesize rssiAverage=_rssiAverage;
@property(nonatomic) double retransmitRate; // @synthesize retransmitRate=_retransmitRate;
@property(nonatomic) BOOL noiseFloor90; // @synthesize noiseFloor90=_noiseFloor90;
@property(nonatomic) double jitterBufferSeconds; // @synthesize jitterBufferSeconds=_jitterBufferSeconds;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) BOOL codecType; // @synthesize codecType=_codecType;
@property(nonatomic) unsigned int bitRate; // @synthesize bitRate=_bitRate;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000002f470
- (id)description;	// IMP=0x000000000002f450
- (void)encodeWithXPCObject:(id)arg1;	// IMP=0x000000000002f310
- (id)initWithXPCObject:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002f050

@end

