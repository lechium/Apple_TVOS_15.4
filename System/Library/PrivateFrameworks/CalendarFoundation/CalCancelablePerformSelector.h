//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalCancelable-Protocol.h>

@class NSRunLoop;

@interface CalCancelablePerformSelector : NSObject <CalCancelable>
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSRunLoop *_runloop;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000035add
@property(retain, nonatomic) NSRunLoop *runloop; // @synthesize runloop=_runloop;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)_performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035a98
- (void)cancel;	// IMP=0x00000000000358ab
- (void)performAfterDelay:(double)arg1;	// IMP=0x00000000000357fa
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000035715

@end

