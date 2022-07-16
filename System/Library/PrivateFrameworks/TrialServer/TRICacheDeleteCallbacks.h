//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIClient;
@protocol TRIAssetPurging, TRIPaths;

@interface TRICacheDeleteCallbacks : NSObject
{
    id <TRIPaths> _paths;	// 8 = 0x8
    id <TRIAssetPurging> _assetPurger;	// 16 = 0x10
    TRIClient *_loggingClient;	// 24 = 0x18
}

+ (id)_assetPurger:(id)arg1 loggingClient:(id)arg2;	// IMP=0x0000000000043d5e
+ (void)registerCallbacksWithPaths:(id)arg1 loggingClient:(id)arg2;	// IMP=0x0000000000043a17
- (void).cxx_destruct;	// IMP=0x0000000000043ebf
- (_Bool)_trialVolumeIsEqualToVolume:(id)arg1;	// IMP=0x000000000004399f
- (void)cancel:(id)arg1;	// IMP=0x000000000004395e
- (void)_logPurgedAmountTelemetry:(int)arg1 purgedAmountInBytes:(id)arg2;	// IMP=0x0000000000043784
- (id)purge:(id)arg1 urgency:(int)arg2;	// IMP=0x000000000004347d
- (id)purgeable:(id)arg1 urgency:(int)arg2;	// IMP=0x00000000000431eb
- (id)initWithPaths:(id)arg1 assetPurger:(id)arg2 loggingClient:(id)arg3;	// IMP=0x0000000000043134

@end

