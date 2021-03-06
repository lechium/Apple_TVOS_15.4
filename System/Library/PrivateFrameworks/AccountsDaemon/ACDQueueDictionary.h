//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject
{
    NSMutableDictionary *_allQueuesByID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000122af
- (id)description;	// IMP=0x0000000000012299
- (id)keyForRandomQueue;	// IMP=0x0000000000012208
- (id)dequeueAllObjectsInQueueForKey:(id)arg1;	// IMP=0x0000000000012163
- (id)firstObjectInQueueForKey:(id)arg1;	// IMP=0x00000000000120ad
- (id)dequeueFirstObjectInQueueForKey:(id)arg1;	// IMP=0x0000000000011fc5
- (void)addObject:(id)arg1 toQueueForKey:(id)arg2;	// IMP=0x0000000000011ed9
- (_Bool)isQueueEmptyForKey:(id)arg1;	// IMP=0x0000000000011e2b
- (_Bool)isEmpty;	// IMP=0x0000000000011c8e
- (id)init;	// IMP=0x0000000000011c38

@end

