//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TASKResponse;

@interface TASKControlResponse : PBCodable
{
    TASKResponse *_create;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000083618
@property(retain, nonatomic) TASKResponse *create; // @synthesize create=_create;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000083599
- (unsigned long long)hash;	// IMP=0x001000000008357c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000834e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000008346a
- (void)copyTo:(id)arg1;	// IMP=0x0010000000083440
- (void)writeTo:(id)arg1;	// IMP=0x001000000008341c
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000008340f
- (id)dictionaryRepresentation;	// IMP=0x00100000000831cb
- (id)description;	// IMP=0x001000000008311c
@property(readonly, nonatomic) _Bool hasCreate;

@end

