//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData;

@interface CKDPSiteIdentifier : PBCodable <NSCopying>
{
    NSData *_identifier;	// 8 = 0x8
    NSData *_modifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dc80a
@property(retain, nonatomic) NSData *modifier; // @synthesize modifier=_modifier;
@property(retain, nonatomic) NSData *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000dc75d
- (unsigned long long)hash;	// IMP=0x00000000000dc710
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dc648
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dc5aa
- (void)copyTo:(id)arg1;	// IMP=0x00000000000dc547
- (void)writeTo:(id)arg1;	// IMP=0x00000000000dc4ea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000dc4dd
- (id)dictionaryRepresentation;	// IMP=0x00000000000dc2c8
- (id)description;	// IMP=0x00000000000dc219
@property(readonly, nonatomic) _Bool hasModifier;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

