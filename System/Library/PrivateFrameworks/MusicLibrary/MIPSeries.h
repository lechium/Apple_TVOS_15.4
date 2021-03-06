//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MusicLibrary/NSCopying-Protocol.h>

@class NSString;

@interface MIPSeries : PBCodable <NSCopying>
{
    long long _storeId;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_sortName;	// 24 = 0x18
    struct {
        unsigned int storeId:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ceb90
@property(retain, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000ceab1
- (unsigned long long)hash;	// IMP=0x00000000000cea34
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ce93f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ce87d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000ce7f9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000ce777
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000ce76a
- (id)dictionaryRepresentation;	// IMP=0x00000000000ce684
- (id)description;	// IMP=0x00000000000ce5d5
@property(readonly, nonatomic) _Bool hasSortName;
@property(readonly, nonatomic) _Bool hasName;
@property(nonatomic) _Bool hasStoreId;

@end

