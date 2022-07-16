//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVImageProxy;

@interface TVHKBackgroundImageRequest : NSObject
{
    _Bool _requiresBackdropImage;	// 8 = 0x8
    TVImageProxy *_imageProxy;	// 16 = 0x10
}

+ (id)new;	// IMP=0x000000000001f936
- (void).cxx_destruct;	// IMP=0x000000000001fb36
@property(nonatomic) _Bool requiresBackdropImage; // @synthesize requiresBackdropImage=_requiresBackdropImage;
@property(readonly, nonatomic) TVImageProxy *imageProxy; // @synthesize imageProxy=_imageProxy;
- (id)description;	// IMP=0x000000000001fa3f
- (id)initWithImageProxy:(id)arg1;	// IMP=0x000000000001f9d4
- (id)init;	// IMP=0x000000000001f965

@end

