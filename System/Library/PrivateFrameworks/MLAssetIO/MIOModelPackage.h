//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MIOModelPackage : NSObject
{
    NSURL *_specificationURL;	// 8 = 0x8
}

+ (_Bool)_upgradeModelSpecificationAtURL:(id)arg1 packageURL:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000031ea0
+ (id)upgradeModelSpecificationAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000317c0
- (void).cxx_destruct;	// IMP=0x0000000000032981
@property(copy, nonatomic) NSURL *specificationURL; // @synthesize specificationURL=_specificationURL;
- (id)initWithModelPackageAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003239b

@end

