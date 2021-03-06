//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber;
@protocol PFRandomNumberGenerator;

@interface PFStoryAutoEditFrequencyTable : NSObject
{
    NSArray *_baseTable;	// 8 = 0x8
    NSMutableArray *_workingElements;	// 16 = 0x10
    id <PFRandomNumberGenerator> _randomNumberGenerator;	// 24 = 0x18
    NSNumber *_fallbackValue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000084847
- (id)nextValuePassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000845b1
- (id)nextValue;	// IMP=0x0000000000084598
- (_Bool)hasValue:(id)arg1;	// IMP=0x0000000000084582
- (id)description;	// IMP=0x0000000000084534
- (id)init;	// IMP=0x000000000008452b
- (id)initWithValueCounts:(id)arg1 randomNumberGenerator:(id)arg2 fallbackValue:(id)arg3;	// IMP=0x000000000008422f

@end

