//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HAPBTLETuple : NSObject
{
    int _maxHAPConnections;	// 8 = 0x8
    float _minBandwidth;	// 12 = 0xc
    float _maxBandwidth;	// 16 = 0x10
    unsigned long long _atvState;	// 24 = 0x18
    struct BTStatus _state;	// 32 = 0x20
}

+ (id)state2String:(struct BTStatus *)arg1;	// IMP=0x00000000001911da
+ (id)makeTupleWithState:(struct BTStatus *)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;	// IMP=0x0000000000191144
+ (id)atvState2String:(unsigned long long)arg1;	// IMP=0x0000000000190fe2
+ (void)bandwidthFromATVState:(unsigned long long)arg1 MinBandwidth:(float *)arg2 MaxBandwidth:(float *)arg3;	// IMP=0x0000000000190e68
+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2;	// IMP=0x0000000000190dee
+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;	// IMP=0x0000000000190d61
@property(nonatomic) float maxBandwidth; // @synthesize maxBandwidth=_maxBandwidth;
@property(nonatomic) float minBandwidth; // @synthesize minBandwidth=_minBandwidth;
@property(nonatomic) int maxHAPConnections; // @synthesize maxHAPConnections=_maxHAPConnections;
@property(nonatomic) struct BTStatus state; // @synthesize state=_state;
@property(nonatomic) unsigned long long atvState; // @synthesize atvState=_atvState;
- (id)description;	// IMP=0x0000000000190c7d

@end
