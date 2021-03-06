//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HKAudioExposureUtilities : NSObject
{
}

+ (double)_rounded:(double)arg1;	// IMP=0x00000000001b7e7c
+ (id)_classificationValueWithLEQ:(double)arg1 duration:(double)arg2 days:(long long)arg3;	// IMP=0x00000000001b7d8f
+ (double)maximumDurationInSecondsForLEQ:(double)arg1 days:(long long)arg2;	// IMP=0x00000000001b7ce8
+ (id)computeLEQFromAudioExposureValues:(id)arg1;	// IMP=0x00000000001b7a60
+ (unsigned long long)classifyLEQ:(id)arg1 forDuration:(double)arg2 overDays:(long long)arg3;	// IMP=0x00000000001b796c
+ (id)localizedDisplayNameForClassification:(unsigned long long)arg1 isEmbedded:(_Bool)arg2;	// IMP=0x00000000001b78b4
+ (id)localizedDisplayNameForClassification:(unsigned long long)arg1;	// IMP=0x00000000001b78a0

@end

