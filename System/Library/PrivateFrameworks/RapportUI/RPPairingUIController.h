//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RPPairingUIController : NSObject
{
    CDUnknownBlockType _invalidationHandler;	// 8 = 0x8
    CDUnknownBlockType _retryHandler;	// 16 = 0x10
    CDUnknownBlockType _tryPINHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000001481
@property(copy, nonatomic) CDUnknownBlockType tryPINHandler; // @synthesize tryPINHandler=_tryPINHandler;
@property(copy, nonatomic) CDUnknownBlockType retryHandler; // @synthesize retryHandler=_retryHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)promptWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x0000000000001430
- (void)pairingError:(id)arg1;	// IMP=0x000000000000142a
- (void)invalidate;	// IMP=0x00000000000013f1
- (void)activate;	// IMP=0x00000000000013eb

@end

