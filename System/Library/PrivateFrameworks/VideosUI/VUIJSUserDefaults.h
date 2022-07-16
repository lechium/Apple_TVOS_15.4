//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIJSUserDefaults-Protocol.h>

@protocol VUIAppUserDefaultsStoring;

__attribute__((visibility("hidden")))
@interface VUIJSUserDefaults <VUIJSUserDefaults>
{
    id <VUIAppUserDefaultsStoring> _userDefaultsStorage;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000015fefe
@property(nonatomic) __weak id <VUIAppUserDefaultsStoring> userDefaultsStorage; // @synthesize userDefaultsStorage=_userDefaultsStorage;
- (void)removeData:(id)arg1;	// IMP=0x000000000015fe5f
- (void)setData:(id)arg1:(id)arg2;	// IMP=0x000000000015fc8a
- (id)getData:(id)arg1;	// IMP=0x000000000015fb39
- (id)initWithAppContext:(id)arg1 userDefaultsStorage:(id)arg2;	// IMP=0x000000000015fac8

@end

