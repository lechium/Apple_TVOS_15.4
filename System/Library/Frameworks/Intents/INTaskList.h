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

@class INSpeakableString, NSArray, NSDateComponents, NSString;

@interface INTaskList : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    INSpeakableString *_title;	// 8 = 0x8
    NSArray *_tasks;	// 16 = 0x10
    INSpeakableString *_groupName;	// 24 = 0x18
    NSDateComponents *_createdDateComponents;	// 32 = 0x20
    NSDateComponents *_modifiedDateComponents;	// 40 = 0x28
    NSString *_identifier;	// 48 = 0x30
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000000b0279
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b0271
- (void).cxx_destruct;	// IMP=0x00000000000b021d
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents; // @synthesize modifiedDateComponents=_modifiedDateComponents;
@property(readonly, copy, nonatomic) NSDateComponents *createdDateComponents; // @synthesize createdDateComponents=_createdDateComponents;
@property(readonly, copy, nonatomic) INSpeakableString *groupName; // @synthesize groupName=_groupName;
@property(readonly, copy, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
@property(readonly, copy, nonatomic) INSpeakableString *title; // @synthesize title=_title;
- (id)_dictionaryRepresentation;	// IMP=0x00000000000aff5f
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000000afe83
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000000afc96
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000afbd9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000af94d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000af942
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000af80c
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 createdDateComponents:(id)arg4 modifiedDateComponents:(id)arg5 identifier:(id)arg6;	// IMP=0x00000000000af61e
- (id)init;	// IMP=0x00000000000af5ef
@property(readonly) long long taskListType;
- (id)initWithTitle:(id)arg1 tasks:(id)arg2 groupName:(id)arg3 taskListType:(long long)arg4 createdDateComponents:(id)arg5 modifiedDateComponents:(id)arg6 identifier:(id)arg7;	// IMP=0x00000000000104a1
- (id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000085dc7
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x00000000003d1948
- (id)_intents_cacheableObjects;	// IMP=0x00000000003d177a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
