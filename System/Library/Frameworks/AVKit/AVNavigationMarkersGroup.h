//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@interface AVNavigationMarkersGroup : NSObject
{
    NSArray *_timeRanges;	// 8 = 0x8
    NSMutableDictionary *_markerImageMap;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSArray *_timedNavigationMarkers;	// 32 = 0x20
    NSArray *_dateRangeNavigationMarkers;	// 40 = 0x28
    unsigned long long _numberOfImagesRemainingToLoad;	// 48 = 0x30
}

+ (id)navigationMarkerGroups:(id)arg1 inTimeRange:(id)arg2;	// IMP=0x0000000000079c32
+ (id)navigationMarkerGroups:(id)arg1 filteredWithBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000799f6
- (void).cxx_destruct;	// IMP=0x0000000000078cfb
@property(nonatomic) unsigned long long numberOfImagesRemainingToLoad; // @synthesize numberOfImagesRemainingToLoad=_numberOfImagesRemainingToLoad;
@property(readonly, nonatomic) NSArray *dateRangeNavigationMarkers; // @synthesize dateRangeNavigationMarkers=_dateRangeNavigationMarkers;
@property(readonly, nonatomic) NSArray *timedNavigationMarkers; // @synthesize timedNavigationMarkers=_timedNavigationMarkers;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)copyArrayOfFractionsForDuration:(double)arg1;	// IMP=0x0000000000078bb5
- (id)copyArrayOfFractionsForStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00000000000789ff
- (void)enumerateStartDates:(CDUnknownBlockType)arg1;	// IMP=0x000000000007895c
- (void)enumerateStartTimes:(CDUnknownBlockType)arg1;	// IMP=0x00000000000788d5
- (unsigned long long)indexOfMarkerContainingDate:(id)arg1;	// IMP=0x00000000000787ad
- (unsigned long long)indexOfClosestMarkerPriorOrEqualToDate:(id)arg1;	// IMP=0x000000000007862d
- (unsigned long long)indexOfMarkerContainingTime:(double)arg1;	// IMP=0x000000000007846d
- (unsigned long long)indexOfClosestMarkerToTime:(double)arg1;	// IMP=0x000000000007839d
- (unsigned long long)indexOfClosestMarkerPriorOrEqualToTime:(double)arg1;	// IMP=0x00000000000782a4
- (id)timeRanges;	// IMP=0x0000000000078296
- (_Bool)haveImages;	// IMP=0x0000000000078282
- (_Bool)loadFirstImageSynchronouslyWithTimeout:(double)arg1;	// IMP=0x00000000000780ab
- (void)loadAllImages;	// IMP=0x0000000000078041
- (_Bool)haveImageForMarker:(unsigned long long)arg1;	// IMP=0x0000000000077f82
- (id)imageForMarker:(unsigned long long)arg1;	// IMP=0x0000000000077f32
- (id)imageProxyForMarker:(unsigned long long)arg1;	// IMP=0x0000000000077e3b
- (void)_loadImageForMarker:(unsigned long long)arg1;	// IMP=0x00000000000779eb
- (id)_imageMetadataItemForMarker:(unsigned long long)arg1;	// IMP=0x000000000007790c
- (id)descriptionForMarker:(unsigned long long)arg1;	// IMP=0x00000000000778f0
- (id)_loggingTitleForMarker:(unsigned long long)arg1;	// IMP=0x00000000000778de
- (id)titleForMarker:(unsigned long long)arg1;	// IMP=0x0000000000077886
- (id)_defaultTitleForMarker:(unsigned long long)arg1;	// IMP=0x0000000000077788
- (id)_stringForMarker:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x00000000000775f9
- (id)startDateForMarker:(unsigned long long)arg1;	// IMP=0x0000000000077579
- (double)startTimeForMarker:(unsigned long long)arg1;	// IMP=0x000000000007753b
- (CDStruct_e83c9415)timeRangeForMarker:(unsigned long long)arg1;	// IMP=0x000000000007743b
- (_Bool)isChapterGroup;	// IMP=0x00000000000773e7
- (unsigned long long)count;	// IMP=0x00000000000773a3
- (id)navigationMarkersGroupFromTimeRange:(id)arg1;	// IMP=0x0000000000077303
- (id)navigationMarkersGroupFilteredWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000076e2a
- (id)navigationMarkers;	// IMP=0x0000000000076e18
- (id)_navMarkers;	// IMP=0x0000000000076dcf
- (_Bool)isDateBased;	// IMP=0x0000000000076d87
- (id)initWithChaptersFromAsset:(id)arg1;	// IMP=0x0000000000076b2f
- (id)initWithTitle:(id)arg1 navigationMarkers:(id)arg2;	// IMP=0x0000000000076a6e
- (id)initWithTitle:(id)arg1 dateRangeNavigationMarkers:(id)arg2;	// IMP=0x0000000000076945
- (id)initWithTitle:(id)arg1 timedNavigationMarkers:(id)arg2;	// IMP=0x0000000000076898
- (id)init;	// IMP=0x000000000007687d

@end

