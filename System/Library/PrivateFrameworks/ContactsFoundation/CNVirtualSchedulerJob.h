//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CNVirtualSchedulerJob : NSObject
{
    unsigned long long _time;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

+ (id)jobWithTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000003490
- (void).cxx_destruct;	// IMP=0x0000000000003673
@property(readonly, copy) CDUnknownBlockType block; // @synthesize block=_block;
@property unsigned long long time; // @synthesize time=_time;
- (id)description;	// IMP=0x0000000000003579
- (id)initWithTime:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000034e8

@end
