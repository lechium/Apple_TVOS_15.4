//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIKBRenderEffect-Protocol.h>

@class NSString, UIKBGradient;

__attribute__((visibility("hidden")))
@interface UIKBNullEffect : NSObject <UIKBRenderEffect>
{
}

+ (id)nullEffect;	// IMP=0x00000000008932a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008932b2
- (struct CGColor *)CGColor;	// IMP=0x0000000000893298
@property(readonly, nonatomic) UIKBGradient *gradient;
@property(readonly, nonatomic) _Bool usesRGBColors;
@property(nonatomic) double weight;
@property(readonly, nonatomic) SEL renderSelector;
@property(readonly, nonatomic) _Bool renderUnder;
@property(readonly, nonatomic) _Bool isValid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

