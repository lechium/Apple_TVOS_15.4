//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelRequest;

@interface MPModelShimRequest
{
    MPModelRequest *_modelRequest;	// 8 = 0x8
}

+ (Class)responseClass;	// IMP=0x000000000008e91f
- (void).cxx_destruct;	// IMP=0x000000000008e785
@property(retain, nonatomic) MPModelRequest *modelRequest; // @synthesize modelRequest=_modelRequest;
- (id)middlewareClasses;	// IMP=0x000000000008e6f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e68f
- (id)description;	// IMP=0x000000000008e5c8

@end
