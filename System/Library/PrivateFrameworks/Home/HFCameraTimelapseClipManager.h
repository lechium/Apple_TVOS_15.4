//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFCameraTimelapseClipInfoProvider-Protocol.h>
#import <Home/HMCameraClipManagerObserver-Protocol.h>

@class HMCameraClip, HMCameraClipManager, NSDate, NSMutableArray, NSString;

@interface HFCameraTimelapseClipManager : NSObject <HMCameraClipManagerObserver, HFCameraTimelapseClipInfoProvider>
{
    NSMutableArray *_clips;	// 8 = 0x8
    HMCameraClipManager *_clipManager;	// 16 = 0x10
    HMCameraClip *_oldestFetchedClip;	// 24 = 0x18
    NSDate *_oldestValidDateForTimeline;	// 32 = 0x20
    HMCameraClip *_lastSelectedTimelapseClip;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x000000000012f919
- (void).cxx_destruct;	// IMP=0x00000000001307dd
@property(retain, nonatomic) HMCameraClip *lastSelectedTimelapseClip; // @synthesize lastSelectedTimelapseClip=_lastSelectedTimelapseClip;
@property(retain, nonatomic) NSDate *oldestValidDateForTimeline; // @synthesize oldestValidDateForTimeline=_oldestValidDateForTimeline;
@property(retain, nonatomic) HMCameraClip *oldestFetchedClip; // @synthesize oldestFetchedClip=_oldestFetchedClip;
@property(nonatomic) __weak HMCameraClipManager *clipManager; // @synthesize clipManager=_clipManager;
@property(retain, nonatomic) NSMutableArray *clips; // @synthesize clips=_clips;
- (void)clipManager:(id)arg1 didUpdateClips:(id)arg2;	// IMP=0x000000000013052b
- (void)fetchClipsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3;	// IMP=0x000000000012fedb
- (void)fetchTimelapseClips;	// IMP=0x000000000012fd66
- (id)timelapseClipPositionForDate:(id)arg1 inHighQualityClip:(id)arg2 scrubbingType:(unsigned long long)arg3;	// IMP=0x000000000012fb24
- (id)timelapseURLForTimelapseClip:(id)arg1;	// IMP=0x000000000012fb0b
- (id)timelapseClipPositionForDate:(id)arg1 inHighQualityClip:(id)arg2;	// IMP=0x000000000012f9d4
- (id)init;	// IMP=0x000000000012f96e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

