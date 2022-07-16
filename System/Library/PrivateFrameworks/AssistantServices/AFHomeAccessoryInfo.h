//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface AFHomeAccessoryInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    _Bool _isSpeaker;	// 8 = 0x8
    _Bool _hasActiveThirdPartyMusicSubscription;	// 9 = 0x9
    NSUUID *_uniqueIdentifier;	// 16 = 0x10
    NSUUID *_loggingUniqueIdentifier;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_model;	// 40 = 0x28
    NSString *_roomName;	// 48 = 0x30
    NSString *_assistantIdentifier;	// 56 = 0x38
    NSString *_manufacturer;	// 64 = 0x40
    NSString *_categoryType;	// 72 = 0x48
    long long _schemaCategoryType;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000098134
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000099358
- (void).cxx_destruct;	// IMP=0x0000000000098d49
@property(readonly, nonatomic) long long schemaCategoryType; // @synthesize schemaCategoryType=_schemaCategoryType;
@property(readonly, copy, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(readonly, nonatomic) _Bool hasActiveThirdPartyMusicSubscription; // @synthesize hasActiveThirdPartyMusicSubscription=_hasActiveThirdPartyMusicSubscription;
@property(readonly, nonatomic) _Bool isSpeaker; // @synthesize isSpeaker=_isSpeaker;
@property(readonly, copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(readonly, copy, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSUUID *loggingUniqueIdentifier; // @synthesize loggingUniqueIdentifier=_loggingUniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (id)buildDictionaryRepresentation;	// IMP=0x0000000000098ac4
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000985ce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009842d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009813c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000098129
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000097dc7
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000097725
@property(readonly, copy) NSString *description;
- (id)initWithUniqueIdentifier:(id)arg1 loggingUniqueIdentifier:(id)arg2 name:(id)arg3 model:(id)arg4 roomName:(id)arg5 assistantIdentifier:(id)arg6 isSpeaker:(_Bool)arg7 hasActiveThirdPartyMusicSubscription:(_Bool)arg8 manufacturer:(id)arg9 categoryType:(id)arg10 schemaCategoryType:(long long)arg11;	// IMP=0x0000000000097556
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000993c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
