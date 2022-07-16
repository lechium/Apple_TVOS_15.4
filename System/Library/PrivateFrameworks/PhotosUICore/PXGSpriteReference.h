//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGSpriteIndexReferencing-Protocol.h>

@class NSString, PXGLayout;

@interface PXGSpriteReference : NSObject <PXGSpriteIndexReferencing>
{
    _Bool _isDynamic;	// 8 = 0x8
    unsigned int _spriteIndex;	// 12 = 0xc
    long long _layoutVersion;	// 16 = 0x10
    PXGLayout *_layout;	// 24 = 0x18
    id _objectReference;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000083be15
@property(retain, nonatomic) id objectReference; // @synthesize objectReference=_objectReference;
@property(nonatomic) _Bool isDynamic; // @synthesize isDynamic=_isDynamic;
@property(nonatomic) __weak PXGLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) long long layoutVersion; // @synthesize layoutVersion=_layoutVersion;
@property(nonatomic) unsigned int spriteIndex; // @synthesize spriteIndex=_spriteIndex;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;	// IMP=0x000000000083bc64
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000083bac2
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasObjectReference;
@property(readonly, nonatomic) _Bool isValid;
- (id)_init;	// IMP=0x000000000083b83b
- (id)init;	// IMP=0x000000000083b7c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

