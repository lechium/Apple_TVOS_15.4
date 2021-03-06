//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVKit/CAMLParserDelegate-Protocol.h>
#import <AVKit/CAStateControllerDelegate-Protocol.h>

@class CALayer, CAStateController, NSString;

__attribute__((visibility("hidden")))
@interface AVMicaPackage : NSObject <CAMLParserDelegate, CAStateControllerDelegate>
{
    NSString *_state;	// 8 = 0x8
    NSString *_packageName;	// 16 = 0x10
    CAStateController *_stateController;	// 24 = 0x18
    long long _layoutDirection;	// 32 = 0x20
    CALayer *_rootLayer;	// 40 = 0x28
    struct CGSize _targetSize;	// 48 = 0x30
    struct CGSize _unscaledSize;	// 64 = 0x40
}

+ (id)classSubstitions;	// IMP=0x0000000000058a66
+ (void)asynchronouslyPrepareMicaPackageWithName:(id)arg1 layoutDirection:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000058971
- (void).cxx_destruct;	// IMP=0x0000000000058860
@property(retain, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(readonly, nonatomic) CAStateController *stateController; // @synthesize stateController=_stateController;
@property(readonly, nonatomic) NSString *packageName; // @synthesize packageName=_packageName;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=_unscaledSize;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
- (void)_loadRootLayerIfNeeded;	// IMP=0x0000000000058411
- (id)sublayerWithName:(id)arg1;	// IMP=0x0000000000058394
- (id)availableStatesOnLayer:(id)arg1;	// IMP=0x00000000000582b9
- (id)availableStates;	// IMP=0x000000000005825a
- (void)transitionToStateWithName:(id)arg1 onLayer:(id)arg2;	// IMP=0x00000000000581b9
- (void)transitionToStateWithName:(id)arg1;	// IMP=0x0000000000058144
- (void)_recursivelyRemoveCompositingFiltersWithName:(id)arg1 rootLayer:(id)arg2;	// IMP=0x0000000000057eb4
- (void)_recursivelySetFillColor:(struct CGColor *)arg1 rootLayer:(id)arg2;	// IMP=0x0000000000057d14
- (id)_recursivelyFindSublayerWithName:(id)arg1 rootLayer:(id)arg2;	// IMP=0x0000000000057b67
- (void)_setState:(id)arg1;	// IMP=0x0000000000057af1
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;	// IMP=0x0000000000057a72
- (void)removeCompositingFiltersWithName:(id)arg1;	// IMP=0x00000000000579fd
- (void)setState:(id)arg1 color:(struct CGColor *)arg2;	// IMP=0x0000000000057924
- (id)initWithPackageName:(id)arg1 layoutDirection:(long long)arg2;	// IMP=0x0000000000057744

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

