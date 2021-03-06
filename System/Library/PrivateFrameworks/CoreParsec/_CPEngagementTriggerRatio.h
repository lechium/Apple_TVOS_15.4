//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPEngagementTriggerRatio-Protocol.h>

@class NSData, NSString;

@interface _CPEngagementTriggerRatio : PBCodable <_CPEngagementTriggerRatio, NSSecureCoding>
{
    float _go;	// 8 = 0x8
    float _tap;	// 12 = 0xc
    int _totalEngagements;	// 16 = 0x10
}

@property(nonatomic) int totalEngagements; // @synthesize totalEngagements=_totalEngagements;
@property(nonatomic) float tap; // @synthesize tap=_tap;
@property(nonatomic) float go; // @synthesize go=_go;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000474fc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000047447
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004743a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *jsonData; // @dynamic jsonData;
@property(readonly) Class superclass;

@end

