//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DDMatchFlightNumber
{
    NSString *_airline;	// 32 = 0x20
    NSString *_flightNumber;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000225e
@property(readonly, nonatomic) NSString *flightNumber; // @synthesize flightNumber=_flightNumber;
@property(readonly, nonatomic) NSString *airline; // @synthesize airline=_airline;
- (id)initWithDDScannerResult:(id)arg1;	// IMP=0x0000000000002148

@end

