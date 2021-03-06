//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VMUTaskThreadStates : NSObject
{
    unsigned int _threadCount;	// 8 = 0x8
    unsigned int _threadStateSize;	// 12 = 0xc
    void *_threadStates;	// 16 = 0x10
    unsigned long long *_stackPointers;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned int threadStateSize; // @synthesize threadStateSize=_threadStateSize;
@property(readonly, nonatomic) unsigned int threadCount; // @synthesize threadCount=_threadCount;
- (unsigned long long)stackPointerForThreadNum:(unsigned int)arg1;	// IMP=0x000000000007342c
- (void *)threadStateForThreadNum:(unsigned int)arg1;	// IMP=0x000000000007340d
- (void)dealloc;	// IMP=0x00000000000733c0
- (id)initWithPid:(int)arg1 task:(unsigned int)arg2;	// IMP=0x00000000000731c6

@end

