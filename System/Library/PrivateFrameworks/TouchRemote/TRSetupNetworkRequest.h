//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TRSetupNetworkRequest
{
    NSString *_networkSSID;	// 8 = 0x8
    NSString *_networkPassword;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000019c0e
- (void).cxx_destruct;	// IMP=0x0000000000019ec7
@property(copy, nonatomic) NSString *networkPassword; // @synthesize networkPassword=_networkPassword;
@property(copy, nonatomic) NSString *networkSSID; // @synthesize networkSSID=_networkSSID;
- (id)description;	// IMP=0x0000000000019da0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000019cb1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000019c16

@end

