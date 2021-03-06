//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBPrivateAddMediaIntentData-Protocol.h>

@class NSArray, NSString, _INPBPrivateMediaIntentData;

@interface _INPBPrivateAddMediaIntentData : PBCodable <_INPBPrivateAddMediaIntentData, NSSecureCoding, NSCopying>
{
    struct _has;	// 8 = 0x8
    NSArray *_audioSearchResults;	// 8 = 0x8
    _INPBPrivateMediaIntentData *_privateMediaIntentData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004513c9
+ (Class)audioSearchResultsType;	// IMP=0x00000000004513b8
- (void).cxx_destruct;	// IMP=0x0000000000451174
@property(retain, nonatomic) _INPBPrivateMediaIntentData *privateMediaIntentData; // @synthesize privateMediaIntentData=_privateMediaIntentData;
@property(copy, nonatomic) NSArray *audioSearchResults; // @synthesize audioSearchResults=_audioSearchResults;
- (id)dictionaryRepresentation;	// IMP=0x0000000000450ecb
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000450bc1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000450b02
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000450a70
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000450971
- (void)writeTo:(id)arg1;	// IMP=0x00000000004507d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004507c4
@property(readonly, nonatomic) _Bool hasPrivateMediaIntentData;
- (id)audioSearchResultsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000045077e
@property(readonly, nonatomic) unsigned long long audioSearchResultsCount;
- (void)addAudioSearchResults:(id)arg1;	// IMP=0x00000000004506e7
- (void)clearAudioSearchResults;	// IMP=0x00000000004506ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

