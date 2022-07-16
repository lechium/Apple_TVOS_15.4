//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PKPaymentPassRequest
{
    NSString *_passTypeID;	// 16 = 0x10
    NSString *_serialNumber;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002b19bc
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *passTypeID; // @synthesize passTypeID=_passTypeID;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;	// IMP=0x00000000002b1842
- (id)initWithPassTypeID:(id)arg1 serialNumber:(id)arg2;	// IMP=0x00000000002b177b

@end

