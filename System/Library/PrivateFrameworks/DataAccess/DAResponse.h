//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DAResponse
{
    long long _status;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000fadd
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000fbe9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000fae5
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 status:(long long)arg4;	// IMP=0x000000000000fa87

@end

