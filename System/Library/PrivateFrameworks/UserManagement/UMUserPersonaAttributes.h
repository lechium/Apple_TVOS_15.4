//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UserManagement/NSCopying-Protocol.h>

@class NSArray, NSDate, NSString, NSURL;

@interface UMUserPersonaAttributes : NSObject <NSCopying>
{
    _Bool _isEnterprisePersona;	// 8 = 0x8
    _Bool _isPersonalPersona;	// 9 = 0x9
    _Bool _isUniversalPersona;	// 10 = 0xa
    _Bool _isSystemPersona;	// 11 = 0xb
    _Bool _isDefaultPersona;	// 12 = 0xc
    _Bool _isGuestPersona;	// 13 = 0xd
    _Bool _isDataSeparatedPersona;	// 14 = 0xe
    _Bool _isDisabled;	// 15 = 0xf
    unsigned int _userPersona_id;	// 16 = 0x10
    NSString *_userPersonaUniqueString;	// 24 = 0x18
    unsigned long long _userPersonaType;	// 32 = 0x20
    NSURL *_personaLayoutPathURL;	// 40 = 0x28
    NSArray *_userPersonaBundleIDList;	// 48 = 0x30
    NSString *_userPersonaDisplayName;	// 56 = 0x38
    NSDate *_creationDate;	// 64 = 0x40
    NSDate *_lastLoginDate;	// 72 = 0x48
    NSDate *_lastDisableDate;	// 80 = 0x50
    NSDate *_lastEnableDate;	// 88 = 0x58
}

+ (id)currentContextIdentifier;	// IMP=0x0000000000006998
+ (id)personaAttributesForPersonaType:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x00000000000066c6
+ (id)personaAttributesForPersonaType:(unsigned long long)arg1;	// IMP=0x00000000000066b2
+ (id)personaAttributesForPersonaUniqueString:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000000669e
+ (id)personaAttributesForPersonaUniqueString:(id)arg1;	// IMP=0x000000000000668a
+ (id)personaAttributesForIdentifier:(id)arg1;	// IMP=0x0000000000006678
+ (id)setUpPersonaAttributesWithDictionary:(id)arg1;	// IMP=0x0000000000006670
+ (id)personaAttributes;	// IMP=0x000000000000658c
- (void).cxx_destruct;	// IMP=0x0000000000006d50
@property(copy, nonatomic) NSDate *lastEnableDate; // @synthesize lastEnableDate=_lastEnableDate;
@property(copy, nonatomic) NSDate *lastDisableDate; // @synthesize lastDisableDate=_lastDisableDate;
@property(copy, nonatomic) NSDate *lastLoginDate; // @synthesize lastLoginDate=_lastLoginDate;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *userPersonaDisplayName; // @synthesize userPersonaDisplayName=_userPersonaDisplayName;
@property(copy, nonatomic) NSArray *userPersonaBundleIDList; // @synthesize userPersonaBundleIDList=_userPersonaBundleIDList;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isDataSeparatedPersona; // @synthesize isDataSeparatedPersona=_isDataSeparatedPersona;
@property(nonatomic) _Bool isGuestPersona; // @synthesize isGuestPersona=_isGuestPersona;
@property(nonatomic) _Bool isDefaultPersona; // @synthesize isDefaultPersona=_isDefaultPersona;
@property(nonatomic) _Bool isSystemPersona; // @synthesize isSystemPersona=_isSystemPersona;
@property(nonatomic) _Bool isUniversalPersona; // @synthesize isUniversalPersona=_isUniversalPersona;
@property(nonatomic) _Bool isPersonalPersona; // @synthesize isPersonalPersona=_isPersonalPersona;
@property(nonatomic) _Bool isEnterprisePersona; // @synthesize isEnterprisePersona=_isEnterprisePersona;
@property(copy, nonatomic) NSURL *personaLayoutPathURL; // @synthesize personaLayoutPathURL=_personaLayoutPathURL;
@property(nonatomic) unsigned int userPersona_id; // @synthesize userPersona_id=_userPersona_id;
@property(nonatomic) unsigned long long userPersonaType; // @synthesize userPersonaType=_userPersonaType;
@property(copy, nonatomic) NSString *userPersonaUniqueString; // @synthesize userPersonaUniqueString=_userPersonaUniqueString;
- (id)sandboxExtensionForPersonaLayoutPath;	// IMP=0x0000000000006b20
- (id)description;	// IMP=0x0000000000006a9f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006964
- (void)setPropertiesFromUserPersona:(id)arg1;	// IMP=0x00000000000066da

@end

