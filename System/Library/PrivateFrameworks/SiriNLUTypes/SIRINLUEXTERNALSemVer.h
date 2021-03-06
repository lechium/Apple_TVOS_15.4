//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SiriNLUTypes/NSCopying-Protocol.h>

@interface SIRINLUEXTERNALSemVer : PBCodable <NSCopying>
{
    unsigned int _majorVersion;	// 8 = 0x8
    unsigned int _minorVersion;	// 12 = 0xc
    unsigned int _patchVersion;	// 16 = 0x10
    struct {
        unsigned int majorVersion:1;
        unsigned int minorVersion:1;
        unsigned int patchVersion:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int patchVersion; // @synthesize patchVersion=_patchVersion;
@property(nonatomic) unsigned int minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) unsigned int majorVersion; // @synthesize majorVersion=_majorVersion;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000009808f
- (unsigned long long)hash;	// IMP=0x000000000009802f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000097f5c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000097ec6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000097e53
- (void)writeTo:(id)arg1;	// IMP=0x0000000000097dc3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000097db6
- (id)dictionaryRepresentation;	// IMP=0x000000000009794c
- (id)description;	// IMP=0x000000000009789d
@property(nonatomic) _Bool hasPatchVersion;
@property(nonatomic) _Bool hasMinorVersion;
@property(nonatomic) _Bool hasMajorVersion;

@end

