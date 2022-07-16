//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface FMJSONCommand
{
    _Bool __hasParsedResponseBody;	// 8 = 0x8
    NSError *_jsonResponseParseError;	// 16 = 0x10
    NSDictionary *__responseBodyDict;	// 24 = 0x18
    NSDictionary *__requestBodyDict;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_responseQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000cd17
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain, nonatomic) NSDictionary *_requestBodyDict; // @synthesize _requestBodyDict=__requestBodyDict;
@property(retain, nonatomic) NSDictionary *_responseBodyDict; // @synthesize _responseBodyDict=__responseBodyDict;
@property(nonatomic) _Bool _hasParsedResponseBody; // @synthesize _hasParsedResponseBody=__hasParsedResponseBody;
@property(retain, nonatomic) NSError *jsonResponseParseError; // @synthesize jsonResponseParseError=_jsonResponseParseError;
@property(readonly, nonatomic) NSDictionary *serverAlertInfo;
@property(readonly, nonatomic) NSDictionary *jsonResponseDictionary;
- (id)jsonBodyDictionary;	// IMP=0x000000000000c6bf
- (id)body;	// IMP=0x000000000000c4cb
- (id)headers;	// IMP=0x000000000000c3a5
- (void)sendRequest;	// IMP=0x000000000000c33f
- (id)init;	// IMP=0x000000000000c2d2

@end

