//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PKPaymentPassesResponse
{
    NSArray *_passURLs;	// 8 = 0x8
    NSString *_lastUpdatedTag;	// 16 = 0x10
    NSArray *_devicePassSerialNumbers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000041e444
@property(copy, nonatomic) NSArray *devicePassSerialNumbers; // @synthesize devicePassSerialNumbers=_devicePassSerialNumbers;
@property(copy, nonatomic) NSString *lastUpdatedTag; // @synthesize lastUpdatedTag=_lastUpdatedTag;
@property(copy, nonatomic) NSArray *passURLs; // @synthesize passURLs=_passURLs;
- (id)initWithData:(id)arg1;	// IMP=0x000000000041e04c

@end

