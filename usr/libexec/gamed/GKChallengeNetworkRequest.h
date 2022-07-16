//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSMutableSet, NSMutableURLRequest, NSString, NSURLSessionTask;

@interface GKChallengeNetworkRequest : NSObject
{
    _Bool currentlyRunning;	// 8 = 0x8
    _Bool issueRequests;	// 9 = 0x9
    NSURLSessionTask *nsurlTask;	// 16 = 0x10
    NSMutableURLRequest *nsurlRequest;	// 24 = 0x18
    NSString *playerID;	// 32 = 0x20
    NSMutableSet *challenges;	// 40 = 0x28
    NSString *bundleID;	// 48 = 0x30
    NSString *uuid;	// 56 = 0x38
    NSMutableDictionary *requestData;	// 64 = 0x40
}

+ (id)bagKey;	// IMP=0x002000000023bf48
- (void).cxx_destruct;	// IMP=0x002000000023c76f
@property(retain, nonatomic) NSMutableDictionary *requestData; // @synthesize requestData;
@property(nonatomic) _Bool issueRequests; // @synthesize issueRequests;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID;
@property(retain, nonatomic) NSMutableSet *challenges; // @synthesize challenges;
@property(nonatomic) _Bool currentlyRunning; // @synthesize currentlyRunning;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID;
@property(retain, nonatomic) NSMutableURLRequest *nsurlRequest; // @synthesize nsurlRequest;
@property(retain, nonatomic) NSURLSessionTask *nsurlTask; // @synthesize nsurlTask;
@property(readonly, copy) NSString *description;
- (id)requestIdentifier;	// IMP=0x001000000023c5da
- (void)updateWithTaskInfo:(id)arg1;	// IMP=0x001000000023c466
- (id)taskInfo;	// IMP=0x001000000023c2eb
- (id)postBody;	// IMP=0x001000000023c25d
- (MISSING_TYPE *)initWithTask: /* Error: Ran out of types for this method. */;	// IMP=0x001000000023c1b1
- (void)mergeRequestData:(id)arg1;	// IMP=0x001000000023c125
- (_Bool)isDuplicateRequest:(id)arg1;	// IMP=0x001000000023c094
- (id)initWithChallenges:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000023bf68
- (void)handleNetworkRequest:(id)arg1 session:(id)arg2 clientProxy:(id)arg3;	// IMP=0x001000000023bf55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
