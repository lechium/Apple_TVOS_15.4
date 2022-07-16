//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Network/NSCopying-Protocol.h>

@class NSString;

@interface NWPBInterface : PBCodable <NSCopying>
{
    unsigned int _delegateIndex;	// 8 = 0x8
    unsigned int _generation;	// 12 = 0xc
    unsigned int _index;	// 16 = 0x10
    unsigned int _mtu;	// 20 = 0x14
    NSString *_name;	// 24 = 0x18
    int _subtype;	// 32 = 0x20
    int _type;	// 36 = 0x24
    _Bool _expensive;	// 40 = 0x28
    struct {
        unsigned int delegateIndex:1;
        unsigned int generation:1;
        unsigned int index:1;
        unsigned int mtu:1;
        unsigned int subtype:1;
        unsigned int type:1;
        unsigned int expensive:1;
    } _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000000800c0
@property(nonatomic) _Bool expensive; // @synthesize expensive=_expensive;
@property(nonatomic) unsigned int mtu; // @synthesize mtu=_mtu;
@property(nonatomic) unsigned int delegateIndex; // @synthesize delegateIndex=_delegateIndex;
@property(nonatomic) unsigned int generation; // @synthesize generation=_generation;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007ff00
- (unsigned long long)hash;	// IMP=0x000000000007fde0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007fc20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007fac0
- (void)copyTo:(id)arg1;	// IMP=0x000000000007f990
- (void)writeTo:(id)arg1;	// IMP=0x000000000007f840
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000007f830
- (id)dictionaryRepresentation;	// IMP=0x000000000007f490
- (id)description;	// IMP=0x000000000007f3e0
@property(nonatomic) _Bool hasExpensive;
@property(nonatomic) _Bool hasMtu;
@property(nonatomic) _Bool hasDelegateIndex;
@property(nonatomic) _Bool hasGeneration;
@property(nonatomic) _Bool hasIndex;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsSubtype:(id)arg1;	// IMP=0x000000000007f140
- (id)subtypeAsString:(int)arg1;	// IMP=0x000000000007f0d0
@property(nonatomic) _Bool hasSubtype;
@property(nonatomic) int subtype; // @synthesize subtype=_subtype;
- (int)StringAsType:(id)arg1;	// IMP=0x000000000007ef80
- (id)typeAsString:(int)arg1;	// IMP=0x000000000007eee0
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

