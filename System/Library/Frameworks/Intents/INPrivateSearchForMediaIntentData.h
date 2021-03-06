//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INPrivateMediaIntentData, NSArray, NSString;

@interface INPrivateSearchForMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    INPrivateMediaIntentData *_privateMediaIntentData;	// 8 = 0x8
    NSArray *_audioSearchResults;	// 16 = 0x10
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000047e528
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000047e520
- (void).cxx_destruct;	// IMP=0x000000000047e4f8
@property(readonly, copy, nonatomic) NSArray *audioSearchResults; // @synthesize audioSearchResults=_audioSearchResults;
@property(readonly, copy, nonatomic) INPrivateMediaIntentData *privateMediaIntentData; // @synthesize privateMediaIntentData=_privateMediaIntentData;
- (id)_dictionaryRepresentation;	// IMP=0x000000000047e3d6
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000047e2fa
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000047e202
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000047e194
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000047e035
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000047e02a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000047df7c
@property(readonly) unsigned long long hash;
- (id)initWithAudioSearchResults:(id)arg1;	// IMP=0x000000000047df26
- (id)initWithPrivateMediaIntentData:(id)arg1 audioSearchResults:(id)arg2;	// IMP=0x000000000047de6d
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x000000000047dd1c
- (id)_intents_cacheableObjects;	// IMP=0x000000000047db4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

