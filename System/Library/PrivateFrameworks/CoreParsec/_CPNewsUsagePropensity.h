//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPNewsUsagePropensity-Protocol.h>

@class NSData, NSString;

@interface _CPNewsUsagePropensity : PBCodable <_CPNewsUsagePropensity, NSSecureCoding>
{
    float _other;	// 8 = 0x8
    int _totalEngagements;	// 12 = 0xc
}

@property(nonatomic) int totalEngagements; // @synthesize totalEngagements=_totalEngagements;
@property(nonatomic) float other; // @synthesize other=_other;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004641b
- (void)writeTo:(id)arg1;	// IMP=0x000000000004639a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004638d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

