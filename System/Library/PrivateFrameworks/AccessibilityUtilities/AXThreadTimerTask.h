//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AXThreadTimerTask : NSObject
{
    _Bool cancel;	// 8 = 0x8
    _Bool finished;	// 9 = 0x9
    _Bool active;	// 10 = 0xa
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000069a87
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished;
@property(nonatomic, getter=isCancelled) _Bool cancel; // @synthesize cancel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)runAfterDelay:(float)arg1;	// IMP=0x0000000000069a28
- (void)run;	// IMP=0x00000000000699bd

@end

