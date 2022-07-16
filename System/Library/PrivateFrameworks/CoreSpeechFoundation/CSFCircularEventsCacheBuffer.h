//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CSFCircularEventsCacheBuffer : NSObject
{
    long long _lastEventIndex;	// 8 = 0x8
    NSMutableArray *_eventsArray;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e496
@property(readonly, nonatomic) NSMutableArray *eventsArray; // @synthesize eventsArray=_eventsArray;
- (void)clearBuffer;	// IMP=0x000000000001e463
- (void)addEventToCacheBuffer:(id)arg1;	// IMP=0x000000000001e42a
- (id)init;	// IMP=0x000000000001e3b2

@end

