//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData;

@interface GEOLogMsgEventRealtimeTrafficProbe : PBCodable <NSCopying>
{
    NSData *_locationCollection;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013846d4
- (void).cxx_destruct;	// IMP=0x000000000138494e
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013848df
- (unsigned long long)hash;	// IMP=0x00000000013848a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013847e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001384769
- (void)copyTo:(id)arg1;	// IMP=0x0000000001384714
- (void)writeTo:(id)arg1;	// IMP=0x00000000013846f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013846e1
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001384674
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001384662
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000138455a
- (id)jsonRepresentation;	// IMP=0x000000000138454b
- (id)dictionaryRepresentation;	// IMP=0x000000000138445d
- (id)description;	// IMP=0x00000000013843ae
@property(retain, nonatomic) NSData *locationCollection;
@property(readonly, nonatomic) _Bool hasLocationCollection;

@end

