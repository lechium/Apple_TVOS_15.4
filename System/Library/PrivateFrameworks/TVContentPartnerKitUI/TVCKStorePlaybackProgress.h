//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSSet, NSString, TVCKStoreFavoriteShowInfo;
@protocol TVCKStorePlaybackProgressDelegate;

@interface TVCKStorePlaybackProgress : NSObject
{
    _Bool _hasFakeLastWatchedDate;	// 8 = 0x8
    _Bool _valid;	// 9 = 0x9
    _Bool _assumePurchased;	// 10 = 0xa
    unsigned long long _status;	// 16 = 0x10
    long long _totalUnitCount;	// 24 = 0x18
    long long _unwatchedUnitCount;	// 32 = 0x20
    double _fractionWatched;	// 40 = 0x28
    NSDate *_dateForSorting;	// 48 = 0x30
    NSDate *_lastWatchedDate;	// 56 = 0x38
    unsigned long long _itemKind;	// 64 = 0x40
    TVCKStoreFavoriteShowInfo *_showInfo;	// 72 = 0x48
    id _acquisitionStatusMonitoringToken;	// 80 = 0x50
    NSSet *_monitoredItemInfoObjects;	// 88 = 0x58
    NSString *_adamID;	// 96 = 0x60
    NSSet *_bookmarkKeys;	// 104 = 0x68
    id <TVCKStorePlaybackProgressDelegate> _delegate;	// 112 = 0x70
}

+ (id)_lastWatchedDateForLookupItems:(id)arg1 getFake:(_Bool *)arg2;	// IMP=0x00000000000412bc
+ (id)_dateForSortingWithLookupItems:(id)arg1 assumePurchased:(_Bool)arg2 withShowInfo:(id)arg3 monitoredItemInfoObjects:(id)arg4 respectBookmarkPlayCount:(_Bool)arg5;	// IMP=0x0000000000040fee
+ (double)fractionWatchedForLookupItems:(id)arg1 assumePurchased:(_Bool)arg2 withShowInfo:(id)arg3 monitoredItemInfoObjects:(id)arg4 respectBookmarkPlayCount:(_Bool)arg5;	// IMP=0x0000000000040f38
+ (long long)_unwatchedUnitCountForLookupItems:(id)arg1 assumePurchased:(_Bool)arg2 withShowInfo:(id)arg3 monitoredItemInfoObjects:(id)arg4 respectBookmarkPlayCount:(_Bool)arg5;	// IMP=0x0000000000040d3c
+ (unsigned long long)statusForLookupItems:(id)arg1 assumePurchased:(_Bool)arg2 withShowInfo:(id)arg3 monitoredItemInfoObjects:(id)arg4 respectBookmarkPlayCount:(_Bool)arg5;	// IMP=0x0000000000040a6e
+ (_Bool)_hasAcquiredItem:(id)arg1 assumePurchased:(_Bool)arg2 withMonitoredItemInfoObjects:(id)arg3;	// IMP=0x0000000000040827
+ (unsigned long long)_statusForLookupItem:(id)arg1 withShowInfo:(id)arg2 hasBeenAcquired:(_Bool)arg3 respectBookmarkPlayCount:(_Bool)arg4;	// IMP=0x0000000000040705
+ (double)_durationForLookupItems:(id)arg1;	// IMP=0x00000000000405a5
+ (double)_elapsedTimeForLookupItems:(id)arg1;	// IMP=0x00000000000403a3
+ (_Bool)_shouldDetermineStatusForLookupItem:(id)arg1 withShowInfo:(id)arg2 hasBeenAcquired:(_Bool)arg3;	// IMP=0x00000000000402bb
+ (_Bool)_hasBeenMarkedAsUnwatchedForLookupItem:(id)arg1;	// IMP=0x0000000000040274
- (void).cxx_destruct;	// IMP=0x0000000000042754
@property(nonatomic) __weak id <TVCKStorePlaybackProgressDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSSet *bookmarkKeys; // @synthesize bookmarkKeys=_bookmarkKeys;
@property(readonly, nonatomic) _Bool assumePurchased; // @synthesize assumePurchased=_assumePurchased;
@property(readonly, copy, nonatomic) NSString *adamID; // @synthesize adamID=_adamID;
@property(copy) NSSet *monitoredItemInfoObjects; // @synthesize monitoredItemInfoObjects=_monitoredItemInfoObjects;
@property(retain, nonatomic) id acquisitionStatusMonitoringToken; // @synthesize acquisitionStatusMonitoringToken=_acquisitionStatusMonitoringToken;
@property(retain, nonatomic) TVCKStoreFavoriteShowInfo *showInfo; // @synthesize showInfo=_showInfo;
@property(readonly, nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) unsigned long long itemKind; // @synthesize itemKind=_itemKind;
@property(readonly, nonatomic) _Bool hasFakeLastWatchedDate; // @synthesize hasFakeLastWatchedDate=_hasFakeLastWatchedDate;
@property(readonly, copy, nonatomic) NSDate *lastWatchedDate; // @synthesize lastWatchedDate=_lastWatchedDate;
@property(readonly, copy, nonatomic) NSDate *dateForSorting; // @synthesize dateForSorting=_dateForSorting;
@property(readonly, nonatomic) double fractionWatched; // @synthesize fractionWatched=_fractionWatched;
@property(readonly, nonatomic) long long unwatchedUnitCount; // @synthesize unwatchedUnitCount=_unwatchedUnitCount;
@property(readonly, nonatomic) long long totalUnitCount; // @synthesize totalUnitCount=_totalUnitCount;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)description;	// IMP=0x00000000000420a1
@property(readonly, nonatomic) _Bool canMarkAsUnwatched;
@property(readonly, nonatomic) _Bool canMarkAsWatched;
- (void)dealloc;	// IMP=0x0000000000041f9d
- (id)init;	// IMP=0x0000000000041f72
- (id)initWithAdamID:(id)arg1 assumePurchased:(_Bool)arg2 respectBookmarkPlayCount:(_Bool)arg3 itemKind:(unsigned long long)arg4 lookupItems:(id)arg5 showInfo:(id)arg6;	// IMP=0x0000000000041527

@end

