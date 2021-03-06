//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSString, NSURL;
@protocol TRIAssetId;

@interface TRIAssetIdURL : NSObject <NSCopying>
{
    NSString<TRIAssetId> *_assetId;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

+ (id)urlWithAssetId:(id)arg1 url:(id)arg2;	// IMP=0x000000000000d708
- (void).cxx_destruct;	// IMP=0x000000000000da6c
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) NSString<TRIAssetId> *assetId; // @synthesize assetId=_assetId;
- (id)init;	// IMP=0x000000000000da52
- (id)description;	// IMP=0x000000000000da0e
- (unsigned long long)hash;	// IMP=0x000000000000d9c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000d95f
- (_Bool)isEqualTourl:(id)arg1;	// IMP=0x000000000000d821
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d816
- (id)copyWithReplacementUrl:(id)arg1;	// IMP=0x000000000000d7c5
- (id)copyWithReplacementAssetId:(id)arg1;	// IMP=0x000000000000d774
- (id)initWithAssetId:(id)arg1 url:(id)arg2;	// IMP=0x000000000000d580

@end

