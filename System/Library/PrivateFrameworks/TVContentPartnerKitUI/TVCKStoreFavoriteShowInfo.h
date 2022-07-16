//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVContentPartnerKitUI/NSSecureCoding-Protocol.h>

@class NSDate, NSSet;

@interface TVCKStoreFavoriteShowInfo : NSObject <NSSecureCoding>
{
    NSDate *_autoBlueDotDate;	// 8 = 0x8
    NSSet *_autoBlueDotSeasons;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006f343
- (void).cxx_destruct;	// IMP=0x000000000006f5f2
@property(copy, nonatomic) NSSet *autoBlueDotSeasons; // @synthesize autoBlueDotSeasons=_autoBlueDotSeasons;
@property(copy, nonatomic) NSDate *autoBlueDotDate; // @synthesize autoBlueDotDate=_autoBlueDotDate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006f4d7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f34b
- (_Bool)shouldDetermineStatusOfEpisodeWithReleaseDate:(id)arg1 inSeasonWithID:(id)arg2;	// IMP=0x000000000006f26a
- (id)init;	// IMP=0x000000000006f23f
- (id)initWithEligibilityDate:(id)arg1 eligibleSeasonIDs:(id)arg2;	// IMP=0x000000000006f186

@end
