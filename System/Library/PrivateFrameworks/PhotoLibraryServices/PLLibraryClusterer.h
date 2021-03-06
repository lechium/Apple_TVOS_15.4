//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, PLFrequentLocationManager, PLLocalCreationDateCreator;
@protocol PLLibraryClustererDelegate;

@interface PLLibraryClusterer : NSObject
{
    id <PLLibraryClustererDelegate> _delegate;	// 8 = 0x8
    NSCalendar *_calendar;	// 16 = 0x10
    PLLocalCreationDateCreator *_localCreationDateCreator;	// 24 = 0x18
    PLFrequentLocationManager *_frequentLocationManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000056099a
@property(readonly, nonatomic) PLFrequentLocationManager *frequentLocationManager; // @synthesize frequentLocationManager=_frequentLocationManager;
@property(readonly, nonatomic) PLLocalCreationDateCreator *localCreationDateCreator; // @synthesize localCreationDateCreator=_localCreationDateCreator;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(nonatomic) __weak id <PLLibraryClustererDelegate> delegate; // @synthesize delegate=_delegate;
- (id)momentClustersForMomentsSortedByDate:(id)arg1;	// IMP=0x0000000000560738
- (id)_momentsWithLocationClusteredByPossibleSource:(id)arg1;	// IMP=0x00000000005601ed
- (id)_momentsGroupedByDayWithMomentsSortedByDate:(id)arg1;	// IMP=0x000000000055f9dc
- (id)_startDateComponentsForMomentCluster:(id)arg1;	// IMP=0x000000000055f974
- (id)_momentsSplitBetweenOriginatorsWithMoments:(id)arg1;	// IMP=0x000000000055f128
- (id)_momentsSeparatedOnLocationTypeWithMoments:(id)arg1;	// IMP=0x000000000055e52f
- (id)_momentsSplitWithinDayWithMoments:(id)arg1;	// IMP=0x000000000055d80a
- (_Bool)_shouldSplitMomentsWithTimeDistance:(double)arg1 locationDistance:(double)arg2;	// IMP=0x000000000055d7d3
- (void)_mergeMomentsIntoClustersBasedOnTimeWithMoments:(id)arg1 clusters:(id)arg2;	// IMP=0x000000000055d084
- (id)locationBasedMomentClustersForMomentsSortedByDate:(id)arg1;	// IMP=0x000000000055c6f7
- (void)_createMomentsForDailyAssets:(id)arg1 currentMomentExistingMomentData:(id)arg2;	// IMP=0x000000000055c5aa
- (void)processMomentsWithAssets:(id)arg1;	// IMP=0x000000000055bf7b
- (id)initWithLocalCreationDateCreator:(id)arg1 frequentLocationManager:(id)arg2;	// IMP=0x000000000055be64

@end

