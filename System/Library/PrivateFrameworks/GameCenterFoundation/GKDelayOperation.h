//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@interface GKDelayOperation : NSOperation
{
    double _delayInSec;	// 8 = 0x8
    CDUnknownBlockType _operation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f9941
@property(copy, nonatomic) CDUnknownBlockType operation; // @synthesize operation=_operation;
@property(nonatomic) double delayInSec; // @synthesize delayInSec=_delayInSec;
- (void)main;	// IMP=0x00000000000f989e
- (id)initWithDelay:(double)arg1 andOperation:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f9817

@end

