//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Proximity/NSCopying-Protocol.h>
#import <Proximity/NSSecureCoding-Protocol.h>

@interface PRGetPowerStatsResponse : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _numPacketsReceived;	// 8 = 0x8
    unsigned short _numPacketsTransmitted;	// 10 = 0xa
    unsigned int _sleepDuration;	// 12 = 0xc
    unsigned int _wakeDuration;	// 16 = 0x10
    unsigned int _singleAntennaSearchDuration;	// 20 = 0x14
    unsigned int _dualAntennaSearchDuration;	// 24 = 0x18
    unsigned int _singleChainRxPacketDuration;	// 28 = 0x1c
    unsigned int _dualChainRxPacketDuration;	// 32 = 0x20
    unsigned int _tripleChainRxPacketDuration;	// 36 = 0x24
    unsigned int _dspProcessingDuration;	// 40 = 0x28
    unsigned int _txDuration;	// 44 = 0x2c
    unsigned int _sleepCount;	// 48 = 0x30
    unsigned int _wakeCount;	// 52 = 0x34
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003162
@property(readonly, nonatomic) unsigned int wakeCount; // @synthesize wakeCount=_wakeCount;
@property(readonly, nonatomic) unsigned int sleepCount; // @synthesize sleepCount=_sleepCount;
@property(readonly, nonatomic) unsigned short numPacketsTransmitted; // @synthesize numPacketsTransmitted=_numPacketsTransmitted;
@property(readonly, nonatomic) unsigned short numPacketsReceived; // @synthesize numPacketsReceived=_numPacketsReceived;
@property(readonly, nonatomic) unsigned int txDuration; // @synthesize txDuration=_txDuration;
@property(readonly, nonatomic) unsigned int dspProcessingDuration; // @synthesize dspProcessingDuration=_dspProcessingDuration;
@property(readonly, nonatomic) unsigned int tripleChainRxPacketDuration; // @synthesize tripleChainRxPacketDuration=_tripleChainRxPacketDuration;
@property(readonly, nonatomic) unsigned int dualChainRxPacketDuration; // @synthesize dualChainRxPacketDuration=_dualChainRxPacketDuration;
@property(readonly, nonatomic) unsigned int singleChainRxPacketDuration; // @synthesize singleChainRxPacketDuration=_singleChainRxPacketDuration;
@property(readonly, nonatomic) unsigned int dualAntennaSearchDuration; // @synthesize dualAntennaSearchDuration=_dualAntennaSearchDuration;
@property(readonly, nonatomic) unsigned int singleAntennaSearchDuration; // @synthesize singleAntennaSearchDuration=_singleAntennaSearchDuration;
@property(readonly, nonatomic) unsigned int wakeDuration; // @synthesize wakeDuration=_wakeDuration;
@property(readonly, nonatomic) unsigned int sleepDuration; // @synthesize sleepDuration=_sleepDuration;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000035db
- (id)description;	// IMP=0x000000000000354b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000034bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003348
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000316a
- (id)initWithGetPowerStatsResponse:(const struct GetPowerStatsResponse *)arg1;	// IMP=0x00000000000030d8
- (id)initWithSleepDuration:(unsigned int)arg1 wakeDuration:(unsigned int)arg2 singleAntennaSearchDuration:(unsigned int)arg3 dualAntennaSearchDuration:(unsigned int)arg4 singleChainRxPacketDuration:(unsigned int)arg5 dualChainRxPacketDuration:(unsigned int)arg6 tripleChainRxPacketDuration:(unsigned int)arg7 dspProcessingDuration:(unsigned int)arg8 txDuration:(unsigned int)arg9 numPacketsReceived:(unsigned short)arg10 numPacketsTransmitted:(unsigned short)arg11 sleepCount:(unsigned int)arg12 wakeCount:(unsigned int)arg13;	// IMP=0x0000000000003042

@end

