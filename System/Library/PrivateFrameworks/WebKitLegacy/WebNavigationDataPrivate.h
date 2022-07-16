//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebNavigationDataPrivate : NSObject
{
    struct RetainPtr<NSString> url;	// 8 = 0x8
    struct RetainPtr<NSString> title;	// 16 = 0x10
    struct RetainPtr<NSURLRequest> originalRequest;	// 24 = 0x18
    struct RetainPtr<NSURLResponse> response;	// 32 = 0x20
    _Bool hasSubstituteData;	// 40 = 0x28
    struct RetainPtr<NSString> clientRedirectSource;	// 48 = 0x30
}

- (id).cxx_construct;	// IMP=0x000000000010a9c0
- (void).cxx_destruct;	// IMP=0x000000000010a940

@end
