//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMediaAPIRequestFactory : NSObject
{
}

+ (id)_purchasesEpisodesEndpoint;	// IMP=0x00000000001879a6
+ (id)_URLAddAdditionalParameter:(id)arg1;	// IMP=0x0000000000187981
+ (id)_URLParameterForAdditionalParameters;	// IMP=0x0000000000187974
+ (id)_URLParameterForExtend:(id)arg1;	// IMP=0x0000000000187903
+ (id)_URLParameterForIncludeType:(id)arg1 includeRelationship:(id)arg2;	// IMP=0x00000000001878db
+ (id)_URLParameterForInclude:(id)arg1;	// IMP=0x00000000001878b8
+ (id)_URLParameterForLimit:(id)arg1;	// IMP=0x000000000018786f
+ (id)_URLParameterForSort:(id)arg1;	// IMP=0x0000000000187843
+ (id)_URLParameterWithSharedPurchases;	// IMP=0x0000000000187813
+ (id)_URLParameterWithGenreFilter:(id)arg1;	// IMP=0x000000000018761b
+ (id)_URLParameterFilterWithShowIdentifier:(id)arg1;	// IMP=0x00000000001875ef
+ (id)_URLParameterWithOwnerIdentifier:(id)arg1;	// IMP=0x00000000001875c3
+ (id)_URLParameterTypeFilterWithTypes:(id)arg1;	// IMP=0x00000000001872f7
+ (id)_URLRequestWithURLString:(id)arg1;	// IMP=0x0000000000187299
+ (void)_addTypeFilterToURL:(id *)arg1 forRequest:(id)arg2;	// IMP=0x0000000000186f87
+ (id)genresRequestWithOwnerIdentifier:(id)arg1;	// IMP=0x0000000000186c5c
+ (id)genresRequestForVUIFamilySharingGenre:(id)arg1 withOwnerIdentifier:(id)arg2;	// IMP=0x0000000000186884
+ (id)showsPurchasesRequestWithOwnerIdentifier:(id)arg1;	// IMP=0x00000000001864c6
+ (id)episodesRequestWithShowIdentifier:(id)arg1 withOwnerIdentifier:(id)arg2;	// IMP=0x0000000000186005
+ (id)seasonsRequestWithShowIdentifier:(id)arg1 withOwnerIdentifier:(id)arg2;	// IMP=0x0000000000185c44
+ (id)moviesPurchasesRequestWithOwnerIdentifier:(id)arg1;	// IMP=0x0000000000185819
+ (id)recentPurchasesRequestWithOwnerIdentifier:(id)arg1;	// IMP=0x0000000000185450
+ (id)familyMembersRequest;	// IMP=0x00000000001853d7

@end
