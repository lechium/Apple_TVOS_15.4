//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface PHAWorkerHealthScoreEntry : NSObject
{
    float _score;	// 8 = 0x8
    NSDate *_dateRecorded;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001da11
@property(readonly, copy, nonatomic) NSDate *dateRecorded; // @synthesize dateRecorded=_dateRecorded;
@property(readonly, nonatomic) float score; // @synthesize score=_score;
- (id)initWithScore:(float)arg1;	// IMP=0x000000000001d987

@end
