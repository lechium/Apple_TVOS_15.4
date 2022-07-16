//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <MediaPlayer/MPUserIdentityConsuming-Protocol.h>

@class ICUserIdentity, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    _Bool _isExecuting;	// 16 = 0x10
    _Bool _isFinished;	// 17 = 0x11
    ICUserIdentity *_userIdentity;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000c4b53
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void)finishWithError:(id)arg1;	// IMP=0x00000000000c4946
- (void)finish;	// IMP=0x00000000000c4932
- (void)execute;	// IMP=0x00000000000c481a
- (void)start;	// IMP=0x00000000000c4786
- (_Bool)isFinished;	// IMP=0x00000000000c46f1
- (_Bool)isExecuting;	// IMP=0x00000000000c465c
- (_Bool)isConcurrent;	// IMP=0x00000000000c4654
- (_Bool)isAsynchronous;	// IMP=0x00000000000c464c
- (id)init;	// IMP=0x00000000000c45b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
