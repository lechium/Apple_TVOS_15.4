//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface VKTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    double _nextFireDate;	// 16 = 0x10
}

@property(readonly, nonatomic) double nextFireDate; // @synthesize nextFireDate=_nextFireDate;
- (void)invalidate;	// IMP=0x000000000056e8c9
- (void)disable;	// IMP=0x000000000056e875
- (void)fireAfter:(double)arg1;	// IMP=0x000000000056e81f
- (void)dealloc;	// IMP=0x000000000056e7d8
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 queue:(id)arg3;	// IMP=0x000000000056e63f

@end

