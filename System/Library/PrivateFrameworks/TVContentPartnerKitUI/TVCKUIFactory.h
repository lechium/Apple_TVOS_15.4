//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVCKUIFactory : NSObject
{
    NSArray *_factories;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000000af859
- (void).cxx_destruct;	// IMP=0x00000000000afc2d
@property(copy, nonatomic) NSArray *factories; // @synthesize factories=_factories;
- (void)_registerViewElements;	// IMP=0x00000000000afa14
- (void)setup;	// IMP=0x00000000000af8ae

@end

