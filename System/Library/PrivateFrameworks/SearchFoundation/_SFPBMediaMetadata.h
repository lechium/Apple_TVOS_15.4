//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaMetadata-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBMediaMetadata : PBCodable <_SFPBMediaMetadata, NSSecureCoding>
{
    int _mediaType;	// 8 = 0x8
    NSString *_mediaName;	// 16 = 0x10
    NSString *_artistName;	// 24 = 0x18
    NSString *_albumName;	// 32 = 0x20
    NSArray *_mediaPunchouts;	// 40 = 0x28
    NSArray *_bundleIdentifiersToExcludes;	// 48 = 0x30
    NSString *_disambiguationTitle;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000009b217
@property(copy, nonatomic) NSString *disambiguationTitle; // @synthesize disambiguationTitle=_disambiguationTitle;
@property(copy, nonatomic) NSArray *bundleIdentifiersToExcludes; // @synthesize bundleIdentifiersToExcludes=_bundleIdentifiersToExcludes;
@property(copy, nonatomic) NSArray *mediaPunchouts; // @synthesize mediaPunchouts=_mediaPunchouts;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(nonatomic) int mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSString *mediaName; // @synthesize mediaName=_mediaName;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000009ab0a
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000009aa4c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000009a3a0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000099bc2
- (void)writeTo:(id)arg1;	// IMP=0x00000000000998a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009989a
- (id)bundleIdentifiersToExcludeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000099849
- (unsigned long long)bundleIdentifiersToExcludeCount;	// IMP=0x000000000009982c
- (void)addBundleIdentifiersToExclude:(id)arg1;	// IMP=0x00000000000997b2
- (void)clearBundleIdentifiersToExclude;	// IMP=0x0000000000099795
- (void)setBundleIdentifiersToExclude:(id)arg1;	// IMP=0x0000000000099761
- (id)mediaPunchoutsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000099744
- (unsigned long long)mediaPunchoutsCount;	// IMP=0x0000000000099727
- (void)addMediaPunchouts:(id)arg1;	// IMP=0x00000000000996ad
- (void)clearMediaPunchouts;	// IMP=0x0000000000099690
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001a9aa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
