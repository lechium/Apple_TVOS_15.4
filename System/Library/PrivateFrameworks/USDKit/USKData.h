//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString, USKNode, USKProperty, USKScene;

@interface USKData : NSObject
{
    struct VtValue _value;	// 8 = 0x8
    USKNode *_nodeOwner;	// 24 = 0x18
    USKScene *_sceneOwner;	// 32 = 0x20
    USKProperty *_propertyOwner;	// 40 = 0x28
    NSString *_type;	// 48 = 0x30
    unsigned long long _arraySize;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0000000000433e2f
- (void).cxx_destruct;	// IMP=0x0000000000433de8
@property(readonly, nonatomic) unsigned long long arraySize; // @synthesize arraySize=_arraySize;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (unsigned long long)hash;	// IMP=0x0000000000433dc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000433ceb
- (id)initWithDouble4x4Array:(CDStruct_f1db2b5e *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000433a0a
- (id)initWithDouble4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000433846
- (id)initWithDouble3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000043367d
- (id)initWithDouble2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004334d2
- (id)initWithDoubleArray:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000043334e
- (id)initWithFloat4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004331a3
- (id)initWithFloat3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000432fe9
- (id)initWithFloat2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000432e4a
- (id)initWithFloatArray:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000432cc6
- (id)initWithResourcePathArray:(id)arg1;	// IMP=0x0000000000432950
- (id)initWithTokenArray:(id)arg1;	// IMP=0x00000000004326bf
- (id)initWithStringArray:(id)arg1;	// IMP=0x000000000043244d
- (id)initWithQuatfArray:(struct *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004322a2
- (id)initWithUIntArray:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000043211e
- (id)initWithIntArray:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000431f9a
- (id)initWithQuatf:(struct)arg1;	// IMP=0x0000000000431ea6
- (id)initWithDouble4x4:(CDStruct_f1db2b5e)arg1;	// IMP=0x0000000000431d13
- (id)initWithDouble4: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000431c07
- (id)initWithDouble3: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000431afb
- (id)initWithDouble2: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000431a03
- (id)initWithDouble:(double)arg1;	// IMP=0x000000000043192a
- (id)initWithFloat4: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000431832
- (id)initWithFloat3: /* Error: Ran out of types for this method. */;	// IMP=0x000000000043172e
- (id)initWithFloat2: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000431655
- (id)initWithFloat:(float)arg1;	// IMP=0x000000000043157c
- (id)initWithResourcePath:(id)arg1;	// IMP=0x00000000004313e1
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000431202
- (id)initWithObjectPath:(id)arg1;	// IMP=0x0000000000431093
- (id)initWithUInt:(unsigned int)arg1;	// IMP=0x0000000000430fbe
- (id)initWithInt:(int)arg1;	// IMP=0x0000000000430ee9
- (id)initWithBool:(_Bool)arg1;	// IMP=0x0000000000430e14
- (id)initWithTimeCode:(id)arg1;	// IMP=0x0000000000430d08
- (id)initWithString:(id)arg1;	// IMP=0x0000000000430bf0
- (id)initWithToken:(id)arg1;	// IMP=0x0000000000430a95
- (void)setDouble4x4Array:(CDStruct_f1db2b5e *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000430890
- (void)setDouble4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000043072a
- (void)setDouble3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004305c0
- (void)setDouble2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000430478
- (void)setDoubleArray:(double *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000430346
- (void)setFloat4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000043019d
- (void)setFloat3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000430040
- (void)setFloat2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000042fe99
- (void)setFloatArray:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000042fd61
- (void)setResourcePathArray:(id)arg1;	// IMP=0x000000000042fa57
- (void)setTokenArray:(id)arg1;	// IMP=0x000000000042f83c
- (void)setStringArray:(id)arg1;	// IMP=0x000000000042ed72
- (void)setQuatfArray:(struct *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000042ebe1
- (void)setUIntArray:(unsigned int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000042eaa9
- (void)setIntArray:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000042e911
- (void)setQuatfValue:(struct)arg1;	// IMP=0x000000000042e877
- (void)setDouble4x4Value:(CDStruct_f1db2b5e)arg1;	// IMP=0x000000000042e744
- (void)setDouble4Value: /* Error: Ran out of types for this method. */;	// IMP=0x000000000042e692
- (void)setDouble3Value: /* Error: Ran out of types for this method. */;	// IMP=0x000000000042e5dc
- (void)setDouble2Value: /* Error: Ran out of types for this method. */;	// IMP=0x000000000042e53e
- (void)setDoubleValue:(double)arg1;	// IMP=0x000000000042e4ca
- (void)setFloat4Value: /* Error: Ran out of types for this method. */;	// IMP=0x000000000042e42c
- (void)setFloat3Value: /* Error: Ran out of types for this method. */;	// IMP=0x000000000042e37e
- (void)setFloat2Value: /* Error: Ran out of types for this method. */;	// IMP=0x000000000042e30a
- (void)setFloatValue:(float)arg1;	// IMP=0x000000000042e296
- (void)setResourcePath:(id)arg1;	// IMP=0x000000000042e151
- (void)setURLValue:(id)arg1;	// IMP=0x000000000042e004
- (void)setObjectPathValue:(id)arg1;	// IMP=0x000000000042deec
- (void)setUIntValue:(unsigned int)arg1;	// IMP=0x000000000042de77
- (void)setIntValue:(int)arg1;	// IMP=0x000000000042de02
- (void)setBoolValue:(_Bool)arg1;	// IMP=0x000000000042dd8d
- (void)setTimeCodeValue:(id)arg1;	// IMP=0x000000000042dcdc
- (void)setStringValue:(id)arg1;	// IMP=0x000000000042da05
- (void)setTokenValue:(id)arg1;	// IMP=0x000000000042d8ff
- (void)setValue:(struct VtValue)arg1;	// IMP=0x000000000042d7f8
- (unsigned long long)double4x4Array:(CDStruct_f1db2b5e *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042d6a7
- (unsigned long long)double4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042d4bf
- (unsigned long long)double3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042d2cf
- (unsigned long long)double2Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042d0f2
- (unsigned long long)doubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042ced4
- (unsigned long long)float4x4Array:(CDStruct_f1db2b5e *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042ccac
- (unsigned long long)float4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042cacf
- (unsigned long long)float3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042c8dd
- (unsigned long long)float2Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042c706
- (unsigned long long)floatArray:(float *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042c4e8
- (id)resourcePathArray;	// IMP=0x000000000042c33f
- (id)pathArray;	// IMP=0x000000000042c1c6
- (id)tokenArray;	// IMP=0x000000000042c002
- (id)stringArray;	// IMP=0x000000000042be70
- (unsigned long long)quatfArray:(struct *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042bc93
- (unsigned long long)uintArray:(unsigned int *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042ba75
- (unsigned long long)intArray:(int *)arg1 maxCount:(unsigned long long)arg2;	// IMP=0x000000000042b857
- (id)resourcePath;	// IMP=0x000000000042b6fb
- (id)urlValue;	// IMP=0x000000000042b497
- (id)objectPathValue;	// IMP=0x000000000042b29d
- (struct)quatfValue;	// IMP=0x000000000042b13c
- (CDStruct_f1db2b5e)double4x4Value;	// IMP=0x000000000042b010
- (MISSING_TYPE *)double4Value;	// IMP=0x000000000042ae93
- (MISSING_TYPE *)double3Value;	// IMP=0x000000000042ad03
- (MISSING_TYPE *)double2Value;	// IMP=0x000000000042aba2
- (double)doubleValue;	// IMP=0x000000000042aa3c
- (CDStruct_f1db2b5e)float4x4Value;	// IMP=0x000000000042a7d1
- (MISSING_TYPE *)float4Value;	// IMP=0x000000000042a670
- (MISSING_TYPE *)float3Value;	// IMP=0x000000000042a4f0
- (MISSING_TYPE *)float2Value;	// IMP=0x000000000042a390
- (float)floatValue;	// IMP=0x000000000042a22a
- (unsigned int)uintValue;	// IMP=0x000000000042a0d1
- (int)intValue;	// IMP=0x0000000000429f78
- (_Bool)boolValue;	// IMP=0x0000000000429e20
- (id)timeCodeValue;	// IMP=0x0000000000429c9e
- (id)stringValue;	// IMP=0x00000000004298cc
- (id)tokenValue;	// IMP=0x00000000004296e9
@property(readonly, retain, nonatomic) NSData *dataNoCopy;
- (id)initWithVtValue:(struct VtValue)arg1 typeName:(struct TfToken)arg2 withPropertyOwner:(id)arg3;	// IMP=0x0000000000429507
- (id)initWithVtValue:(struct VtValue)arg1 typeName:(struct TfToken)arg2 withSceneOwner:(id)arg3;	// IMP=0x00000000004293c1
- (id)initWithVtValue:(struct VtValue)arg1 typeName:(struct TfToken)arg2 withNodeOwner:(id)arg3;	// IMP=0x000000000042927b
- (id)initWithVtValue:(struct VtValue)arg1 typeName:(struct TfToken)arg2;	// IMP=0x0000000000429166
- (struct VtValue)value;	// IMP=0x0000000000429140

@end
