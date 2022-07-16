//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreML/MLBatchProvider-Protocol.h>
#import <CoreML/NSSecureCoding-Protocol.h>

@class NSArray;

@interface MLArrayDictionaryFeatureProvider : NSObject <MLBatchProvider, NSSecureCoding>
{
    NSArray *_array;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b4236
- (void).cxx_destruct;	// IMP=0x00000000000b4226
@property(readonly, nonatomic) NSArray *array; // @synthesize array=_array;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b4073
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b3ffa
- (id)featuresAtIndex:(long long)arg1;	// IMP=0x00000000000b3f53
@property(readonly, nonatomic) long long count;
- (id)initWithDictionaryFeatureProviderArray:(id)arg1;	// IMP=0x00000000000b3ea4

@end

