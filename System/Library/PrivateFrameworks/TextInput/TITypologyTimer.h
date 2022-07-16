//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TITypologyTimer : NSObject
{
    _Bool _foundFirstInput;	// 8 = 0x8
    double _elapsedTime;	// 16 = 0x10
    double _mostRecentTimestamp;	// 24 = 0x18
    double _maxTimeIntervalBetweenInputs;	// 32 = 0x20
}

@property(nonatomic) _Bool foundFirstInput; // @synthesize foundFirstInput=_foundFirstInput;
@property(nonatomic) double maxTimeIntervalBetweenInputs; // @synthesize maxTimeIntervalBetweenInputs=_maxTimeIntervalBetweenInputs;
@property(nonatomic) double mostRecentTimestamp; // @synthesize mostRecentTimestamp=_mostRecentTimestamp;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
- (void)addInputEventWithTimestamp:(double)arg1;	// IMP=0x000000000003a440

@end
