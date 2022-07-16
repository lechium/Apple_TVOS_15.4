//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying>
{
    struct {
        unsigned long long *list;
        unsigned long long count;
        unsigned long long size;
    } _pINEntrySeparatorIndexes;	// 8 = 0x8
    unsigned long long _validTextRangeLength;	// 32 = 0x20
    unsigned long long _validTextRangeLocation;	// 40 = 0x28
    int _autocapitalizationType;	// 48 = 0x30
    int _keyboardType;	// 52 = 0x34
    int _returnKeyType;	// 56 = 0x38
    _Bool _autocorrection;	// 60 = 0x3c
    _Bool _enablesReturnKeyAutomatically;	// 61 = 0x3d
    _Bool _secureTextEntry;	// 62 = 0x3e
    _Bool _spellchecking;	// 63 = 0x3f
    struct {
        unsigned int validTextRangeLength:1;
        unsigned int validTextRangeLocation:1;
        unsigned int autocapitalizationType:1;
        unsigned int keyboardType:1;
        unsigned int returnKeyType:1;
        unsigned int autocorrection:1;
        unsigned int enablesReturnKeyAutomatically:1;
        unsigned int secureTextEntry:1;
        unsigned int spellchecking:1;
    } _has;	// 64 = 0x40
}

- (unsigned long long)hash;	// IMP=0x00000000001a4e87
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a4c5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a4af2
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a4961
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a4954
- (id)dictionaryRepresentation;	// IMP=0x00000000001a3bcf
- (id)description;	// IMP=0x00000000001a3b20
- (void)dealloc;	// IMP=0x00000000001a37bc

@end
