//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface AMPMusicArtistNewContentResponse : PBCodable
{
    NSMutableArray *_artistContents;	// 8 = 0x8
    NSData *_model;	// 16 = 0x10
    NSString *_recoId;	// 24 = 0x18
}

+ (Class)artistContentType;	// IMP=0x00200000000ac59a
- (void).cxx_destruct;	// IMP=0x00200000000ac558
@property(retain, nonatomic) NSData *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *recoId; // @synthesize recoId=_recoId;
@property(retain, nonatomic) NSMutableArray *artistContents; // @synthesize artistContents=_artistContents;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ac34f
- (unsigned long long)hash;	// IMP=0x00100000000ac2e2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ac1ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000abfb4
- (void)copyTo:(id)arg1;	// IMP=0x00100000000abeaa
- (void)writeTo:(id)arg1;	// IMP=0x00100000000abd2d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000abb2f
- (id)dictionaryRepresentation;	// IMP=0x00100000000ab8a4
- (id)description;	// IMP=0x00100000000ab7f5
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasRecoId;
- (id)artistContentAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000ab7ae
- (unsigned long long)artistContentsCount;	// IMP=0x00100000000ab791
- (void)addArtistContent:(id)arg1;	// IMP=0x00100000000ab727
- (void)clearArtistContents;	// IMP=0x00100000000ab70a

@end

