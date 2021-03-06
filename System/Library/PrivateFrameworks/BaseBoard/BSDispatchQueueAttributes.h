//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/NSCopying-Protocol.h>

@protocol OS_dispatch_queue, OS_dispatch_queue_attr;

@interface BSDispatchQueueAttributes : NSObject <NSCopying>
{
    NSObject<OS_dispatch_queue_attr> *_attrs;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_targetQueue;	// 16 = 0x10
}

+ (id)concurrent;	// IMP=0x0000000000034b16
+ (id)serial;	// IMP=0x0000000000034ad3
- (void).cxx_destruct;	// IMP=0x0000000000034cdf
@property(readonly, nonatomic) NSObject<OS_dispatch_queue_attr> *attributes; // @synthesize attributes=_attrs;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000034c73
- (id)inactive;	// IMP=0x0000000000034c40
- (id)targetQueue:(id)arg1;	// IMP=0x0000000000034bf1
- (id)autoreleaseFrequency:(unsigned long long)arg1;	// IMP=0x0000000000034bbb
- (id)serviceClass:(unsigned int)arg1 relativePriority:(int)arg2;	// IMP=0x0000000000034b72
- (id)serviceClass:(unsigned int)arg1;	// IMP=0x0000000000034b5e

@end

