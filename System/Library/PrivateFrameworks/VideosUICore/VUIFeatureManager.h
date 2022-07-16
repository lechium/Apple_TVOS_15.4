//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VUIFeatureManager : NSObject
{
    NSDictionary *_features;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000004d6e
- (void).cxx_destruct;	// IMP=0x00000000000053de
@property(retain, nonatomic) NSDictionary *features; // @synthesize features=_features;
- (id)_allFeatures;	// IMP=0x00000000000053b6
- (void)setFeatureValue:(_Bool)arg1 forFeature:(id)arg2;	// IMP=0x0000000000005367
- (_Bool)isFeatureEnabled:(id)arg1;	// IMP=0x0000000000005316
- (id)availableFeatures;	// IMP=0x0000000000005218
- (id)osFeatureFlagsJSON;	// IMP=0x0000000000004f5c
- (id)init;	// IMP=0x0000000000004dc3

@end
