//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSString;

@interface SecureBackupEscrowReason : PBCodable
{
    NSString *_expectedFederationID;	// 8 = 0x8
    MISSING_TYPE *_reason;	// 16 = 0x10
    struct {
        unsigned int reason:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000017b2a
@property(retain, nonatomic) NSString *expectedFederationID; // @synthesize expectedFederationID=_expectedFederationID;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000017aa2
- (unsigned long long)hash;	// IMP=0x0010000000017a55
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000017990
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000017900
- (void)copyTo:(id)arg1;	// IMP=0x001000000001789d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000017839
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000001782c
- (id)dictionaryRepresentation;	// IMP=0x0010000000017532
- (id)description;	// IMP=0x0010000000017483
@property(readonly, nonatomic) _Bool hasExpectedFederationID;
- (int)StringAsReason:(id)arg1;	// IMP=0x001000000001740c
- (id)reasonAsString:(int)arg1;	// IMP=0x00100000000173b7
@property(nonatomic) _Bool hasReason;
@property(nonatomic) int reason; // @synthesize reason=_reason;

@end

