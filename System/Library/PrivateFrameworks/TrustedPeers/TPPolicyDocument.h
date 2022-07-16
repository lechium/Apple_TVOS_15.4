//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, TPPolicyVersion;

@interface TPPolicyDocument : NSObject
{
    TPPolicyVersion *_version;	// 8 = 0x8
    NSData *_protobuf;	// 16 = 0x10
}

+ (_Bool)isEqualKeyViewMapping:(id)arg1 other:(id)arg2;	// IMP=0x0000000000017d59
+ (id)redactionWithEncrypter:(id)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 keyViewMapping:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000017bf4
+ (id)policyDocWithHash:(id)arg1 data:(id)arg2;	// IMP=0x0000000000017b84
+ (void)addKeyViewMapping:(id)arg1 toPB:(id)arg2;	// IMP=0x0000000000017a35
+ (void)addRedactions:(id)arg1 toPB:(id)arg2;	// IMP=0x00000000000177c7
+ (void)addIntroducersByCategory:(id)arg1 toPB:(id)arg2;	// IMP=0x0000000000017509
+ (void)addCategoriesByView:(id)arg1 toPB:(id)arg2;	// IMP=0x000000000001724b
+ (void)addModelToCategory:(id)arg1 toPB:(id)arg2;	// IMP=0x0000000000016f7d
+ (id)redactionsFromPb:(id)arg1;	// IMP=0x0000000000016d5f
+ (id)introducersByCategoryFromPb:(id)arg1;	// IMP=0x0000000000016b0c
+ (id)categoriesByViewFromPb:(id)arg1;	// IMP=0x00000000000168b9
+ (id)modelToCategoryFromPb:(id)arg1;	// IMP=0x000000000001665b
- (void).cxx_destruct;	// IMP=0x0000000000016633
@property(readonly, nonatomic) NSData *protobuf; // @synthesize protobuf=_protobuf;
@property(readonly, nonatomic) TPPolicyVersion *version; // @synthesize version=_version;
- (unsigned long long)hash;	// IMP=0x00000000000165b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001654a
- (id)cloneWithVersionNumber:(unsigned long long)arg1 prependingCategoriesByView:(id)arg2 prependingKeyViewMapping:(id)arg3;	// IMP=0x0000000000015fd7
- (id)cloneWithVersionNumber:(unsigned long long)arg1;	// IMP=0x0000000000015fc0
- (_Bool)isEqualToPolicyDocument:(id)arg1;	// IMP=0x0000000000015f23
- (id)description;	// IMP=0x0000000000015eb7
@property(readonly) NSArray *keyViewMapping;
- (id)policyWithSecrets:(id)arg1 decrypter:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001563f
- (id)encodeProtobuf;	// IMP=0x00000000000155d6
- (id)initWithVersion:(unsigned long long)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 redactions:(id)arg5 keyViewMapping:(id)arg6 userControllableViewList:(id)arg7 piggybackViews:(id)arg8 priorityViews:(id)arg9 inheritedExcludedViews:(id)arg10 hashAlgo:(long long)arg11;	// IMP=0x00000000000152c7
- (id)initWithHash:(id)arg1 data:(id)arg2;	// IMP=0x0000000000015129

@end

