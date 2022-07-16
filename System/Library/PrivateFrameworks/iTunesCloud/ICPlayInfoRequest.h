//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICPlayInfoResponse, ICStoreRequestContext, NSArray, NSData, NSNumber, NSString;

@interface ICPlayInfoRequest
{
    ICStoreRequestContext *_requestContext;	// 8 = 0x8
    ICPlayInfoResponse *_response;	// 16 = 0x10
    NSString *_playerGUID;	// 24 = 0x18
    NSData *_SICData;	// 32 = 0x20
    NSArray *_sinfs;	// 40 = 0x28
    NSNumber *_DSID;	// 48 = 0x30
    NSNumber *_contentIdentifier;	// 56 = 0x38
    NSString *_subscriptionPlaybackType;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000139435
@property(copy, nonatomic) NSString *subscriptionPlaybackType; // @synthesize subscriptionPlaybackType=_subscriptionPlaybackType;
@property(copy, nonatomic) NSNumber *contentIdentifier; // @synthesize contentIdentifier=_contentIdentifier;
@property(copy, nonatomic) NSNumber *DSID; // @synthesize DSID=_DSID;
@property(copy, nonatomic) NSArray *sinfs; // @synthesize sinfs=_sinfs;
@property(copy, nonatomic) NSData *SICData; // @synthesize SICData=_SICData;
@property(copy, nonatomic) NSString *playerGUID; // @synthesize playerGUID=_playerGUID;
- (_Bool)_hasRentalInfo;	// IMP=0x0000000000139361
- (id)_getSinfParamValue:(int)arg1;	// IMP=0x0000000000139359
- (void)execute;	// IMP=0x0000000000138ddf
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000138d4d
- (id)initWithRequestContext:(id)arg1;	// IMP=0x0000000000138cd3

@end

