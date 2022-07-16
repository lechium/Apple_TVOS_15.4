//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoadingRequest, NSDictionary, NSNumber, NSURL;

@interface TVPResourceLoadingRequest : NSObject
{
    AVAssetResourceLoadingRequest *_loadingRequest;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000f5c5d
@property(readonly, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
- (id)init;	// IMP=0x00000000000f5c28
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSNumber *avRequestID;
- (void)finishLoadingWithError:(id)arg1;	// IMP=0x00000000000f5b6f
- (void)finishLoadingWithResponseData:(id)arg1 renewalDate:(id)arg2 keyType:(long long)arg3;	// IMP=0x00000000000f59aa
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 renewalDate:(id)arg3 redirect:(id)arg4;	// IMP=0x00000000000f589f
@property(readonly, nonatomic) _Bool isCancelled;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithAssetResourceLoadingRequest:(id)arg1;	// IMP=0x00000000000f5776

@end
