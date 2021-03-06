//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPrivateSearchForMediaIntentData-Protocol.h>

@class NSArray, NSString, _INPBPrivateMediaIntentData;

@interface _INPBPrivateSearchForMediaIntentData : PBCodable <_INPBPrivateSearchForMediaIntentData, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_audioSearchResults;	// 8 = 0x8
    _INPBPrivateMediaIntentData *_privateMediaIntentData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000047f3c7
+ (Class)audioSearchResultsType;	// IMP=0x000000000047f3b6
- (void).cxx_destruct;	// IMP=0x000000000047f172
@property(retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData; // @synthesize privateMediaIntentData=_privateMediaIntentData;
@property(copy, nonatomic) NSArray *audioSearchResults; // @synthesize audioSearchResults=_audioSearchResults;
- (id)dictionaryRepresentation;	// IMP=0x000000000047eec9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047ebbf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047eb00
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000047ea6e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000047e96f
- (void)writeTo:(id)arg1;	// IMP=0x000000000047e7cf
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000047e7c2
@property(readonly, nonatomic) _Bool hasPrivateMediaIntentData;
- (id)audioSearchResultsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000047e77c
@property(readonly, nonatomic) unsigned long long audioSearchResultsCount;
- (void)addAudioSearchResults:(id)arg1;	// IMP=0x000000000047e6e5
- (void)clearAudioSearchResults;	// IMP=0x000000000047e6c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

