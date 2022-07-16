//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOLocalizedAttribution : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_captionDisplayString;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_language;	// 32 = 0x20
    NSMutableArray *_logoURLs;	// 40 = 0x28
    NSMutableArray *_snippetLogoURLs;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_captionDisplayString:1;
        unsigned int read_displayName:1;
        unsigned int read_language:1;
        unsigned int read_logoURLs:1;
        unsigned int read_snippetLogoURLs:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000f86d3f
- (unsigned long long)hash;	// IMP=0x0000000000f86c91
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000f86b17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000f86658
- (void)writeTo:(id)arg1;	// IMP=0x0000000000f862b3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000f862a4
- (id)jsonRepresentation;	// IMP=0x0000000000f8602b
- (id)dictionaryRepresentation;	// IMP=0x0000000000f85e92
- (id)description;	// IMP=0x0000000000f85de3
- (id)initWithData:(id)arg1;	// IMP=0x0000000000f850a6
- (id)init;	// IMP=0x0000000000f8504a
- (id)bestURLForLogos:(id)arg1 scale:(double)arg2;	// IMP=0x000000000105740d

@end

