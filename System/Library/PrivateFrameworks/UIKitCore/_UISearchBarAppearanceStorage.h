//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSValue, UIImage;

__attribute__((visibility("hidden")))
@interface _UISearchBarAppearanceStorage : NSObject
{
    NSMutableDictionary *searchFieldBackgroundImages;	// 8 = 0x8
    NSValue *searchFieldPositionAdjustment;	// 16 = 0x10
    NSMutableDictionary *iconImages;	// 24 = 0x18
    UIImage *separatorImage;	// 32 = 0x20
    UIImage *scopeBarBackgroundImage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001b85d2
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage; // @synthesize scopeBarBackgroundImage;
@property(retain, nonatomic) UIImage *separatorImage; // @synthesize separatorImage;
@property(retain, nonatomic) NSValue *searchFieldPositionAdjustment; // @synthesize searchFieldPositionAdjustment;
- (id)imageForIcon:(long long)arg1 state:(unsigned long long)arg2;	// IMP=0x00000000001b84a6
- (void)setImage:(id)arg1 forIcon:(long long)arg2 state:(unsigned long long)arg3;	// IMP=0x00000000001b83e0
- (id)searchFieldBackgroundImageForState:(unsigned long long)arg1;	// IMP=0x00000000001b8379
- (void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001b8297

@end

