//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSDReporterDataSource, OS_dispatch_queue;

@interface CSDABCReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000016ad7c
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)stringForSignatureType:(unsigned long long)arg1;	// IMP=0x001000000016ad4c
- (id)stringForIMAVChatEndedReason:(unsigned int)arg1;	// IMP=0x001000000016aba8
- (id)stringForIDSSessionEndedReason:(unsigned int)arg1;	// IMP=0x001000000016a95c
- (id)stringRepresentationForTUCallDisconnectedReason:(int)arg1;	// IMP=0x001000000016a898
- (void)reportingController:(id)arg1 statusChangedForCall:(id)arg2 totalCallCount:(unsigned long long)arg3;	// IMP=0x001000000016a35e
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000016a2bb
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000016a29c

// Remaining properties
@property(nonatomic) __weak id <CSDReporterDataSource> dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

