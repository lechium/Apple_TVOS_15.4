//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconServices/ISCompositorRecipe-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ISMessagesAppRecipe : NSObject <ISCompositorRecipe>
{
    unsigned long long _options;	// 8 = 0x8
}

@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (id)layerTreeForSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x00000000000070d3
- (id)init;	// IMP=0x000000000000709b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
