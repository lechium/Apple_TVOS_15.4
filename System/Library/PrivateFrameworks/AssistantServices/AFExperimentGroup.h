//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFDictionaryConvertible-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AFExperimentGroup : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>
{
    NSString *_identifier;	// 8 = 0x8
    unsigned long long _allocation;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000033399
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033b4f
- (void).cxx_destruct;	// IMP=0x00000000000338f9
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic) unsigned long long allocation; // @synthesize allocation=_allocation;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)buildDictionaryRepresentation;	// IMP=0x0000000000033807
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000003365f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000335ab
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000333a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003338e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033269
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0000000000032fcc
@property(readonly, copy) NSString *description;
- (id)initWithIdentifier:(id)arg1 allocation:(unsigned long long)arg2 properties:(id)arg3;	// IMP=0x0000000000032ef9
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033bbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

