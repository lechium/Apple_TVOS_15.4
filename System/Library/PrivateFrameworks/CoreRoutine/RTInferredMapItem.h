//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class RTMapItem;

@interface RTInferredMapItem : NSObject <NSCopying, NSSecureCoding>
{
    RTMapItem *_mapItem;	// 8 = 0x8
    double _confidence;	// 16 = 0x10
    unsigned long long _source;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000019445
+ (id)heaviestMapItemFrom:(id)arg1 closestToLocation:(id)arg2 distanceCalculator:(id)arg3 error:(id *)arg4;	// IMP=0x000000000001914d
+ (id)dedupeInferredMapItems:(id)arg1;	// IMP=0x0000000000018555
+ (unsigned long long)consolidatedSourceFromInferredMapItems:(id)arg1;	// IMP=0x0000000000018425
+ (double)consolidatedConfidenceFromConfidences:(id)arg1;	// IMP=0x00000000000180a3
+ (_Bool)hasKnownTypeItem:(id)arg1;	// IMP=0x0000000000017fcc
- (void).cxx_destruct;	// IMP=0x00000000000197c2
@property(readonly, nonatomic) unsigned long long source; // @synthesize source=_source;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001965a
- (unsigned long long)hash;	// IMP=0x00000000000195a4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000194da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001944d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000193f3
- (id)description;	// IMP=0x0000000000017f02
- (id)initWithMapItem:(id)arg1 confidence:(double)arg2 source:(unsigned long long)arg3;	// IMP=0x0000000000017c56
- (id)init;	// IMP=0x0000000000017c27

@end

