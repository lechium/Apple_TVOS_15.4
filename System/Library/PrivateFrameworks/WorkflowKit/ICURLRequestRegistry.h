//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ICURLRequestRegistry : NSObject
{
    NSMutableArray *_activeRequests;	// 8 = 0x8
    NSMutableDictionary *_requestHandlers;	// 16 = 0x10
}

+ (id)sharedRegistry;	// IMP=0x0000000000082fcc
- (void).cxx_destruct;	// IMP=0x00000000000836d3
@property(retain, nonatomic) NSMutableDictionary *requestHandlers; // @synthesize requestHandlers=_requestHandlers;
@property(retain, nonatomic) NSMutableArray *activeRequests; // @synthesize activeRequests=_activeRequests;
- (id)popRequestWithUUID:(id)arg1;	// IMP=0x0000000000083602
- (id)popActiveRequest;	// IMP=0x0000000000083582
- (id)popRequest:(id)arg1;	// IMP=0x000000000008351a
- (void)registerOutgoingRequest:(id)arg1;	// IMP=0x00000000000834a8
- (CDUnknownBlockType)handlerForIncomingRequestWithAction:(id)arg1 scheme:(id)arg2;	// IMP=0x00000000000832b3
- (void)removeHandlerForIncomingRequestsWithAction:(id)arg1 scheme:(id)arg2;	// IMP=0x00000000000831e3
- (void)registerHandler:(CDUnknownBlockType)arg1 forIncomingRequestsWithAction:(id)arg2 scheme:(id)arg3;	// IMP=0x000000000008308c

@end

