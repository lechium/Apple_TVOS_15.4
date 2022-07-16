//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface AKAuthorizationCredentialStateRequest : NSObject <NSSecureCoding>
{
    _Bool _shouldIgnoreUserID;	// 8 = 0x8
    _Bool _shouldIgnoreTeamID;	// 9 = 0x9
    NSString *_userID;	// 16 = 0x10
    NSString *_teamID;	// 24 = 0x18
    NSString *_clientID;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002e8e
- (void).cxx_destruct;	// IMP=0x00000000000030f5
@property(nonatomic) _Bool shouldIgnoreTeamID; // @synthesize shouldIgnoreTeamID=_shouldIgnoreTeamID;
@property(nonatomic) _Bool shouldIgnoreUserID; // @synthesize shouldIgnoreUserID=_shouldIgnoreUserID;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002fd8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002e96

@end

