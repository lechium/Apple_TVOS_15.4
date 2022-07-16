//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/INRestaurantGuestDisplayPreferencesExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSSecureCoding, NSCopying>
{
    _Bool _nameFieldFirstNameOptional;	// 8 = 0x8
    _Bool _nameFieldLastNameOptional;	// 9 = 0x9
    _Bool _nameFieldShouldBeDisplayed;	// 10 = 0xa
    _Bool _emailAddressFieldShouldBeDisplayed;	// 11 = 0xb
    _Bool _phoneNumberFieldShouldBeDisplayed;	// 12 = 0xc
    _Bool _nameEditable;	// 13 = 0xd
    _Bool _emailAddressEditable;	// 14 = 0xe
    _Bool _phoneNumberEditable;	// 15 = 0xf
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019950c
@property(nonatomic) _Bool phoneNumberEditable; // @synthesize phoneNumberEditable=_phoneNumberEditable;
@property(nonatomic) _Bool emailAddressEditable; // @synthesize emailAddressEditable=_emailAddressEditable;
@property(nonatomic) _Bool nameEditable; // @synthesize nameEditable=_nameEditable;
@property(nonatomic) _Bool phoneNumberFieldShouldBeDisplayed; // @synthesize phoneNumberFieldShouldBeDisplayed=_phoneNumberFieldShouldBeDisplayed;
@property(nonatomic) _Bool emailAddressFieldShouldBeDisplayed; // @synthesize emailAddressFieldShouldBeDisplayed=_emailAddressFieldShouldBeDisplayed;
@property(nonatomic) _Bool nameFieldShouldBeDisplayed; // @synthesize nameFieldShouldBeDisplayed=_nameFieldShouldBeDisplayed;
@property(nonatomic) _Bool nameFieldLastNameOptional; // @synthesize nameFieldLastNameOptional=_nameFieldLastNameOptional;
@property(nonatomic) _Bool nameFieldFirstNameOptional; // @synthesize nameFieldFirstNameOptional=_nameFieldFirstNameOptional;
- (id)_dictionaryRepresentation;	// IMP=0x000000000019921a
- (id)descriptionAtIndent:(unsigned long long)arg1;	// IMP=0x000000000019913e
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000198f55
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000198e2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000198d3d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000198c4c
- (id)init;	// IMP=0x0000000000198c05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

