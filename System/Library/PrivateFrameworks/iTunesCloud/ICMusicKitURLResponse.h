//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSString;

@interface ICMusicKitURLResponse
{
    NSString *_serverCorrelationKey;	// 8 = 0x8
    NSString *_serverEnvironment;	// 16 = 0x10
    NSError *_serverError;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000119437
@property(readonly, nonatomic) NSError *serverError; // @synthesize serverError=_serverError;
@property(readonly, copy, nonatomic) NSString *serverEnvironment; // @synthesize serverEnvironment=_serverEnvironment;
@property(readonly, copy, nonatomic) NSString *serverCorrelationKey; // @synthesize serverCorrelationKey=_serverCorrelationKey;
- (void)_initializeMusicKitURLResponse;	// IMP=0x0000000000119338
- (id)_parseServerErrorDictionary:(id)arg1;	// IMP=0x000000000011915e
- (id)_parseServerError;	// IMP=0x0000000000119066
- (id)description;	// IMP=0x0000000000118f13
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyDataURL:(id)arg3 performanceMetrics:(id)arg4;	// IMP=0x0000000000118ec7
- (id)initWithURLResponse:(id)arg1 urlRequest:(id)arg2 bodyData:(id)arg3 performanceMetrics:(id)arg4;	// IMP=0x0000000000118e7b

@end

