//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSString;

@interface NWPBAgentClass : PBCodable <NSCopying>
{
    NSString *_domain;	// 8 = 0x8
    NSString *_type;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001c920
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001c830
- (unsigned long long)hash;	// IMP=0x000000000001c7e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001c710
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001c670
- (void)copyTo:(id)arg1;	// IMP=0x000000000001c600
- (void)writeTo:(id)arg1;	// IMP=0x000000000001c5a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001c590
- (id)dictionaryRepresentation;	// IMP=0x000000000001c500
- (id)description;	// IMP=0x000000000001c450
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasDomain;

@end
