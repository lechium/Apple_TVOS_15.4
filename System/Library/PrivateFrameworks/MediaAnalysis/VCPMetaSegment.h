//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPMetaSegment : NSObject
{
    unsigned long long _numOfFrames;	// 8 = 0x8
    CDStruct_e83c9415 _timeRange;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long numOfFrames; // @synthesize numOfFrames=_numOfFrames;
@property(readonly, nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (void)finalizeAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000114ea4
- (void)mergeSegment:(id)arg1;	// IMP=0x0000000000114da5
- (void)resetSegment:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000114d21
- (void)updateSegment:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000114cb7
- (id)init;	// IMP=0x0000000000114c43

@end

