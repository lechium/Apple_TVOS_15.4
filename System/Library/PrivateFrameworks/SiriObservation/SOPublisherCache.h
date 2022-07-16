//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface SOPublisherCache : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000011205
- (void).cxx_destruct;	// IMP=0x0000000000011581
- (void)removePublisherForSnapshotType:(Class)arg1;	// IMP=0x0000000000011514
- (void)setPublisher:(id)arg1 forSnapshotType:(Class)arg2;	// IMP=0x0000000000011456
- (id)publisherForSnapshotType:(Class)arg1;	// IMP=0x000000000001132e
- (id)init;	// IMP=0x000000000001125a

@end

