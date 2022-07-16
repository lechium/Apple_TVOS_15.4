//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IAPInfoUpdateRequestContext, NSData;
@protocol IAPInfoBagContract;

@interface IAPInfoUpdateRequest : NSObject
{
    id <IAPInfoBagContract> _bagContract;	// 8 = 0x8
    IAPInfoUpdateRequestContext *_context;	// 16 = 0x10
    NSData *_responseData;	// 24 = 0x18
    unsigned int _status;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000168d53
- (id)_parseResponseData:(id)arg1;	// IMP=0x0010000000168ccb
- (id)_requestURLWithError:(id *)arg1;	// IMP=0x0010000000168a39
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000168624
- (id)initWithBagContract:(id)arg1 context:(id)arg2;	// IMP=0x001000000016858b

@end

