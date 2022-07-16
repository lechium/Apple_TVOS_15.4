//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface IDSSignInServiceUserStatus : NSObject
{
    unsigned long long _serviceType;	// 8 = 0x8
    NSArray *_serviceUserInfos;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000003268b
@property(readonly, nonatomic) NSArray *serviceUserInfos; // @synthesize serviceUserInfos=_serviceUserInfos;
@property(readonly, nonatomic) unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) unsigned long long appleIDUserStatus;
@property(readonly, nonatomic) unsigned long long phoneUserStatus;
- (id)description;	// IMP=0x0000000000032374
- (id)initWithServiceType:(unsigned long long)arg1 userInfos:(id)arg2;	// IMP=0x000000000003228c

@end
