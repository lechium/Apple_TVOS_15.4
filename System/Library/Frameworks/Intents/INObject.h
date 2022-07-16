//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>
#import <Intents/INRuntimeObject-Protocol.h>
#import <Intents/INSpeakable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSArray, NSMutableDictionary, NSString;

@interface INObject : NSObject <INRuntimeObject, INJSONSerializable, INSpeakable, NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_valueForKeyDictionary;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_displayString;	// 24 = 0x18
    NSString *_pronunciationHint;	// 32 = 0x20
    NSString *_subtitleString;	// 40 = 0x28
    INImage *_displayImage;	// 48 = 0x30
    NSArray *_alternativeSpeakableMatches;	// 56 = 0x38
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000000c7230
+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x00000000000c7220
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c7218
- (void).cxx_destruct;	// IMP=0x00000000000c71b9
@property(retain, nonatomic) NSArray *alternativeSpeakableMatches; // @synthesize alternativeSpeakableMatches=_alternativeSpeakableMatches;
@property(retain, nonatomic) INImage *displayImage; // @synthesize displayImage=_displayImage;
@property(copy, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property(readonly, nonatomic) NSString *pronunciationHint; // @synthesize pronunciationHint=_pronunciationHint;
@property(readonly, copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *descriptionString;
@property(readonly, nonatomic) NSString *vocabularyIdentifier;
@property(readonly, nonatomic) NSString *spokenPhrase;
- (id)_dictionaryRepresentation;	// IMP=0x00000000000c6cb5
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000000c6bd9
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000000c66f3
- (void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000000c6200
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x00000000000c615d
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x00000000000c608d
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x00000000000c6078
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000000c6066
@property(readonly, nonatomic) NSMutableDictionary *_valueForKeyDictionary; // @synthesize _valueForKeyDictionary;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c5d05
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c56e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c56de
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c55ca
@property(readonly) unsigned long long hash;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 subtitleString:(id)arg4 displayImage:(id)arg5;	// IMP=0x00000000000c51ab
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 subtitleString:(id)arg3 displayImage:(id)arg4;	// IMP=0x00000000000c50fb
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2;	// IMP=0x00000000000c50e6
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;	// IMP=0x00000000000c5000
- (id)_intents_localizedCopyWithLocalizer:(id)arg1;	// IMP=0x00000000000868fe
- (id)_intents_displayImageWithLocalizer:(id)arg1;	// IMP=0x00000000000868ec
- (id)_intents_readableSubtitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000008684a
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x00000000000867a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

