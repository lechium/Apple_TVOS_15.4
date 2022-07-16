//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, PGManager;

@interface PGGuessWhoRelationshipMetricEvent
{
    PGManager *_manager;	// 8 = 0x8
    NSDictionary *_payload;	// 16 = 0x10
    unsigned long long _numberOfPeople;	// 24 = 0x18
    unsigned long long _numberOfInferredFamilyMembers;	// 32 = 0x20
    unsigned long long _numberOfInferredFriends;	// 40 = 0x28
    unsigned long long _numberOfInferredParents;	// 48 = 0x30
    unsigned long long _numberOfInferredCoworkers;	// 56 = 0x38
    unsigned long long _numberOfInferredPartners;	// 64 = 0x40
    unsigned long long _numberOfInferredChildren;	// 72 = 0x48
    unsigned long long _numberOfFamilyHolidaySignalRegistrations;	// 80 = 0x50
    unsigned long long _numberOfParentContactNameSignalRegistrations;	// 88 = 0x58
    unsigned long long _numberOfSameFamilyNameSignalRegistrations;	// 96 = 0x60
    unsigned long long _numberOfHomeMomentsSignalRegistrations;	// 104 = 0x68
    unsigned long long _numberOfAnniversaryDateSignalRegistrations;	// 112 = 0x70
    unsigned long long _numberOfTopTwoPersonSocialGroupSignalRegistrations;	// 120 = 0x78
    unsigned long long _numberOfLoveEmojisSignalRegistrations;	// 128 = 0x80
    unsigned long long _numberOfTopPersonSignalRegistrations;	// 136 = 0x88
    unsigned long long _numberOfFriendNightOutSignalRegistrations;	// 144 = 0x90
    unsigned long long _numberOfPartnerTripSignalRegistrations;	// 152 = 0x98
    unsigned long long _numberOfFriendsFamilyTripSignalRegistrations;	// 160 = 0xa0
    unsigned long long _numberOfWeekendSignalRegistrations;	// 168 = 0xa8
    unsigned long long _numberOfCoworkersAtWorkSignalRegistrations;	// 176 = 0xb0
    unsigned long long _numberOfCoworkerCalendarSignalRegistrations;	// 184 = 0xb8
    unsigned long long _numberOfAgeDifferentThanMeSignalRegistrations;	// 192 = 0xc0
    unsigned long long _numberOfParentGrandparentOldSignalRegistrations;	// 200 = 0xc8
    unsigned long long _numberOfFamilyHolidaySignalRegistrationsInCorrectInference;	// 208 = 0xd0
    unsigned long long _numberOfParentContactNameSignalRegistrationsInCorrectInference;	// 216 = 0xd8
    unsigned long long _numberOfSameFamilyNameSignalRegistrationsInCorrectInference;	// 224 = 0xe0
    unsigned long long _numberOfHomeMomentsSignalRegistrationsInCorrectInference;	// 232 = 0xe8
    unsigned long long _numberOfAnniversaryDateSignalRegistrationsInCorrectInference;	// 240 = 0xf0
    unsigned long long _numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;	// 248 = 0xf8
    unsigned long long _numberOfLoveEmojisSignalRegistrationsInCorrectInference;	// 256 = 0x100
    unsigned long long _numberOfTopPersonSignalRegistrationsInCorrectInference;	// 264 = 0x108
    unsigned long long _numberOfFriendNightOutSignalRegistrationsInCorrectInference;	// 272 = 0x110
    unsigned long long _numberOfPartnerTripSignalRegistrationsInCorrectInference;	// 280 = 0x118
    unsigned long long _numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;	// 288 = 0x120
    unsigned long long _numberOfWeekendSignalRegistrationsInCorrectInference;	// 296 = 0x128
    unsigned long long _numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;	// 304 = 0x130
    unsigned long long _numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;	// 312 = 0x138
    unsigned long long _numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;	// 320 = 0x140
    unsigned long long _numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x00000000003841da
@property(nonatomic) unsigned long long numberOfParentGrandparentOldSignalRegistrationsInCorrectInference; // @synthesize numberOfParentGrandparentOldSignalRegistrationsInCorrectInference=_numberOfParentGrandparentOldSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference; // @synthesize numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference=_numberOfAgeDifferentThanMeSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfCoworkerCalendarSignalRegistrationsInCorrectInference; // @synthesize numberOfCoworkerCalendarSignalRegistrationsInCorrectInference=_numberOfCoworkerCalendarSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference; // @synthesize numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference=_numberOfCoworkersAtWorkSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfWeekendSignalRegistrationsInCorrectInference; // @synthesize numberOfWeekendSignalRegistrationsInCorrectInference=_numberOfWeekendSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference; // @synthesize numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference=_numberOfFriendsFamilyTripSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfPartnerTripSignalRegistrationsInCorrectInference; // @synthesize numberOfPartnerTripSignalRegistrationsInCorrectInference=_numberOfPartnerTripSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfFriendNightOutSignalRegistrationsInCorrectInference; // @synthesize numberOfFriendNightOutSignalRegistrationsInCorrectInference=_numberOfFriendNightOutSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfTopPersonSignalRegistrationsInCorrectInference; // @synthesize numberOfTopPersonSignalRegistrationsInCorrectInference=_numberOfTopPersonSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfLoveEmojisSignalRegistrationsInCorrectInference; // @synthesize numberOfLoveEmojisSignalRegistrationsInCorrectInference=_numberOfLoveEmojisSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference; // @synthesize numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference=_numberOfTopTwoPersonSocialGroupSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfAnniversaryDateSignalRegistrationsInCorrectInference; // @synthesize numberOfAnniversaryDateSignalRegistrationsInCorrectInference=_numberOfAnniversaryDateSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfHomeMomentsSignalRegistrationsInCorrectInference; // @synthesize numberOfHomeMomentsSignalRegistrationsInCorrectInference=_numberOfHomeMomentsSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfSameFamilyNameSignalRegistrationsInCorrectInference; // @synthesize numberOfSameFamilyNameSignalRegistrationsInCorrectInference=_numberOfSameFamilyNameSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfParentContactNameSignalRegistrationsInCorrectInference; // @synthesize numberOfParentContactNameSignalRegistrationsInCorrectInference=_numberOfParentContactNameSignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfFamilyHolidaySignalRegistrationsInCorrectInference; // @synthesize numberOfFamilyHolidaySignalRegistrationsInCorrectInference=_numberOfFamilyHolidaySignalRegistrationsInCorrectInference;
@property(nonatomic) unsigned long long numberOfParentGrandparentOldSignalRegistrations; // @synthesize numberOfParentGrandparentOldSignalRegistrations=_numberOfParentGrandparentOldSignalRegistrations;
@property(nonatomic) unsigned long long numberOfAgeDifferentThanMeSignalRegistrations; // @synthesize numberOfAgeDifferentThanMeSignalRegistrations=_numberOfAgeDifferentThanMeSignalRegistrations;
@property(nonatomic) unsigned long long numberOfCoworkerCalendarSignalRegistrations; // @synthesize numberOfCoworkerCalendarSignalRegistrations=_numberOfCoworkerCalendarSignalRegistrations;
@property(nonatomic) unsigned long long numberOfCoworkersAtWorkSignalRegistrations; // @synthesize numberOfCoworkersAtWorkSignalRegistrations=_numberOfCoworkersAtWorkSignalRegistrations;
@property(nonatomic) unsigned long long numberOfWeekendSignalRegistrations; // @synthesize numberOfWeekendSignalRegistrations=_numberOfWeekendSignalRegistrations;
@property(nonatomic) unsigned long long numberOfFriendsFamilyTripSignalRegistrations; // @synthesize numberOfFriendsFamilyTripSignalRegistrations=_numberOfFriendsFamilyTripSignalRegistrations;
@property(nonatomic) unsigned long long numberOfPartnerTripSignalRegistrations; // @synthesize numberOfPartnerTripSignalRegistrations=_numberOfPartnerTripSignalRegistrations;
@property(nonatomic) unsigned long long numberOfFriendNightOutSignalRegistrations; // @synthesize numberOfFriendNightOutSignalRegistrations=_numberOfFriendNightOutSignalRegistrations;
@property(nonatomic) unsigned long long numberOfTopPersonSignalRegistrations; // @synthesize numberOfTopPersonSignalRegistrations=_numberOfTopPersonSignalRegistrations;
@property(nonatomic) unsigned long long numberOfLoveEmojisSignalRegistrations; // @synthesize numberOfLoveEmojisSignalRegistrations=_numberOfLoveEmojisSignalRegistrations;
@property(nonatomic) unsigned long long numberOfTopTwoPersonSocialGroupSignalRegistrations; // @synthesize numberOfTopTwoPersonSocialGroupSignalRegistrations=_numberOfTopTwoPersonSocialGroupSignalRegistrations;
@property(nonatomic) unsigned long long numberOfAnniversaryDateSignalRegistrations; // @synthesize numberOfAnniversaryDateSignalRegistrations=_numberOfAnniversaryDateSignalRegistrations;
@property(nonatomic) unsigned long long numberOfHomeMomentsSignalRegistrations; // @synthesize numberOfHomeMomentsSignalRegistrations=_numberOfHomeMomentsSignalRegistrations;
@property(nonatomic) unsigned long long numberOfSameFamilyNameSignalRegistrations; // @synthesize numberOfSameFamilyNameSignalRegistrations=_numberOfSameFamilyNameSignalRegistrations;
@property(nonatomic) unsigned long long numberOfParentContactNameSignalRegistrations; // @synthesize numberOfParentContactNameSignalRegistrations=_numberOfParentContactNameSignalRegistrations;
@property(nonatomic) unsigned long long numberOfFamilyHolidaySignalRegistrations; // @synthesize numberOfFamilyHolidaySignalRegistrations=_numberOfFamilyHolidaySignalRegistrations;
@property(nonatomic) unsigned long long numberOfInferredChildren; // @synthesize numberOfInferredChildren=_numberOfInferredChildren;
@property(nonatomic) unsigned long long numberOfInferredPartners; // @synthesize numberOfInferredPartners=_numberOfInferredPartners;
@property(nonatomic) unsigned long long numberOfInferredCoworkers; // @synthesize numberOfInferredCoworkers=_numberOfInferredCoworkers;
@property(nonatomic) unsigned long long numberOfInferredParents; // @synthesize numberOfInferredParents=_numberOfInferredParents;
@property(nonatomic) unsigned long long numberOfInferredFriends; // @synthesize numberOfInferredFriends=_numberOfInferredFriends;
@property(nonatomic) unsigned long long numberOfInferredFamilyMembers; // @synthesize numberOfInferredFamilyMembers=_numberOfInferredFamilyMembers;
@property(nonatomic) unsigned long long numberOfPeople; // @synthesize numberOfPeople=_numberOfPeople;
- (id)_relationshipKeyForLabel:(id)arg1;	// IMP=0x0000000000383bce
- (id)_readableStringByRelationshipEdgeProperty;	// IMP=0x0000000000383a02
- (id)_inferredRelationshipKeys;	// IMP=0x00000000003839f5
- (void)_incrementRelationshipSignalMetricsForRelationshipEdge:(id)arg1 inferredRelationshipCorrect:(_Bool)arg2;	// IMP=0x0000000000383361
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000383196
- (id)payload;	// IMP=0x00000000003826a2
- (id)identifier;	// IMP=0x0000000000382695
- (id)initWithGraphManager:(id)arg1;	// IMP=0x0000000000382627

@end

