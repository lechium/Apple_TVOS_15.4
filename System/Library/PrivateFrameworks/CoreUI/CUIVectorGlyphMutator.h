//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CUIVectorGlyphMutator : NSObject
{
    struct CGPath *_originPath;	// 8 = 0x8
    double _pointSize;	// 16 = 0x10
    struct {
        double *pointComponents;
        unsigned long long numPoints;
    } _originPoints;	// 24 = 0x18
    CDStruct_351aa1f6 _ultralightDeltas;	// 40 = 0x28
    CDStruct_351aa1f6 _blackDeltas;	// 56 = 0x38
}

+ (CDStruct_c3b9c2ee)scalarsForGlyphWeight:(long long)arg1 glyphSize:(long long)arg2;	// IMP=0x000000000005bad7
+ (CDStruct_c3b9c2ee)transformForGlyphSize:(long long)arg1;	// IMP=0x000000000005ba96
+ (CDStruct_f92c8eab)deltaArrayFrom:(CDStruct_f92c8eab)arg1 to:(CDStruct_f92c8eab)arg2;	// IMP=0x000000000005ba2b
+ (CDStruct_f92c8eab)pointArrayFromPath:(struct CGPath *)arg1;	// IMP=0x000000000005b48c
+ (double *)realloc_cgfloat_array:(double *)arg1 withNewCount:(unsigned long long)arg2;	// IMP=0x000000000005b433
@property(nonatomic) CDStruct_f92c8eab blackDeltas; // @synthesize blackDeltas=_blackDeltas;
@property(nonatomic) CDStruct_f92c8eab ultralightDeltas; // @synthesize ultralightDeltas=_ultralightDeltas;
@property(nonatomic) CDStruct_f92c8eab originPoints; // @synthesize originPoints=_originPoints;
@property(nonatomic) double pointSize; // @synthesize pointSize=_pointSize;
@property(nonatomic) struct CGPath *originPath; // @synthesize originPath=_originPath;
- (struct CGPath *)cgPathFrom:(CDStruct_f92c8eab)arg1;	// IMP=0x000000000005bb60
- (struct CGPath *)pathForScalars:(CDStruct_c3b9c2ee)arg1 andTransform:(CDStruct_c3b9c2ee)arg2;	// IMP=0x000000000005b3ff
- (struct CGPath *)pathForScalars:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000005b3cb
- (CDStruct_f92c8eab)applyDeltasWithScalars:(CDStruct_c3b9c2ee)arg1 andTransform:(CDStruct_c3b9c2ee)arg2;	// IMP=0x000000000005b28e
- (CDStruct_f92c8eab)applyDeltasWithScalars:(CDStruct_c3b9c2ee)arg1;	// IMP=0x000000000005b271
- (void)dealloc;	// IMP=0x000000000005b1ed
- (id)initWithPointSize:(double)arg1 regular:(struct CGPath *)arg2 ultralight:(struct CGPath *)arg3 black:(struct CGPath *)arg4;	// IMP=0x000000000005b068

@end
