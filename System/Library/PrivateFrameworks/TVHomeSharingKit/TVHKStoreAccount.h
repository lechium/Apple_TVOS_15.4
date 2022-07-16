//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TVHKStoreAccount : NSObject
{
    NSString *_accountName;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
}

+ (id)new;	// IMP=0x000000000008a9f5
- (void).cxx_destruct;	// IMP=0x000000000008b050
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *accountName; // @synthesize accountName=_accountName;
- (void)homeSharingGroupIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008ab4c
- (id)initWithAccountName:(id)arg1 andPassword:(id)arg2;	// IMP=0x000000000008aa93
- (id)init;	// IMP=0x000000000008aa24

@end

