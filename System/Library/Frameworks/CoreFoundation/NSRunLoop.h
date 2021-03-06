//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSRunLoop : NSObject
{
    id _rl;	// 8 = 0x8
    id _dperf;	// 16 = 0x10
    id _perft;	// 24 = 0x18
    id _info;	// 32 = 0x20
    id _ports;	// 40 = 0x28
    void *_reserved[6];	// 48 = 0x30
    NSString *_currentMode;	// 96 = 0x60
}

@property(readonly, copy) NSString *currentMode; // @synthesize currentMode=_currentMode;
- (void)_deallocHelper;	// IMP=0x000000000005980a
- (id)_ports;	// IMP=0x0000000000059805
- (id)_info;	// IMP=0x0000000000059800
- (id)_perft;	// IMP=0x00000000000597fb
- (id)_dperf;	// IMP=0x00000000000597f6
- (struct __CFRunLoop *)getCFRunLoop;	// IMP=0x00000000000597f1
- (id)_initWithRl:(id)arg1 dperf:(id)arg2 perft:(id)arg3 info:(id)arg4 ports:(id)arg5;	// IMP=0x00000000000597a4

@end

