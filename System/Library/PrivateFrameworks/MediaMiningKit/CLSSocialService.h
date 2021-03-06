//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface CLSSocialService : NSObject
{
    NSMutableDictionary *_proxy;	// 8 = 0x8
    unsigned long long _intent;	// 16 = 0x10
    NSURL *_proxyURL;	// 24 = 0x18
}

+ (id)defaultFileName;	// IMP=0x0000000000098001
+ (id)socialService;	// IMP=0x0000000000097fe7
- (void).cxx_destruct;	// IMP=0x0000000000097fbf
@property(copy) NSURL *proxyURL; // @synthesize proxyURL=_proxyURL;
@property(readonly) unsigned long long intent; // @synthesize intent=_intent;
- (_Bool)flushProxy;	// IMP=0x0000000000097ec1
- (void)updateProxy;	// IMP=0x0000000000097df3
- (void)setProxiedValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000097d69
- (id)proxiedValueForKey:(id)arg1;	// IMP=0x0000000000097b77
- (void)invalidateMemoryCaches;	// IMP=0x0000000000097aa9
- (id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2;	// IMP=0x000000000009799a
- (id)init;	// IMP=0x0000000000097984

@end

