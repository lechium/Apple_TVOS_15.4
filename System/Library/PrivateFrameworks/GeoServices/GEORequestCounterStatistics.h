//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEORequestCounterStatistics : NSObject <NSSecureCoding>
{
    unsigned long long _bytesTransmitted;	// 8 = 0x8
    unsigned long long _bytesReceived;	// 16 = 0x10
    long long _durationUSeconds;	// 24 = 0x18
    int _durationCount;	// 32 = 0x20
    NSMutableDictionary *_resultCounts;	// 40 = 0x28
    unsigned long long _usedInterfaces;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000030d098
- (void).cxx_destruct;	// IMP=0x000000000030d697
@property(readonly, nonatomic) unsigned long long usedInterfaces; // @synthesize usedInterfaces=_usedInterfaces;
@property(readonly, nonatomic) int durationCount; // @synthesize durationCount=_durationCount;
@property(readonly, nonatomic) long long durationUSecondsTotal; // @synthesize durationUSecondsTotal=_durationUSeconds;
@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) unsigned long long bytesTransmitted; // @synthesize bytesTransmitted=_bytesTransmitted;
- (id)description;	// IMP=0x000000000030d5c8
- (unsigned long long)countForResult:(unsigned char)arg1;	// IMP=0x000000000030d54c
- (void)addUsedInterfaces:(unsigned long long)arg1;	// IMP=0x000000000030d542
- (void)incrementCountForResult:(unsigned char)arg1;	// IMP=0x000000000030d413
- (void)incrementDuration:(double)arg1;	// IMP=0x000000000030d3df
- (void)incrementBytesReceived:(unsigned long long)arg1;	// IMP=0x000000000030d3d5
- (void)incrementBytesTransmitted:(unsigned long long)arg1;	// IMP=0x000000000030d3cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030d2f9
- (unsigned long long)hash;	// IMP=0x000000000030d2c3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000030d1fa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030d0a0

@end

