//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString, geo_isolater;

@interface GEOReportedProgress : NSObject
{
    geo_isolater *_isolater;	// 8 = 0x8
    NSProgress *_progress;	// 16 = 0x10
    NSProgress *_internalProgress;	// 24 = 0x18
    CDUnknownBlockType _cancellationHandler;	// 32 = 0x20
}

+ (id)progressWithTotalUnitCount:(long long)arg1;	// IMP=0x00000000011ff28a
- (void).cxx_destruct;	// IMP=0x00000000011ff864
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)cancel;	// IMP=0x00000000011ff7d8
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(copy) CDUnknownBlockType cancellationHandler;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;	// IMP=0x00000000011ff664
- (void)resignCurrent;	// IMP=0x00000000011ff64e
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;	// IMP=0x00000000011ff638
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000011ff622
@property long long completedUnitCount;
@property long long totalUnitCount;
@property(copy) NSString *kind;
- (id)initWithTotalUnitCount:(long long)arg1;	// IMP=0x00000000011ff2c0

@end

