//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, NSArray, NSDateComponents, NSPersonNameComponents, NSString;

@interface INContactCard : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_contactIdentifier;	// 8 = 0x8
    NSPersonNameComponents *_nameComponents;	// 16 = 0x10
    _Bool _isMe;	// 24 = 0x18
    INImage *_image;	// 32 = 0x20
    NSString *_organizationName;	// 40 = 0x28
    NSString *_departmentName;	// 48 = 0x30
    NSString *_jobTitle;	// 56 = 0x38
    NSArray *_phoneNumbers;	// 64 = 0x40
    NSArray *_emailAddresses;	// 72 = 0x48
    NSArray *_postalAddresses;	// 80 = 0x50
    NSArray *_urlAddresses;	// 88 = 0x58
    NSArray *_contactRelations;	// 96 = 0x60
    NSArray *_instantMessageAddresses;	// 104 = 0x68
    NSDateComponents *_birthday;	// 112 = 0x70
    NSArray *_dates;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ead7b
+ (id)initWithContactIdentifier:(id)arg1 nameComponents:(id)arg2 isMe:(_Bool)arg3 image:(id)arg4 organizationName:(id)arg5 departmentName:(id)arg6 jobTitle:(id)arg7 phoneNumbers:(id)arg8 emailAddresses:(id)arg9 postalAddresses:(id)arg10 urlAddresses:(id)arg11 contactRelations:(id)arg12 instantMessageAddresses:(id)arg13 birthday:(id)arg14 dates:(id)arg15;	// IMP=0x00000000001ead69
- (void).cxx_destruct;	// IMP=0x00000000001ea992
@property(readonly, copy, nonatomic) NSArray *dates; // @synthesize dates=_dates;
@property(readonly, copy, nonatomic) NSDateComponents *birthday; // @synthesize birthday=_birthday;
@property(readonly, copy, nonatomic) NSArray *instantMessageAddresses; // @synthesize instantMessageAddresses=_instantMessageAddresses;
@property(readonly, copy, nonatomic) NSArray *contactRelations; // @synthesize contactRelations=_contactRelations;
@property(readonly, copy, nonatomic) NSArray *urlAddresses; // @synthesize urlAddresses=_urlAddresses;
@property(readonly, copy, nonatomic) NSArray *postalAddresses; // @synthesize postalAddresses=_postalAddresses;
@property(readonly, copy, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, copy, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, copy, nonatomic) NSString *jobTitle; // @synthesize jobTitle=_jobTitle;
@property(readonly, copy, nonatomic) NSString *departmentName; // @synthesize departmentName=_departmentName;
@property(readonly, copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, copy, nonatomic) INImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(readonly, copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001ea02d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e9eb7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e9eac
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e9c50
- (unsigned long long)hash;	// IMP=0x00000000001e9adc
- (id)initWithContactIdentifier:(id)arg1 nameComponents:(id)arg2 isMe:(_Bool)arg3 image:(id)arg4 organizationName:(id)arg5 departmentName:(id)arg6 jobTitle:(id)arg7 phoneNumbers:(id)arg8 emailAddresses:(id)arg9 postalAddresses:(id)arg10 urlAddresses:(id)arg11 contactRelations:(id)arg12 instantMessageAddresses:(id)arg13 birthday:(id)arg14 dates:(id)arg15;	// IMP=0x00000000001e9812

@end

