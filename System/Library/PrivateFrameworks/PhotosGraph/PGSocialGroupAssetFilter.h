//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGAssetFilter-Protocol.h>

@class NSString;

@interface PGSocialGroupAssetFilter : NSObject <PGAssetFilter>
{
    double _minimumRatioOfFacesComingFromSocialGroup;	// 8 = 0x8
    double _minimumRatioOfPersonsInSocialGroupPresent;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000175b17
+ (id)criteriaWithDictionary:(id)arg1;	// IMP=0x0000000000175b0f
+ (id)name;	// IMP=0x0000000000175b02
@property(readonly, nonatomic) double minimumRatioOfPersonsInSocialGroupPresent; // @synthesize minimumRatioOfPersonsInSocialGroupPresent=_minimumRatioOfPersonsInSocialGroupPresent;
@property(readonly, nonatomic) double minimumRatioOfFacesComingFromSocialGroup; // @synthesize minimumRatioOfFacesComingFromSocialGroup=_minimumRatioOfFacesComingFromSocialGroup;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000175aa1
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000175a0f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001759fd
- (_Bool)asset:(id)arg1 passesForPersonLocalIdentifiersInSocialGroup:(id)arg2;	// IMP=0x0000000000175849
- (id)filteredAssetsFromAssets:(id)arg1 withPersonLocalIdentifiersInSocialGroup:(id)arg2;	// IMP=0x0000000000175678
- (id)init;	// IMP=0x0000000000175639

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
