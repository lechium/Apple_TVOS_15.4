//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessage, NSMutableArray, NSString;

@interface HMDPendingResponse : HMFObject
{
    HMFMessage *_requestMessage;	// 8 = 0x8
    NSString *_originalRequestIdentifier;	// 16 = 0x10
    unsigned long long _pendingResponseCount;	// 24 = 0x18
    unsigned long long _totalRequestsCount;	// 32 = 0x20
    NSMutableArray *_allResponses;	// 40 = 0x28
    NSMutableArray *_latestResponses;	// 48 = 0x30
    CDUnknownBlockType _responseHandler;	// 56 = 0x38
    double _creationTime;	// 64 = 0x40
}

+ (id)tupleForMessage:(id)arg1 originalRequestIdentifier:(id)arg2 requestCount:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000009ea87
- (void).cxx_destruct;	// IMP=0x000000000009ea23
@property(nonatomic) double creationTime; // @synthesize creationTime=_creationTime;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSMutableArray *latestResponses; // @synthesize latestResponses=_latestResponses;
@property(retain, nonatomic) NSMutableArray *allResponses; // @synthesize allResponses=_allResponses;
@property(nonatomic) unsigned long long totalRequestsCount; // @synthesize totalRequestsCount=_totalRequestsCount;
@property(nonatomic) unsigned long long pendingResponseCount; // @synthesize pendingResponseCount=_pendingResponseCount;
@property(retain, nonatomic) NSString *originalRequestIdentifier; // @synthesize originalRequestIdentifier=_originalRequestIdentifier;
@property(retain, nonatomic) HMFMessage *requestMessage; // @synthesize requestMessage=_requestMessage;
- (id)retrieveAndClearLatestResponses;	// IMP=0x000000000009e87a
- (id)retrieveAndClearAllResponses;	// IMP=0x000000000009e7c4
- (void)addResponsesToPendingResponse:(id)arg1;	// IMP=0x000000000009e6f4
- (void)addToPendingResponses:(id)arg1;	// IMP=0x000000000009e62c
- (id)description;	// IMP=0x000000000009e56b

@end

