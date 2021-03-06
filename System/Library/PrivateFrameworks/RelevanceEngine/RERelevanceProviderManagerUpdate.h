//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class RERelevanceProvider;

@interface RERelevanceProviderManagerUpdate : NSObject <NSCopying>
{
    RERelevanceProvider *_provider;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

+ (id)scheduledUpdateForAllProvidersAtDate:(id)arg1;	// IMP=0x0000000000084f96
+ (id)scheduledUpdateForProvider:(id)arg1 atDate:(id)arg2;	// IMP=0x0000000000084f1b
+ (id)immediateUpdateForAllProviders;	// IMP=0x0000000000084ef0
+ (id)immediateUpdateForProvider:(id)arg1;	// IMP=0x0000000000084ea3
- (void).cxx_destruct;	// IMP=0x000000000008516e
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) _Bool allProviders;
@property(readonly, nonatomic) RERelevanceProvider *provider;
- (unsigned long long)hash;	// IMP=0x0000000000085123
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000850ae
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000085059
- (id)initWithProvider:(id)arg1;	// IMP=0x0000000000084fee

@end

