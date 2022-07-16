//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKPass;

@interface PKExpiredPendingCacheRequest : NSObject
{
    _Bool _fullPass;	// 8 = 0x8
    NSString *_cacheKey;	// 16 = 0x10
    PKPass *_pass;	// 24 = 0x18
    long long _priority;	// 32 = 0x20
    NSArray *_completionHandlers;	// 40 = 0x28
    struct CGSize _imageSize;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002d6755
@property(retain, nonatomic) NSArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool fullPass; // @synthesize fullPass=_fullPass;
@property(retain, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
- (unsigned long long)hash;	// IMP=0x00000000002d668c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d6635

@end

