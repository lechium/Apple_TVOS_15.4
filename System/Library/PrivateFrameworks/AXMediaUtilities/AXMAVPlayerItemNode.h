//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AXMediaUtilities/AVPlayerItemLegibleOutputPushDelegate-Protocol.h>

@class AVPlayerItem, AXMVisionAnalysisOptions, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AXMAVPlayerItemNode <AVPlayerItemLegibleOutputPushDelegate>
{
    NSObject<OS_dispatch_queue> *_avkit_queue;	// 8 = 0x8
    _Bool _triggeringLegibilityEvents;	// 16 = 0x10
    AVPlayerItem *_targetPlayerItem;	// 24 = 0x18
    AXMVisionAnalysisOptions *_analysisOptions;	// 32 = 0x20
}

+ (id)title;	// IMP=0x000000000002d9b3
+ (_Bool)isSupported;	// IMP=0x000000000002d9ab
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d9a3
- (void).cxx_destruct;	// IMP=0x000000000002e587
@property(retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // @synthesize analysisOptions=_analysisOptions;
@property(nonatomic) __weak AVPlayerItem *targetPlayerItem; // @synthesize targetPlayerItem=_targetPlayerItem;
@property(readonly, nonatomic, getter=isTriggeringLegibilityEvents) _Bool triggeringLegibilityEvents; // @synthesize triggeringLegibilityEvents=_triggeringLegibilityEvents;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;	// IMP=0x000000000002e1de
- (void)outputSequenceWasFlushed:(id)arg1;	// IMP=0x000000000002e1d8
- (id)axmDescription;	// IMP=0x000000000002e129
- (void)endAutoTriggerOfLegibilityEvents;	// IMP=0x000000000002e0b4
- (void)_mainQueue_endAutoTriggerOfLegibilityEvents;	// IMP=0x000000000002ddad
- (void)autoTriggerLegibilityEventsWithAVPlayerItem:(id)arg1;	// IMP=0x000000000002dabe
- (void)nodeInitialize;	// IMP=0x000000000002da21
- (void)setShouldProcessRemotely:(_Bool)arg1;	// IMP=0x000000000002d9c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
