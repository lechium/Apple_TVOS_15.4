//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICURLBag;

@interface MPModelForYouRecommendationsMusicKitRequestOperation
{
    ICURLBag *_storeURLBag;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000007af8
- (id)displayFilterKindsValueForOptions:(long long)arg1;	// IMP=0x0000000000007a0f
- (id)typesArrayWithTypes:(long long)arg1;	// IMP=0x0000000000007807
- (long long)subscriptionStatusType;	// IMP=0x0000000000007792
- (long long)displayFilterKinds;	// IMP=0x0000000000007729
- (long long)types;	// IMP=0x00000000000076c0
- (_Bool)shouldRequestVacTokens;	// IMP=0x00000000000076a6
- (_Bool)shouldRequestSocialAndFriendsMixWithValues;	// IMP=0x000000000000768c
- (_Bool)isOnboardingRequired:(id)arg1;	// IMP=0x00000000000075c3
- (id)recentlyPlayedURLWithStoreURLBag:(id)arg1;	// IMP=0x000000000000755f
- (id)recommendationsURLWithStoreURLBag:(id)arg1;	// IMP=0x000000000000740e
- (id)recommendationsQueryItemsWithStoreURLBag:(id)arg1;	// IMP=0x0000000000006d9a
- (id)queryItemsWithStoreURLBag:(id)arg1;	// IMP=0x0000000000006b99
- (id)_personalizeRecommendationGroup:(id)arg1 flatPersonalizedSectionedItems:(id)arg2;	// IMP=0x0000000000006aa0
- (id)_responseWithResults:(id)arg1 personalizationResponse:(id)arg2;	// IMP=0x0000000000006932
- (id)_produceResultsWithRecommendationsArray:(id)arg1 recentlyPlayedArray:(id)arg2;	// IMP=0x000000000000651f
- (id)_produceResultsWithItemsArray:(id)arg1;	// IMP=0x00000000000063c9
- (id)_recommendationGroupBuilderWithFlatSectionedItems:(id)arg1;	// IMP=0x00000000000062be
- (id)_recommendationGroupBuilder;	// IMP=0x0000000000006272
- (id)itemProperties;	// IMP=0x000000000000612e
- (id)sectionProperties;	// IMP=0x00000000000060de
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000058ce
- (id)configurationForLoadingModelDataWithStoreURLBag:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005322

@end

