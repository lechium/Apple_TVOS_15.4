//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTransformOp-Protocol.h>

@class MDLAnimatedVector3, NSString;

@interface MDLTransformScaleOp : NSObject <MDLTransformOp>
{
    _Bool _inverse;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    MDLAnimatedVector3 *_animatedValue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000036cfdc
@property(nonatomic) _Bool inverse; // @synthesize inverse=_inverse;
@property(readonly, nonatomic) MDLAnimatedVector3 *animatedValue; // @synthesize animatedValue=_animatedValue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (CDStruct_14d5dc5e)double4x4AtTime:(double)arg1;	// IMP=0x000000000036ce5f
- (CDStruct_14d5dc5e)float4x4AtTime:(double)arg1;	// IMP=0x000000000036cdaa
- (_Bool)IsInverseOp;	// IMP=0x000000000036cda1
- (id)initWithName:(id)arg1 inverse:(_Bool)arg2 data:(id)arg3;	// IMP=0x000000000036ccd2

@end
