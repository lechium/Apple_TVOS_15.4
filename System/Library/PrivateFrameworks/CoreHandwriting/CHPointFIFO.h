//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CHPointFIFO : NSObject
{
    CHPointFIFO *_nextFIFO;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a64a0
@property(retain, nonatomic) CHPointFIFO *nextFIFO; // @synthesize nextFIFO=_nextFIFO;
- (void)clear;	// IMP=0x00000000000a6450
- (void)flush;	// IMP=0x00000000000a6430
- (void)addPoint: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000a6410
- (void)emitPoint: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000a63a0
- (id)initWithFIFO:(id)arg1;	// IMP=0x00000000000a6320

@end

