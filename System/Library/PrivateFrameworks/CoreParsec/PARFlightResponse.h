//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PARFlightResponse
{
    NSArray *_flightResults;	// 128 = 0x80
}

+ (id)responseFromReply:(id)arg1;	// IMP=0x0000000000095b59
+ (id)_debugResponseFromReply:(id)arg1;	// IMP=0x0000000000095aa5
- (void).cxx_destruct;	// IMP=0x0000000000095a92
@property(retain, nonatomic) NSArray *flightResults; // @synthesize flightResults=_flightResults;
- (id)description;	// IMP=0x0000000000095a01

@end

