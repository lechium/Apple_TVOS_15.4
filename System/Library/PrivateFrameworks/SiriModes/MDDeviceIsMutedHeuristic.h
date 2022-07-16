//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriModes/MDModeHeuristic-Protocol.h>

@class AFNotifyObserver, MDModeDecision;

@interface MDDeviceIsMutedHeuristic : NSObject <MDModeHeuristic>
{
    AFNotifyObserver *_ringerStateObserver;	// 8 = 0x8
    MDModeDecision *_displayOnlyModeDecision;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000016e1
- (_Bool)isDeviceSilentMode;	// IMP=0x00000000000016c4
- (id)determineCurrentMode;	// IMP=0x000000000000168e
- (id)initWithRingerStateObserver:(id)arg1;	// IMP=0x00000000000015f4
- (id)init;	// IMP=0x000000000000156e

@end

