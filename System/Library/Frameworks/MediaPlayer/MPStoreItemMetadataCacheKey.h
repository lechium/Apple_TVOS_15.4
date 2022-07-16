//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface MPStoreItemMetadataCacheKey : NSObject <NSCopying>
{
    _Bool _personalized;	// 8 = 0x8
    NSNumber *_accountIdentifier;	// 16 = 0x10
    NSNumber *_enqueuerAccountIdentifier;	// 24 = 0x18
    NSString *_storefrontIdentifier;	// 32 = 0x20
}

+ (void)_slowGetCacheKeyWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000241e70
+ (void)_fastGetCacheKeyWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000241b58
+ (void)getCacheKeyWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000241a97
- (void).cxx_destruct;	// IMP=0x00000000002419f0
@property(copy, nonatomic) NSString *storefrontIdentifier; // @synthesize storefrontIdentifier=_storefrontIdentifier;
@property(nonatomic, getter=isPersonalized) _Bool personalized; // @synthesize personalized=_personalized;
@property(copy, nonatomic) NSNumber *enqueuerAccountIdentifier; // @synthesize enqueuerAccountIdentifier=_enqueuerAccountIdentifier;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (_Bool)_isGoodCacheKey;	// IMP=0x0000000000241952
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000241866
- (unsigned long long)hash;	// IMP=0x0000000000241806
- (id)description;	// IMP=0x000000000024176e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002416b5
- (id)initWithRequest:(id)arg1 response:(id)arg2;	// IMP=0x0000000000241584

@end

