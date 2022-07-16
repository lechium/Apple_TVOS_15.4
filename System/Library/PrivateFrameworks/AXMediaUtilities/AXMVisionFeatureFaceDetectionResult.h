//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMVisionFeatureFaceAttributes, AXMVisionFeatureFaceLandmarks, NSDictionary, NSString, NSUUID;

@interface AXMVisionFeatureFaceDetectionResult : NSObject <NSSecureCoding>
{
    long long _likelyExpression;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    unsigned long long _faceId;	// 32 = 0x20
    double _rectanglesConfidence;	// 40 = 0x28
    double _nameConfidence;	// 48 = 0x30
    AXMVisionFeatureFaceAttributes *_attributes;	// 56 = 0x38
    double _attributesConfidence;	// 64 = 0x40
    NSDictionary *_expressionsAndConfidence;	// 72 = 0x48
    AXMVisionFeatureFaceLandmarks *_landmarks;	// 80 = 0x50
    AXMVisionFeatureFaceLandmarks *_landmarks3d;	// 88 = 0x58
    double _landmarksConfidence;	// 96 = 0x60
    double _poseConfidence;	// 104 = 0x68
    struct CGRect _frame;	// 112 = 0x70
    CDStruct_14d5dc5e _pose;	// 144 = 0x90
}

+ (id)localizedStringFormatterForExpression:(id)arg1;	// IMP=0x000000000002fd20
+ (id)nameForFaceExpression:(long long)arg1;	// IMP=0x000000000002f96f
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002f110
- (void).cxx_destruct;	// IMP=0x00000000000301d2
@property(nonatomic) double poseConfidence; // @synthesize poseConfidence=_poseConfidence;
@property(nonatomic) CDStruct_14d5dc5e pose; // @synthesize pose=_pose;
@property(nonatomic) double landmarksConfidence; // @synthesize landmarksConfidence=_landmarksConfidence;
@property(retain, nonatomic) AXMVisionFeatureFaceLandmarks *landmarks3d; // @synthesize landmarks3d=_landmarks3d;
@property(retain, nonatomic) AXMVisionFeatureFaceLandmarks *landmarks; // @synthesize landmarks=_landmarks;
@property(retain, nonatomic) NSDictionary *expressionsAndConfidence; // @synthesize expressionsAndConfidence=_expressionsAndConfidence;
@property(nonatomic) double attributesConfidence; // @synthesize attributesConfidence=_attributesConfidence;
@property(retain, nonatomic) AXMVisionFeatureFaceAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) double nameConfidence; // @synthesize nameConfidence=_nameConfidence;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double rectanglesConfidence; // @synthesize rectanglesConfidence=_rectanglesConfidence;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned long long faceId; // @synthesize faceId=_faceId;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (long long)_expressionForString:(id)arg1;	// IMP=0x000000000002ff30
- (id)descriptionForExpression:(long long)arg1;	// IMP=0x000000000002fec4
@property(readonly, nonatomic) long long likelyExpression;
- (double)confidenceForExpression:(long long)arg1;	// IMP=0x000000000002f9e0
- (id)_init;	// IMP=0x000000000002f933
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002f454
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002f118

@end
