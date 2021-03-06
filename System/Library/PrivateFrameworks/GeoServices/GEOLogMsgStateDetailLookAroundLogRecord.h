//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateDetailLookAroundLogRecord : PBCodable <NSCopying>
{
    double _relativeTimestamp;	// 8 = 0x8
    int _action;	// 16 = 0x10
    int _target;	// 20 = 0x14
    struct {
        unsigned int has_relativeTimestamp:1;
        unsigned int has_action:1;
        unsigned int has_target:1;
    } _flags;	// 24 = 0x18
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0000000001457dcb
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001458482
- (unsigned long long)hash;	// IMP=0x0000000001458311
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014581fd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001458163
- (void)copyTo:(id)arg1;	// IMP=0x00000000014580d2
- (void)writeTo:(id)arg1;	// IMP=0x0000000001458040
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001458031
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014579ed
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014579db
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000144a95f
- (id)jsonRepresentation;	// IMP=0x000000000144a950
- (id)dictionaryRepresentation;	// IMP=0x0000000001444093
- (id)description;	// IMP=0x0000000001443fe4
@property(nonatomic) _Bool hasRelativeTimestamp;
@property(nonatomic) double relativeTimestamp;
- (int)StringAsTarget:(id)arg1;	// IMP=0x0000000001440cd0
- (id)targetAsString:(int)arg1;	// IMP=0x000000000143ec3a
@property(nonatomic) _Bool hasTarget;
@property(nonatomic) int target;
- (int)StringAsAction:(id)arg1;	// IMP=0x0000000001436254
- (id)actionAsString:(int)arg1;	// IMP=0x0000000001431b8d
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action;

@end

