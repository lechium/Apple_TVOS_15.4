//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HAPTLVParser : HMFObject
{
    NSData *_tlvData;	// 8 = 0x8
}

+ (id)parserWithData:(id)arg1;	// IMP=0x0000000000121ea6
- (void).cxx_destruct;	// IMP=0x0000000000121e93
- (id)parseResponseForArray:(unsigned long long)arg1;	// IMP=0x0000000000121c9d
- (id)parseResponseForUUID:(unsigned long long)arg1;	// IMP=0x0000000000121c13
- (id)parseResponseForString:(unsigned long long)arg1;	// IMP=0x0000000000121bae
- (id)parseResponseForUInt16:(unsigned long long)arg1;	// IMP=0x0000000000121b2f
- (id)parseResponseForUInt8:(unsigned long long)arg1;	// IMP=0x0000000000121ab0
- (id)parseResponseForNumber:(unsigned long long)arg1;	// IMP=0x0000000000121913
- (id)parseResponseForData:(unsigned long long)arg1;	// IMP=0x0000000000121783
- (id)initWithData:(id)arg1;	// IMP=0x0000000000121715

@end

