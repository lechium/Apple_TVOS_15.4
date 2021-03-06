//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PHAPrivateFederatedLearningTransformersDecoder : NSObject
{
    NSDictionary *_transformerNameToClass;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002ab21
@property(readonly, nonatomic) NSDictionary *transformerNameToClass; // @synthesize transformerNameToClass=_transformerNameToClass;
- (_Bool)_generateError:(id *)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;	// IMP=0x000000000002aa1e
- (id)instanceForTransformerConfig:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a7ff
- (id)instancesForTransformerConfigList:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a5ae
- (id)transformersForFeatureExtractorsFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002a34c
- (id)init;	// IMP=0x000000000002a130

@end

