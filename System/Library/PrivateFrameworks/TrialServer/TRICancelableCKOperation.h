//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIFetchOpCanceling-Protocol.h>

@class _PASLock;

@interface TRICancelableCKOperation : NSObject <TRIFetchOpCanceling>
{
    _PASLock *_lock;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000642bb
- (void)cancel;	// IMP=0x000000000006413e
@property(readonly, nonatomic) _Bool isCanceled;
- (void)addOperation:(id)arg1;	// IMP=0x0000000000063fbe
- (id)initWithOperation:(id)arg1;	// IMP=0x0000000000063ee4

@end

