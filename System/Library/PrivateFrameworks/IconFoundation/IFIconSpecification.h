//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IFIconSpecification : NSObject
{
    NSString *_name;	// 8 = 0x8
    double _maxScale;	// 16 = 0x10
    double _minScale;	// 24 = 0x18
    NSArray *_variants;	// 32 = 0x20
    NSArray *_imageSpecifications;	// 40 = 0x28
    struct CGSize _maxSize;	// 48 = 0x30
    struct CGSize _minSize;	// 64 = 0x40
}

+ (id)defaultIconSpecification;	// IMP=0x0000000000007599
+ (id)watchAppIconSpecification;	// IMP=0x0000000000006d19
+ (id)iosMessagesAppIconSpecification;	// IMP=0x0000000000006708
+ (id)iosDocumentIconSpecification;	// IMP=0x0000000000005dd6
+ (id)iosDocumentGlyphSpecification;	// IMP=0x00000000000059fb
+ (id)iosAppIconSpecification;	// IMP=0x0000000000004b7c
+ (id)macosTemplateIconSpecification;	// IMP=0x0000000000004685
+ (id)macosDocumentIconSpecification;	// IMP=0x0000000000003b85
+ (id)macosIconSpecification;	// IMP=0x0000000000002e33
- (void).cxx_destruct;	// IMP=0x0000000000002e00
@property(readonly) NSArray *imageSpecifications; // @synthesize imageSpecifications=_imageSpecifications;
@property(readonly) NSArray *variants; // @synthesize variants=_variants;
@property(readonly) double minScale; // @synthesize minScale=_minScale;
@property(readonly) double maxScale; // @synthesize maxScale=_maxScale;
@property(readonly) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(readonly) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000002d2c
- (id)imageSpecificationsWithTags:(id)arg1 withoutTags:(id)arg2;	// IMP=0x0000000000002ba9
- (id)imageSpecificationsMatchingPredicate:(id)arg1;	// IMP=0x0000000000002b26
@property(readonly) NSArray *allVariants;
@property(readonly) NSArray *allImageSpecifications;
- (id)imageSpecificationForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x000000000000267b
- (id)_initWithName:(id)arg1 imageSpecifiactions:(id)arg2 variants:(id)arg3;	// IMP=0x0000000000001cef
- (id)init;	// IMP=0x0000000000001c88

@end

