//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NLTaggerAssetRequest : NSObject
{
    NSString *_language;	// 8 = 0x8
    NSString *_tagScheme;	// 16 = 0x10
    CDUnknownBlockType _completionHandler;	// 24 = 0x18
}

+ (void)checkAssetRequests;	// IMP=0x00000000000187be
- (void).cxx_destruct;	// IMP=0x0000000000018e09
- (void)waitForFulfillment;	// IMP=0x0000000000018d18
- (void)completeWithResult:(long long)arg1 error:(id)arg2;	// IMP=0x0000000000018d03
- (_Bool)isFulfilled;	// IMP=0x0000000000018ca4
- (id)initWithLanguage:(id)arg1 tagScheme:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000018b9c

@end

