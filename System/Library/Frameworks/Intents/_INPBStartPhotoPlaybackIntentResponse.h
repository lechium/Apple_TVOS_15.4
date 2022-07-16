//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartPhotoPlaybackIntentResponse-Protocol.h>

@class NSString, _INPBLocation;

@interface _INPBStartPhotoPlaybackIntentResponse : PBCodable <_INPBStartPhotoPlaybackIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_a60b8694 _has;	// 8 = 0x8
    int _searchResultsCount;	// 12 = 0xc
    NSString *_albumName;	// 16 = 0x10
    _INPBLocation *_locationCreated;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000091159
- (void).cxx_destruct;	// IMP=0x0000000000090e96
@property(nonatomic) int searchResultsCount; // @synthesize searchResultsCount=_searchResultsCount;
@property(retain, nonatomic) _INPBLocation *locationCreated; // @synthesize locationCreated=_locationCreated;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
- (id)dictionaryRepresentation;	// IMP=0x0000000000090ce3
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000090951
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000090860
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000907ce
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000906cf
- (void)writeTo:(id)arg1;	// IMP=0x00000000000905db
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000905ce
@property(nonatomic) _Bool hasSearchResultsCount;
@property(readonly, nonatomic) _Bool hasLocationCreated;
@property(readonly, nonatomic) _Bool hasAlbumName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
