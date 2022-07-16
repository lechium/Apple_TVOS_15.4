//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UIView;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UIViewAnimationInfo : NSObject
{
    UIView *_owningView;	// 8 = 0x8
    CDUnknownBlockType _invalidationBlock;	// 16 = 0x10
    NSMutableDictionary *_animatableProperties;	// 24 = 0x18
    NSMutableDictionary *_presentationModifiers;	// 32 = 0x20
    NSMutableDictionary *_modifierGroupRequestHandlers;	// 40 = 0x28
    NSMutableDictionary *_isPartOfHigherOrderProperty;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_lockingQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000105bad4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockingQueue; // @synthesize lockingQueue=_lockingQueue;
@property(retain, nonatomic) NSMutableDictionary *isPartOfHigherOrderProperty; // @synthesize isPartOfHigherOrderProperty=_isPartOfHigherOrderProperty;
@property(retain, nonatomic) NSMutableDictionary *modifierGroupRequestHandlers; // @synthesize modifierGroupRequestHandlers=_modifierGroupRequestHandlers;
@property(retain, nonatomic) NSMutableDictionary *presentationModifiers; // @synthesize presentationModifiers=_presentationModifiers;
@property(retain, nonatomic) NSMutableDictionary *animatableProperties; // @synthesize animatableProperties=_animatableProperties;
@property(copy, nonatomic) CDUnknownBlockType invalidationBlock; // @synthesize invalidationBlock=_invalidationBlock;
@property __weak UIView *owningView; // @synthesize owningView=_owningView;
- (void)performWithLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000105b97c
- (void)setModifierGroupRequestHandler:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000105b931
- (id)modifierGroupRequestHandlerForKey:(id)arg1;	// IMP=0x000000000105b91b
- (void)setPresentationModifier:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000105b8d0
- (id)presentationModifierForKey:(id)arg1;	// IMP=0x000000000105b8ba
- (void)setAnimatableProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000105b7a9
- (id)animatablePropertyForKey:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x000000000105b4f3
- (id)animatablePropertyKeys;	// IMP=0x000000000105b3f8
- (void)_invalidateIfPossible;	// IMP=0x000000000105b3b3
- (_Bool)_canInvalidate;	// IMP=0x000000000105b350
- (id)initWithView:(id)arg1;	// IMP=0x000000000105b263

@end

