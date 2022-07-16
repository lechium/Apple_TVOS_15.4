//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSString;

@interface TPPBPolicyProhibits : PBCodable <NSCopying>
{
    unsigned long long _policyVersion;	// 8 = 0x8
    NSString *_candidateCategory;	// 16 = 0x10
    NSString *_explanation;	// 24 = 0x18
    NSString *_sponsorCategory;	// 32 = 0x20
    NSString *_sponsorId;	// 40 = 0x28
    CDStruct_0e29c504 _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000021ff6
@property(retain, nonatomic) NSString *explanation; // @synthesize explanation=_explanation;
@property(retain, nonatomic) NSString *candidateCategory; // @synthesize candidateCategory=_candidateCategory;
@property(retain, nonatomic) NSString *sponsorCategory; // @synthesize sponsorCategory=_sponsorCategory;
@property(retain, nonatomic) NSString *sponsorId; // @synthesize sponsorId=_sponsorId;
@property(nonatomic) unsigned long long policyVersion; // @synthesize policyVersion=_policyVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000021e8d
- (unsigned long long)hash;	// IMP=0x0000000000021dd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000021c74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000021b66
- (void)copyTo:(id)arg1;	// IMP=0x0000000000021aa2
- (void)writeTo:(id)arg1;	// IMP=0x00000000000219e6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000219d9
- (id)dictionaryRepresentation;	// IMP=0x00000000000218a5
- (id)description;	// IMP=0x00000000000217f6
@property(readonly, nonatomic) _Bool hasExplanation;
@property(readonly, nonatomic) _Bool hasCandidateCategory;
@property(readonly, nonatomic) _Bool hasSponsorCategory;
@property(readonly, nonatomic) _Bool hasSponsorId;
@property(nonatomic) _Bool hasPolicyVersion;

@end

