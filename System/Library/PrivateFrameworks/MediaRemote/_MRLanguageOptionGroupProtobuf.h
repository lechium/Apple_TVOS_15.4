//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, _MRLanguageOptionProtobuf;

__attribute__((visibility("hidden")))
@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying>
{
    _MRLanguageOptionProtobuf *_defaultLanguageOption;	// 8 = 0x8
    NSMutableArray *_languageOptions;	// 16 = 0x10
    _Bool _allowEmptySelection;	// 24 = 0x18
    struct {
        unsigned int allowEmptySelection:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000022d7e7
- (unsigned long long)hash;	// IMP=0x000000000022d6fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022d5fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022d421
- (void)writeTo:(id)arg1;	// IMP=0x000000000022d292
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022d285
- (id)dictionaryRepresentation;	// IMP=0x000000000022cd26
- (id)description;	// IMP=0x000000000022cc77

@end

