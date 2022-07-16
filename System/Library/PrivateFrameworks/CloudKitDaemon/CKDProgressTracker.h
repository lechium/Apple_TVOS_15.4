//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString;

@interface CKDProgressTracker : NSObject
{
    _Bool _hasCachedTotalBytes;	// 8 = 0x8
    _Bool _hasCachedCompletedBytes;	// 9 = 0x9
    double _lastItemPercentage;	// 16 = 0x10
    unsigned long long _cachedTotalBytes;	// 24 = 0x18
    unsigned long long _cachedCompletedBytes;	// 32 = 0x20
    NSMapTable *_completedBytesByItems;	// 40 = 0x28
    NSString *_trackingID;	// 48 = 0x30
}

+ (unsigned long long)_sizeForItem:(id)arg1;	// IMP=0x0000000000302f5a
- (void).cxx_destruct;	// IMP=0x0000000000303b34
@property(retain, nonatomic) NSString *trackingID; // @synthesize trackingID=_trackingID;
@property(retain, nonatomic) NSMapTable *completedBytesByItems; // @synthesize completedBytesByItems=_completedBytesByItems;
@property(nonatomic) unsigned long long cachedCompletedBytes; // @synthesize cachedCompletedBytes=_cachedCompletedBytes;
@property(nonatomic) unsigned long long cachedTotalBytes; // @synthesize cachedTotalBytes=_cachedTotalBytes;
@property(nonatomic) _Bool hasCachedCompletedBytes; // @synthesize hasCachedCompletedBytes=_hasCachedCompletedBytes;
@property(nonatomic) _Bool hasCachedTotalBytes; // @synthesize hasCachedTotalBytes=_hasCachedTotalBytes;
@property(nonatomic) double lastItemPercentage; // @synthesize lastItemPercentage=_lastItemPercentage;
- (double)updateProgressWithItem:(id)arg1 progress:(double)arg2;	// IMP=0x0000000000303825
- (unsigned long long)_updateTotalCompletedBytes;	// IMP=0x0000000000303746
- (unsigned long long)_updateTotalBytes;	// IMP=0x0000000000303660
- (void)stopTrackingItems:(id)arg1;	// IMP=0x00000000003033b5
- (void)startTrackingItems:(id)arg1;	// IMP=0x0000000000303104
- (id)initWithTrackingID:(id)arg1;	// IMP=0x00000000003030aa
- (id)init;	// IMP=0x0000000000303044

@end

