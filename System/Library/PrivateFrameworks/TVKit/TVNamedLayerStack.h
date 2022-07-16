//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVKit/UINamedLayerStack-Protocol.h>

@class NSArray, NSString, UIImage;
@protocol UINamedLayerStack;

@interface TVNamedLayerStack : NSObject <UINamedLayerStack>
{
    id <UINamedLayerStack> _layerStack;	// 8 = 0x8
    UIImage *_cornerRadiusFlatImage;	// 16 = 0x10
    UIImage *_originalImage;	// 24 = 0x18
    NSArray *_replacementLayers;	// 32 = 0x20
}

+ (id)namedLayerStackWithImage:(id)arg1 cornerRadiusFlatImage:(id)arg2 decodeLayerImagesImmediately:(_Bool)arg3;	// IMP=0x0000000000043995
+ (id)namedLayerStackWithImage:(id)arg1 cornerRadiusFlatImage:(id)arg2;	// IMP=0x0000000000043980
+ (id)namedLayerStackWithLayers:(id)arg1 cornerRadiusFlatImage:(id)arg2;	// IMP=0x00000000000438d9
+ (id)namedLayerStackProxyFromLayerStack:(id)arg1 layers:(id)arg2 cornerRadiusFlatImage:(id)arg3;	// IMP=0x00000000000437f7
+ (id)namedLayerStackProxyFromLayerStack:(id)arg1 cornerRadiusFlatImage:(id)arg2;	// IMP=0x000000000004374d
- (void).cxx_destruct;	// IMP=0x0000000000044600
@property(copy, nonatomic) NSArray *replacementLayers; // @synthesize replacementLayers=_replacementLayers;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) UIImage *cornerRadiusFlatImage; // @synthesize cornerRadiusFlatImage=_cornerRadiusFlatImage;
@property(retain, nonatomic) id <UINamedLayerStack> layerStack; // @synthesize layerStack=_layerStack;
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly, nonatomic) id radiosityImage;
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;
- (id)_init;	// IMP=0x000000000004371e
- (id)init;	// IMP=0x0000000000043710

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
