//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIAssetManager;
@protocol UINamedLayerStack;

@interface TVVolatileNamedLayerStack : NSObject
{
    _UIAssetManager *_assetManager;	// 8 = 0x8
    NSObject<UINamedLayerStack> *_namedLayerStack;	// 16 = 0x10
}

+ (id)volatileNamedLayerStackWithNamedLayerStack:(id)arg1 fromAssetManager:(id)arg2;	// IMP=0x00000000000746fb
+ (id)volatileNamedLayerStackWithNamedLayerStack:(id)arg1;	// IMP=0x00000000000746e7
- (void).cxx_destruct;	// IMP=0x0000000000074799
@property(readonly, nonatomic) NSObject<UINamedLayerStack> *namedLayerStack; // @synthesize namedLayerStack=_namedLayerStack;
- (id)_init;	// IMP=0x00000000000746b8
- (id)init;	// IMP=0x00000000000746aa

@end

