//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrialProto/NSCopying-Protocol.h>

@class NSString;

@interface TRITrialRolloutFields : PBCodable <NSCopying>
{
    NSString *_clientFactorPackSetId;	// 8 = 0x8
    NSString *_clientRampId;	// 16 = 0x10
    NSString *_clientRolloutId;	// 24 = 0x18
    int _clientTargetingRuleGroupOrdinal;	// 32 = 0x20
    struct {
        unsigned int clientTargetingRuleGroupOrdinal:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000025d1e
@property(nonatomic) int clientTargetingRuleGroupOrdinal; // @synthesize clientTargetingRuleGroupOrdinal=_clientTargetingRuleGroupOrdinal;
@property(retain, nonatomic) NSString *clientRampId; // @synthesize clientRampId=_clientRampId;
@property(retain, nonatomic) NSString *clientFactorPackSetId; // @synthesize clientFactorPackSetId=_clientFactorPackSetId;
@property(retain, nonatomic) NSString *clientRolloutId; // @synthesize clientRolloutId=_clientRolloutId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000025bfc
- (unsigned long long)hash;	// IMP=0x0000000000025b63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000025a3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000025956
- (void)copyTo:(id)arg1;	// IMP=0x00000000000258b3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000025815
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000025808
- (id)dictionaryRepresentation;	// IMP=0x000000000002549b
- (id)description;	// IMP=0x00000000000253ec
@property(nonatomic) _Bool hasClientTargetingRuleGroupOrdinal;
@property(readonly, nonatomic) _Bool hasClientRampId;
@property(readonly, nonatomic) _Bool hasClientFactorPackSetId;
@property(readonly, nonatomic) _Bool hasClientRolloutId;

@end

