//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogMsgStateUGCPhoto : PBCodable <NSCopying>
{
    CDStruct_95bda58d _photoSources;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000014aeded
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000014af039
- (unsigned long long)hash;	// IMP=0x00000000014af009
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014aef74
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014aef19
- (void)copyTo:(id)arg1;	// IMP=0x00000000014aee52
- (void)writeTo:(id)arg1;	// IMP=0x00000000014aee09
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014aedfa
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000014aeada
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000014aeac8
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000014ae7c5
- (id)jsonRepresentation;	// IMP=0x00000000014ae7b6
- (id)dictionaryRepresentation;	// IMP=0x00000000014ae620
- (id)description;	// IMP=0x00000000014ae571
- (int)StringAsPhotoSources:(id)arg1;	// IMP=0x00000000014ae4df
- (id)photoSourcesAsString:(int)arg1;	// IMP=0x00000000014ae479
- (void)setPhotoSources:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000014ae462
- (int)photoSourceAtIndex:(unsigned long long)arg1;	// IMP=0x00000000014ae395
- (void)addPhotoSource:(int)arg1;	// IMP=0x00000000014ae382
- (void)clearPhotoSources;	// IMP=0x00000000014ae371
@property(readonly, nonatomic) int *photoSources;
@property(readonly, nonatomic) unsigned long long photoSourcesCount;
- (void)dealloc;	// IMP=0x00000000014ae30e

@end
