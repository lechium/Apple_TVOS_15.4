//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSBundleProxy;

@interface _UIActivityBundleHelper : NSObject
{
    LSBundleProxy *_bundleProxy;	// 8 = 0x8
}

+ (id)activityBundleHelperForExtension:(id)arg1;	// IMP=0x0000000000023638
- (void).cxx_destruct;	// IMP=0x0000000000023b84
@property(retain, nonatomic) LSBundleProxy *bundleProxy; // @synthesize bundleProxy=_bundleProxy;
- (id)imageForApplicationIconFormat:(int)arg1 activityCategory:(long long)arg2;	// IMP=0x0000000000023b61
- (id)debugDescription;	// IMP=0x0000000000023ab2
- (id)initWithBundleProxy:(id)arg1;	// IMP=0x0000000000023a4a
- (id)init;	// IMP=0x00000000000239be

@end

