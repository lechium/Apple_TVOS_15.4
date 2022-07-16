//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForMediaIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaSearch, _INPBPrivateSearchForMediaIntentData;

@interface _INPBSearchForMediaIntent : PBCodable <_INPBSearchForMediaIntent, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    _INPBIntentMetadata *_intentMetadata;	// 8 = 0x8
    NSArray *_mediaItems;	// 16 = 0x10
    _INPBMediaSearch *_mediaSearch;	// 24 = 0x18
    _INPBPrivateSearchForMediaIntentData *_privateSearchForMediaIntentData;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000039e0a1
+ (Class)mediaItemsType;	// IMP=0x000000000039e090
- (void).cxx_destruct;	// IMP=0x000000000039dd5b
@property(retain, nonatomic) _INPBPrivateSearchForMediaIntentData *privateSearchForMediaIntentData; // @synthesize privateSearchForMediaIntentData=_privateSearchForMediaIntentData;
@property(retain, nonatomic) _INPBMediaSearch *mediaSearch; // @synthesize mediaSearch=_mediaSearch;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (id)dictionaryRepresentation;	// IMP=0x000000000039d9ef
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000039d4af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000039d384
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000039d2f2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000039d1f3
- (void)writeTo:(id)arg1;	// IMP=0x000000000039cf9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000039cf8f
@property(readonly, nonatomic) _Bool hasPrivateSearchForMediaIntentData;
@property(readonly, nonatomic) _Bool hasMediaSearch;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000039cf20
@property(readonly, nonatomic) unsigned long long mediaItemsCount;
- (void)addMediaItems:(id)arg1;	// IMP=0x000000000039ce89
- (void)clearMediaItems;	// IMP=0x000000000039ce6c
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

