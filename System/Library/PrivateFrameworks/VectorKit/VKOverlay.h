//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VectorKit/VKRasterTileOverlayProviderDelegate-Protocol.h>
#import <VectorKit/VKVectorOverlayDelegate-Protocol.h>

@class NSString, VKRasterTileOverlayProviderData, VKVectorOverlayData;
@protocol VKOverlayDelegate;

@interface VKOverlay : NSObject <VKVectorOverlayDelegate, VKRasterTileOverlayProviderDelegate>
{
    _Bool _canProvideVectorGeometry;	// 8 = 0x8
    id <VKOverlayDelegate> _delegate;	// 16 = 0x10
    CDStruct_02837cd9 _replaceMapContentInRect;	// 24 = 0x18
    unsigned long long _level;	// 56 = 0x38
    unsigned int identifier;	// 64 = 0x40
    weak_ptr_96fca551 _flyoverContainer;	// 72 = 0x48
    weak_ptr_4d470b75 _standardContainer;	// 88 = 0x58
    struct RunLoopController *_runLoopController;	// 104 = 0x68
    VKVectorOverlayData *_vectorData;	// 112 = 0x70
    struct unfair_lock _vectorDataLock;	// 120 = 0x78
    VKRasterTileOverlayProviderData *_rasterTileProvider;	// 128 = 0x80
    struct unfair_lock _rasterTileProviderLock;	// 136 = 0x88
    shared_ptr_5164686c _rasterStyle;	// 144 = 0x90
    long long _blendMode;	// 160 = 0xa0
    _Bool _canProvideVectorData;	// 168 = 0xa8
    unsigned int _identifier;	// 172 = 0xac
}

- (id).cxx_construct;	// IMP=0x00000000007e6f21
- (void).cxx_destruct;	// IMP=0x00000000007e6ee7
@property(nonatomic) long long blendMode; // @synthesize blendMode=_blendMode;
@property(readonly, nonatomic) shared_ptr_5164686c rasterStyle; // @synthesize rasterStyle=_rasterStyle;
@property(readonly, nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(nonatomic) struct RunLoopController *runLoopController; // @synthesize runLoopController=_runLoopController;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) CDStruct_02837cd9 replaceMapContentInRect; // @synthesize replaceMapContentInRect=_replaceMapContentInRect;
@property(readonly) _Bool canProvideVectorData; // @synthesize canProvideVectorData=_canProvideVectorData;
- (void)rasterTileOverlayNeedsInvalidate:(id)arg1;	// IMP=0x00000000007e6d7d
- (void)rasterTileOverlayDidChangeAlpha:(id)arg1;	// IMP=0x00000000007e6cf8
- (void)rasterTileOverlayNeedsDisplay:(id)arg1;	// IMP=0x00000000007e6ca8
- (void)vectorOverlayNeedsDisplay:(id)arg1 needsFullInvalidate:(_Bool)arg2;	// IMP=0x00000000007e6b95
@property(nonatomic) weak_ptr_4d470b75 standardContainer;
@property(nonatomic) weak_ptr_96fca551 flyoverContainer;
- (void)setNeedsDisplayForReason:(unsigned long long)arg1;	// IMP=0x00000000007e68a5
- (void)_updateRasterTileProvider;	// IMP=0x00000000007e67af
- (id)rasterTileProvider;	// IMP=0x00000000007e675b
- (void)_updateVectorData;	// IMP=0x00000000007e667a
- (id)vectorData;	// IMP=0x00000000007e662c
- (void)drawKey:(const CDStruct_7523a67d *)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000007e65e7
- (_Bool)canDrawKey:(const CDStruct_7523a67d *)arg1;	// IMP=0x00000000007e65a7
- (_Bool)canPossiblyDrawKey:(const CDStruct_7523a67d *)arg1;	// IMP=0x00000000007e6567
- (void)setNeedsDisplayInRect:(const CDStruct_02837cd9 *)arg1 level:(long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x00000000007e6320
@property(nonatomic) __weak id <VKOverlayDelegate> delegate;
- (void)dealloc;	// IMP=0x00000000007e6134
- (id)init;	// IMP=0x00000000007e6058

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

