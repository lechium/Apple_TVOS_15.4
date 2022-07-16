//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICStoreRequestContext, NSString;

@interface ICRadioLikeRequest : NSObject <NSCopying>
{
    long long _storeAdamID;	// 8 = 0x8
    long long _likeState;	// 16 = 0x10
    NSString *_stationHash;	// 24 = 0x18
    long long _stationID;	// 32 = 0x20
    NSString *_stationStringID;	// 40 = 0x28
    long long _qualityOfService;	// 48 = 0x30
    ICStoreRequestContext *_requestContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000129a14
@property(copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(copy, nonatomic) NSString *stationStringID; // @synthesize stationStringID=_stationStringID;
@property(nonatomic) long long stationID; // @synthesize stationID=_stationID;
@property(copy, nonatomic) NSString *stationHash; // @synthesize stationHash=_stationHash;
@property(nonatomic) long long likeState; // @synthesize likeState=_likeState;
@property(nonatomic) long long storeAdamID; // @synthesize storeAdamID=_storeAdamID;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001297d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000012970f
- (id)initWithRequestContext:(id)arg1;	// IMP=0x0000000000129694

@end
