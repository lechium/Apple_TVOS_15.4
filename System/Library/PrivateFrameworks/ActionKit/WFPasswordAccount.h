//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFPasswordAccount
{
    NSString *_username;	// 8 = 0x8
    NSString *_password;	// 16 = 0x10
}

+ (id)accountWithUsername:(id)arg1 password:(id)arg2;	// IMP=0x000000000036a918
- (void).cxx_destruct;	// IMP=0x000000000036aa80
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (_Bool)isValid;	// IMP=0x000000000036a9b2
- (id)localizedName;	// IMP=0x000000000036a9a0

@end
