//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMUserCloudShareClientInfo : NSObject <NSSecureCoding>
{
    NSData *_accountAuthToken;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ded0f
- (void).cxx_destruct;	// IMP=0x00000000000decff
@property(readonly, nonatomic) NSData *accountAuthToken; // @synthesize accountAuthToken=_accountAuthToken;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dec7c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000debef
- (id)initWithAccountAuthToken:(id)arg1;	// IMP=0x00000000000deb84

@end

