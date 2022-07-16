//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSIndexQueuableItem-Protocol.h>
#import <CoreSpotlight/NSCopying-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class CSSearchableItemAttributeSet, MISSING_TYPE, NSDate, NSString;

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying>
{
    CSSearchableItemAttributeSet *_attributeSet;	// 8 = 0x8
    MISSING_TYPE *_score;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009387
+ (id)searchableItemFromUserActivity:(id)arg1 bundleID:(id)arg2;	// IMP=0x000000000000b808
- (void).cxx_destruct;	// IMP=0x000000000000b4d1
@property MISSING_TYPE *score; // @synthesize score=_score;
- (id)copyReconstructedAuthors;	// IMP=0x000000000000b249
- (id)copyReconstructedRecipients;	// IMP=0x000000000000af9f
- (id)copyReconstructedHiddenAdditionalRecipients;	// IMP=0x000000000000ab81
- (id)copyReconstructedAdditionalRecipients;	// IMP=0x000000000000a763
- (id)copyReconstructedPrimaryRecipients;	// IMP=0x000000000000a345
- (void)setAttributes:(id)arg1;	// IMP=0x000000000000a2cc
- (id)attributes;	// IMP=0x000000000000a27c
@property _Bool noIndex;
@property _Bool isUpdate;
@property(copy) NSDate *expirationDate;
@property(copy) NSString *protection;
@property(copy) NSString *bundleID;
@property(copy) NSString *domainIdentifier;
@property(copy) NSString *uniqueIdentifier;
@property(retain) CSSearchableItemAttributeSet *attributeSet; // @synthesize attributeSet=_attributeSet;
- (_Bool)_hasAttributesOfType:(id)arg1;	// IMP=0x000000000000998e
- (_Bool)_isFullyFormed;	// IMP=0x00000000000098fb
- (id)debugDescription;	// IMP=0x0000000000009845
- (id)description;	// IMP=0x00000000000097ba
- (id)_propertiesDescription;	// IMP=0x0000000000009499
- (unsigned long long)hash;	// IMP=0x0000000000009455
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000938f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000092cb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000091c6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000914d
- (id)initWithUniqueIdentifier:(id)arg1 domainIdentifier:(id)arg2 attributeSet:(id)arg3;	// IMP=0x0000000000008f96
- (id)init;	// IMP=0x0000000000008eb4
- (void)_updateWithSearchableItem:(id)arg1;	// IMP=0x000000000001109d
- (id)filteredSpotlightAttributes;	// IMP=0x0000000000010bbe
- (void)_standardizePortrait:(id)arg1;	// IMP=0x0000000000010ac7
- (void)_standardizeSiriShortcuts:(id)arg1;	// IMP=0x00000000000108ce
- (void)_standardizeMarkAs:(id)arg1;	// IMP=0x00000000000108b9
- (void)_standardizeHTML:(id)arg1;	// IMP=0x0000000000010716
- (void)_standardizeDeprecatedProperties:(id)arg1;	// IMP=0x0000000000010710
- (void)_populateMissingPeopleWithNames:(id)arg1 emailAddresses:(id)arg2 allItemPersons:(id)arg3 primaryItemPersons:(id)arg4 additionalItemPersons:(id)arg5 hiddenAdditionalItemPersons:(id)arg6 personDictionary:(id)arg7 contactProperties:(id)arg8 nameKey:(id)arg9 emailKey:(id)arg10 contactIdentifierKey:(id)arg11 personKey:(id)arg12 attributeSet:(id)arg13;	// IMP=0x000000000000f13d
- (void)breakOutPersonInformationInSet:(id)arg1 withName:(id)arg2 emails:(id)arg3 contactIdentifiers:(id)arg4 nameKey:(id)arg5 emailKey:(id)arg6 contactIdentifierKey:(id)arg7 emailAddressKey:(id)arg8 attributeSet:(id)arg9;	// IMP=0x000000000000ef26
- (void)extractAndStandardizePersonInformation:(_Bool)arg1 anyEmail:(_Bool)arg2 anyName:(_Bool)arg3 attributeSet:(id)arg4 contactIdentifierKey:(id)arg5 emailKey:(id)arg6 nameKey:(id)arg7 emailAddressExtractKey:(id)arg8 mutableArrContactIdentifiers:(id)arg9 mutableArrEmails:(id)arg10 mutableArrNames:(id)arg11 persons:(id)arg12;	// IMP=0x000000000000e9f2
- (void)_fixBrokenAuthorNames:(id)arg1;	// IMP=0x000000000000e76d
- (void)_standardizePeople:(id)arg1;	// IMP=0x000000000000ddd2
- (void)_standardizeSceneClassification:(id)arg1;	// IMP=0x000000000000d6bf
- (void)_standardizeFileProvider:(id)arg1;	// IMP=0x000000000000cfdb
- (void)_parseEmailHeadersForFeatures:(id)arg1;	// IMP=0x000000000000c75e
- (void)standardizeAttributes;	// IMP=0x000000000000c3a0
- (id)initWithAttributeSet:(id)arg1;	// IMP=0x000000000000b4e1
- (id)searchableItem;	// IMP=0x00000000000204ea

@end
