//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage, UIImageConfiguration;

__attribute__((visibility("hidden")))
@interface _UIImageAssetLocalRegistration : NSObject
{
    UIImage *_image;	// 8 = 0x8
    UIImageConfiguration *_configuration;	// 16 = 0x10
}

+ (id)registrationWithImage:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000754334
- (void).cxx_destruct;	// IMP=0x0000000000754654
@property(retain, nonatomic) UIImageConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (_Bool)matchesConfiguration:(id)arg1;	// IMP=0x000000000075449d

@end

