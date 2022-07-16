//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface CalSignalSensor : NSObject
{
    NSObject<OS_dispatch_source> *_signalSource;	// 8 = 0x8
    int _signal;	// 16 = 0x10
    CDUnknownBlockType _fireBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002b88d
@property(copy, nonatomic) CDUnknownBlockType fireBlock; // @synthesize fireBlock=_fireBlock;
@property(nonatomic) int signal; // @synthesize signal=_signal;
- (void)_shutDownSource;	// IMP=0x000000000002b82c
- (void)stopSensor;	// IMP=0x000000000002b724
- (void)startSensor;	// IMP=0x000000000002b49e
- (id)description;	// IMP=0x000000000002b37f
- (void)dealloc;	// IMP=0x000000000002b341
- (id)initWithSignal:(int)arg1;	// IMP=0x000000000002b306

@end

