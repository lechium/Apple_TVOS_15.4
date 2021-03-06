//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@interface _UIFloatingMotionConfiguration : NSObject <NSCopying>
{
    struct CGPoint _rotation;	// 8 = 0x8
    struct CGPoint _translation;	// 24 = 0x18
}

+ (id)configurationWithTranslation:(struct CGPoint)arg1;	// IMP=0x00000000000f0831
+ (id)configurationWithRotation:(struct CGPoint)arg1;	// IMP=0x00000000000f07e3
+ (id)configurationWithLargeTranslationOnAxis:(unsigned long long)arg1;	// IMP=0x00000000000f076d
+ (id)configurationWithTranslationOnAxis:(unsigned long long)arg1;	// IMP=0x00000000000f06f7
+ (id)configurationWithRotationOnAxis:(unsigned long long)arg1;	// IMP=0x00000000000f0681
@property(readonly, nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(readonly, nonatomic) struct CGPoint rotation; // @synthesize rotation=_rotation;
- (unsigned long long)hash;	// IMP=0x00000000000f09ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f08fa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000f08ef
- (id)_initWithTranslation:(struct CGPoint)arg1 rotation:(struct CGPoint)arg2;	// IMP=0x00000000000f087f

@end

