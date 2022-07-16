//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, UIView;

__attribute__((visibility("hidden")))
@interface _MKLineHeaderModel : NSObject
{
    NSMutableArray *_tokens;	// 8 = 0x8
    _Bool _shouldUseEmptyPlaceholder;	// 16 = 0x10
    UIView *_ownerView;	// 24 = 0x18
    NSDictionary *_fontAttribute;	// 32 = 0x20
    CDUnknownBlockType _colorProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000ee704
@property(nonatomic) _Bool shouldUseEmptyPlaceholder; // @synthesize shouldUseEmptyPlaceholder=_shouldUseEmptyPlaceholder;
@property(copy, nonatomic) CDUnknownBlockType colorProvider; // @synthesize colorProvider=_colorProvider;
@property(copy, nonatomic) NSDictionary *fontAttribute; // @synthesize fontAttribute=_fontAttribute;
@property(nonatomic) __weak UIView *ownerView; // @synthesize ownerView=_ownerView;
- (id)description;	// IMP=0x00000000000ee48d
- (id)_placeCardHeaderSeparatorString;	// IMP=0x00000000000ee45c
- (id)contentAttributedString;	// IMP=0x00000000000ede40
- (void)removeToken:(id)arg1;	// IMP=0x00000000000ede23
- (void)insertToken:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000eddc2
- (void)addToken:(id)arg1;	// IMP=0x00000000000edda5
- (id)init;	// IMP=0x00000000000edd0e

@end

