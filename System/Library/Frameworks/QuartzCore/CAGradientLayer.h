//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CAGradientLayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;	// IMP=0x0000000000224d20
+ (_Bool)_hasRenderLayerSubclass;	// IMP=0x0000000000224d18
+ (id)defaultValueForKey:(id)arg1;	// IMP=0x0000000000224c27
@property(copy) NSArray *interpolations;
@property(copy) NSString *type;
@property struct CGPoint endPoint;
@property struct CGPoint startPoint;
@property(copy) NSArray *locations;
@property(copy) NSArray *colors;
- (_Bool)CA_validateValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000225b45
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;	// IMP=0x0000000000225ad1
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;	// IMP=0x0000000000225a60
- (void)_colorSpaceDidChange;	// IMP=0x00000000002259e7
- (void *)_copyRenderLayer:(void *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;	// IMP=0x00000000002254ed
- (void)_renderBackgroundInContext:(struct CGContext *)arg1;	// IMP=0x0000000000224f4a
- (id)implicitAnimationForKeyPath:(id)arg1;	// IMP=0x0000000000224e32
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0000000000224d93
@property(retain) id colorMap;

@end
