//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, RBSAssertion;

@interface _UIRootWindow
{
    double _scale;	// 264 = 0x108
    struct os_unfair_lock_s _visibilityLock;	// 272 = 0x110
    _Bool _visibilityLock_enabled;	// 276 = 0x114
    NSString *_visibilityLock_environment;	// 280 = 0x118
    NSString *_visibilityLock_identifier;	// 288 = 0x120
    _Bool _visibilityLock_updateEnqueued;	// 296 = 0x128
    struct os_unfair_lock_s _visibilityProcessingLock;	// 300 = 0x12c
    NSString *_visibilityProcessingLock_identifier;	// 304 = 0x130
    RBSAssertion *_visibilityProcessingLock_assertion;	// 312 = 0x138
    struct CGAffineTransform _additionalRootLayerAffineTransform;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x0000000000ba6c68
@property(nonatomic, getter=_additionalRootLayerAffineTransform, setter=_setAdditionalRootLayerAffineTransform:) struct CGAffineTransform additionalRootLayerAffineTransform; // @synthesize additionalRootLayerAffineTransform=_additionalRootLayerAffineTransform;
- (void)_visibilityLock_enqueueUpdateIfNecessary_body;	// IMP=0x0000000000ba6992
- (void)_visibilityLock_enqueueUpdateIfNecessary;	// IMP=0x0000000000ba67b8
- (id)_visibilityLock_environment;	// IMP=0x0000000000ba673f
- (void)_updateVisibility;	// IMP=0x0000000000ba66e6
- (void)_noteScreenDidChangeMode:(id)arg1;	// IMP=0x0000000000ba6529
- (void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2;	// IMP=0x0000000000ba644f
- (void)setHidden:(_Bool)arg1;	// IMP=0x0000000000ba640e
- (void)_configureRootLayer:(id)arg1 sceneTransformLayer:(id)arg2 transformLayer:(id)arg3;	// IMP=0x0000000000ba5ba3
- (_Bool)_transformLayerIncludesScreenRotation;	// IMP=0x0000000000ba5b9b
- (void)_configureContextOptions:(id)arg1;	// IMP=0x0000000000ba5aeb
- (CDStruct_98d137ef)_bindingDescription;	// IMP=0x0000000000ba5ab0
- (id)_layerForCoordinateSpaceConversion;	// IMP=0x0000000000ba5a9b
- (_Bool)_touchesInsideShouldHideCalloutBar;	// IMP=0x0000000000ba5a93
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x0000000000ba5a8b
- (_Bool)_wantsSceneAssociation;	// IMP=0x0000000000ba5a83
- (_Bool)_extendsScreenSceneLifetime;	// IMP=0x0000000000ba5a7b
- (id)_context;	// IMP=0x0000000000ba59cf
- (void)setVisibilityIdentifier:(id)arg1;	// IMP=0x0000000000ba593b
@property(readonly, copy, nonatomic) NSString *visibilityEnvironment;
- (void)dealloc;	// IMP=0x0000000000ba5806
- (id)initWithScreen:(id)arg1;	// IMP=0x0000000000ba57b0
- (id)initWithDisplay:(id)arg1;	// IMP=0x0000000000ba54b6

@end

