//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>

@class HMFLocationAuthorization, NSOperationQueue, NSURL;

@interface HMHomeManagerConfiguration : NSObject <NSCopying, NSMutableCopying>
{
    unsigned long long _cachePolicy;	// 8 = 0x8
    _Bool _shouldConnect;	// 16 = 0x10
    unsigned long long _options;	// 24 = 0x18
    _Bool _discretionary;	// 32 = 0x20
    _Bool _adaptive;	// 33 = 0x21
    NSOperationQueue *_delegateQueue;	// 40 = 0x28
    HMFLocationAuthorization *_locationAuthorization;	// 48 = 0x30
    NSURL *_cacheURL;	// 56 = 0x38
}

+ (id)defaultPrivateConfiguration;	// IMP=0x000000000025eb05
+ (id)defaultConfiguration;	// IMP=0x000000000025ead2
- (void).cxx_destruct;	// IMP=0x000000000025d957
@property(readonly) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
@property(readonly) HMFLocationAuthorization *locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(readonly) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, getter=isAdaptive) _Bool adaptive; // @synthesize adaptive=_adaptive;
@property(readonly, getter=isDiscretionary) _Bool discretionary; // @synthesize discretionary=_discretionary;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) _Bool shouldConnect; // @synthesize shouldConnect=_shouldConnect;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025d8c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025d8bb
@property(readonly) _Bool canUseCache;
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;	// IMP=0x000000000025d6d7
- (id)init;	// IMP=0x000000000025d62f

@end

