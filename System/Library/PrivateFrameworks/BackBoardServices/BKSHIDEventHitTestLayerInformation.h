//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BSDescriptionStreamable-Protocol.h>
#import <BackBoardServices/BSProtobufSerializable-Protocol.h>
#import <BackBoardServices/NSCopying-Protocol.h>
#import <BackBoardServices/NSMutableCopying-Protocol.h>
#import <BackBoardServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface BKSHIDEventHitTestLayerInformation : NSObject <NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable, NSCopying, NSMutableCopying>
{
    unsigned long long _validMask;	// 8 = 0x8
    float _cumulativeOpacity;	// 16 = 0x10
    float _backgroundMinimum;	// 20 = 0x14
    float _backgroundMaximum;	// 24 = 0x18
    float _backgroundAverage;	// 28 = 0x1c
    float _backgroundStandardDeviation;	// 32 = 0x20
    struct CATransform3D _cumulativeLayerTransform;	// 40 = 0x28
    struct CATransform3D _cumulativeContentsTransform;	// 168 = 0xa8
    _Bool _hasInsecureFilter;	// 296 = 0x128
    _Bool _detectedOcclusion;	// 297 = 0x129
}

+ (id)protobufSchema;	// IMP=0x00000000000386dd
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000386d5
+ (id)new;	// IMP=0x00000000000385a7
+ (id)build:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038536
- (void)_updateCCHmacContext:(CDStruct_43cfb2c2 *)arg1;	// IMP=0x000000000003752a
@property(readonly, copy, nonatomic) NSArray *maximumBackgroundColor;
@property(readonly, copy, nonatomic) NSArray *minimumBackgroundColor;
@property(readonly, nonatomic) float backgroundStandardDeviation;
@property(readonly, nonatomic) float backgroundAverage;
@property(readonly, nonatomic) float backgroundMaximum;
@property(readonly, nonatomic) float backgroundMinimum;
@property(readonly, nonatomic) _Bool detectedOcclusion;
@property(readonly, nonatomic) _Bool hasInsecureFilter;
@property(readonly, nonatomic) float cumulativeOpacity;
@property(readonly, nonatomic) struct CATransform3D cumulativeContentsTransform;
@property(readonly, nonatomic) struct CATransform3D cumulativeLayerTransform;
@property(readonly, nonatomic) struct CATransform3D cumulativeTransform;
@property(readonly, nonatomic) unsigned long long validMask;
- (id)initForProtobufDecoding;	// IMP=0x00000000000372fe
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x000000000003726c
@property(readonly, copy) NSString *description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003722a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000037204
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000036f58
@property(readonly) unsigned long long hash;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000361e8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000035fc7
- (id)init;	// IMP=0x0000000000035e99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

