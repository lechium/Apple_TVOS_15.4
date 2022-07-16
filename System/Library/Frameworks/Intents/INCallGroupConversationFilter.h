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

@class INCallGroup, INPerson, NSArray, NSNumber, NSString;

@interface INCallGroupConversationFilter : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>
{
    INPerson *_caller;	// 8 = 0x8
    NSArray *_participants;	// 16 = 0x10
    NSNumber *_matchCallerAndParticipantsExactly;	// 24 = 0x18
    INCallGroup *_callGroup;	// 32 = 0x20
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;	// IMP=0x00000000004d5451
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004d5449
- (void).cxx_destruct;	// IMP=0x00000000004d540b
@property(readonly, copy, nonatomic) INCallGroup *callGroup; // @synthesize callGroup=_callGroup;
@property(readonly, copy, nonatomic) NSNumber *matchCallerAndParticipantsExactly; // @synthesize matchCallerAndParticipantsExactly=_matchCallerAndParticipantsExactly;
@property(readonly, copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, copy, nonatomic) INPerson *caller; // @synthesize caller=_caller;
- (id)_dictionaryRepresentation;	// IMP=0x00000000004d522e
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x00000000004d5152
@property(readonly, copy) NSString *description;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;	// IMP=0x00000000004d4fe0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004d4f4b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004d4d73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d4d68
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d4c76
@property(readonly) unsigned long long hash;
- (id)initWithCaller:(id)arg1 participants:(id)arg2 matchCallerAndParticipantsExactly:(id)arg3 callGroup:(id)arg4;	// IMP=0x00000000004d4b01
- (void)_intents_updateContainerWithCache:(id)arg1;	// IMP=0x000000000040790e
- (id)_intents_cacheableObjects;	// IMP=0x0000000000407708

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

