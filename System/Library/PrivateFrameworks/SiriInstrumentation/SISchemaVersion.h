//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface SISchemaVersion
{
    unsigned int _major;	// 8 = 0x8
    unsigned int _minor;	// 12 = 0xc
    unsigned int _patch;	// 16 = 0x10
    NSString *_prerelease;	// 24 = 0x18
    struct {
        unsigned int major:1;
        unsigned int minor:1;
        unsigned int patch:1;
    } _has;	// 32 = 0x20
    _Bool _hasPrerelease;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x0000000000309251
@property(nonatomic) _Bool hasPrerelease; // @synthesize hasPrerelease=_hasPrerelease;
@property(copy, nonatomic) NSString *prerelease; // @synthesize prerelease=_prerelease;
@property(nonatomic) unsigned int patch; // @synthesize patch=_patch;
@property(nonatomic) unsigned int minor; // @synthesize minor=_minor;
@property(nonatomic) unsigned int major; // @synthesize major=_major;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000308fc8
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000308f0a
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000308cb0
- (unsigned long long)hash;	// IMP=0x0000000000308c2e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003089dd
- (void)writeTo:(id)arg1;	// IMP=0x0000000000308909
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003088fc
- (void)deletePrerelease;	// IMP=0x00000000003088e8
- (void)deletePatch;	// IMP=0x00000000003088a9
@property(nonatomic) _Bool hasPatch;
- (void)deleteMinor;	// IMP=0x0000000000308834
@property(nonatomic) _Bool hasMinor;
- (void)deleteMajor;	// IMP=0x00000000003087c1
@property(nonatomic) _Bool hasMajor;
- (id)suppressMessageUnderConditions;	// IMP=0x000000000033e476

@end

