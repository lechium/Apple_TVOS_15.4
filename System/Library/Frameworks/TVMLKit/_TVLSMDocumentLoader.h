//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _TVLSMDocumentLoader : NSObject
{
    NSMutableDictionary *_loadingRequestsByURL;	// 8 = 0x8
    NSMutableArray *_loadingProxies;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000003b4b5
- (void).cxx_destruct;	// IMP=0x000000000003c391
@property(retain, nonatomic) NSMutableArray *loadingProxies; // @synthesize loadingProxies=_loadingProxies;
@property(retain, nonatomic) NSMutableDictionary *loadingRequestsByURL; // @synthesize loadingRequestsByURL=_loadingRequestsByURL;
- (void)_updatePriorityForRequest:(id)arg1;	// IMP=0x000000000003c0f8
- (void)cancelProxy:(id)arg1;	// IMP=0x000000000003bdc3
- (void)loadProxy:(id)arg1 onlyIfCached:(_Bool)arg2;	// IMP=0x000000000003b5d4
- (id)init;	// IMP=0x000000000003b53a

@end

