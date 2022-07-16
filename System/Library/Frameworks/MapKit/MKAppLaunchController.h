//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface MKAppLaunchController : NSObject
{
    NSString *_webURLString;	// 8 = 0x8
    NSURL *webURL;	// 16 = 0x10
}

+ (void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 usingTarget:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ab95d
+ (void)launchAttributionURLs:(id)arg1 withAttribution:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ab942
+ (id)sharedController;	// IMP=0x00000000000ab522
- (void).cxx_destruct;	// IMP=0x00000000000ace87
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL;
- (void)lookUpAppStoreURLForBundle:(id)arg1 usingTarget:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ab577

@end
