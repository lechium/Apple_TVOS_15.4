//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TUTestState : NSObject
{
    NSMutableDictionary *_objects;	// 8 = 0x8
    int _signalCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000011e23d
@property(readonly, nonatomic) int signalCount; // @synthesize signalCount=_signalCount;
- (int)waitWithTimeout:(double)arg1;	// IMP=0x000000000011e202
- (void)signal;	// IMP=0x000000000011e1a3
- (void)incrementIntegerForKey:(id)arg1;	// IMP=0x000000000011e0f5
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x000000000011e01b
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x000000000011df8f
- (id)description;	// IMP=0x000000000011df67

@end

