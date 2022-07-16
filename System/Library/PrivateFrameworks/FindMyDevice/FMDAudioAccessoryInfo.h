//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSString;

@interface FMDAudioAccessoryInfo : NSObject <NSSecureCoding>
{
    NSString *_systemSerialNumber;	// 8 = 0x8
    NSString *_leftSerialNumber;	// 16 = 0x10
    NSString *_rightSerialNumber;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007fde
- (void).cxx_destruct;	// IMP=0x0000000000008253
@property(copy, nonatomic) NSString *rightSerialNumber; // @synthesize rightSerialNumber=_rightSerialNumber;
@property(copy, nonatomic) NSString *leftSerialNumber; // @synthesize leftSerialNumber=_leftSerialNumber;
@property(copy, nonatomic) NSString *systemSerialNumber; // @synthesize systemSerialNumber=_systemSerialNumber;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000080c9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007fe6
- (id)initWithSystemSerialNumber:(id)arg1 leftSerialNumber:(id)arg2 rightSerialNumber:(id)arg3;	// IMP=0x0000000000007f17

@end
