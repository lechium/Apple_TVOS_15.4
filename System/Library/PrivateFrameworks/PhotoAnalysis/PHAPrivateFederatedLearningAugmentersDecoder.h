//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface PHAPrivateFederatedLearningAugmentersDecoder : NSObject
{
    NSDictionary *_augmenterNameToClass;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c4334
@property(readonly, nonatomic) NSDictionary *augmenterNameToClass; // @synthesize augmenterNameToClass=_augmenterNameToClass;
- (_Bool)_generateError:(id *)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;	// IMP=0x00000000000c4231
- (id)instanceForAugmenterConfig:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c4012
- (id)augmentersFromArray:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c3e19
- (id)init;	// IMP=0x00000000000c3ced

@end

