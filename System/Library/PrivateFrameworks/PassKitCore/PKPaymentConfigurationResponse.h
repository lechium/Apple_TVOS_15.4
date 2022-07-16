//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDictionary, NSString;

@interface PKPaymentConfigurationResponse
{
    NSData *_data;	// 8 = 0x8
    NSData *_signature;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSDictionary *_configuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000418cf2
@property(readonly, copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSData *signature; // @synthesize signature=_signature;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000418a37

@end

