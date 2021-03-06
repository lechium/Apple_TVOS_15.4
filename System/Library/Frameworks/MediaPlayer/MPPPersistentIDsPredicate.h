//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@interface MPPPersistentIDsPredicate : PBCodable <NSCopying>
{
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _persistentIDs;	// 8 = 0x8
    _Bool _shouldContain;	// 32 = 0x20
    struct {
        unsigned int shouldContain:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;
- (unsigned long long)hash;	// IMP=0x00000000002a7a60
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a79d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a7950
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a7861
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a77c0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a77b3
- (id)dictionaryRepresentation;	// IMP=0x00000000002a76cd
- (id)description;	// IMP=0x00000000002a761e
- (void)setPersistentIDs:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000002a7607
- (long long)persistentIDsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a753a
- (void)addPersistentIDs:(long long)arg1;	// IMP=0x00000000002a7526
- (void)clearPersistentIDs;	// IMP=0x00000000002a7515
@property(readonly, nonatomic) long long *persistentIDs;
@property(readonly, nonatomic) unsigned long long persistentIDsCount;
@property(nonatomic) _Bool hasShouldContain;
- (void)dealloc;	// IMP=0x00000000002a746d

@end

