//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDMapsIdentifier, GEOPDQuickLinkItem, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionItem : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDQuickLinkItem *_appClip;	// 24 = 0x18
    NSMutableArray *_itemDescriptionBytes;	// 32 = 0x20
    NSMutableArray *_itemDescriptionHtmls;	// 40 = 0x28
    NSMutableArray *_itemDescriptions;	// 48 = 0x30
    GEOPDMapsIdentifier *_itemId;	// 56 = 0x38
    NSMutableArray *_photos;	// 64 = 0x40
    NSMutableArray *_punchOutTexts;	// 72 = 0x48
    NSString *_url;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    _Bool _disableAppClipFallback;	// 100 = 0x64
    _Bool _enableImageFallback;	// 101 = 0x65
    struct {
        unsigned int has_disableAppClipFallback:1;
        unsigned int has_enableImageFallback:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appClip:1;
        unsigned int read_itemDescriptionBytes:1;
        unsigned int read_itemDescriptionHtmls:1;
        unsigned int read_itemDescriptions:1;
        unsigned int read_itemId:1;
        unsigned int read_photos:1;
        unsigned int read_punchOutTexts:1;
        unsigned int read_url:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000b7b6eb
- (unsigned long long)hash;	// IMP=0x0000000000b7b549
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b7b2ac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b7aad7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b7a44f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b7a440
- (id)jsonRepresentation;	// IMP=0x0000000000b7915b
- (id)dictionaryRepresentation;	// IMP=0x0000000000b783c2
- (id)description;	// IMP=0x0000000000b78313
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b76466
- (id)init;	// IMP=0x0000000000b7640a
- (id)punchOutText;	// IMP=0x00000000009cfa7a
- (id)itemHTMLDescription;	// IMP=0x00000000009cfa24
- (id)itemDescription;	// IMP=0x00000000009cf9ce

@end

