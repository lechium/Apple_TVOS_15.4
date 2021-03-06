//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/NSCopying-Protocol.h>
#import <CoreDuet/NSSecureCoding-Protocol.h>

@class NSString, NSURL, _CDContactStatistics;

@interface _CDContact : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _type;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_customIdentifier;	// 24 = 0x18
    NSString *_personId;	// 32 = 0x20
    unsigned long long _personIdType;	// 40 = 0x28
    NSString *_displayName;	// 48 = 0x30
    unsigned long long _displayType;	// 56 = 0x38
    NSURL *_displayImageURL;	// 64 = 0x40
    _CDContactStatistics *_statistics;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006aba6
+ (id)contactWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;	// IMP=0x000000000006a980
+ (id)predicateForContact:(id)arg1;	// IMP=0x000000000006c2fe
+ (id)predicateForContactWithPersonId:(id)arg1 personIdType:(unsigned long long)arg2;	// IMP=0x000000000006c1a1
+ (id)predicateForContactWithDisplayName:(id)arg1;	// IMP=0x000000000006c17c
+ (id)predicateForContactWithIdentifier:(id)arg1;	// IMP=0x000000000006c157
+ (id)predicateForContactWithType:(unsigned long long)arg1;	// IMP=0x000000000006c0e4
+ (id)_CDValueForContactProperty:(id)arg1;	// IMP=0x000000000006d3fa
+ (id)_contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;	// IMP=0x000000000006d3f2
+ (id)contactPropertiesForContacts:(id)arg1 mechanismHints:(id)arg2;	// IMP=0x000000000006d3ea
+ (id)contactPropertiesForContacts:(id)arg1;	// IMP=0x000000000006d3e2
+ (id)typeAsCNContactPropertyKey:(unsigned long long)arg1;	// IMP=0x000000000006dbc4
+ (unsigned long long)typeFromString:(id)arg1;	// IMP=0x000000000006d5a9
+ (id)normalizedStringKey:(id)arg1;	// IMP=0x000000000006d579
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;	// IMP=0x000000000006d450
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2 personId:(id)arg3 personIdType:(unsigned long long)arg4;	// IMP=0x000000000006d421
+ (id)contactWithIdentifier:(id)arg1 identifierType:(id)arg2;	// IMP=0x000000000006d402
- (void).cxx_destruct;	// IMP=0x000000000006c090
@property(retain) _CDContactStatistics *statistics; // @synthesize statistics=_statistics;
@property(retain) NSURL *displayImageURL; // @synthesize displayImageURL=_displayImageURL;
@property unsigned long long displayType; // @synthesize displayType=_displayType;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property unsigned long long personIdType; // @synthesize personIdType=_personIdType;
@property(retain) NSString *personId; // @synthesize personId=_personId;
@property(retain) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property unsigned long long type; // @synthesize type=_type;
- (_Bool)mayContainPrefix:(id)arg1;	// IMP=0x000000000006bc30
- (void)mergeWithContact:(id)arg1;	// IMP=0x000000000006b759
- (long long)compare:(id)arg1;	// IMP=0x000000000006b6c8
- (_Bool)mayRepresentSamePersonAs:(id)arg1;	// IMP=0x000000000006b50d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006b310
- (unsigned long long)hash;	// IMP=0x000000000006b215
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006b086
- (id)description;	// IMP=0x000000000006aecb
@property(readonly) NSString *handle;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006adb9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006abae
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customIdentifier:(id)arg3 displayName:(id)arg4 displayType:(unsigned long long)arg5 personId:(id)arg6 personIdType:(unsigned long long)arg7 displayImageURL:(id)arg8;	// IMP=0x000000000006aa8c
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 customIdentifier:(id)arg3 displayName:(id)arg4 displayType:(unsigned long long)arg5 personId:(id)arg6 personIdType:(unsigned long long)arg7;	// IMP=0x000000000006aa57
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 displayName:(id)arg3 personId:(id)arg4 personIdType:(unsigned long long)arg5;	// IMP=0x000000000006aa2d
- (id)contactPropertyWithOptionalMechanismHint:(long long *)arg1;	// IMP=0x000000000006d3da
- (id)contactPropertyWithMechanismHint:(long long)arg1;	// IMP=0x000000000006d3d2
- (id)contactProperty;	// IMP=0x000000000006d3ca
- (id)initWithContactProperty:(id)arg1;	// IMP=0x000000000006d3bc
@property(retain) NSString *identifierType;

@end

