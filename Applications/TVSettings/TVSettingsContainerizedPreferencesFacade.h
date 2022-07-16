//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TVSettingsContainerizedPreferencesFacade : NSObject
{
    NSString *_domain;	// 8 = 0x8
    NSString *_containerPath;	// 16 = 0x10
    NSMutableDictionary *_valueKeyPairs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000faba0
@property(retain, nonatomic) NSMutableDictionary *valueKeyPairs; // @synthesize valueKeyPairs=_valueKeyPairs;
@property(readonly, copy, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (id)valueForPreferenceKey:(id)arg1;	// IMP=0x00100000000fa8f0
- (id)initWithDomain:(id)arg1 containerPath:(id)arg2;	// IMP=0x00100000000fa6b0

@end

