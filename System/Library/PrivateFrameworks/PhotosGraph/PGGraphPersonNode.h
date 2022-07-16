//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/PGAssetCollectionFeature-Protocol.h>
#import <PhotosGraph/PGPersonResult-Protocol.h>

@class NSDate, NSDateComponents, NSString, PGGraphPersonNodeCollection;

@interface PGGraphPersonNode <PGPersonResult, PGAssetCollectionFeature>
{
    _Bool _isFavorite;	// 8 = 0x8
    _Bool _isUserCreated;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    NSString *_localIdentifier;	// 24 = 0x18
    NSString *_contactIdentifier;	// 32 = 0x20
    NSDate *_birthdayDate;	// 40 = 0x28
    NSDate *_potentialBirthdayDate;	// 48 = 0x30
    NSDate *_anniversaryDate;	// 56 = 0x38
    unsigned long long _sex;	// 64 = 0x40
    unsigned long long _ageCategory;	// 72 = 0x48
}

+ (id)filterForBiologicalSex:(unsigned long long)arg1;	// IMP=0x00000000002279e7
+ (id)filterForAgeCategories:(id)arg1 includingMe:(_Bool)arg2;	// IMP=0x00000000002278ed
+ (id)personActivityMeaningOfPerson;	// IMP=0x0000000000227896
+ (id)workOfPerson;	// IMP=0x000000000022778a
+ (id)homeOfPerson;	// IMP=0x000000000022767e
+ (id)homeOrWorkOfPerson;	// IMP=0x0000000000227627
+ (id)socialGroupOfPerson;	// IMP=0x00000000002275d0
+ (id)momentAuthoredByPerson;	// IMP=0x0000000000227579
+ (id)momentOfPerson;	// IMP=0x0000000000227522
+ (id)inferredVipOfPerson;	// IMP=0x00000000002274cb
+ (id)vipOfPerson;	// IMP=0x0000000000227474
+ (id)inferredAcquaintanceOfPerson;	// IMP=0x000000000022741d
+ (id)acquaintanceOfPerson;	// IMP=0x00000000002273c6
+ (id)inferredCoworkerSocialGroupOfPerson;	// IMP=0x000000000022736f
+ (id)coworkerSocialGroupOfPerson;	// IMP=0x0000000000227318
+ (id)inferredCoworkerOfPerson;	// IMP=0x00000000002272c1
+ (id)coworkerOfPerson;	// IMP=0x000000000022726a
+ (id)inferredFriendOfPerson;	// IMP=0x0000000000227213
+ (id)friendOfPerson;	// IMP=0x00000000002271bc
+ (id)inferredChildOfPerson;	// IMP=0x0000000000227165
+ (id)childOfPerson;	// IMP=0x000000000022710e
+ (id)inferredFamilySocialGroupOfPerson;	// IMP=0x00000000002270b7
+ (id)familySocialGroupOfPerson;	// IMP=0x0000000000227060
+ (id)inferredFamilyOfPerson;	// IMP=0x0000000000227009
+ (id)familyOfPerson;	// IMP=0x0000000000226fb2
+ (id)inferredParentOfPerson;	// IMP=0x0000000000226f5b
+ (id)parentOfPerson;	// IMP=0x0000000000226f04
+ (id)inferredSonOfPerson;	// IMP=0x0000000000226ead
+ (id)sonOfPerson;	// IMP=0x0000000000226e56
+ (id)inferredDaughterOfPerson;	// IMP=0x0000000000226dff
+ (id)daughterOfPerson;	// IMP=0x0000000000226da8
+ (id)inferredSisterOfPerson;	// IMP=0x0000000000226d51
+ (id)sisterOfPerson;	// IMP=0x0000000000226cfa
+ (id)inferredBrotherOfPerson;	// IMP=0x0000000000226ca3
+ (id)brotherOfPerson;	// IMP=0x0000000000226c4c
+ (id)inferredMotherOfPerson;	// IMP=0x0000000000226bf5
+ (id)motherOfPerson;	// IMP=0x0000000000226b9e
+ (id)inferredFatherOfPerson;	// IMP=0x0000000000226b47
+ (id)fatherOfPerson;	// IMP=0x0000000000226af0
+ (id)inferredPartnerOfPerson;	// IMP=0x0000000000226a99
+ (id)partnerOfPerson;	// IMP=0x0000000000226a42
+ (id)_specialDateComponentsForDate:(id)arg1;	// IMP=0x00000000002269ce
+ (id)_specialDateForDateComponents:(id)arg1;	// IMP=0x00000000002269b3
+ (double)_specialDateTimeIntervalForDate:(id)arg1;	// IMP=0x0000000000226939
+ (void)setAnniversaryDateComponents:(id)arg1 onPersonNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;	// IMP=0x000000000022687d
+ (void)setBirthdayDateComponents:(id)arg1 onPersonNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;	// IMP=0x00000000002267c1
+ (void)setName:(id)arg1 onPersonNodeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;	// IMP=0x0000000000226785
+ (id)propertiesWithAgeCategory:(unsigned long long)arg1;	// IMP=0x00000000002266dd
+ (id)propertiesWithBiologicalSex:(unsigned long long)arg1;	// IMP=0x0000000000226635
+ (id)propertiesWithPerson:(id)arg1;	// IMP=0x00000000002261cc
+ (id)personSortDescriptors;	// IMP=0x00000000002260f0
+ (id)personScoreSortDescriptors;	// IMP=0x0000000000226014
+ (id)filterNameEmpty;	// IMP=0x0000000000225f3f
+ (id)filterNameNotEmpty;	// IMP=0x0000000000225e3c
+ (id)filterIncludingMe;	// IMP=0x0000000000225db3
+ (id)filterExcludingMe;	// IMP=0x0000000000225d7e
+ (id)filter;	// IMP=0x0000000000225d4e
+ (unsigned long long)type;	// IMP=0x00000000001b3c8e
- (void).cxx_destruct;	// IMP=0x0000000000223854
@property(readonly) _Bool isUserCreated; // @synthesize isUserCreated=_isUserCreated;
@property(readonly) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(readonly) unsigned long long ageCategory; // @synthesize ageCategory=_ageCategory;
@property(readonly) unsigned long long sex; // @synthesize sex=_sex;
@property(readonly) NSDate *anniversaryDate; // @synthesize anniversaryDate=_anniversaryDate;
@property(readonly) NSDate *potentialBirthdayDate; // @synthesize potentialBirthdayDate=_potentialBirthdayDate;
@property(readonly) NSDate *birthdayDate; // @synthesize birthdayDate=_birthdayDate;
@property(readonly) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *featureIdentifier;
@property(readonly, nonatomic) unsigned long long featureType;
@property(readonly, nonatomic) PGGraphPersonNodeCollection *collection;
- (id)associatedNodesForRemoval;	// IMP=0x0000000000223590
@property(readonly, nonatomic) NSDateComponents *anniversaryDateComponents;
@property(readonly, nonatomic) NSDateComponents *potentialBirthdayDateComponents;
@property(readonly, nonatomic) NSDateComponents *birthdayDateComponents;
- (id)changingPropertiesWithProperties:(id)arg1;	// IMP=0x0000000000222e4e
- (_Bool)isIdentifiedByProperties:(id)arg1;	// IMP=0x0000000000222d31
- (id)stringDescription;	// IMP=0x0000000000222b60
- (id)_contactSuggestionEdgesSortedByWeight;	// IMP=0x0000000000222a0b
- (_Bool)_contactSuggestionEdge:(id)arg1 fitsQuery:(unsigned long long)arg2;	// IMP=0x00000000002229a6
- (void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002228e2
@property(readonly) _Bool isMyInferredAcquaintance;
@property(readonly) _Bool isMyInferredFriend;
@property(readonly) _Bool isMyInferredCoworker;
@property(readonly) _Bool isMyInferredSibling;
@property(readonly) _Bool isMyInferredFather;
@property(readonly) _Bool isMyInferredMother;
@property(readonly) _Bool isMyInferredParent;
@property(readonly) _Bool isMyInferredChild;
@property(readonly) _Bool isMyInferredPartner;
@property(readonly) _Bool isInferredMemberOfMyFamily;
@property(readonly) _Bool isMyAcquaintance;
@property(readonly) _Bool isMyFriend;
@property(readonly) _Bool isMyCoworker;
@property(readonly) _Bool isMySibling;
@property(readonly) _Bool isMyFather;
@property(readonly) _Bool isMyMother;
@property(readonly) _Bool isMyParent;
@property(readonly) _Bool isMyChild;
@property(readonly) _Bool isMyPartner;
@property(readonly) _Bool isMemberOfMyFamily;
- (_Bool)_hasRelationshipLabel:(id)arg1 withStatus:(unsigned long long)arg2;	// IMP=0x000000000022242c
- (void)enumerateBirthdayMomentNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000022240b
- (void)enumerateHomeOrWorkNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000222323
- (void)enumerateHomeOrWorkAddressNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000222247
- (void)enumerateHomeOrWorkAddressEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000022215f
- (void)enumerateMomentEdgesAndNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000022213e
@property(readonly) unsigned long long numberOfMomentNodes;
@property(readonly) _Bool belongsToBestSocialGroups;
@property(readonly) _Bool belongsToAnySocialGroup;
@property(readonly) double personScore;
@property(readonly) _Bool isMeNode;
- (unsigned short)domain;	// IMP=0x0000000000221e37
- (id)label;	// IMP=0x0000000000221e18
@property(readonly, copy) NSString *description;
- (id)propertyForKey:(id)arg1;	// IMP=0x0000000000221a34
- (id)propertyDictionary;	// IMP=0x000000000022176f
- (_Bool)hasProperties:(id)arg1;	// IMP=0x00000000002213a3
- (void)setLocalProperties:(id)arg1;	// IMP=0x000000000022105d
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 properties:(id)arg4;	// IMP=0x000000000022100b
- (id)initWithPerson:(id)arg1;	// IMP=0x0000000000220f6b
@property(readonly, nonatomic) _Bool isInferredChild;
@property(readonly, nonatomic) _Bool isVerified;
@property(readonly, nonatomic) NSString *suggestedContactIdentifier;
@property(readonly, nonatomic) NSString *fullName;
- (long long)compareToPerson:(id)arg1;	// IMP=0x00000000001b37dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *keywordDescription;
@property(readonly) Class superclass;

@end

