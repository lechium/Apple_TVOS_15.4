//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface AFExperimentState : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    _Bool _didEnd;	// 8 = 0x8
    NSDate *_lastSyncDate;	// 16 = 0x10
    NSString *_endingGroupIdentifier;	// 24 = 0x18
    NSString *_version;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000de562
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ded98
- (void).cxx_destruct;	// IMP=0x00000000000deab9
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSString *endingGroupIdentifier; // @synthesize endingGroupIdentifier=_endingGroupIdentifier;
@property(readonly, nonatomic) _Bool didEnd; // @synthesize didEnd=_didEnd;
@property(readonly, copy, nonatomic) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
- (id)buildDictionaryRepresentation;	// IMP=0x00000000000de99d
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00000000000de780
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000de6b4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000de56a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000de557
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000de3dd
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00000000000de0d8
@property(readonly, copy) NSString *description;
- (id)initWithLastSyncDate:(id)arg1 didEnd:(_Bool)arg2 endingGroupIdentifier:(id)arg3 version:(id)arg4;	// IMP=0x00000000000ddfd5
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dee07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

