//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SDAutoUnlockAuthPromptImageData : PBCodable
{
    NSData *_imageData;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    _Bool _finalMessage;	// 20 = 0x14
    struct {
        unsigned int version:1;
        unsigned int finalMessage:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000086e8e
@property(nonatomic) _Bool finalMessage; // @synthesize finalMessage=_finalMessage;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000086dc2
- (unsigned long long)hash;	// IMP=0x0010000000086d4b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000086c4e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000086b9a
- (void)copyTo:(id)arg1;	// IMP=0x0010000000086b13
- (void)writeTo:(id)arg1;	// IMP=0x0010000000086a86
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000086a79
- (id)dictionaryRepresentation;	// IMP=0x0010000000086697
- (id)description;	// IMP=0x00100000000865e8
@property(nonatomic) _Bool hasFinalMessage;
@property(readonly, nonatomic) _Bool hasImageData;
@property(nonatomic) _Bool hasVersion;

@end

