//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreRequestContext, ICUserVerificationContext;

@interface ICUserVerificationRequest : NSObject <NSCopying>
{
    long long _qualityOfService;	// 8 = 0x8
    ICStoreRequestContext *_storeRequestContext;	// 16 = 0x10
    ICUserVerificationContext *_verificationContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000192ce1
@property(readonly, copy, nonatomic) ICUserVerificationContext *verificationContext; // @synthesize verificationContext=_verificationContext;
@property(copy, nonatomic) ICStoreRequestContext *storeRequestContext; // @synthesize storeRequestContext=_storeRequestContext;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000192bc1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000192b56
- (id)initWithVerificationContext:(id)arg1;	// IMP=0x0000000000192adb

@end

