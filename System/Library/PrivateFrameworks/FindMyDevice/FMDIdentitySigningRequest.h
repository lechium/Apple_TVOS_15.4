//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FindMyDevice/NSSecureCoding-Protocol.h>

@class NSData;

@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding>
{
    _Bool _useSCRT;	// 8 = 0x8
    NSData *_dataToSign;	// 16 = 0x10
    long long _validityInMinutes;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a88d
- (void).cxx_destruct;	// IMP=0x000000000000a8d6
@property(nonatomic) long long validityInMinutes; // @synthesize validityInMinutes=_validityInMinutes;
@property(nonatomic) _Bool useSCRT; // @synthesize useSCRT=_useSCRT;
@property(retain, nonatomic) NSData *dataToSign; // @synthesize dataToSign=_dataToSign;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a7a4
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a678
- (id)initWithData:(id)arg1;	// IMP=0x000000000000a5f6

@end

