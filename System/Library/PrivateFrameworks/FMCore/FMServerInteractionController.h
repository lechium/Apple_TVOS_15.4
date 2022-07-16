//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMCore/NSURLSessionDelegate-Protocol.h>

@class NSMutableSet, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface FMServerInteractionController : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *dq_inFlightCommands;	// 8 = 0x8
    NSMutableSet *inFlightCommands;	// 16 = 0x10
    NSOperationQueue *_queue;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
    NSURLSessionConfiguration *_sessionConfiguration;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001492e
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)processResponseForCommand:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014783
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x00000000000146b9
- (void)networkActivityStatus:(_Bool)arg1;	// IMP=0x00000000000146b3
- (void)invalidate;	// IMP=0x0000000000014659
- (void)cancelAllCommands;	// IMP=0x0000000000014424
- (void)cancelCommand:(id)arg1;	// IMP=0x000000000001440f
- (void)sendCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000013fc7
- (double)_simulatedLatency;	// IMP=0x0000000000013e43
- (id)init;	// IMP=0x0000000000013c5e
- (void)dealloc;	// IMP=0x0000000000013bd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
