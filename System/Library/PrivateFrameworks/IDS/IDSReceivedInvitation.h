//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDS/NSSecureCoding-Protocol.h>

@class NSString;

@interface IDSReceivedInvitation <NSSecureCoding>
{
    NSString *_fromID;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000cfdff
- (void).cxx_destruct;	// IMP=0x00000000000d015a
@property(readonly, copy, nonatomic) NSString *fromID; // @synthesize fromID=_fromID;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000cff86
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000cfe07
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cfb14
- (id)description;	// IMP=0x00000000000cfa10
- (void)setContext:(id)arg1;	// IMP=0x00000000000cf9ff
- (void)setState:(long long)arg1;	// IMP=0x00000000000cf9f5
- (void)setSenderMergeID:(id)arg1;	// IMP=0x00000000000cf9e4
- (id)initWithfromID:(id)arg1 state:(long long)arg2 expirationDate:(id)arg3 uniqueID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000cf956

@end

