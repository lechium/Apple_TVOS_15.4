//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface CURangingSample : NSObject
{
    int _channel;	// 8 = 0x8
    int _rawRSSI;	// 12 = 0xc
    NSData *_deviceAddress;	// 16 = 0x10
    NSString *_deviceModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000098c08
@property(nonatomic) int rawRSSI; // @synthesize rawRSSI=_rawRSSI;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(copy, nonatomic) NSData *deviceAddress; // @synthesize deviceAddress=_deviceAddress;
@property(nonatomic) int channel; // @synthesize channel=_channel;
- (id)description;	// IMP=0x0000000000098b90

@end
