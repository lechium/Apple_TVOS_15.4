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

@class INImage, INSpeakableString, NSArray, NSString;

@interface INShortcutOverview : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    INSpeakableString *_name;	// 8 = 0x8
    INSpeakableString *_voiceCommand;	// 16 = 0x10
    INImage *_icon;	// 24 = 0x18
    INSpeakableString *_descriptiveText;	// 32 = 0x20
    NSArray *_steps;	// 40 = 0x28
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x000000000040abcd
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000040abc5
- (void).cxx_destruct;	// IMP=0x000000000040ab7c
@property(readonly, copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, copy, nonatomic) INSpeakableString *descriptiveText; // @synthesize descriptiveText=_descriptiveText;
@property(readonly, copy, nonatomic) INImage *icon; // @synthesize icon=_icon;
@property(readonly, copy, nonatomic) INSpeakableString *voiceCommand; // @synthesize voiceCommand=_voiceCommand;
@property(readonly, copy, nonatomic) INSpeakableString *name; // @synthesize name=_name;
- (id)_dictionaryRepresentation;	// IMP=0x000000000040a92a
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000040a84e
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x000000000040a69d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000040a5f4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000040a3e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000040a3da
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000040a2c6
@property(readonly) unsigned long long hash;
- (id)initWithName:(id)arg1 voiceCommand:(id)arg2 icon:(id)arg3 descriptiveText:(id)arg4 steps:(id)arg5;	// IMP=0x000000000040a11b
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x0000000000409d21
- (id)_intents_cacheableObjects;	// IMP=0x0000000000409c04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

