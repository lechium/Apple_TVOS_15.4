//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFContextSnapshot-Protocol.h>
#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface AFCallStateSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    _Bool _onSpeaker;	// 8 = 0x8
    unsigned long long _callState;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000f01ad
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f06d2
@property(readonly, nonatomic) _Bool onSpeaker; // @synthesize onSpeaker=_onSpeaker;
@property(readonly, nonatomic) unsigned long long callState; // @synthesize callState=_callState;
- (id)buildDictionaryRepresentation;	// IMP=0x00000000000f0491
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000f035b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f0297
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f01b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f01a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f00fb
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000000000efe7f
@property(readonly, copy) NSString *description;
- (id)initWithCallState:(unsigned long long)arg1 onSpeaker:(_Bool)arg2;	// IMP=0x00000000000efe23
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f0741
- (id)ad_shortDescription;	// IMP=0x00000000000f3dfc
- (id)initWithSerializedBackingStore:(id)arg1;	// IMP=0x000000000011bf50
- (id)serializedBackingStore;	// IMP=0x000000000011bf3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

