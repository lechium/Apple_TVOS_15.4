//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIMenuLeaf-Protocol.h>

@class NSArray, NSString, UIImage;
@protocol UIDeferredMenuElementDelegate;

@interface UIDeferredMenuElement <_UIMenuLeaf>
{
    _Bool _cacheItems;	// 24 = 0x18
    _Bool _isSignalingFulfillment;	// 25 = 0x19
    _Bool _requiresAuthenticatedInput;	// 26 = 0x1a
    _Bool _fulfilled;	// 27 = 0x1b
    unsigned long long _attributes;	// 32 = 0x20
    NSString *_discoverabilityTitle;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    CDUnknownBlockType _elementProvider;	// 56 = 0x38
    id _metadata;	// 64 = 0x40
    id <UIDeferredMenuElementDelegate> _delegate;	// 72 = 0x48
    NSArray *_fulfilledElements;	// 80 = 0x50
}

+ (id)elementWithUncachedProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000004b060b
+ (id)elementWithProvider:(CDUnknownBlockType)arg1;	// IMP=0x00000000004b05f1
+ (id)_elementCachingItems:(_Bool)arg1 provider:(CDUnknownBlockType)arg2;	// IMP=0x00000000004b04ff
- (void).cxx_destruct;	// IMP=0x00000000004b09c8
@property(readonly, nonatomic) _Bool fulfilled; // @synthesize fulfilled=_fulfilled;
@property(readonly, copy, nonatomic) NSArray *fulfilledElements; // @synthesize fulfilledElements=_fulfilledElements;
@property(nonatomic) __weak id <UIDeferredMenuElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CDUnknownBlockType elementProvider; // @synthesize elementProvider=_elementProvider;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) _Bool requiresAuthenticatedInput; // @synthesize requiresAuthenticatedInput=_requiresAuthenticatedInput;
@property(copy, nonatomic) NSString *discoverabilityTitle; // @synthesize discoverabilityTitle=_discoverabilityTitle;
@property(nonatomic) unsigned long long attributes; // @synthesize attributes=_attributes;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b0879
@property(readonly, nonatomic) _Bool keepsMenuPresented;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;	// IMP=0x00000000004b0869
- (id)_resolvedTargetFromFirstTarget:(id)arg1;	// IMP=0x00000000004b0861
- (void)_performWithTarget:(id)arg1;	// IMP=0x00000000004b085b
- (_Bool)_isDefaultCommand;	// IMP=0x00000000004b0853
- (long long)_leafKeyModifierFlags;	// IMP=0x00000000004b084b
- (id)_leafKeyInput;	// IMP=0x00000000004b0843
- (id)_leafAlternates;	// IMP=0x00000000004b0836
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;	// IMP=0x00000000004b081f
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3 deferredElementVisit:(CDUnknownBlockType)arg4;	// IMP=0x00000000004b0808
- (id)_immutableCopy;	// IMP=0x00000000004b07ff
- (_Bool)isLoadingPlaceholder;	// IMP=0x00000000004b07f7
- (_Bool)isLeaf;	// IMP=0x00000000004b07ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004b07e4
- (void)_fulfillIfNecessary;	// IMP=0x00000000004b0622

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) UIImage *image;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *title;

@end

