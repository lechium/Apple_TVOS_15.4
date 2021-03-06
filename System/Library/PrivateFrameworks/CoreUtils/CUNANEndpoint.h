//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface CUNANEndpoint : NSObject
{
    int _port;	// 8 = 0x8
    int _rssi;	// 12 = 0xc
    NSString *_identifier;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_serviceType;	// 32 = 0x20
    NSDictionary *_textInfo;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000770b7
@property(readonly, copy, nonatomic) NSDictionary *textInfo; // @synthesize textInfo=_textInfo;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) int rssi; // @synthesize rssi=_rssi;
@property(nonatomic) int port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000000076e5d
- (id)description;	// IMP=0x0000000000076e46

@end

