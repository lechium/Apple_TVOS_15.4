//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, TVSPreferences;

@interface TSKPreferencesFacade : NSObject
{
    TVSPreferences *_prefs;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000020e80
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000020de0
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000020cf0
- (id)initWithDomain:(id)arg1 notifyChanges:(_Bool)arg2;	// IMP=0x0000000000020bb0

@end

