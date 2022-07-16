//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@class NSObject;
@protocol OS_dispatch_source;

@interface WFAutoIncrementingProgress : NSProgress
{
    double _duration;	// 8 = 0x8
    unsigned long long _increments;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_progressTimer;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_timer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000b784c
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(readonly, nonatomic) unsigned long long increments; // @synthesize increments=_increments;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void)finish;	// IMP=0x00000000000b77a1
- (void)cancel;	// IMP=0x00000000000b7740
- (void)start;	// IMP=0x00000000000b756d
- (id)initWithParent:(id)arg1 pendingUnitCount:(unsigned long long)arg2 duration:(double)arg3;	// IMP=0x00000000000b74ac

@end

