//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IMHandle;

@interface IMSimulatedAccount
{
    IMHandle *_loginHandle;	// 432 = 0x1b0
}

- (void).cxx_destruct;	// IMP=0x00000000000a70f4
@property(retain, nonatomic) IMHandle *loginHandle; // @synthesize loginHandle=_loginHandle;
- (_Bool)isConnected;	// IMP=0x00000000000a70db
- (_Bool)isOperational;	// IMP=0x00000000000a70d3
- (_Bool)supportsRegistration;	// IMP=0x00000000000a70cb
- (id)loginIMHandle;	// IMP=0x00000000000a7024

@end

