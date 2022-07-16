//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>
#import <TVMLKit/UINamedLayerStack-Protocol.h>

@class NSArray, NSString;

@interface _TVStackedImageNamedLayerStack : NSObject <UINamedLayerStack, NSCopying>
{
    struct CGImage *_flattenedImage;	// 8 = 0x8
    _Bool _flatImageContainsCornerRadius;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSArray *_layers;	// 32 = 0x20
    double _scale;	// 40 = 0x28
    id _radiosityImage;	// 48 = 0x30
    struct CGSize _size;	// 56 = 0x38
    struct CGSize _radiosityImageScale;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000151e38
@property(nonatomic) _Bool flatImageContainsCornerRadius; // @synthesize flatImageContainsCornerRadius=_flatImageContainsCornerRadius;
@property(nonatomic) struct CGSize radiosityImageScale; // @synthesize radiosityImageScale=_radiosityImageScale;
@property(retain, nonatomic) id radiosityImage; // @synthesize radiosityImage=_radiosityImage;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *layers; // @synthesize layers=_layers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) struct CGImage *flattenedImage;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000151c67
- (void)dealloc;	// IMP=0x0000000000151c28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

