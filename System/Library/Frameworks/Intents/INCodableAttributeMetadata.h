//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INCodableCoding-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INCodableAttribute, INCodableDescription, INCodableLocalizationTable, NSString;

@interface INCodableAttributeMetadata : NSObject <NSSecureCoding, INCodableCoding>
{
    NSString *_name;	// 8 = 0x8
    NSString *_placeholder;	// 16 = 0x10
    NSString *_placeholderID;	// 24 = 0x18
    INCodableAttribute *_codableAttribute;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000361cd5
- (void).cxx_destruct;	// IMP=0x0000000000361c99
@property(readonly, nonatomic) __weak INCodableAttribute *codableAttribute; // @synthesize codableAttribute=_codableAttribute;
@property(copy, nonatomic) NSString *placeholderID; // @synthesize placeholderID=_placeholderID;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) __weak INCodableDescription *_codableDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000361a5b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003619a8
- (id)_localizedDialogTokensWithLocalizer:(id)arg1;	// IMP=0x00000000003619a0
- (id)localizedPlaceholderWithLocalizer:(id)arg1;	// IMP=0x00000000003618d8
@property(readonly, copy, nonatomic) NSString *localizedPlaceholder;
@property(readonly, copy, nonatomic) INCodableLocalizationTable *_localizationTable;
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x0000000000361716
@property(readonly, copy) NSString *description;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;	// IMP=0x0000000000361544
- (id)dictionaryRepresentation;	// IMP=0x00000000003614f8
- (void)updateWithDictionary:(id)arg1;	// IMP=0x00000000003613b1
- (id)initWithName:(id)arg1 codableAttribute:(id)arg2;	// IMP=0x000000000036130d
- (id)__INCodableDescriptionPlaceholderKey;	// IMP=0x0000000000361e95
- (id)__INIntentResponseCodableDescriptionPlaceholderKey;	// IMP=0x0000000000361de5
- (id)__INTypeCodableDescriptionPlaceholderKey;	// IMP=0x0000000000361d35
- (id)__INCodableDescriptionPlaceholderIDKey;	// IMP=0x0000000000361e3d
- (id)__INIntentResponseCodableDescriptionPlaceholderIDKey;	// IMP=0x0000000000361d8d
- (id)__INTypeCodableDescriptionPlaceholderIDKey;	// IMP=0x0000000000361cdd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

