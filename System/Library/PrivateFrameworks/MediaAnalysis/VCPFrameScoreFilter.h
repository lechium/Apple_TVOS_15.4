//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPFrameScoreFilter : NSObject
{
    int _numFilterTabs;	// 8 = 0x8
    float *_scoreArray;	// 16 = 0x10
    float _distanceVariance;	// 24 = 0x18
    float _diffVariance;	// 28 = 0x1c
    int _numOfScores;	// 32 = 0x20
}

- (float)processFrameScore:(float)arg1 validScore:(_Bool)arg2;	// IMP=0x000000000006366c
- (void)dealloc;	// IMP=0x000000000006362d
- (id)initWithFilterTabs:(int)arg1 distanceVariance:(float)arg2 diffVariance:(float)arg3;	// IMP=0x0000000000063572

@end

