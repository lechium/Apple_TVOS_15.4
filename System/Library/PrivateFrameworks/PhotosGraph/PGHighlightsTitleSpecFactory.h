//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGHighlightsTitleSpecFactory : NSObject
{
}

+ (id)orderedHighlightTitleSpecTypesForMeaningLabel:(id)arg1;	// IMP=0x0000000000358358
+ (id)titleSpecForHolidayEventIncludingLocationIfPossible:(_Bool)arg1;	// IMP=0x0000000000358141
+ (id)specPoolsForHolidayEventIncludingLocationIfPossible:(_Bool)arg1 allowAllCities:(_Bool)arg2;	// IMP=0x0000000000357eeb
+ (id)specPoolsForBirthdayIncludingLocationIfPossible:(_Bool)arg1 allowAllCities:(_Bool)arg2;	// IMP=0x0000000000357755
+ (id)specPoolForAOILocation;	// IMP=0x00000000003575f1
+ (id)titleSpecForGenericLocation:(_Bool)arg1;	// IMP=0x00000000003574d9
+ (id)specPoolForGenericLocation:(_Bool)arg1;	// IMP=0x000000000035741a
+ (id)specPoolForBusinessItem;	// IMP=0x00000000003572b6
+ (id)specPoolForPublicEvent;	// IMP=0x000000000035717a
+ (id)specPoolForPublicEventWithBusiness;	// IMP=0x0000000000357014
+ (id)specCollectionForMeaningLabel:(id)arg1 allowAllCities:(_Bool)arg2;	// IMP=0x0000000000356cbf

@end

